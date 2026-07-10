#pragma once

#include <vector>
#include <algorithm>
#include <cgv/media/axis_aligned_box.h>

enum class physical_role {
    unknown,
    support,
    movable,
    obstacle,
    fixed
};

struct support_info {
    bool valid = false;
    cgv::vec3 normal = cgv::vec3(0.0f, 1.0f, 0.0f);
    float height = 0.0f;
};

struct object_level {
    int object_id = -1;
    physical_role role = physical_role::unknown;
    cgv::box3 bbox_object;

    support_info support;

    object_level() = default;

    object_level(int id, physical_role r, const cgv::box3& bbox)
        : object_id(id), role(r), bbox_object(bbox)
    {
    }

    bool is_support() const {
        return role == physical_role::support;
    }

    bool is_movable() const {
        return role == physical_role::movable;
    }

    bool is_obstacle() const {
        return role == physical_role::obstacle || role == physical_role::fixed;
    }
};

struct room_level {
    int room_id = -1;
    cgv::box3 bbox_room;
    std::vector<object_level> objects;

    room_level() = default;

    room_level(int id, const cgv::box3& bbox)
        : room_id(id), bbox_room(bbox)
    {
    }

    void add_object(const object_level& obj) {
        objects.push_back(obj);
    }

    std::vector<object_level*> get_supports() {
        std::vector<object_level*> supports;

        for (auto& obj : objects) {
            if (obj.is_support())
                supports.push_back(&obj);
        }

        return supports;
    }
};

struct scene_graph {
    std::vector<room_level> rooms;

    scene_graph() = default;

    void clear() {
        rooms.clear();
    }

    bool empty() const {
        return rooms.empty();
    }

    void add_room(const room_level& room) {
        rooms.push_back(room);
    }
};