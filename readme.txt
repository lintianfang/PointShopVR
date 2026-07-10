The code will be released soon.

PointShopVR: Immersive Authoring of Large Point Clouds in Virtual Reality

Our paper is published in IEEE VR 2026 via the [link](https://ieeexplore.ieee.org/abstract/document/11457573).

##Abstract##
 This paper presents PointShopVR, an immersive point cloud authoring system in Virtual Reality (VR) that enables intuitive creation, manipulation, and refinement of large 3D point clouds. To support real-time interaction with dense data, our system integrates a simple acceleration data structure and a continuous level-of-detail (CLOD) rendering, ensuring high frame rates in VR. PointShopVR provides a handful of authoring operations—including point addition, deletion, labeling, copy–paste, translation and deformation—each offering instant visual feedback for seamless editing. We evaluate PointShopVR through a user study in which users complete diverse editing tasks within minutes, demonstrating both the usability and effectiveness of immersive point cloud authoring. Compared to traditional desktop-based tools, PointShopVR offers enhanced accessibility, natural interaction, and immersive feedback, making it a powerful platform for large-scale 3D data exploration and creative editing in VR.

Using the Integrated Build System (Windows only). Currently, the Immersive Labeling works best on Windows. A Visual Studio project for building can be generated via the dedicated build system of the CGV Framework via: [https://github.com/sgumhold/cgv/tree/develop-rgbd](https://github.com/lintianfang/cgv.git). Please choose develop-rgbd branch.

Recommended IDE: Visual Studio 2019 or 2022.

**How to use cgv framework:**
1. create a new folder "develop"
2. create two subfolders in the folder "develop", one is "build", another is "projects"
3. in the subfolder "projects", git clone [https://github.com/sgumhold/cgv/tree/develop-rgbd](https://github.com/lintianfang/cgv.git), please choose develop-rgbd branch.
4. open the folder "develop", drag the "projects" to define_project_dir.bat
5. drag the "build" folder to define_system_variables.bat
6. open the batch file define_platform.bat to set the win32 or 64
7. check the configuration in the batch file show_system_variables.bat, select version of Visual Studio
8. git clone "Immersive_labeling_pc" from current repo: https://github.com/lintianfang/Immersive_labeling_pc
9. in the folder "Immersive_labeling_pc", drag the pc_labeling_tool.pj to ..\bin\geberate_makefiles.bat
10. waiting for generateing makefiles, and then press any key to continue, the project should be open in vs automatically.
11. please choose "Release DLL" or "Debug DLL" before you build.
12. press f7 to build
13. press Ctrl+f5 to run

**License: Our code is supported with MIT license.**

**许可证： 我们的代码采用 MIT 许可。**

**ライセンス： 私たちのコードはMITライセンスでサポートされています。**
