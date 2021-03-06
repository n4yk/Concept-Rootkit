#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5cdb9d2f, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x38461209, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x9ed554b3, __VMLINUX_SYMBOL_STR(unregister_keyboard_notifier) },
	{ 0x96554810, __VMLINUX_SYMBOL_STR(register_keyboard_notifier) },
	{ 0x6f5c5ecf, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0xdcb0349b, __VMLINUX_SYMBOL_STR(sys_close) },
	{ 0x703dfdb2, __VMLINUX_SYMBOL_STR(kobject_del) },
	{ 0x5cacf7b6, __VMLINUX_SYMBOL_STR(commit_creds) },
	{ 0x180330dc, __VMLINUX_SYMBOL_STR(prepare_creds) },
	{ 0x4e6a3638, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0xc590bbd2, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc5fdef94, __VMLINUX_SYMBOL_STR(call_usermodehelper) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0xca1de323, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x53fe6e81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

