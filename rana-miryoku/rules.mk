# Copyright 2019 Manna Harbour
# https://github.com/manna-harbour/miryoku
# generated from users/manna-harbour_miryoku/miryoku.org

MOUSEKEY_ENABLE     = yes # Mouse keys
EXTRAKEY_ENABLE     = yes # Audio control and System control
AUTO_SHIFT_ENABLE   = yes # Auto Shift
OLED_DRIVER_ENABLE  = yes # OLED driver
RGBLIGHT_ENABLE     = yes # Enable WS2812 RGB underlight
LTO_ENABLE          = yes # Enables Link Time Optimization

# alternative layouts:

# alphas
ifneq ($(strip $(MIRYOKU_ALPHAS)),)
  OPT_DEFS += -DMIRYOKU_ALPHAS_$(MIRYOKU_ALPHAS)
endif

# nav
ifneq ($(strip $(MIRYOKU_NAV)),)
  OPT_DEFS += -DMIRYOKU_NAV_$(MIRYOKU_NAV)
endif

# clipboard
ifneq ($(strip $(MIRYOKU_CLIPBOARD)),)
  OPT_DEFS += -DMIRYOKU_CLIPBOARD_$(MIRYOKU_CLIPBOARD)
endif

# layers
ifneq ($(strip $(MIRYOKU_LAYERS)),)
  OPT_DEFS += -DMIRYOKU_LAYERS_$(MIRYOKU_LAYERS)
endif

# subset mappings
ifneq ($(strip $(MIRYOKU_MAPPING)),)
  OPT_DEFS += -DMIRYOKU_MAPPING_$(MIRYOKU_MAPPING)
endif

# kludges:

# thumb combos
ifeq ($(strip $(MIRYOKU_KLUDGE_THUMBCOMBOS)),yes)
  COMBO_ENABLE = yes
  OPT_DEFS += -DMIRYOKU_KLUDGE_THUMBCOMBOS
endif