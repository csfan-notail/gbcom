#
# Copyright (C) 2006-2012 OpenWrt.org
#
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#

include $(TOPDIR)/rules.mk
include $(INCLUDE_DIR)/kernel.mk

PKG_NAME:=ledstatus2
PKG_RELEASE:=1

#PKG_BUILD_DIR := $(KERNEL_BUILD_DIR)/$(PKG_NAME)
PKG_BUILD_DIR:=$(TOPDIR)/local/tau_modules/$(PKG_NAME)

include $(INCLUDE_DIR)/package.mk

define Package/ledstatus2
  CATEGORY:=Local Packages
  SUBMENU:=TAU modules
  TITLE:=Update utility for trx firmware images
  DEPENDS:=+liblte2 libpal
endef

define Package/ledstatus2/description
 This package ledstatus2 app tool.
endef

define Build/Prepare
	mkdir -p $(PKG_BUILD_DIR)
	$(CP) ./src/* $(PKG_BUILD_DIR)/
endef

target=$(firstword $(subst -, ,$(BOARD)))

MAKE_FLAGS += TARGET="$(target)"
TARGET_CFLAGS := -I$(LTE_INCLUDE) -I$(LINUX_DIR)/include $(TARGET_CFLAGS) -Dtarget_$(target)=1 -Wall


define Package/ledstatus2/install
	mkdir $(1)/lib/
	if [ ! -d $(TARGET_DIR)/sbin/ ]; then \
		(mkdir -p $(TARGET_DIR)/sbin/ ); \
	fi
	$(CP) $(TARGET_DIR)/lib/liblte2.so $(1)/lib/liblte2.so
	$(CP) $(TARGET_DIR)/lib/libpal.so $(1)/lib/libpal.so
	$(INSTALL_DIR) $(1)/sbin/
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/ledstatus2 $(1)/sbin/
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/ledstatus2 $(TARGET_DIR)/sbin/
	
endef

$(eval $(call BuildPackage,ledstatus2))
