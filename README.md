# dmenu

My custom build of suckless dmenu software for my Linux install. I have decided
to try out suckless software and I will document my progress here.

# Table of Contents

- [Applied patches](#Applied-patches)
- [Installation](#Installation)
- [Credit](#Credit)

# Applied patches

In this section I will present patches that I've applied to my custom build of
dmenu.

- [Center](../main/patches/dmenu-center-20200111-8cd37e1.diff) - patch that
  centers dmenu instance instead of it showing on top of screen.
- [Grid](../main/patches/dmenu-grid-4.9.diff) - patch that adds grid layout of
  programs list within dmenu.
- [Fuzzyhighlight](../main/patches/fuzzyhighlight-4.9.diff) - fuzzy matches gets
  highlighted
- [Fuzzymatch](../main/patches/fuzzymatch-4.9.diff) - adds support for
  fuzzy-matching
- [Lineheight](../main/patches/lineheight-5.0.diff) - adds a flag (-h) to set
  the minimum height of dmenu lines
- [Mousesupport](../main/patches/mousesupport-5.0.diff) - basic mouse support
- [Numbers](../main/patches/numbers-4.9.diff) - Displays number of matched and
  total items in top right corner

# Installation

In this section I will add instructions how to install this my custom `dwm`
build.

1. Clone this git repository:

`git clone https://github.com/KostasEreksonas/dwm-kostas.git`

2. Go to the folder cloned repository:

`cd dwm-kostas`

3. Build the package:

`make`

4. Run a clean install of this package with **_root_** privilleges:

`make clean install`

5. Done!

# Credit

- [6gk/dmenu](https://github.com/6gk/dmenu)
- [dmenu/kostas](https://github.com/KostasEreksonas/dmenu-kostas)
