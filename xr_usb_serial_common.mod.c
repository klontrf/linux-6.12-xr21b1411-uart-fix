#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4adb865b, "usb_put_intf" },
	{ 0x37a0cba, "kfree" },
	{ 0xb034976d, "gpiochip_remove" },
	{ 0xa4239d34, "device_remove_file" },
	{ 0xc96968, "tty_port_tty_get" },
	{ 0xe9af1fbb, "tty_vhangup" },
	{ 0x67b4f4e3, "tty_kref_put" },
	{ 0x27b26090, "tty_unregister_device" },
	{ 0xa2087e44, "usb_free_urb" },
	{ 0xd6223630, "usb_free_coherent" },
	{ 0xb1390d3, "usb_driver_release_interface" },
	{ 0xc4aa18f, "kmalloc_caches" },
	{ 0xd8ba0fc0, "__kmalloc_cache_noprof" },
	{ 0xd2a5b63f, "usb_autopm_get_interface" },
	{ 0xd0fae0b2, "usb_autopm_put_interface" },
	{ 0x48633ea2, "tty_port_open" },
	{ 0xbd394d8, "tty_termios_baud_rate" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xe36b561c, "usb_ifnum_to_if" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x23fa7aa, "tty_port_init" },
	{ 0x8d1d6957, "usb_alloc_coherent" },
	{ 0x9996c2e6, "usb_alloc_urb" },
	{ 0xd590e1dc, "device_create_file" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x658ca942, "_dev_warn" },
	{ 0x208080f5, "_dev_info" },
	{ 0x3fb6d105, "usb_driver_claim_interface" },
	{ 0x8b2b2ba7, "usb_get_intf" },
	{ 0x18fea6c5, "tty_port_register_device" },
	{ 0x5769c5ba, "gpiochip_add_data_with_key" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x85da03be, "usb_control_msg" },
	{ 0xc64d9f9f, "__dynamic_dev_dbg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7af7be0a, "__tty_alloc_driver" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x77b21e7c, "tty_register_driver" },
	{ 0x2e59bccc, "usb_register_driver" },
	{ 0xcf9c339a, "tty_unregister_driver" },
	{ 0x877c2996, "tty_driver_kref_put" },
	{ 0x92997ed8, "_printk" },
	{ 0xf264a1a6, "usb_submit_urb" },
	{ 0x5d706d5c, "_dev_err" },
	{ 0xc18f2144, "usb_autopm_put_interface_async" },
	{ 0x219fea3e, "usb_kill_urb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc4f0ca78, "tty_port_put" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x96f9fddd, "tty_port_tty_hangup" },
	{ 0xae4e6ee, "tty_port_tty_wakeup" },
	{ 0x55835707, "tty_port_hangup" },
	{ 0x4418d7b3, "usb_autopm_get_interface_async" },
	{ 0x8907c1ad, "tty_port_close" },
	{ 0xf0130c1e, "usb_deregister" },
	{ 0x813107c1, "__tty_insert_flip_string_flags" },
	{ 0x4bb00eea, "tty_flip_buffer_push" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5958b5a6, "tty_standard_install" },
	{ 0xbf1981cb, "module_layout" },
};

MODULE_INFO(depends, "usbcore");

MODULE_ALIAS("usb:v04E2p1410d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1411d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1412d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1414d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1420d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1422d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1424d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1403d*dc*dsc*dp*ic*isc*ip*in*");
