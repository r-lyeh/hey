# Hey!

- [x] Compile many application layers quickly.
- [x] For web, desktops, consoles and mobiles.
- [x] All batteries included.
- [x] Try different rendering backends easily:
  - [x] OpenGL.
  - [x] Vulkan.
  - [x] WebGPU.
- [x] Try different windowing backends easily:
  - [x] Atto.
  - [x] CImgui.
  - [x] GLFW3.
  - [x] Raylib.
  - [x] RGFW.
  - [x] SDL2.
  - [x] SDL3.
  - [x] Tigr.
  - [ ] Todo:
    - [ ] GLFM.
    - [ ] Sokol.

# Build

```bash
git clone https://github.com/r-lyeh/hey && cd hey
cl demo_atto.c    hey_atto.c
cl demo_glfw.c    hey_glfw.c
cl demo_rgfw.c    hey_rgfw.c
cl demo_sdl2.c    hey_sdl2.c
cl demo_sdl3.c    hey_sdl3.c
cl demo_tigr.c    hey_tigr.c
cl demo_raylib.c  hey_raylib.c hey_sdl3.c
cl demo_ig.c      hey_imgui.cc hey_sdl*.c hey_glfw.c hey_vulkan.c hey_opengl.c
```

You can also delete all the folders you don't need, and their `hey_*.c` and `demo_*.c` counterparts, then likely `cl *.c*` should succeed. 

# License
This software is multi-licensed into the [Unlicense](https://unlicense.org/), [0-BSD](https://opensource.org/licenses/0BSD) and [MIT (No Attribution)](https://github.com/aws/mit-0) licenses at your discretion. Choose whichever license you prefer. Any contribution to this repository is implicitly subjected to the same release conditions aforementioned.

<a href="https://github.com/r-lyeh/hey/issues"><img alt="Issues" src="https://img.shields.io/github/issues-raw/r-lyeh/hey.svg?label=Issues&logo=github&logoColor=white"/></a> <a href="https://discord.gg/yyjCkUQKPV"><img alt="Discord" src="https://img.shields.io/discord/354670964400848898?color=5865F2&label=Chat&logo=discord&logoColor=white"/></a>
