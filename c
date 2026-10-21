[33mcommit b8c99126e052c7883a81c2baabdb79db9066f6af[m[33m ([m[1;36mHEAD[m[33m -> [m[1;32mmain[m[33m, [m[1;31morigin/main[m[33m, [m[1;31morigin/HEAD[m[33m)[m
Author: MathiasWWolf <mathias.werther@wolf-geisenfeld.de>
Date:   Mon Oct 19 13:07:50 2026 +0200

    Invisible creature color fix

[33mcommit ecc04bdd1366923eca20907d2b7298abe97d9469[m
Author: WOLF-INTRANET\pilz <robert.pilz@wolf-geisenfeld.de>
Date:   Mon Oct 19 11:59:43 2026 +0200

    fix v2 for single thread

[33mcommit fdbaa42d93cbab074ea4b765a82c185365421716[m
Author: WOLF-INTRANET\pilz <robert.pilz@wolf-geisenfeld.de>
Date:   Mon Oct 19 11:58:04 2026 +0200

    added 1 height weight + fix v1 for single thread

[33mcommit 26236c56bf125450447e32d9ae55c4ae8e405d54[m
Author: MathiasWWolf <mathias.werther@wolf-geisenfeld.de>
Date:   Mon Oct 19 11:41:16 2026 +0200

    Added Visibility Options while Simulating
    
    Added Checkboxes and Sliders

[33mcommit c1ec2bb7b006aadec40b0f165bf28da36f37fd9e[m
Author: MathiasWWolf <mathias.werther@wolf-geisenfeld.de>
Date:   Mon Oct 19 10:07:53 2026 +0200

    Added currY for current Y position of Creature

[33mcommit 55c778be625b16b073a3c79e24574722ac3295e9[m
Author: WOLF-INTRANET\pilz <robert.pilz@wolf-geisenfeld.de>
Date:   Mon Oct 19 09:15:24 2026 +0200

    fixed neural network bug

[33mcommit 8aeb56440b0b46579ae8e699cea0b534b1defc31[m
Author: WOLF-INTRANET\pilz <robert.pilz@wolf-geisenfeld.de>
Date:   Mon Oct 19 09:12:06 2026 +0200

    fixed neural network bug

[33mcommit 7f4506d50d8369b0d860b3b4de70a0aadd3794e1[m
Author: MathiasWWolf <mathias.werther@wolf-geisenfeld.de>
Date:   Mon Oct 19 09:03:11 2026 +0200

    Added a Map Overview and added LowScore and HighScore2

[33mcommit 02403f3e5a4d7a0900fe5aeeb69e8293afd97194[m
Author: MathiasWWolf <mathias.werther@wolf-geisenfeld.de>
Date:   Mon Oct 19 08:00:43 2026 +0200

    Added a visual indicator in Mode2 to show simulation-time
    
    Added a visual indicator in Mode2 to show simulation-time using a simple bar display

[33mcommit d4301dddf0916aa57276e57d397a9be83942f843[m
Author: WOLF-INTRANET\pilz <robert.pilz@wolf-geisenfeld.de>
Date:   Fri Oct 9 12:26:02 2026 +0200

    fixed neural learning process | added more weights for better learning experience | fixed spawnpositioning and tracking | todo: single thread (fpc) doesnt support all weights yet

[33mcommit 536613775a7197f85845984e7b78e38fd6ba1cc9[m
Author: WOLF-INTRANET\pilz <robert.pilz@wolf-geisenfeld.de>
Date:   Fri Oct 9 07:35:31 2026 +0200

    fixed start position

[33mcommit 989656fbc8bec486ce68bfb6e3940965c37f660f[m
Author: WOLF-INTRANET\pilz <robert.pilz@wolf-geisenfeld.de>
Date:   Thu Oct 8 16:29:36 2026 +0200

    added single core support for non threading environemnts

[33mcommit 341a0d296017422f89c756fe16106847eaa6b108[m
Author: WOLF-INTRANET\pilz <robert.pilz@wolf-geisenfeld.de>
Date:   Thu Oct 8 16:28:47 2026 +0200

    base version with threading

[33mcommit 88d8038fd2f7776519e626abb9c7673abc1f0d75[m
Author: WOLF-INTRANET\pilz <robert.pilz@wolf-geisenfeld.de>
Date:   Thu Oct 8 15:29:16 2026 +0200

    fixed neural engine logic bug which made it go vrooom

[33mcommit 14454e3b9903fafd27abcc1f75d96477cfea58c8[m
Author: WOLF-INTRANET\pilz <robert.pilz@wolf-geisenfeld.de>
Date:   Thu Oct 8 14:49:08 2026 +0200

    combined neural network with physics engine

[33mcommit 921f1cc0254f70b1fd7f10043aa6325a422d74c0[m
Author: MathiasWWolf <mathias.werther@wolf-geisenfeld.de>
Date:   Thu Oct 8 13:51:13 2026 +0200

    Preparing for Network Implementation

[33mcommit f89859c3bde3bf0b86bcca446adb29079aa49050[m
Author: MathiasWWolf <mathias.werther@wolf-geisenfeld.de>
Date:   Thu Oct 8 12:47:21 2026 +0200

    Add Slippery Map Type

[33mcommit f9424a18707436b6d59aebd4c4e5ccc9369867f5[m
Author: MathiasWWolf <mathias.werther@wolf-geisenfeld.de>
Date:   Thu Oct 8 11:39:24 2026 +0200

    Fix line collision and Map2 generation
    
    CollideJoint now uses a swept test against px->x motion instead of a
    static depth check. This prevents joints from tunneling through steep
    ramps (level 2) and pushes them out to a fixed skin distance instead
    of teleporting them through the surface. Segment endpoints (apex of
    ramps) are handled with a radial push-out.
    
    Also run Collision inside the solver iterations so Constrains can no
    longer push joints back through surfaces between substeps.

[33mcommit aa4313f55a7a6bee8d480bb30874e2dd300a538b[m
Author: MathiasWWolf <mathias.werther@wolf-geisenfeld.de>
Date:   Thu Oct 8 11:13:58 2026 +0200

    Add Highscore Array

[33mcommit 7864568670f747d17f418dc153729a6526c85001[m
Author: MathiasWWolf <mathias.werther@wolf-geisenfeld.de>
Date:   Thu Oct 8 11:05:35 2026 +0200

    Refactor simulation parameters and add new maps

[33mcommit 971738c82e6d01b8ab3d2e8ed8139c943ce51b44[m
Author: MathiasWWolf <mathias.werther@wolf-geisenfeld.de>
Date:   Thu Oct 8 10:35:40 2026 +0200

    feat: rendering all creatured | fix: collision bug | fix: physics
    
    BIG BREAKTHROUGH

[33mcommit 36f36ec67f16211697cf8374927bd9e8beb3c0f6[m
Author: MathiasWWolf <mathias.werther@wolf-geisenfeld.de>
Date:   Thu Oct 8 09:42:39 2026 +0200

    Disabled CameraY due to weird bug
    
    temporary

[33mcommit 8f86b169ec1420bbb9b97acd8efdae99e9630b0f[m
Author: MathiasWWolf <mathias.werther@wolf-geisenfeld.de>
Date:   Thu Oct 8 09:05:54 2026 +0200

    Fixed: Map1 | Begin: Multiple Creatures | Fixed: VK_ENTER
    
    Added new variables for creature management and simulation initialization. Updated drawing functions and collision handling. Refactored CountCreature function and added simulation reset functionality.

[33mcommit 84b6861b58127095e1220f2397c500a021d3c5d1[m
Author: MathiasWWolf <mathias.werther@wolf-geisenfeld.de>
Date:   Thu Oct 8 07:59:50 2026 +0200

    Feat: Save and Load Screen

[33mcommit 82dd494e4fb638ecc88d1df248204110b63d1934[m
Author: MathiasWWolf <mathias.werther@wolf-geisenfeld.de>
Date:   Thu Oct 8 07:23:06 2026 +0200

    Refactor SwitchTo[...] and Working on Feature Save Menu

[33mcommit c60036f0dc3aa723497c427d1ef4df0e5e631b85[m
Author: Elom Usk <robert.pilz@wolf-geisenfeld.de>
Date:   Wed Oct 7 16:11:46 2026 +0200

    Add initial content to README.md

[33mcommit ec17d0ae1fd1d5019b252f6f07c6e79995df4f54[m
Author: WOLF-INTRANET\pilz <robert.pilz@wolf-geisenfeld.de>
Date:   Wed Oct 7 16:08:09 2026 +0200

    base simulator
