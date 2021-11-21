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

- [Center](../master/patches/dmenu-center-20200111-8cd37e1.diff) - patch that
  centers dmenu instance instead of it showing on top of screen.
- [Grid](../master/patches/dmenu-grid-4.9.diff) - patch that adds grid layout of
  programs list within dmenu.
- [Fuzzyhighlight](../master/patches/fuzzyhighlight-4.9.diff) - fuzzy matches
  gets highlighted
- [Fuzzymatch](../master/patches/fuzzymatch-4.9.diff) - adds support for
  fuzzy-matching
- [Lineheight](../master/patches/lineheight-5.0.diff) - adds a flag (-h) to set
  the minimum height of dmenu lines
- [Mousesupport](../master/patches/mousesupport-5.0.diff) - basic mouse support
- [Numbers](../master/patches/numbers-4.9.diff) - Displays number of matched and
  total items in top right corner

* [Gridnav](../master/patches/dmenu-gridnav-5.0.diff) - patch that allows to go
  left and right when searching for programs within an open dmenu instance.
* [Border](../master/patches/dmenu-border-4.9.diff) - patch that adds an outside
  border of a dmenu instance.

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
- [dmenu-kostas](https://github.com/KostasEreksonas/dmenu-kostas)
