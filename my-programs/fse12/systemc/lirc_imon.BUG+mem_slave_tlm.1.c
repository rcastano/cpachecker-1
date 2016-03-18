
void error() {
  ERROR:
    goto ERROR;
}

typedef void (*ctor_fn_t)(void);
typedef signed char __s8;
typedef unsigned char __u8;
typedef short __s16;
typedef unsigned short __u16;
typedef int __s32;
typedef unsigned int __u32;
typedef long long __s64;
typedef unsigned long long __u64;
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef long long s64;
typedef unsigned long long u64;
typedef unsigned short umode_t;
typedef unsigned int __kernel_mode_t;
typedef int __kernel_pid_t;
typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;
typedef unsigned long __kernel_size_t;
typedef long __kernel_ssize_t;
typedef long __kernel_time_t;
typedef long __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef long long __kernel_loff_t;
typedef __kernel_uid_t __kernel_uid32_t;
typedef __kernel_gid_t __kernel_gid32_t;
typedef __u32 __kernel_dev_t;
typedef __kernel_dev_t dev_t;
typedef __kernel_mode_t mode_t;
typedef __kernel_pid_t pid_t;
typedef __kernel_clockid_t clockid_t;
typedef _Bool bool;
typedef __kernel_uid32_t uid_t;
typedef __kernel_gid32_t gid_t;
typedef __kernel_loff_t loff_t;
typedef __kernel_size_t size_t;
typedef __kernel_ssize_t ssize_t;
typedef __kernel_time_t time_t;
typedef __s32 int32_t;
typedef __u32 uint32_t;
typedef unsigned long sector_t;
typedef unsigned long blkcnt_t;
typedef u64 dma_addr_t;
typedef __u16 __le16;
typedef unsigned int gfp_t;
typedef unsigned int fmode_t;
struct __anonstruct_atomic_t_7 {
   int counter ;
};
typedef struct __anonstruct_atomic_t_7 atomic_t;
struct __anonstruct_atomic64_t_8 {
   long counter ;
};
typedef struct __anonstruct_atomic64_t_8 atomic64_t;
struct list_head {
   struct list_head *next ;
   struct list_head *prev ;
};
struct hlist_node;
struct hlist_node;
struct hlist_node;
struct hlist_head {
   struct hlist_node *first ;
};
struct hlist_node {
   struct hlist_node *next ;
   struct hlist_node **pprev ;
};
struct module;
struct module;
struct module;
struct module;
struct _ddebug {
   char const *modname ;
   char const *function ;
   char const *filename ;
   char const *format ;
   unsigned int lineno : 24 ;
   unsigned int flags : 8 ;
   char enabled ;
} __attribute__((__aligned__(8))) ;
struct bug_entry {
   int bug_addr_disp ;
   int file_disp ;
   unsigned short line ;
   unsigned short flags ;
};
struct completion;
struct completion;
struct completion;
struct completion;
struct pt_regs;
struct pt_regs;
struct pt_regs;
struct pt_regs;
struct pid;
struct pid;
struct pid;
struct pid;
struct timespec;
struct timespec;
struct timespec;
struct timespec;
struct page;
struct page;
struct page;
struct page;
struct task_struct;
struct task_struct;
struct task_struct;
struct task_struct;
struct task_struct;
struct mm_struct;
struct mm_struct;
struct mm_struct;
struct mm_struct;
struct pt_regs {
   unsigned long r15 ;
   unsigned long r14 ;
   unsigned long r13 ;
   unsigned long r12 ;
   unsigned long bp ;
   unsigned long bx ;
   unsigned long r11 ;
   unsigned long r10 ;
   unsigned long r9 ;
   unsigned long r8 ;
   unsigned long ax ;
   unsigned long cx ;
   unsigned long dx ;
   unsigned long si ;
   unsigned long di ;
   unsigned long orig_ax ;
   unsigned long ip ;
   unsigned long cs ;
   unsigned long flags ;
   unsigned long sp ;
   unsigned long ss ;
};
struct task_struct;
struct kernel_vm86_regs {
   struct pt_regs pt ;
   unsigned short es ;
   unsigned short __esh ;
   unsigned short ds ;
   unsigned short __dsh ;
   unsigned short fs ;
   unsigned short __fsh ;
   unsigned short gs ;
   unsigned short __gsh ;
};
union __anonunion____missing_field_name_14 {
   struct pt_regs *regs ;
   struct kernel_vm86_regs *vm86 ;
};
struct math_emu_info {
   long ___orig_eip ;
   union __anonunion____missing_field_name_14 __annonCompField5 ;
};
struct task_struct;
typedef unsigned long pgdval_t;
typedef unsigned long pgprotval_t;
struct pgprot {
   pgprotval_t pgprot ;
};
typedef struct pgprot pgprot_t;
struct __anonstruct_pgd_t_17 {
   pgdval_t pgd ;
};
typedef struct __anonstruct_pgd_t_17 pgd_t;
typedef struct page *pgtable_t;
struct file;
struct file;
struct file;
struct file;
struct seq_file;
struct seq_file;
struct seq_file;
struct seq_file;
struct __anonstruct____missing_field_name_22 {
   unsigned int a ;
   unsigned int b ;
};
struct __anonstruct____missing_field_name_23 {
   u16 limit0 ;
   u16 base0 ;
   unsigned int base1 : 8 ;
   unsigned int type : 4 ;
   unsigned int s : 1 ;
   unsigned int dpl : 2 ;
   unsigned int p : 1 ;
   unsigned int limit : 4 ;
   unsigned int avl : 1 ;
   unsigned int l : 1 ;
   unsigned int d : 1 ;
   unsigned int g : 1 ;
   unsigned int base2 : 8 ;
};
union __anonunion____missing_field_name_21 {
   struct __anonstruct____missing_field_name_22 __annonCompField7 ;
   struct __anonstruct____missing_field_name_23 __annonCompField8 ;
};
struct desc_struct {
   union __anonunion____missing_field_name_21 __annonCompField9 ;
} __attribute__((__packed__)) ;
struct page;
struct thread_struct;
struct thread_struct;
struct thread_struct;
struct thread_struct;
struct mm_struct;
struct desc_struct;
struct task_struct;
struct cpumask;
struct cpumask;
struct cpumask;
struct cpumask;
struct arch_spinlock;
struct arch_spinlock;
struct arch_spinlock;
struct arch_spinlock;
struct cpumask {
   unsigned long bits[((4096UL + 8UL * sizeof(long )) - 1UL) / (8UL * sizeof(long ))] ;
};
typedef struct cpumask cpumask_t;
typedef struct cpumask *cpumask_var_t;
struct task_struct;
struct pt_regs;
struct i387_fsave_struct {
   u32 cwd ;
   u32 swd ;
   u32 twd ;
   u32 fip ;
   u32 fcs ;
   u32 foo ;
   u32 fos ;
   u32 st_space[20] ;
   u32 status ;
};
struct __anonstruct____missing_field_name_31 {
   u64 rip ;
   u64 rdp ;
};
struct __anonstruct____missing_field_name_32 {
   u32 fip ;
   u32 fcs ;
   u32 foo ;
   u32 fos ;
};
union __anonunion____missing_field_name_30 {
   struct __anonstruct____missing_field_name_31 __annonCompField12 ;
   struct __anonstruct____missing_field_name_32 __annonCompField13 ;
};
union __anonunion____missing_field_name_33 {
   u32 padding1[12] ;
   u32 sw_reserved[12] ;
};
struct i387_fxsave_struct {
   u16 cwd ;
   u16 swd ;
   u16 twd ;
   u16 fop ;
   union __anonunion____missing_field_name_30 __annonCompField14 ;
   u32 mxcsr ;
   u32 mxcsr_mask ;
   u32 st_space[32] ;
   u32 xmm_space[64] ;
   u32 padding[12] ;
   union __anonunion____missing_field_name_33 __annonCompField15 ;
} __attribute__((__aligned__(16))) ;
struct i387_soft_struct {
   u32 cwd ;
   u32 swd ;
   u32 twd ;
   u32 fip ;
   u32 fcs ;
   u32 foo ;
   u32 fos ;
   u32 st_space[20] ;
   u8 ftop ;
   u8 changed ;
   u8 lookahead ;
   u8 no_update ;
   u8 rm ;
   u8 alimit ;
   struct math_emu_info *info ;
   u32 entry_eip ;
};
struct ymmh_struct {
   u32 ymmh_space[64] ;
};
struct xsave_hdr_struct {
   u64 xstate_bv ;
   u64 reserved1[2] ;
   u64 reserved2[5] ;
} __attribute__((__packed__)) ;
struct xsave_struct {
   struct i387_fxsave_struct i387 ;
   struct xsave_hdr_struct xsave_hdr ;
   struct ymmh_struct ymmh ;
} __attribute__((__packed__, __aligned__(64))) ;
union thread_xstate {
   struct i387_fsave_struct fsave ;
   struct i387_fxsave_struct fxsave ;
   struct i387_soft_struct soft ;
   struct xsave_struct xsave ;
};
struct fpu {
   union thread_xstate *state ;
};
struct kmem_cache;
struct kmem_cache;
struct kmem_cache;
struct perf_event;
struct perf_event;
struct perf_event;
struct perf_event;
struct thread_struct {
   struct desc_struct tls_array[3] ;
   unsigned long sp0 ;
   unsigned long sp ;
   unsigned long usersp ;
   unsigned short es ;
   unsigned short ds ;
   unsigned short fsindex ;
   unsigned short gsindex ;
   unsigned long fs ;
   unsigned long gs ;
   struct perf_event *ptrace_bps[4] ;
   unsigned long debugreg6 ;
   unsigned long ptrace_dr7 ;
   unsigned long cr2 ;
   unsigned long trap_no ;
   unsigned long error_code ;
   struct fpu fpu ;
   unsigned long *io_bitmap_ptr ;
   unsigned long iopl ;
   unsigned int io_bitmap_max ;
};
typedef atomic64_t atomic_long_t;
struct arch_spinlock {
   unsigned int slock ;
};
typedef struct arch_spinlock arch_spinlock_t;
struct __anonstruct_arch_rwlock_t_36 {
   unsigned int lock ;
};
typedef struct __anonstruct_arch_rwlock_t_36 arch_rwlock_t;
struct task_struct;
struct lockdep_map;
struct lockdep_map;
struct lockdep_map;
struct lockdep_map;
struct task_struct;
struct task_struct;
struct task_struct;
struct pt_regs;
struct task_struct;
struct stack_trace {
   unsigned int nr_entries ;
   unsigned int max_entries ;
   unsigned long *entries ;
   int skip ;
};
struct lockdep_subclass_key {
   char __one_byte ;
} __attribute__((__packed__)) ;
struct lock_class_key {
   struct lockdep_subclass_key subkeys[8UL] ;
};
struct lock_class {
   struct list_head hash_entry ;
   struct list_head lock_entry ;
   struct lockdep_subclass_key *key ;
   unsigned int subclass ;
   unsigned int dep_gen_id ;
   unsigned long usage_mask ;
   struct stack_trace usage_traces[13] ;
   struct list_head locks_after ;
   struct list_head locks_before ;
   unsigned int version ;
   unsigned long ops ;
   char const *name ;
   int name_version ;
   unsigned long contention_point[4] ;
   unsigned long contending_point[4] ;
};
struct lockdep_map {
   struct lock_class_key *key ;
   struct lock_class *class_cache[2] ;
   char const *name ;
   int cpu ;
   unsigned long ip ;
};
struct held_lock {
   u64 prev_chain_key ;
   unsigned long acquire_ip ;
   struct lockdep_map *instance ;
   struct lockdep_map *nest_lock ;
   u64 waittime_stamp ;
   u64 holdtime_stamp ;
   unsigned int class_idx : 13 ;
   unsigned int irq_context : 2 ;
   unsigned int trylock : 1 ;
   unsigned int read : 2 ;
   unsigned int check : 2 ;
   unsigned int hardirqs_off : 1 ;
   unsigned int references : 11 ;
};
struct raw_spinlock {
   arch_spinlock_t raw_lock ;
   unsigned int magic ;
   unsigned int owner_cpu ;
   void *owner ;
   struct lockdep_map dep_map ;
};
typedef struct raw_spinlock raw_spinlock_t;
struct __anonstruct____missing_field_name_38 {
   u8 __padding[(unsigned int )(& ((struct raw_spinlock *)0)->dep_map)] ;
   struct lockdep_map dep_map ;
};
union __anonunion____missing_field_name_37 {
   struct raw_spinlock rlock ;
   struct __anonstruct____missing_field_name_38 __annonCompField17 ;
};
struct spinlock {
   union __anonunion____missing_field_name_37 __annonCompField18 ;
};
typedef struct spinlock spinlock_t;
struct __anonstruct_rwlock_t_39 {
   arch_rwlock_t raw_lock ;
   unsigned int magic ;
   unsigned int owner_cpu ;
   void *owner ;
   struct lockdep_map dep_map ;
};
typedef struct __anonstruct_rwlock_t_39 rwlock_t;
struct seqcount {
   unsigned int sequence ;
};
typedef struct seqcount seqcount_t;
struct timespec {
   __kernel_time_t tv_sec ;
   long tv_nsec ;
};
struct kstat {
   u64 ino ;
   dev_t dev ;
   umode_t mode ;
   unsigned int nlink ;
   uid_t uid ;
   gid_t gid ;
   dev_t rdev ;
   loff_t size ;
   struct timespec atime ;
   struct timespec mtime ;
   struct timespec ctime ;
   unsigned long blksize ;
   unsigned long long blocks ;
};
struct __wait_queue_head {
   spinlock_t lock ;
   struct list_head task_list ;
};
typedef struct __wait_queue_head wait_queue_head_t;
struct task_struct;
struct __anonstruct_nodemask_t_41 {
   unsigned long bits[(((unsigned long )(1 << 10) + 8UL * sizeof(long )) - 1UL) / (8UL * sizeof(long ))] ;
};
typedef struct __anonstruct_nodemask_t_41 nodemask_t;
struct page;
struct mutex {
   atomic_t count ;
   spinlock_t wait_lock ;
   struct list_head wait_list ;
   struct task_struct *owner ;
   char const *name ;
   void *magic ;
   struct lockdep_map dep_map ;
};
struct mutex_waiter {
   struct list_head list ;
   struct task_struct *task ;
   void *magic ;
};
struct rw_semaphore;
struct rw_semaphore;
struct rw_semaphore;
struct rw_semaphore;
struct rw_semaphore {
   long count ;
   spinlock_t wait_lock ;
   struct list_head wait_list ;
   struct lockdep_map dep_map ;
};
struct page;
struct device;
struct device;
struct device;
struct device;
struct device;
union ktime {
   s64 tv64 ;
};
typedef union ktime ktime_t;
struct tvec_base;
struct tvec_base;
struct tvec_base;
struct tvec_base;
struct timer_list {
   struct list_head entry ;
   unsigned long expires ;
   struct tvec_base *base ;
   void (*function)(unsigned long ) ;
   unsigned long data ;
   int slack ;
   int start_pid ;
   void *start_site ;
   char start_comm[16] ;
   struct lockdep_map lockdep_map ;
};
struct hrtimer;
struct hrtimer;
struct hrtimer;
struct hrtimer;
enum hrtimer_restart;
enum hrtimer_restart;
enum hrtimer_restart;
struct work_struct;
struct work_struct;
struct work_struct;
struct work_struct;
struct work_struct {
   atomic_long_t data ;
   struct list_head entry ;
   void (*func)(struct work_struct *work ) ;
   struct lockdep_map lockdep_map ;
};
struct delayed_work {
   struct work_struct work ;
   struct timer_list timer ;
};
struct completion {
   unsigned int done ;
   wait_queue_head_t wait ;
};
struct device;
struct pm_message {
   int event ;
};
typedef struct pm_message pm_message_t;
struct dev_pm_ops {
   int (*prepare)(struct device *dev ) ;
   void (*complete)(struct device *dev ) ;
   int (*suspend)(struct device *dev ) ;
   int (*resume)(struct device *dev ) ;
   int (*freeze)(struct device *dev ) ;
   int (*thaw)(struct device *dev ) ;
   int (*poweroff)(struct device *dev ) ;
   int (*restore)(struct device *dev ) ;
   int (*suspend_noirq)(struct device *dev ) ;
   int (*resume_noirq)(struct device *dev ) ;
   int (*freeze_noirq)(struct device *dev ) ;
   int (*thaw_noirq)(struct device *dev ) ;
   int (*poweroff_noirq)(struct device *dev ) ;
   int (*restore_noirq)(struct device *dev ) ;
   int (*runtime_suspend)(struct device *dev ) ;
   int (*runtime_resume)(struct device *dev ) ;
   int (*runtime_idle)(struct device *dev ) ;
};
enum rpm_status {
    RPM_ACTIVE = 0,
    RPM_RESUMING = 1,
    RPM_SUSPENDED = 2,
    RPM_SUSPENDING = 3
} ;
enum rpm_request {
    RPM_REQ_NONE = 0,
    RPM_REQ_IDLE = 1,
    RPM_REQ_SUSPEND = 2,
    RPM_REQ_AUTOSUSPEND = 3,
    RPM_REQ_RESUME = 4
} ;
struct wakeup_source;
struct wakeup_source;
struct wakeup_source;
struct wakeup_source;
struct dev_pm_info {
   pm_message_t power_state ;
   unsigned int can_wakeup : 1 ;
   unsigned int async_suspend : 1 ;
   bool is_prepared : 1 ;
   bool is_suspended : 1 ;
   spinlock_t lock ;
   struct list_head entry ;
   struct completion completion ;
   struct wakeup_source *wakeup ;
   struct timer_list suspend_timer ;
   unsigned long timer_expires ;
   struct work_struct work ;
   wait_queue_head_t wait_queue ;
   atomic_t usage_count ;
   atomic_t child_count ;
   unsigned int disable_depth : 3 ;
   unsigned int ignore_children : 1 ;
   unsigned int idle_notification : 1 ;
   unsigned int request_pending : 1 ;
   unsigned int deferred_resume : 1 ;
   unsigned int run_wake : 1 ;
   unsigned int runtime_auto : 1 ;
   unsigned int no_callbacks : 1 ;
   unsigned int irq_safe : 1 ;
   unsigned int use_autosuspend : 1 ;
   unsigned int timer_autosuspends : 1 ;
   enum rpm_request request ;
   enum rpm_status runtime_status ;
   int runtime_error ;
   int autosuspend_delay ;
   unsigned long last_busy ;
   unsigned long active_jiffies ;
   unsigned long suspended_jiffies ;
   unsigned long accounting_timestamp ;
   void *subsys_data ;
};
struct dev_power_domain {
   struct dev_pm_ops ops ;
};
struct __anonstruct_mm_context_t_111 {
   void *ldt ;
   int size ;
   unsigned short ia32_compat ;
   struct mutex lock ;
   void *vdso ;
};
typedef struct __anonstruct_mm_context_t_111 mm_context_t;
struct vm_area_struct;
struct vm_area_struct;
struct vm_area_struct;
struct vm_area_struct;
struct page;
struct vm_area_struct;
struct completion;
struct rcu_head {
   struct rcu_head *next ;
   void (*func)(struct rcu_head *head ) ;
};
struct nsproxy;
struct nsproxy;
struct nsproxy;
struct nsproxy;
struct cred;
struct cred;
struct cred;
struct cred;
struct file;
struct task_struct;
struct file;
typedef __u64 Elf64_Addr;
typedef __u16 Elf64_Half;
typedef __u32 Elf64_Word;
typedef __u64 Elf64_Xword;
struct elf64_sym {
   Elf64_Word st_name ;
   unsigned char st_info ;
   unsigned char st_other ;
   Elf64_Half st_shndx ;
   Elf64_Addr st_value ;
   Elf64_Xword st_size ;
};
typedef struct elf64_sym Elf64_Sym;
struct sock;
struct sock;
struct sock;
struct sock;
struct kobject;
struct kobject;
struct kobject;
struct kobject;
enum kobj_ns_type {
    KOBJ_NS_TYPE_NONE = 0,
    KOBJ_NS_TYPE_NET = 1,
    KOBJ_NS_TYPES = 2
} ;
struct kobj_ns_type_operations {
   enum kobj_ns_type type ;
   void *(*grab_current_ns)(void) ;
   void const *(*netlink_ns)(struct sock *sk ) ;
   void const *(*initial_ns)(void) ;
   void (*drop_ns)(void * ) ;
};
struct kobject;
struct module;
enum kobj_ns_type;
struct attribute {
   char const *name ;
   mode_t mode ;
   struct lock_class_key *key ;
   struct lock_class_key skey ;
};
struct attribute_group {
   char const *name ;
   mode_t (*is_visible)(struct kobject * , struct attribute * , int ) ;
   struct attribute **attrs ;
};
struct file;
struct vm_area_struct;
struct bin_attribute {
   struct attribute attr ;
   size_t size ;
   void *private ;
   ssize_t (*read)(struct file * , struct kobject * , struct bin_attribute * , char * ,
                   loff_t , size_t ) ;
   ssize_t (*write)(struct file * , struct kobject * , struct bin_attribute * , char * ,
                    loff_t , size_t ) ;
   int (*mmap)(struct file * , struct kobject * , struct bin_attribute *attr , struct vm_area_struct *vma ) ;
};
struct sysfs_ops {
   ssize_t (*show)(struct kobject * , struct attribute * , char * ) ;
   ssize_t (*store)(struct kobject * , struct attribute * , char const * , size_t ) ;
};
struct sysfs_dirent;
struct sysfs_dirent;
struct sysfs_dirent;
struct sysfs_dirent;
struct kref {
   atomic_t refcount ;
};
struct kset;
struct kset;
struct kset;
struct kobj_type;
struct kobj_type;
struct kobj_type;
struct kobject {
   char const *name ;
   struct list_head entry ;
   struct kobject *parent ;
   struct kset *kset ;
   struct kobj_type *ktype ;
   struct sysfs_dirent *sd ;
   struct kref kref ;
   unsigned int state_initialized : 1 ;
   unsigned int state_in_sysfs : 1 ;
   unsigned int state_add_uevent_sent : 1 ;
   unsigned int state_remove_uevent_sent : 1 ;
   unsigned int uevent_suppress : 1 ;
};
struct kobj_type {
   void (*release)(struct kobject *kobj ) ;
   struct sysfs_ops const *sysfs_ops ;
   struct attribute **default_attrs ;
   struct kobj_ns_type_operations const *(*child_ns_type)(struct kobject *kobj ) ;
   void const *(*namespace)(struct kobject *kobj ) ;
};
struct kobj_uevent_env {
   char *envp[32] ;
   int envp_idx ;
   char buf[2048] ;
   int buflen ;
};
struct kset_uevent_ops {
   int (* const filter)(struct kset *kset , struct kobject *kobj ) ;
   char const *(* const name)(struct kset *kset , struct kobject *kobj ) ;
   int (* const uevent)(struct kset *kset , struct kobject *kobj , struct kobj_uevent_env *env ) ;
};
struct sock;
struct kset {
   struct list_head list ;
   spinlock_t list_lock ;
   struct kobject kobj ;
   struct kset_uevent_ops const *uevent_ops ;
};
struct kernel_param;
struct kernel_param;
struct kernel_param;
struct kernel_param;
struct kernel_param_ops {
   int (*set)(char const *val , struct kernel_param const *kp ) ;
   int (*get)(char *buffer , struct kernel_param const *kp ) ;
   void (*free)(void *arg ) ;
};
struct kparam_string;
struct kparam_string;
struct kparam_string;
struct kparam_array;
struct kparam_array;
struct kparam_array;
union __anonunion____missing_field_name_195 {
   void *arg ;
   struct kparam_string const *str ;
   struct kparam_array const *arr ;
};
struct kernel_param {
   char const *name ;
   struct kernel_param_ops const *ops ;
   u16 perm ;
   u16 flags ;
   union __anonunion____missing_field_name_195 __annonCompField31 ;
};
struct kparam_string {
   unsigned int maxlen ;
   char *string ;
};
struct kparam_array {
   unsigned int max ;
   unsigned int elemsize ;
   unsigned int *num ;
   struct kernel_param_ops const *ops ;
   void *elem ;
};
struct module;
struct module;
struct jump_label_key {
   atomic_t enabled ;
};
struct module;
struct tracepoint;
struct tracepoint;
struct tracepoint;
struct tracepoint;
struct tracepoint_func {
   void *func ;
   void *data ;
};
struct tracepoint {
   char const *name ;
   struct jump_label_key key ;
   void (*regfunc)(void) ;
   void (*unregfunc)(void) ;
   struct tracepoint_func *funcs ;
};
struct mod_arch_specific {

};
struct module;
struct kernel_symbol {
   unsigned long value ;
   char const *name ;
};
struct module;
struct module_attribute {
   struct attribute attr ;
   ssize_t (*show)(struct module_attribute * , struct module * , char * ) ;
   ssize_t (*store)(struct module_attribute * , struct module * , char const * ,
                    size_t count ) ;
   void (*setup)(struct module * , char const * ) ;
   int (*test)(struct module * ) ;
   void (*free)(struct module * ) ;
};
struct module_param_attrs;
struct module_param_attrs;
struct module_param_attrs;
struct module_kobject {
   struct kobject kobj ;
   struct module *mod ;
   struct kobject *drivers_dir ;
   struct module_param_attrs *mp ;
};
struct exception_table_entry;
struct exception_table_entry;
struct exception_table_entry;
struct exception_table_entry;
enum module_state {
    MODULE_STATE_LIVE = 0,
    MODULE_STATE_COMING = 1,
    MODULE_STATE_GOING = 2
} ;
struct module_sect_attrs;
struct module_sect_attrs;
struct module_sect_attrs;
struct module_notes_attrs;
struct module_notes_attrs;
struct module_notes_attrs;
struct ftrace_event_call;
struct ftrace_event_call;
struct ftrace_event_call;
struct module_ref {
   unsigned int incs ;
   unsigned int decs ;
};
struct module {
   enum module_state state ;
   struct list_head list ;
   char name[64UL - sizeof(unsigned long )] ;
   struct module_kobject mkobj ;
   struct module_attribute *modinfo_attrs ;
   char const *version ;
   char const *srcversion ;
   struct kobject *holders_dir ;
   struct kernel_symbol const *syms ;
   unsigned long const *crcs ;
   unsigned int num_syms ;
   struct kernel_param *kp ;
   unsigned int num_kp ;
   unsigned int num_gpl_syms ;
   struct kernel_symbol const *gpl_syms ;
   unsigned long const *gpl_crcs ;
   struct kernel_symbol const *unused_syms ;
   unsigned long const *unused_crcs ;
   unsigned int num_unused_syms ;
   unsigned int num_unused_gpl_syms ;
   struct kernel_symbol const *unused_gpl_syms ;
   unsigned long const *unused_gpl_crcs ;
   struct kernel_symbol const *gpl_future_syms ;
   unsigned long const *gpl_future_crcs ;
   unsigned int num_gpl_future_syms ;
   unsigned int num_exentries ;
   struct exception_table_entry *extable ;
   int (*init)(void) ;
   void *module_init ;
   void *module_core ;
   unsigned int init_size ;
   unsigned int core_size ;
   unsigned int init_text_size ;
   unsigned int core_text_size ;
   unsigned int init_ro_size ;
   unsigned int core_ro_size ;
   struct mod_arch_specific arch ;
   unsigned int taints ;
   unsigned int num_bugs ;
   struct list_head bug_list ;
   struct bug_entry *bug_table ;
   Elf64_Sym *symtab ;
   Elf64_Sym *core_symtab ;
   unsigned int num_symtab ;
   unsigned int core_num_syms ;
   char *strtab ;
   char *core_strtab ;
   struct module_sect_attrs *sect_attrs ;
   struct module_notes_attrs *notes_attrs ;
   char *args ;
   void *percpu ;
   unsigned int percpu_size ;
   unsigned int num_tracepoints ;
   struct tracepoint * const *tracepoints_ptrs ;
   unsigned int num_trace_bprintk_fmt ;
   char const **trace_bprintk_fmt_start ;
   struct ftrace_event_call **trace_events ;
   unsigned int num_trace_events ;
   unsigned int num_ftrace_callsites ;
   unsigned long *ftrace_callsites ;
   struct list_head source_list ;
   struct list_head target_list ;
   struct task_struct *waiter ;
   void (*exit)(void) ;
   struct module_ref *refptr ;
   ctor_fn_t *ctors ;
   unsigned int num_ctors ;
};
struct kmem_cache_cpu {
   void **freelist ;
   unsigned long tid ;
   struct page *page ;
   int node ;
   unsigned int stat[19] ;
};
struct kmem_cache_node {
   spinlock_t list_lock ;
   unsigned long nr_partial ;
   struct list_head partial ;
   atomic_long_t nr_slabs ;
   atomic_long_t total_objects ;
   struct list_head full ;
};
struct kmem_cache_order_objects {
   unsigned long x ;
};
struct kmem_cache {
   struct kmem_cache_cpu *cpu_slab ;
   unsigned long flags ;
   unsigned long min_partial ;
   int size ;
   int objsize ;
   int offset ;
   struct kmem_cache_order_objects oo ;
   struct kmem_cache_order_objects max ;
   struct kmem_cache_order_objects min ;
   gfp_t allocflags ;
   int refcount ;
   void (*ctor)(void * ) ;
   int inuse ;
   int align ;
   int reserved ;
   char const *name ;
   struct list_head list ;
   struct kobject kobj ;
   int remote_node_defrag_ratio ;
   struct kmem_cache_node *node[1 << 10] ;
};
struct exception_table_entry {
   unsigned long insn ;
   unsigned long fixup ;
};
typedef unsigned long kernel_ulong_t;
struct usb_device_id {
   __u16 match_flags ;
   __u16 idVendor ;
   __u16 idProduct ;
   __u16 bcdDevice_lo ;
   __u16 bcdDevice_hi ;
   __u8 bDeviceClass ;
   __u8 bDeviceSubClass ;
   __u8 bDeviceProtocol ;
   __u8 bInterfaceClass ;
   __u8 bInterfaceSubClass ;
   __u8 bInterfaceProtocol ;
   kernel_ulong_t driver_info ;
};
struct of_device_id {
   char name[32] ;
   char type[32] ;
   char compatible[128] ;
   void *data ;
};
struct usb_device_descriptor {
   __u8 bLength ;
   __u8 bDescriptorType ;
   __le16 bcdUSB ;
   __u8 bDeviceClass ;
   __u8 bDeviceSubClass ;
   __u8 bDeviceProtocol ;
   __u8 bMaxPacketSize0 ;
   __le16 idVendor ;
   __le16 idProduct ;
   __le16 bcdDevice ;
   __u8 iManufacturer ;
   __u8 iProduct ;
   __u8 iSerialNumber ;
   __u8 bNumConfigurations ;
} __attribute__((__packed__)) ;
struct usb_config_descriptor {
   __u8 bLength ;
   __u8 bDescriptorType ;
   __le16 wTotalLength ;
   __u8 bNumInterfaces ;
   __u8 bConfigurationValue ;
   __u8 iConfiguration ;
   __u8 bmAttributes ;
   __u8 bMaxPower ;
} __attribute__((__packed__)) ;
struct usb_interface_descriptor {
   __u8 bLength ;
   __u8 bDescriptorType ;
   __u8 bInterfaceNumber ;
   __u8 bAlternateSetting ;
   __u8 bNumEndpoints ;
   __u8 bInterfaceClass ;
   __u8 bInterfaceSubClass ;
   __u8 bInterfaceProtocol ;
   __u8 iInterface ;
} __attribute__((__packed__)) ;
struct usb_endpoint_descriptor {
   __u8 bLength ;
   __u8 bDescriptorType ;
   __u8 bEndpointAddress ;
   __u8 bmAttributes ;
   __le16 wMaxPacketSize ;
   __u8 bInterval ;
   __u8 bRefresh ;
   __u8 bSynchAddress ;
} __attribute__((__packed__)) ;
struct usb_ss_ep_comp_descriptor {
   __u8 bLength ;
   __u8 bDescriptorType ;
   __u8 bMaxBurst ;
   __u8 bmAttributes ;
   __le16 wBytesPerInterval ;
} __attribute__((__packed__)) ;
struct usb_interface_assoc_descriptor {
   __u8 bLength ;
   __u8 bDescriptorType ;
   __u8 bFirstInterface ;
   __u8 bInterfaceCount ;
   __u8 bFunctionClass ;
   __u8 bFunctionSubClass ;
   __u8 bFunctionProtocol ;
   __u8 iFunction ;
} __attribute__((__packed__)) ;
enum usb_device_speed {
    USB_SPEED_UNKNOWN = 0,
    USB_SPEED_LOW = 1,
    USB_SPEED_FULL = 2,
    USB_SPEED_HIGH = 3,
    USB_SPEED_WIRELESS = 4,
    USB_SPEED_SUPER = 5
} ;
enum usb_device_state {
    USB_STATE_NOTATTACHED = 0,
    USB_STATE_ATTACHED = 1,
    USB_STATE_POWERED = 2,
    USB_STATE_RECONNECTING = 3,
    USB_STATE_UNAUTHENTICATED = 4,
    USB_STATE_DEFAULT = 5,
    USB_STATE_ADDRESS = 6,
    USB_STATE_CONFIGURED = 7,
    USB_STATE_SUSPENDED = 8
} ;
enum irqreturn {
    IRQ_NONE = 0,
    IRQ_HANDLED = 1,
    IRQ_WAKE_THREAD = 2
} ;
typedef enum irqreturn irqreturn_t;
struct seq_file;
struct proc_dir_entry;
struct proc_dir_entry;
struct proc_dir_entry;
struct proc_dir_entry;
struct irqaction;
struct irqaction;
struct irqaction;
struct proc_dir_entry;
struct pt_regs;
struct task_struct;
struct mm_struct;
struct pt_regs;
struct irqaction;
struct task_struct;
struct rb_node {
   unsigned long rb_parent_color ;
   struct rb_node *rb_right ;
   struct rb_node *rb_left ;
} __attribute__((__aligned__(sizeof(long )))) ;
struct rb_root {
   struct rb_node *rb_node ;
};
struct timerqueue_node {
   struct rb_node node ;
   ktime_t expires ;
};
struct timerqueue_head {
   struct rb_root head ;
   struct timerqueue_node *next ;
};
struct hrtimer_clock_base;
struct hrtimer_clock_base;
struct hrtimer_clock_base;
struct hrtimer_clock_base;
struct hrtimer_cpu_base;
struct hrtimer_cpu_base;
struct hrtimer_cpu_base;
struct hrtimer_cpu_base;
enum hrtimer_restart {
    HRTIMER_NORESTART = 0,
    HRTIMER_RESTART = 1
} ;
struct hrtimer {
   struct timerqueue_node node ;
   ktime_t _softexpires ;
   enum hrtimer_restart (*function)(struct hrtimer * ) ;
   struct hrtimer_clock_base *base ;
   unsigned long state ;
   int start_pid ;
   void *start_site ;
   char start_comm[16] ;
};
struct hrtimer_clock_base {
   struct hrtimer_cpu_base *cpu_base ;
   int index ;
   clockid_t clockid ;
   struct timerqueue_head active ;
   ktime_t resolution ;
   ktime_t (*get_time)(void) ;
   ktime_t softirq_time ;
   ktime_t offset ;
};
struct hrtimer_cpu_base {
   raw_spinlock_t lock ;
   unsigned long active_bases ;
   ktime_t expires_next ;
   int hres_active ;
   int hang_detected ;
   unsigned long nr_events ;
   unsigned long nr_retries ;
   unsigned long nr_hangs ;
   ktime_t max_hang_time ;
   struct hrtimer_clock_base clock_base[3] ;
};
struct irqaction;
struct irqaction {
   irqreturn_t (*handler)(int , void * ) ;
   unsigned long flags ;
   void *dev_id ;
   struct irqaction *next ;
   int irq ;
   irqreturn_t (*thread_fn)(int , void * ) ;
   struct task_struct *thread ;
   unsigned long thread_flags ;
   unsigned long thread_mask ;
   char const *name ;
   struct proc_dir_entry *dir ;
} __attribute__((__aligned__((1) << (12) ))) ;
struct device;
struct seq_file;
struct klist_node;
struct klist_node;
struct klist_node;
struct klist_node;
struct klist_node {
   void *n_klist ;
   struct list_head n_node ;
   struct kref n_ref ;
};
struct dma_map_ops;
struct dma_map_ops;
struct dma_map_ops;
struct dev_archdata {
   void *acpi_handle ;
   struct dma_map_ops *dma_ops ;
   void *iommu ;
};
struct device;
struct device_private;
struct device_private;
struct device_private;
struct device_private;
struct device_driver;
struct device_driver;
struct device_driver;
struct device_driver;
struct driver_private;
struct driver_private;
struct driver_private;
struct driver_private;
struct class;
struct class;
struct class;
struct class;
struct subsys_private;
struct subsys_private;
struct subsys_private;
struct subsys_private;
struct bus_type;
struct bus_type;
struct bus_type;
struct bus_type;
struct device_node;
struct device_node;
struct device_node;
struct device_node;
struct bus_attribute {
   struct attribute attr ;
   ssize_t (*show)(struct bus_type *bus , char *buf ) ;
   ssize_t (*store)(struct bus_type *bus , char const *buf , size_t count ) ;
};
struct device_attribute;
struct device_attribute;
struct device_attribute;
struct driver_attribute;
struct driver_attribute;
struct driver_attribute;
struct bus_type {
   char const *name ;
   struct bus_attribute *bus_attrs ;
   struct device_attribute *dev_attrs ;
   struct driver_attribute *drv_attrs ;
   int (*match)(struct device *dev , struct device_driver *drv ) ;
   int (*uevent)(struct device *dev , struct kobj_uevent_env *env ) ;
   int (*probe)(struct device *dev ) ;
   int (*remove)(struct device *dev ) ;
   void (*shutdown)(struct device *dev ) ;
   int (*suspend)(struct device *dev , pm_message_t state ) ;
   int (*resume)(struct device *dev ) ;
   struct dev_pm_ops const *pm ;
   struct subsys_private *p ;
};
struct device_driver {
   char const *name ;
   struct bus_type *bus ;
   struct module *owner ;
   char const *mod_name ;
   bool suppress_bind_attrs ;
   struct of_device_id const *of_match_table ;
   int (*probe)(struct device *dev ) ;
   int (*remove)(struct device *dev ) ;
   void (*shutdown)(struct device *dev ) ;
   int (*suspend)(struct device *dev , pm_message_t state ) ;
   int (*resume)(struct device *dev ) ;
   struct attribute_group const **groups ;
   struct dev_pm_ops const *pm ;
   struct driver_private *p ;
};
struct driver_attribute {
   struct attribute attr ;
   ssize_t (*show)(struct device_driver *driver , char *buf ) ;
   ssize_t (*store)(struct device_driver *driver , char const *buf , size_t count ) ;
};
struct class_attribute;
struct class_attribute;
struct class_attribute;
struct class {
   char const *name ;
   struct module *owner ;
   struct class_attribute *class_attrs ;
   struct device_attribute *dev_attrs ;
   struct bin_attribute *dev_bin_attrs ;
   struct kobject *dev_kobj ;
   int (*dev_uevent)(struct device *dev , struct kobj_uevent_env *env ) ;
   char *(*devnode)(struct device *dev , mode_t *mode ) ;
   void (*class_release)(struct class *class ) ;
   void (*dev_release)(struct device *dev ) ;
   int (*suspend)(struct device *dev , pm_message_t state ) ;
   int (*resume)(struct device *dev ) ;
   struct kobj_ns_type_operations const *ns_type ;
   void const *(*namespace)(struct device *dev ) ;
   struct dev_pm_ops const *pm ;
   struct subsys_private *p ;
};
struct device_type;
struct device_type;
struct device_type;
struct class_attribute {
   struct attribute attr ;
   ssize_t (*show)(struct class *class , struct class_attribute *attr , char *buf ) ;
   ssize_t (*store)(struct class *class , struct class_attribute *attr , char const *buf ,
                    size_t count ) ;
};
struct device_type {
   char const *name ;
   struct attribute_group const **groups ;
   int (*uevent)(struct device *dev , struct kobj_uevent_env *env ) ;
   char *(*devnode)(struct device *dev , mode_t *mode ) ;
   void (*release)(struct device *dev ) ;
   struct dev_pm_ops const *pm ;
};
struct device_attribute {
   struct attribute attr ;
   ssize_t (*show)(struct device *dev , struct device_attribute *attr , char *buf ) ;
   ssize_t (*store)(struct device *dev , struct device_attribute *attr , char const *buf ,
                    size_t count ) ;
};
struct device_dma_parameters {
   unsigned int max_segment_size ;
   unsigned long segment_boundary_mask ;
};
struct dma_coherent_mem;
struct dma_coherent_mem;
struct dma_coherent_mem;
struct device {
   struct device *parent ;
   struct device_private *p ;
   struct kobject kobj ;
   char const *init_name ;
   struct device_type const *type ;
   struct mutex mutex ;
   struct bus_type *bus ;
   struct device_driver *driver ;
   void *platform_data ;
   struct dev_pm_info power ;
   struct dev_power_domain *pwr_domain ;
   int numa_node ;
   u64 *dma_mask ;
   u64 coherent_dma_mask ;
   struct device_dma_parameters *dma_parms ;
   struct list_head dma_pools ;
   struct dma_coherent_mem *dma_mem ;
   struct dev_archdata archdata ;
   struct device_node *of_node ;
   dev_t devt ;
   spinlock_t devres_lock ;
   struct list_head devres_head ;
   struct klist_node knode_class ;
   struct class *class ;
   struct attribute_group const **groups ;
   void (*release)(struct device *dev ) ;
};
struct wakeup_source {
   char *name ;
   struct list_head entry ;
   spinlock_t lock ;
   struct timer_list timer ;
   unsigned long timer_expires ;
   ktime_t total_time ;
   ktime_t max_time ;
   ktime_t last_time ;
   unsigned long event_count ;
   unsigned long active_count ;
   unsigned long relax_count ;
   unsigned long hit_count ;
   unsigned int active : 1 ;
};
struct page;
struct block_device;
struct block_device;
struct block_device;
struct block_device;
struct hlist_bl_node;
struct hlist_bl_node;
struct hlist_bl_node;
struct hlist_bl_head {
   struct hlist_bl_node *first ;
};
struct hlist_bl_node {
   struct hlist_bl_node *next ;
   struct hlist_bl_node **pprev ;
};
struct nameidata;
struct nameidata;
struct nameidata;
struct nameidata;
struct path;
struct path;
struct path;
struct path;
struct vfsmount;
struct vfsmount;
struct vfsmount;
struct vfsmount;
struct qstr {
   unsigned int hash ;
   unsigned int len ;
   unsigned char const *name ;
};
struct inode;
struct inode;
struct inode;
struct dentry_operations;
struct dentry_operations;
struct dentry_operations;
struct super_block;
struct super_block;
struct super_block;
union __anonunion_d_u_206 {
   struct list_head d_child ;
   struct rcu_head d_rcu ;
};
struct dentry {
   unsigned int d_flags ;
   seqcount_t d_seq ;
   struct hlist_bl_node d_hash ;
   struct dentry *d_parent ;
   struct qstr d_name ;
   struct inode *d_inode ;
   unsigned char d_iname[32] ;
   unsigned int d_count ;
   spinlock_t d_lock ;
   struct dentry_operations const *d_op ;
   struct super_block *d_sb ;
   unsigned long d_time ;
   void *d_fsdata ;
   struct list_head d_lru ;
   union __anonunion_d_u_206 d_u ;
   struct list_head d_subdirs ;
   struct list_head d_alias ;
};
struct dentry_operations {
   int (*d_revalidate)(struct dentry * , struct nameidata * ) ;
   int (*d_hash)(struct dentry const * , struct inode const * , struct qstr * ) ;
   int (*d_compare)(struct dentry const * , struct inode const * , struct dentry const * ,
                    struct inode const * , unsigned int , char const * , struct qstr const * ) ;
   int (*d_delete)(struct dentry const * ) ;
   void (*d_release)(struct dentry * ) ;
   void (*d_iput)(struct dentry * , struct inode * ) ;
   char *(*d_dname)(struct dentry * , char * , int ) ;
   struct vfsmount *(*d_automount)(struct path * ) ;
   int (*d_manage)(struct dentry * , bool ) ;
} __attribute__((__aligned__((1) << (6) ))) ;
struct dentry;
struct vfsmount;
struct path {
   struct vfsmount *mnt ;
   struct dentry *dentry ;
};
struct radix_tree_node;
struct radix_tree_node;
struct radix_tree_node;
struct radix_tree_root {
   unsigned int height ;
   gfp_t gfp_mask ;
   struct radix_tree_node *rnode ;
};
struct prio_tree_node;
struct prio_tree_node;
struct prio_tree_node;
struct raw_prio_tree_node {
   struct prio_tree_node *left ;
   struct prio_tree_node *right ;
   struct prio_tree_node *parent ;
};
struct prio_tree_node {
   struct prio_tree_node *left ;
   struct prio_tree_node *right ;
   struct prio_tree_node *parent ;
   unsigned long start ;
   unsigned long last ;
};
struct prio_tree_root {
   struct prio_tree_node *prio_tree_node ;
   unsigned short index_bits ;
   unsigned short raw ;
};
enum pid_type {
    PIDTYPE_PID = 0,
    PIDTYPE_PGID = 1,
    PIDTYPE_SID = 2,
    PIDTYPE_MAX = 3
} ;
struct pid_namespace;
struct pid_namespace;
struct pid_namespace;
struct upid {
   int nr ;
   struct pid_namespace *ns ;
   struct hlist_node pid_chain ;
};
struct pid {
   atomic_t count ;
   unsigned int level ;
   struct hlist_head tasks[3] ;
   struct rcu_head rcu ;
   struct upid numbers[1] ;
};
struct pid_link {
   struct hlist_node node ;
   struct pid *pid ;
};
struct pid_namespace;
struct task_struct;
struct kernel_cap_struct {
   __u32 cap[2] ;
};
typedef struct kernel_cap_struct kernel_cap_t;
struct dentry;
struct user_namespace;
struct user_namespace;
struct user_namespace;
struct user_namespace;
struct fiemap_extent {
   __u64 fe_logical ;
   __u64 fe_physical ;
   __u64 fe_length ;
   __u64 fe_reserved64[2] ;
   __u32 fe_flags ;
   __u32 fe_reserved[3] ;
};
struct export_operations;
struct export_operations;
struct export_operations;
struct export_operations;
struct iovec;
struct iovec;
struct iovec;
struct iovec;
struct nameidata;
struct kiocb;
struct kiocb;
struct kiocb;
struct kiocb;
struct kobject;
struct pipe_inode_info;
struct pipe_inode_info;
struct pipe_inode_info;
struct pipe_inode_info;
struct poll_table_struct;
struct poll_table_struct;
struct poll_table_struct;
struct poll_table_struct;
struct kstatfs;
struct kstatfs;
struct kstatfs;
struct kstatfs;
struct vm_area_struct;
struct vfsmount;
struct cred;
struct iattr {
   unsigned int ia_valid ;
   umode_t ia_mode ;
   uid_t ia_uid ;
   gid_t ia_gid ;
   loff_t ia_size ;
   struct timespec ia_atime ;
   struct timespec ia_mtime ;
   struct timespec ia_ctime ;
   struct file *ia_file ;
};
struct if_dqinfo {
   __u64 dqi_bgrace ;
   __u64 dqi_igrace ;
   __u32 dqi_flags ;
   __u32 dqi_valid ;
};
struct fs_disk_quota {
   __s8 d_version ;
   __s8 d_flags ;
   __u16 d_fieldmask ;
   __u32 d_id ;
   __u64 d_blk_hardlimit ;
   __u64 d_blk_softlimit ;
   __u64 d_ino_hardlimit ;
   __u64 d_ino_softlimit ;
   __u64 d_bcount ;
   __u64 d_icount ;
   __s32 d_itimer ;
   __s32 d_btimer ;
   __u16 d_iwarns ;
   __u16 d_bwarns ;
   __s32 d_padding2 ;
   __u64 d_rtb_hardlimit ;
   __u64 d_rtb_softlimit ;
   __u64 d_rtbcount ;
   __s32 d_rtbtimer ;
   __u16 d_rtbwarns ;
   __s16 d_padding3 ;
   char d_padding4[8] ;
};
struct fs_qfilestat {
   __u64 qfs_ino ;
   __u64 qfs_nblks ;
   __u32 qfs_nextents ;
};
typedef struct fs_qfilestat fs_qfilestat_t;
struct fs_quota_stat {
   __s8 qs_version ;
   __u16 qs_flags ;
   __s8 qs_pad ;
   fs_qfilestat_t qs_uquota ;
   fs_qfilestat_t qs_gquota ;
   __u32 qs_incoredqs ;
   __s32 qs_btimelimit ;
   __s32 qs_itimelimit ;
   __s32 qs_rtbtimelimit ;
   __u16 qs_bwarnlimit ;
   __u16 qs_iwarnlimit ;
};
struct dquot;
struct dquot;
struct dquot;
struct dquot;
typedef __kernel_uid32_t qid_t;
typedef long long qsize_t;
struct mem_dqblk {
   qsize_t dqb_bhardlimit ;
   qsize_t dqb_bsoftlimit ;
   qsize_t dqb_curspace ;
   qsize_t dqb_rsvspace ;
   qsize_t dqb_ihardlimit ;
   qsize_t dqb_isoftlimit ;
   qsize_t dqb_curinodes ;
   time_t dqb_btime ;
   time_t dqb_itime ;
};
struct quota_format_type;
struct quota_format_type;
struct quota_format_type;
struct quota_format_type;
struct mem_dqinfo {
   struct quota_format_type *dqi_format ;
   int dqi_fmt_id ;
   struct list_head dqi_dirty_list ;
   unsigned long dqi_flags ;
   unsigned int dqi_bgrace ;
   unsigned int dqi_igrace ;
   qsize_t dqi_maxblimit ;
   qsize_t dqi_maxilimit ;
   void *dqi_priv ;
};
struct super_block;
struct dquot {
   struct hlist_node dq_hash ;
   struct list_head dq_inuse ;
   struct list_head dq_free ;
   struct list_head dq_dirty ;
   struct mutex dq_lock ;
   atomic_t dq_count ;
   wait_queue_head_t dq_wait_unused ;
   struct super_block *dq_sb ;
   unsigned int dq_id ;
   loff_t dq_off ;
   unsigned long dq_flags ;
   short dq_type ;
   struct mem_dqblk dq_dqb ;
};
struct quota_format_ops {
   int (*check_quota_file)(struct super_block *sb , int type ) ;
   int (*read_file_info)(struct super_block *sb , int type ) ;
   int (*write_file_info)(struct super_block *sb , int type ) ;
   int (*free_file_info)(struct super_block *sb , int type ) ;
   int (*read_dqblk)(struct dquot *dquot ) ;
   int (*commit_dqblk)(struct dquot *dquot ) ;
   int (*release_dqblk)(struct dquot *dquot ) ;
};
struct dquot_operations {
   int (*write_dquot)(struct dquot * ) ;
   struct dquot *(*alloc_dquot)(struct super_block * , int ) ;
   void (*destroy_dquot)(struct dquot * ) ;
   int (*acquire_dquot)(struct dquot * ) ;
   int (*release_dquot)(struct dquot * ) ;
   int (*mark_dirty)(struct dquot * ) ;
   int (*write_info)(struct super_block * , int ) ;
   qsize_t *(*get_reserved_space)(struct inode * ) ;
};
struct path;
struct quotactl_ops {
   int (*quota_on)(struct super_block * , int , int , struct path * ) ;
   int (*quota_on_meta)(struct super_block * , int , int ) ;
   int (*quota_off)(struct super_block * , int ) ;
   int (*quota_sync)(struct super_block * , int , int ) ;
   int (*get_info)(struct super_block * , int , struct if_dqinfo * ) ;
   int (*set_info)(struct super_block * , int , struct if_dqinfo * ) ;
   int (*get_dqblk)(struct super_block * , int , qid_t , struct fs_disk_quota * ) ;
   int (*set_dqblk)(struct super_block * , int , qid_t , struct fs_disk_quota * ) ;
   int (*get_xstate)(struct super_block * , struct fs_quota_stat * ) ;
   int (*set_xstate)(struct super_block * , unsigned int , int ) ;
};
struct quota_format_type {
   int qf_fmt_id ;
   struct quota_format_ops const *qf_ops ;
   struct module *qf_owner ;
   struct quota_format_type *qf_next ;
};
struct quota_info {
   unsigned int flags ;
   struct mutex dqio_mutex ;
   struct mutex dqonoff_mutex ;
   struct rw_semaphore dqptr_sem ;
   struct inode *files[2] ;
   struct mem_dqinfo info[2] ;
   struct quota_format_ops const *ops[2] ;
};
struct page;
struct address_space;
struct address_space;
struct address_space;
struct address_space;
struct writeback_control;
struct writeback_control;
struct writeback_control;
struct writeback_control;
union __anonunion_arg_214 {
   char *buf ;
   void *data ;
};
struct __anonstruct_read_descriptor_t_213 {
   size_t written ;
   size_t count ;
   union __anonunion_arg_214 arg ;
   int error ;
};
typedef struct __anonstruct_read_descriptor_t_213 read_descriptor_t;
struct address_space_operations {
   int (*writepage)(struct page *page , struct writeback_control *wbc ) ;
   int (*readpage)(struct file * , struct page * ) ;
   int (*writepages)(struct address_space * , struct writeback_control * ) ;
   int (*set_page_dirty)(struct page *page ) ;
   int (*readpages)(struct file *filp , struct address_space *mapping , struct list_head *pages ,
                    unsigned int nr_pages ) ;
   int (*write_begin)(struct file * , struct address_space *mapping , loff_t pos ,
                      unsigned int len , unsigned int flags , struct page **pagep ,
                      void **fsdata ) ;
   int (*write_end)(struct file * , struct address_space *mapping , loff_t pos , unsigned int len ,
                    unsigned int copied , struct page *page , void *fsdata ) ;
   sector_t (*bmap)(struct address_space * , sector_t ) ;
   void (*invalidatepage)(struct page * , unsigned long ) ;
   int (*releasepage)(struct page * , gfp_t ) ;
   void (*freepage)(struct page * ) ;
   ssize_t (*direct_IO)(int , struct kiocb * , struct iovec const *iov , loff_t offset ,
                        unsigned long nr_segs ) ;
   int (*get_xip_mem)(struct address_space * , unsigned long , int , void ** , unsigned long * ) ;
   int (*migratepage)(struct address_space * , struct page * , struct page * ) ;
   int (*launder_page)(struct page * ) ;
   int (*is_partially_uptodate)(struct page * , read_descriptor_t * , unsigned long ) ;
   int (*error_remove_page)(struct address_space * , struct page * ) ;
};
struct backing_dev_info;
struct backing_dev_info;
struct backing_dev_info;
struct backing_dev_info;
struct address_space {
   struct inode *host ;
   struct radix_tree_root page_tree ;
   spinlock_t tree_lock ;
   unsigned int i_mmap_writable ;
   struct prio_tree_root i_mmap ;
   struct list_head i_mmap_nonlinear ;
   struct mutex i_mmap_mutex ;
   unsigned long nrpages ;
   unsigned long writeback_index ;
   struct address_space_operations const *a_ops ;
   unsigned long flags ;
   struct backing_dev_info *backing_dev_info ;
   spinlock_t private_lock ;
   struct list_head private_list ;
   struct address_space *assoc_mapping ;
} __attribute__((__aligned__(sizeof(long )))) ;
struct hd_struct;
struct hd_struct;
struct hd_struct;
struct gendisk;
struct gendisk;
struct gendisk;
struct block_device {
   dev_t bd_dev ;
   int bd_openers ;
   struct inode *bd_inode ;
   struct super_block *bd_super ;
   struct mutex bd_mutex ;
   struct list_head bd_inodes ;
   void *bd_claiming ;
   void *bd_holder ;
   int bd_holders ;
   bool bd_write_holder ;
   struct list_head bd_holder_disks ;
   struct block_device *bd_contains ;
   unsigned int bd_block_size ;
   struct hd_struct *bd_part ;
   unsigned int bd_part_count ;
   int bd_invalidated ;
   struct gendisk *bd_disk ;
   struct list_head bd_list ;
   unsigned long bd_private ;
   int bd_fsfreeze_count ;
   struct mutex bd_fsfreeze_mutex ;
};
struct posix_acl;
struct posix_acl;
struct posix_acl;
struct posix_acl;
struct inode_operations;
struct inode_operations;
struct inode_operations;
union __anonunion____missing_field_name_215 {
   struct list_head i_dentry ;
   struct rcu_head i_rcu ;
};
struct file_operations;
struct file_operations;
struct file_operations;
struct file_lock;
struct file_lock;
struct file_lock;
struct cdev;
struct cdev;
struct cdev;
union __anonunion____missing_field_name_216 {
   struct pipe_inode_info *i_pipe ;
   struct block_device *i_bdev ;
   struct cdev *i_cdev ;
};
struct inode {
   umode_t i_mode ;
   uid_t i_uid ;
   gid_t i_gid ;
   struct inode_operations const *i_op ;
   struct super_block *i_sb ;
   spinlock_t i_lock ;
   unsigned int i_flags ;
   unsigned long i_state ;
   void *i_security ;
   struct mutex i_mutex ;
   unsigned long dirtied_when ;
   struct hlist_node i_hash ;
   struct list_head i_wb_list ;
   struct list_head i_lru ;
   struct list_head i_sb_list ;
   union __anonunion____missing_field_name_215 __annonCompField32 ;
   unsigned long i_ino ;
   atomic_t i_count ;
   unsigned int i_nlink ;
   dev_t i_rdev ;
   unsigned int i_blkbits ;
   u64 i_version ;
   loff_t i_size ;
   struct timespec i_atime ;
   struct timespec i_mtime ;
   struct timespec i_ctime ;
   blkcnt_t i_blocks ;
   unsigned short i_bytes ;
   struct rw_semaphore i_alloc_sem ;
   struct file_operations const *i_fop ;
   struct file_lock *i_flock ;
   struct address_space *i_mapping ;
   struct address_space i_data ;
   struct dquot *i_dquot[2] ;
   struct list_head i_devices ;
   union __anonunion____missing_field_name_216 __annonCompField33 ;
   __u32 i_generation ;
   __u32 i_fsnotify_mask ;
   struct hlist_head i_fsnotify_marks ;
   atomic_t i_readcount ;
   atomic_t i_writecount ;
   struct posix_acl *i_acl ;
   struct posix_acl *i_default_acl ;
   void *i_private ;
};
struct fown_struct {
   rwlock_t lock ;
   struct pid *pid ;
   enum pid_type pid_type ;
   uid_t uid ;
   uid_t euid ;
   int signum ;
};
struct file_ra_state {
   unsigned long start ;
   unsigned int size ;
   unsigned int async_size ;
   unsigned int ra_pages ;
   unsigned int mmap_miss ;
   loff_t prev_pos ;
};
union __anonunion_f_u_217 {
   struct list_head fu_list ;
   struct rcu_head fu_rcuhead ;
};
struct file {
   union __anonunion_f_u_217 f_u ;
   struct path f_path ;
   struct file_operations const *f_op ;
   spinlock_t f_lock ;
   int f_sb_list_cpu ;
   atomic_long_t f_count ;
   unsigned int f_flags ;
   fmode_t f_mode ;
   loff_t f_pos ;
   struct fown_struct f_owner ;
   struct cred const *f_cred ;
   struct file_ra_state f_ra ;
   u64 f_version ;
   void *f_security ;
   void *private_data ;
   struct list_head f_ep_links ;
   struct address_space *f_mapping ;
   unsigned long f_mnt_write_state ;
};
struct files_struct;
struct files_struct;
struct files_struct;
typedef struct files_struct *fl_owner_t;
struct file_lock_operations {
   void (*fl_copy_lock)(struct file_lock * , struct file_lock * ) ;
   void (*fl_release_private)(struct file_lock * ) ;
};
struct lock_manager_operations {
   int (*fl_compare_owner)(struct file_lock * , struct file_lock * ) ;
   void (*fl_notify)(struct file_lock * ) ;
   int (*fl_grant)(struct file_lock * , struct file_lock * , int ) ;
   void (*fl_release_private)(struct file_lock * ) ;
   void (*fl_break)(struct file_lock * ) ;
   int (*fl_change)(struct file_lock ** , int ) ;
};
struct nlm_lockowner;
struct nlm_lockowner;
struct nlm_lockowner;
struct nlm_lockowner;
struct nfs_lock_info {
   u32 state ;
   struct nlm_lockowner *owner ;
   struct list_head list ;
};
struct nfs4_lock_state;
struct nfs4_lock_state;
struct nfs4_lock_state;
struct nfs4_lock_state;
struct nfs4_lock_info {
   struct nfs4_lock_state *owner ;
};
struct fasync_struct;
struct fasync_struct;
struct fasync_struct;
struct __anonstruct_afs_219 {
   struct list_head link ;
   int state ;
};
union __anonunion_fl_u_218 {
   struct nfs_lock_info nfs_fl ;
   struct nfs4_lock_info nfs4_fl ;
   struct __anonstruct_afs_219 afs ;
};
struct file_lock {
   struct file_lock *fl_next ;
   struct list_head fl_link ;
   struct list_head fl_block ;
   fl_owner_t fl_owner ;
   unsigned char fl_flags ;
   unsigned char fl_type ;
   unsigned int fl_pid ;
   struct pid *fl_nspid ;
   wait_queue_head_t fl_wait ;
   struct file *fl_file ;
   loff_t fl_start ;
   loff_t fl_end ;
   struct fasync_struct *fl_fasync ;
   unsigned long fl_break_time ;
   struct file_lock_operations const *fl_ops ;
   struct lock_manager_operations const *fl_lmops ;
   union __anonunion_fl_u_218 fl_u ;
};
struct fasync_struct {
   spinlock_t fa_lock ;
   int magic ;
   int fa_fd ;
   struct fasync_struct *fa_next ;
   struct file *fa_file ;
   struct rcu_head fa_rcu ;
};
struct file_system_type;
struct file_system_type;
struct file_system_type;
struct super_operations;
struct super_operations;
struct super_operations;
struct xattr_handler;
struct xattr_handler;
struct xattr_handler;
struct mtd_info;
struct mtd_info;
struct mtd_info;
struct super_block {
   struct list_head s_list ;
   dev_t s_dev ;
   unsigned char s_dirt ;
   unsigned char s_blocksize_bits ;
   unsigned long s_blocksize ;
   loff_t s_maxbytes ;
   struct file_system_type *s_type ;
   struct super_operations const *s_op ;
   struct dquot_operations const *dq_op ;
   struct quotactl_ops const *s_qcop ;
   struct export_operations const *s_export_op ;
   unsigned long s_flags ;
   unsigned long s_magic ;
   struct dentry *s_root ;
   struct rw_semaphore s_umount ;
   struct mutex s_lock ;
   int s_count ;
   atomic_t s_active ;
   void *s_security ;
   struct xattr_handler const **s_xattr ;
   struct list_head s_inodes ;
   struct hlist_bl_head s_anon ;
   struct list_head *s_files ;
   struct list_head s_dentry_lru ;
   int s_nr_dentry_unused ;
   struct block_device *s_bdev ;
   struct backing_dev_info *s_bdi ;
   struct mtd_info *s_mtd ;
   struct list_head s_instances ;
   struct quota_info s_dquot ;
   int s_frozen ;
   wait_queue_head_t s_wait_unfrozen ;
   char s_id[32] ;
   u8 s_uuid[16] ;
   void *s_fs_info ;
   fmode_t s_mode ;
   u32 s_time_gran ;
   struct mutex s_vfs_rename_mutex ;
   char *s_subtype ;
   char *s_options ;
   struct dentry_operations const *s_d_op ;
   int cleancache_poolid ;
};
struct fiemap_extent_info {
   unsigned int fi_flags ;
   unsigned int fi_extents_mapped ;
   unsigned int fi_extents_max ;
   struct fiemap_extent *fi_extents_start ;
};
struct file_operations {
   struct module *owner ;
   loff_t (*llseek)(struct file * , loff_t , int ) ;
   ssize_t (*read)(struct file * , char * , size_t , loff_t * ) ;
   ssize_t (*write)(struct file * , char const * , size_t , loff_t * ) ;
   ssize_t (*aio_read)(struct kiocb * , struct iovec const * , unsigned long ,
                       loff_t ) ;
   ssize_t (*aio_write)(struct kiocb * , struct iovec const * , unsigned long ,
                        loff_t ) ;
   int (*readdir)(struct file * , void * , int (*)(void * , char const * , int ,
                                                   loff_t , u64 , unsigned int ) ) ;
   unsigned int (*poll)(struct file * , struct poll_table_struct * ) ;
   long (*unlocked_ioctl)(struct file * , unsigned int , unsigned long ) ;
   long (*compat_ioctl)(struct file * , unsigned int , unsigned long ) ;
   int (*mmap)(struct file * , struct vm_area_struct * ) ;
   int (*open)(struct inode * , struct file * ) ;
   int (*flush)(struct file * , fl_owner_t id ) ;
   int (*release)(struct inode * , struct file * ) ;
   int (*fsync)(struct file * , int datasync ) ;
   int (*aio_fsync)(struct kiocb * , int datasync ) ;
   int (*fasync)(int , struct file * , int ) ;
   int (*lock)(struct file * , int , struct file_lock * ) ;
   ssize_t (*sendpage)(struct file * , struct page * , int , size_t , loff_t * ,
                       int ) ;
   unsigned long (*get_unmapped_area)(struct file * , unsigned long , unsigned long ,
                                      unsigned long , unsigned long ) ;
   int (*check_flags)(int ) ;
   int (*flock)(struct file * , int , struct file_lock * ) ;
   ssize_t (*splice_write)(struct pipe_inode_info * , struct file * , loff_t * , size_t ,
                           unsigned int ) ;
   ssize_t (*splice_read)(struct file * , loff_t * , struct pipe_inode_info * , size_t ,
                          unsigned int ) ;
   int (*setlease)(struct file * , long , struct file_lock ** ) ;
   long (*fallocate)(struct file *file , int mode , loff_t offset , loff_t len ) ;
};
struct inode_operations {
   struct dentry *(*lookup)(struct inode * , struct dentry * , struct nameidata * ) ;
   void *(*follow_link)(struct dentry * , struct nameidata * ) ;
   int (*permission)(struct inode * , int , unsigned int ) ;
   int (*check_acl)(struct inode * , int , unsigned int ) ;
   int (*readlink)(struct dentry * , char * , int ) ;
   void (*put_link)(struct dentry * , struct nameidata * , void * ) ;
   int (*create)(struct inode * , struct dentry * , int , struct nameidata * ) ;
   int (*link)(struct dentry * , struct inode * , struct dentry * ) ;
   int (*unlink)(struct inode * , struct dentry * ) ;
   int (*symlink)(struct inode * , struct dentry * , char const * ) ;
   int (*mkdir)(struct inode * , struct dentry * , int ) ;
   int (*rmdir)(struct inode * , struct dentry * ) ;
   int (*mknod)(struct inode * , struct dentry * , int , dev_t ) ;
   int (*rename)(struct inode * , struct dentry * , struct inode * , struct dentry * ) ;
   void (*truncate)(struct inode * ) ;
   int (*setattr)(struct dentry * , struct iattr * ) ;
   int (*getattr)(struct vfsmount *mnt , struct dentry * , struct kstat * ) ;
   int (*setxattr)(struct dentry * , char const * , void const * , size_t , int ) ;
   ssize_t (*getxattr)(struct dentry * , char const * , void * , size_t ) ;
   ssize_t (*listxattr)(struct dentry * , char * , size_t ) ;
   int (*removexattr)(struct dentry * , char const * ) ;
   void (*truncate_range)(struct inode * , loff_t , loff_t ) ;
   int (*fiemap)(struct inode * , struct fiemap_extent_info * , u64 start , u64 len ) ;
} __attribute__((__aligned__((1) << (6) ))) ;
struct seq_file;
struct super_operations {
   struct inode *(*alloc_inode)(struct super_block *sb ) ;
   void (*destroy_inode)(struct inode * ) ;
   void (*dirty_inode)(struct inode * , int flags ) ;
   int (*write_inode)(struct inode * , struct writeback_control *wbc ) ;
   int (*drop_inode)(struct inode * ) ;
   void (*evict_inode)(struct inode * ) ;
   void (*put_super)(struct super_block * ) ;
   void (*write_super)(struct super_block * ) ;
   int (*sync_fs)(struct super_block *sb , int wait ) ;
   int (*freeze_fs)(struct super_block * ) ;
   int (*unfreeze_fs)(struct super_block * ) ;
   int (*statfs)(struct dentry * , struct kstatfs * ) ;
   int (*remount_fs)(struct super_block * , int * , char * ) ;
   void (*umount_begin)(struct super_block * ) ;
   int (*show_options)(struct seq_file * , struct vfsmount * ) ;
   int (*show_devname)(struct seq_file * , struct vfsmount * ) ;
   int (*show_path)(struct seq_file * , struct vfsmount * ) ;
   int (*show_stats)(struct seq_file * , struct vfsmount * ) ;
   ssize_t (*quota_read)(struct super_block * , int , char * , size_t , loff_t ) ;
   ssize_t (*quota_write)(struct super_block * , int , char const * , size_t ,
                          loff_t ) ;
   int (*bdev_try_to_free_page)(struct super_block * , struct page * , gfp_t ) ;
};
struct file_system_type {
   char const *name ;
   int fs_flags ;
   struct dentry *(*mount)(struct file_system_type * , int , char const * , void * ) ;
   void (*kill_sb)(struct super_block * ) ;
   struct module *owner ;
   struct file_system_type *next ;
   struct list_head fs_supers ;
   struct lock_class_key s_lock_key ;
   struct lock_class_key s_umount_key ;
   struct lock_class_key s_vfs_rename_key ;
   struct lock_class_key i_lock_key ;
   struct lock_class_key i_mutex_key ;
   struct lock_class_key i_mutex_dir_key ;
   struct lock_class_key i_alloc_sem_key ;
};
struct address_space;
struct __anonstruct____missing_field_name_223 {
   u16 inuse ;
   u16 objects ;
};
union __anonunion____missing_field_name_222 {
   atomic_t _mapcount ;
   struct __anonstruct____missing_field_name_223 __annonCompField34 ;
};
struct __anonstruct____missing_field_name_225 {
   unsigned long private ;
   struct address_space *mapping ;
};
union __anonunion____missing_field_name_224 {
   struct __anonstruct____missing_field_name_225 __annonCompField36 ;
   struct kmem_cache *slab ;
   struct page *first_page ;
};
union __anonunion____missing_field_name_226 {
   unsigned long index ;
   void *freelist ;
};
struct page {
   unsigned long flags ;
   atomic_t _count ;
   union __anonunion____missing_field_name_222 __annonCompField35 ;
   union __anonunion____missing_field_name_224 __annonCompField37 ;
   union __anonunion____missing_field_name_226 __annonCompField38 ;
   struct list_head lru ;
};
struct __anonstruct_vm_set_228 {
   struct list_head list ;
   void *parent ;
   struct vm_area_struct *head ;
};
union __anonunion_shared_227 {
   struct __anonstruct_vm_set_228 vm_set ;
   struct raw_prio_tree_node prio_tree_node ;
};
struct anon_vma;
struct anon_vma;
struct anon_vma;
struct vm_operations_struct;
struct vm_operations_struct;
struct vm_operations_struct;
struct mempolicy;
struct mempolicy;
struct mempolicy;
struct vm_area_struct {
   struct mm_struct *vm_mm ;
   unsigned long vm_start ;
   unsigned long vm_end ;
   struct vm_area_struct *vm_next ;
   struct vm_area_struct *vm_prev ;
   pgprot_t vm_page_prot ;
   unsigned long vm_flags ;
   struct rb_node vm_rb ;
   union __anonunion_shared_227 shared ;
   struct list_head anon_vma_chain ;
   struct anon_vma *anon_vma ;
   struct vm_operations_struct const *vm_ops ;
   unsigned long vm_pgoff ;
   struct file *vm_file ;
   void *vm_private_data ;
   struct mempolicy *vm_policy ;
};
struct core_thread {
   struct task_struct *task ;
   struct core_thread *next ;
};
struct core_state {
   atomic_t nr_threads ;
   struct core_thread dumper ;
   struct completion startup ;
};
struct mm_rss_stat {
   atomic_long_t count[3] ;
};
struct linux_binfmt;
struct linux_binfmt;
struct linux_binfmt;
struct mmu_notifier_mm;
struct mmu_notifier_mm;
struct mmu_notifier_mm;
struct mm_struct {
   struct vm_area_struct *mmap ;
   struct rb_root mm_rb ;
   struct vm_area_struct *mmap_cache ;
   unsigned long (*get_unmapped_area)(struct file *filp , unsigned long addr , unsigned long len ,
                                      unsigned long pgoff , unsigned long flags ) ;
   void (*unmap_area)(struct mm_struct *mm , unsigned long addr ) ;
   unsigned long mmap_base ;
   unsigned long task_size ;
   unsigned long cached_hole_size ;
   unsigned long free_area_cache ;
   pgd_t *pgd ;
   atomic_t mm_users ;
   atomic_t mm_count ;
   int map_count ;
   spinlock_t page_table_lock ;
   struct rw_semaphore mmap_sem ;
   struct list_head mmlist ;
   unsigned long hiwater_rss ;
   unsigned long hiwater_vm ;
   unsigned long total_vm ;
   unsigned long locked_vm ;
   unsigned long shared_vm ;
   unsigned long exec_vm ;
   unsigned long stack_vm ;
   unsigned long reserved_vm ;
   unsigned long def_flags ;
   unsigned long nr_ptes ;
   unsigned long start_code ;
   unsigned long end_code ;
   unsigned long start_data ;
   unsigned long end_data ;
   unsigned long start_brk ;
   unsigned long brk ;
   unsigned long start_stack ;
   unsigned long arg_start ;
   unsigned long arg_end ;
   unsigned long env_start ;
   unsigned long env_end ;
   unsigned long saved_auxv[44] ;
   struct mm_rss_stat rss_stat ;
   struct linux_binfmt *binfmt ;
   cpumask_var_t cpu_vm_mask_var ;
   mm_context_t context ;
   unsigned int faultstamp ;
   unsigned int token_priority ;
   unsigned int last_interval ;
   atomic_t oom_disable_count ;
   unsigned long flags ;
   struct core_state *core_state ;
   spinlock_t ioctx_lock ;
   struct hlist_head ioctx_list ;
   struct task_struct *owner ;
   struct file *exe_file ;
   unsigned long num_exe_file_vmas ;
   struct mmu_notifier_mm *mmu_notifier_mm ;
   pgtable_t pmd_huge_pte ;
   struct cpumask cpumask_allocation ;
};
typedef unsigned long cputime_t;
struct task_struct;
struct sem_undo_list;
struct sem_undo_list;
struct sem_undo_list;
struct sem_undo_list {
   atomic_t refcnt ;
   spinlock_t lock ;
   struct list_head list_proc ;
};
struct sysv_sem {
   struct sem_undo_list *undo_list ;
};
struct siginfo;
struct siginfo;
struct siginfo;
struct siginfo;
struct __anonstruct_sigset_t_230 {
   unsigned long sig[1] ;
};
typedef struct __anonstruct_sigset_t_230 sigset_t;
typedef void __signalfn_t(int );
typedef __signalfn_t *__sighandler_t;
typedef void __restorefn_t(void);
typedef __restorefn_t *__sigrestore_t;
struct sigaction {
   __sighandler_t sa_handler ;
   unsigned long sa_flags ;
   __sigrestore_t sa_restorer ;
   sigset_t sa_mask ;
};
struct k_sigaction {
   struct sigaction sa ;
};
union sigval {
   int sival_int ;
   void *sival_ptr ;
};
typedef union sigval sigval_t;
struct __anonstruct__kill_232 {
   __kernel_pid_t _pid ;
   __kernel_uid32_t _uid ;
};
struct __anonstruct__timer_233 {
   __kernel_timer_t _tid ;
   int _overrun ;
   char _pad[sizeof(__kernel_uid32_t ) - sizeof(int )] ;
   sigval_t _sigval ;
   int _sys_private ;
};
struct __anonstruct__rt_234 {
   __kernel_pid_t _pid ;
   __kernel_uid32_t _uid ;
   sigval_t _sigval ;
};
struct __anonstruct__sigchld_235 {
   __kernel_pid_t _pid ;
   __kernel_uid32_t _uid ;
   int _status ;
   __kernel_clock_t _utime ;
   __kernel_clock_t _stime ;
};
struct __anonstruct__sigfault_236 {
   void *_addr ;
   short _addr_lsb ;
};
struct __anonstruct__sigpoll_237 {
   long _band ;
   int _fd ;
};
union __anonunion__sifields_231 {
   int _pad[(128UL - 4UL * sizeof(int )) / sizeof(int )] ;
   struct __anonstruct__kill_232 _kill ;
   struct __anonstruct__timer_233 _timer ;
   struct __anonstruct__rt_234 _rt ;
   struct __anonstruct__sigchld_235 _sigchld ;
   struct __anonstruct__sigfault_236 _sigfault ;
   struct __anonstruct__sigpoll_237 _sigpoll ;
};
struct siginfo {
   int si_signo ;
   int si_errno ;
   int si_code ;
   union __anonunion__sifields_231 _sifields ;
};
typedef struct siginfo siginfo_t;
struct siginfo;
struct task_struct;
struct user_struct;
struct user_struct;
struct user_struct;
struct sigpending {
   struct list_head list ;
   sigset_t signal ;
};
struct timespec;
struct pt_regs;
struct prop_local_single {
   unsigned long events ;
   unsigned long period ;
   int shift ;
   spinlock_t lock ;
};
struct __anonstruct_seccomp_t_240 {
   int mode ;
};
typedef struct __anonstruct_seccomp_t_240 seccomp_t;
struct plist_head {
   struct list_head node_list ;
   raw_spinlock_t *rawlock ;
   spinlock_t *spinlock ;
};
struct plist_node {
   int prio ;
   struct list_head prio_list ;
   struct list_head node_list ;
};
struct rt_mutex_waiter;
struct rt_mutex_waiter;
struct rt_mutex_waiter;
struct rt_mutex_waiter;
struct rlimit {
   unsigned long rlim_cur ;
   unsigned long rlim_max ;
};
struct task_struct;
struct task_io_accounting {
   u64 rchar ;
   u64 wchar ;
   u64 syscr ;
   u64 syscw ;
   u64 read_bytes ;
   u64 write_bytes ;
   u64 cancelled_write_bytes ;
};
struct latency_record {
   unsigned long backtrace[12] ;
   unsigned int count ;
   unsigned long time ;
   unsigned long max ;
};
struct task_struct;
typedef int32_t key_serial_t;
typedef uint32_t key_perm_t;
struct key;
struct key;
struct key;
struct key;
struct seq_file;
struct user_struct;
struct signal_struct;
struct signal_struct;
struct signal_struct;
struct signal_struct;
struct cred;
struct key_type;
struct key_type;
struct key_type;
struct key_type;
struct keyring_list;
struct keyring_list;
struct keyring_list;
struct keyring_list;
struct key_user;
struct key_user;
struct key_user;
union __anonunion____missing_field_name_241 {
   time_t expiry ;
   time_t revoked_at ;
};
union __anonunion_type_data_242 {
   struct list_head link ;
   unsigned long x[2] ;
   void *p[2] ;
   int reject_error ;
};
union __anonunion_payload_243 {
   unsigned long value ;
   void *rcudata ;
   void *data ;
   struct keyring_list *subscriptions ;
};
struct key {
   atomic_t usage ;
   key_serial_t serial ;
   struct rb_node serial_node ;
   struct key_type *type ;
   struct rw_semaphore sem ;
   struct key_user *user ;
   void *security ;
   union __anonunion____missing_field_name_241 __annonCompField39 ;
   uid_t uid ;
   gid_t gid ;
   key_perm_t perm ;
   unsigned short quotalen ;
   unsigned short datalen ;
   unsigned long flags ;
   char *description ;
   union __anonunion_type_data_242 type_data ;
   union __anonunion_payload_243 payload ;
};
struct audit_context;
struct audit_context;
struct audit_context;
struct audit_context;
struct user_struct;
struct cred;
struct inode;
struct group_info {
   atomic_t usage ;
   int ngroups ;
   int nblocks ;
   gid_t small_block[32] ;
   gid_t *blocks[0] ;
};
struct thread_group_cred {
   atomic_t usage ;
   pid_t tgid ;
   spinlock_t lock ;
   struct key *session_keyring ;
   struct key *process_keyring ;
   struct rcu_head rcu ;
};
struct cred {
   atomic_t usage ;
   atomic_t subscribers ;
   void *put_addr ;
   unsigned int magic ;
   uid_t uid ;
   gid_t gid ;
   uid_t suid ;
   gid_t sgid ;
   uid_t euid ;
   gid_t egid ;
   uid_t fsuid ;
   gid_t fsgid ;
   unsigned int securebits ;
   kernel_cap_t cap_inheritable ;
   kernel_cap_t cap_permitted ;
   kernel_cap_t cap_effective ;
   kernel_cap_t cap_bset ;
   unsigned char jit_keyring ;
   struct key *thread_keyring ;
   struct key *request_key_auth ;
   struct thread_group_cred *tgcred ;
   void *security ;
   struct user_struct *user ;
   struct user_namespace *user_ns ;
   struct group_info *group_info ;
   struct rcu_head rcu ;
};
struct futex_pi_state;
struct futex_pi_state;
struct futex_pi_state;
struct futex_pi_state;
struct robust_list_head;
struct robust_list_head;
struct robust_list_head;
struct robust_list_head;
struct bio_list;
struct bio_list;
struct bio_list;
struct bio_list;
struct fs_struct;
struct fs_struct;
struct fs_struct;
struct fs_struct;
struct perf_event_context;
struct perf_event_context;
struct perf_event_context;
struct perf_event_context;
struct blk_plug;
struct blk_plug;
struct blk_plug;
struct blk_plug;
struct seq_file;
struct cfs_rq;
struct cfs_rq;
struct cfs_rq;
struct cfs_rq;
struct task_struct;
struct nsproxy;
struct user_namespace;
struct io_event {
   __u64 data ;
   __u64 obj ;
   __s64 res ;
   __s64 res2 ;
};
struct iovec {
   void *iov_base ;
   __kernel_size_t iov_len ;
};
struct kioctx;
struct kioctx;
struct kioctx;
struct kioctx;
union __anonunion_ki_obj_245 {
   void *user ;
   struct task_struct *tsk ;
};
struct eventfd_ctx;
struct eventfd_ctx;
struct eventfd_ctx;
struct kiocb {
   struct list_head ki_run_list ;
   unsigned long ki_flags ;
   int ki_users ;
   unsigned int ki_key ;
   struct file *ki_filp ;
   struct kioctx *ki_ctx ;
   int (*ki_cancel)(struct kiocb * , struct io_event * ) ;
   ssize_t (*ki_retry)(struct kiocb * ) ;
   void (*ki_dtor)(struct kiocb * ) ;
   union __anonunion_ki_obj_245 ki_obj ;
   __u64 ki_user_data ;
   loff_t ki_pos ;
   void *private ;
   unsigned short ki_opcode ;
   size_t ki_nbytes ;
   char *ki_buf ;
   size_t ki_left ;
   struct iovec ki_inline_vec ;
   struct iovec *ki_iovec ;
   unsigned long ki_nr_segs ;
   unsigned long ki_cur_seg ;
   struct list_head ki_list ;
   struct eventfd_ctx *ki_eventfd ;
};
struct aio_ring_info {
   unsigned long mmap_base ;
   unsigned long mmap_size ;
   struct page **ring_pages ;
   spinlock_t ring_lock ;
   long nr_pages ;
   unsigned int nr ;
   unsigned int tail ;
   struct page *internal_pages[8] ;
};
struct kioctx {
   atomic_t users ;
   int dead ;
   struct mm_struct *mm ;
   unsigned long user_id ;
   struct hlist_node list ;
   wait_queue_head_t wait ;
   spinlock_t ctx_lock ;
   int reqs_active ;
   struct list_head active_reqs ;
   struct list_head run_list ;
   unsigned int max_reqs ;
   struct aio_ring_info ring_info ;
   struct delayed_work wq ;
   struct rcu_head rcu_head ;
};
struct mm_struct;
struct sighand_struct {
   atomic_t count ;
   struct k_sigaction action[64] ;
   spinlock_t siglock ;
   wait_queue_head_t signalfd_wqh ;
};
struct pacct_struct {
   int ac_flag ;
   long ac_exitcode ;
   unsigned long ac_mem ;
   cputime_t ac_utime ;
   cputime_t ac_stime ;
   unsigned long ac_minflt ;
   unsigned long ac_majflt ;
};
struct cpu_itimer {
   cputime_t expires ;
   cputime_t incr ;
   u32 error ;
   u32 incr_error ;
};
struct task_cputime {
   cputime_t utime ;
   cputime_t stime ;
   unsigned long long sum_exec_runtime ;
};
struct thread_group_cputimer {
   struct task_cputime cputime ;
   int running ;
   spinlock_t lock ;
};
struct autogroup;
struct autogroup;
struct autogroup;
struct autogroup;
struct tty_struct;
struct tty_struct;
struct tty_struct;
struct taskstats;
struct taskstats;
struct taskstats;
struct tty_audit_buf;
struct tty_audit_buf;
struct tty_audit_buf;
struct signal_struct {
   atomic_t sigcnt ;
   atomic_t live ;
   int nr_threads ;
   wait_queue_head_t wait_chldexit ;
   struct task_struct *curr_target ;
   struct sigpending shared_pending ;
   int group_exit_code ;
   int notify_count ;
   struct task_struct *group_exit_task ;
   int group_stop_count ;
   unsigned int flags ;
   struct list_head posix_timers ;
   struct hrtimer real_timer ;
   struct pid *leader_pid ;
   ktime_t it_real_incr ;
   struct cpu_itimer it[2] ;
   struct thread_group_cputimer cputimer ;
   struct task_cputime cputime_expires ;
   struct list_head cpu_timers[3] ;
   struct pid *tty_old_pgrp ;
   int leader ;
   struct tty_struct *tty ;
   struct autogroup *autogroup ;
   cputime_t utime ;
   cputime_t stime ;
   cputime_t cutime ;
   cputime_t cstime ;
   cputime_t gtime ;
   cputime_t cgtime ;
   cputime_t prev_utime ;
   cputime_t prev_stime ;
   unsigned long nvcsw ;
   unsigned long nivcsw ;
   unsigned long cnvcsw ;
   unsigned long cnivcsw ;
   unsigned long min_flt ;
   unsigned long maj_flt ;
   unsigned long cmin_flt ;
   unsigned long cmaj_flt ;
   unsigned long inblock ;
   unsigned long oublock ;
   unsigned long cinblock ;
   unsigned long coublock ;
   unsigned long maxrss ;
   unsigned long cmaxrss ;
   struct task_io_accounting ioac ;
   unsigned long long sum_sched_runtime ;
   struct rlimit rlim[16] ;
   struct pacct_struct pacct ;
   struct taskstats *stats ;
   unsigned int audit_tty ;
   struct tty_audit_buf *tty_audit_buf ;
   struct rw_semaphore threadgroup_fork_lock ;
   int oom_adj ;
   int oom_score_adj ;
   int oom_score_adj_min ;
   struct mutex cred_guard_mutex ;
};
struct user_struct {
   atomic_t __count ;
   atomic_t processes ;
   atomic_t files ;
   atomic_t sigpending ;
   atomic_t inotify_watches ;
   atomic_t inotify_devs ;
   atomic_t fanotify_listeners ;
   atomic_long_t epoll_watches ;
   unsigned long mq_bytes ;
   unsigned long locked_shm ;
   struct key *uid_keyring ;
   struct key *session_keyring ;
   struct hlist_node uidhash_node ;
   uid_t uid ;
   struct user_namespace *user_ns ;
   atomic_long_t locked_vm ;
};
struct backing_dev_info;
struct reclaim_state;
struct reclaim_state;
struct reclaim_state;
struct reclaim_state;
struct sched_info {
   unsigned long pcount ;
   unsigned long long run_delay ;
   unsigned long long last_arrival ;
   unsigned long long last_queued ;
};
struct task_delay_info {
   spinlock_t lock ;
   unsigned int flags ;
   struct timespec blkio_start ;
   struct timespec blkio_end ;
   u64 blkio_delay ;
   u64 swapin_delay ;
   u32 blkio_count ;
   u32 swapin_count ;
   struct timespec freepages_start ;
   struct timespec freepages_end ;
   u64 freepages_delay ;
   u32 freepages_count ;
};
struct io_context;
struct io_context;
struct io_context;
struct io_context;
struct audit_context;
struct mempolicy;
struct pipe_inode_info;
struct rq;
struct rq;
struct rq;
struct rq;
struct sched_class {
   struct sched_class const *next ;
   void (*enqueue_task)(struct rq *rq , struct task_struct *p , int flags ) ;
   void (*dequeue_task)(struct rq *rq , struct task_struct *p , int flags ) ;
   void (*yield_task)(struct rq *rq ) ;
   bool (*yield_to_task)(struct rq *rq , struct task_struct *p , bool preempt ) ;
   void (*check_preempt_curr)(struct rq *rq , struct task_struct *p , int flags ) ;
   struct task_struct *(*pick_next_task)(struct rq *rq ) ;
   void (*put_prev_task)(struct rq *rq , struct task_struct *p ) ;
   int (*select_task_rq)(struct task_struct *p , int sd_flag , int flags ) ;
   void (*pre_schedule)(struct rq *this_rq , struct task_struct *task ) ;
   void (*post_schedule)(struct rq *this_rq ) ;
   void (*task_waking)(struct task_struct *task ) ;
   void (*task_woken)(struct rq *this_rq , struct task_struct *task ) ;
   void (*set_cpus_allowed)(struct task_struct *p , struct cpumask const *newmask ) ;
   void (*rq_online)(struct rq *rq ) ;
   void (*rq_offline)(struct rq *rq ) ;
   void (*set_curr_task)(struct rq *rq ) ;
   void (*task_tick)(struct rq *rq , struct task_struct *p , int queued ) ;
   void (*task_fork)(struct task_struct *p ) ;
   void (*switched_from)(struct rq *this_rq , struct task_struct *task ) ;
   void (*switched_to)(struct rq *this_rq , struct task_struct *task ) ;
   void (*prio_changed)(struct rq *this_rq , struct task_struct *task , int oldprio ) ;
   unsigned int (*get_rr_interval)(struct rq *rq , struct task_struct *task ) ;
   void (*task_move_group)(struct task_struct *p , int on_rq ) ;
};
struct load_weight {
   unsigned long weight ;
   unsigned long inv_weight ;
};
struct sched_statistics {
   u64 wait_start ;
   u64 wait_max ;
   u64 wait_count ;
   u64 wait_sum ;
   u64 iowait_count ;
   u64 iowait_sum ;
   u64 sleep_start ;
   u64 sleep_max ;
   s64 sum_sleep_runtime ;
   u64 block_start ;
   u64 block_max ;
   u64 exec_max ;
   u64 slice_max ;
   u64 nr_migrations_cold ;
   u64 nr_failed_migrations_affine ;
   u64 nr_failed_migrations_running ;
   u64 nr_failed_migrations_hot ;
   u64 nr_forced_migrations ;
   u64 nr_wakeups ;
   u64 nr_wakeups_sync ;
   u64 nr_wakeups_migrate ;
   u64 nr_wakeups_local ;
   u64 nr_wakeups_remote ;
   u64 nr_wakeups_affine ;
   u64 nr_wakeups_affine_attempts ;
   u64 nr_wakeups_passive ;
   u64 nr_wakeups_idle ;
};
struct sched_entity {
   struct load_weight load ;
   struct rb_node run_node ;
   struct list_head group_node ;
   unsigned int on_rq ;
   u64 exec_start ;
   u64 sum_exec_runtime ;
   u64 vruntime ;
   u64 prev_sum_exec_runtime ;
   u64 nr_migrations ;
   struct sched_statistics statistics ;
   struct sched_entity *parent ;
   struct cfs_rq *cfs_rq ;
   struct cfs_rq *my_q ;
};
struct rt_rq;
struct rt_rq;
struct rt_rq;
struct sched_rt_entity {
   struct list_head run_list ;
   unsigned long timeout ;
   unsigned int time_slice ;
   int nr_cpus_allowed ;
   struct sched_rt_entity *back ;
   struct sched_rt_entity *parent ;
   struct rt_rq *rt_rq ;
   struct rt_rq *my_q ;
};
struct css_set;
struct css_set;
struct css_set;
struct compat_robust_list_head;
struct compat_robust_list_head;
struct compat_robust_list_head;
struct ftrace_ret_stack;
struct ftrace_ret_stack;
struct ftrace_ret_stack;
struct mem_cgroup;
struct mem_cgroup;
struct mem_cgroup;
struct memcg_batch_info {
   int do_batch ;
   struct mem_cgroup *memcg ;
   unsigned long nr_pages ;
   unsigned long memsw_nr_pages ;
};
struct task_struct {
   long volatile state ;
   void *stack ;
   atomic_t usage ;
   unsigned int flags ;
   unsigned int ptrace ;
   struct task_struct *wake_entry ;
   int on_cpu ;
   int on_rq ;
   int prio ;
   int static_prio ;
   int normal_prio ;
   unsigned int rt_priority ;
   struct sched_class const *sched_class ;
   struct sched_entity se ;
   struct sched_rt_entity rt ;
   struct hlist_head preempt_notifiers ;
   unsigned char fpu_counter ;
   unsigned int btrace_seq ;
   unsigned int policy ;
   cpumask_t cpus_allowed ;
   struct sched_info sched_info ;
   struct list_head tasks ;
   struct plist_node pushable_tasks ;
   struct mm_struct *mm ;
   struct mm_struct *active_mm ;
   unsigned int brk_randomized : 1 ;
   int exit_state ;
   int exit_code ;
   int exit_signal ;
   int pdeath_signal ;
   unsigned int group_stop ;
   unsigned int personality ;
   unsigned int did_exec : 1 ;
   unsigned int in_execve : 1 ;
   unsigned int in_iowait : 1 ;
   unsigned int sched_reset_on_fork : 1 ;
   unsigned int sched_contributes_to_load : 1 ;
   pid_t pid ;
   pid_t tgid ;
   unsigned long stack_canary ;
   struct task_struct *real_parent ;
   struct task_struct *parent ;
   struct list_head children ;
   struct list_head sibling ;
   struct task_struct *group_leader ;
   struct list_head ptraced ;
   struct list_head ptrace_entry ;
   struct pid_link pids[3] ;
   struct list_head thread_group ;
   struct completion *vfork_done ;
   int *set_child_tid ;
   int *clear_child_tid ;
   cputime_t utime ;
   cputime_t stime ;
   cputime_t utimescaled ;
   cputime_t stimescaled ;
   cputime_t gtime ;
   cputime_t prev_utime ;
   cputime_t prev_stime ;
   unsigned long nvcsw ;
   unsigned long nivcsw ;
   struct timespec start_time ;
   struct timespec real_start_time ;
   unsigned long min_flt ;
   unsigned long maj_flt ;
   struct task_cputime cputime_expires ;
   struct list_head cpu_timers[3] ;
   struct cred const *real_cred ;
   struct cred const *cred ;
   struct cred *replacement_session_keyring ;
   char comm[16] ;
   int link_count ;
   int total_link_count ;
   struct sysv_sem sysvsem ;
   unsigned long last_switch_count ;
   struct thread_struct thread ;
   struct fs_struct *fs ;
   struct files_struct *files ;
   struct nsproxy *nsproxy ;
   struct signal_struct *signal ;
   struct sighand_struct *sighand ;
   sigset_t blocked ;
   sigset_t real_blocked ;
   sigset_t saved_sigmask ;
   struct sigpending pending ;
   unsigned long sas_ss_sp ;
   size_t sas_ss_size ;
   int (*notifier)(void *priv ) ;
   void *notifier_data ;
   sigset_t *notifier_mask ;
   struct audit_context *audit_context ;
   uid_t loginuid ;
   unsigned int sessionid ;
   seccomp_t seccomp ;
   u32 parent_exec_id ;
   u32 self_exec_id ;
   spinlock_t alloc_lock ;
   struct irqaction *irqaction ;
   raw_spinlock_t pi_lock ;
   struct plist_head pi_waiters ;
   struct rt_mutex_waiter *pi_blocked_on ;
   struct mutex_waiter *blocked_on ;
   unsigned int irq_events ;
   unsigned long hardirq_enable_ip ;
   unsigned long hardirq_disable_ip ;
   unsigned int hardirq_enable_event ;
   unsigned int hardirq_disable_event ;
   int hardirqs_enabled ;
   int hardirq_context ;
   unsigned long softirq_disable_ip ;
   unsigned long softirq_enable_ip ;
   unsigned int softirq_disable_event ;
   unsigned int softirq_enable_event ;
   int softirqs_enabled ;
   int softirq_context ;
   u64 curr_chain_key ;
   int lockdep_depth ;
   unsigned int lockdep_recursion ;
   struct held_lock held_locks[48UL] ;
   gfp_t lockdep_reclaim_gfp ;
   void *journal_info ;
   struct bio_list *bio_list ;
   struct blk_plug *plug ;
   struct reclaim_state *reclaim_state ;
   struct backing_dev_info *backing_dev_info ;
   struct io_context *io_context ;
   unsigned long ptrace_message ;
   siginfo_t *last_siginfo ;
   struct task_io_accounting ioac ;
   u64 acct_rss_mem1 ;
   u64 acct_vm_mem1 ;
   cputime_t acct_timexpd ;
   nodemask_t mems_allowed ;
   int mems_allowed_change_disable ;
   int cpuset_mem_spread_rotor ;
   int cpuset_slab_spread_rotor ;
   struct css_set *cgroups ;
   struct list_head cg_list ;
   struct robust_list_head *robust_list ;
   struct compat_robust_list_head *compat_robust_list ;
   struct list_head pi_state_list ;
   struct futex_pi_state *pi_state_cache ;
   struct perf_event_context *perf_event_ctxp[2] ;
   struct mutex perf_event_mutex ;
   struct list_head perf_event_list ;
   struct mempolicy *mempolicy ;
   short il_next ;
   short pref_node_fork ;
   atomic_t fs_excl ;
   struct rcu_head rcu ;
   struct pipe_inode_info *splice_pipe ;
   struct task_delay_info *delays ;
   int make_it_fail ;
   struct prop_local_single dirties ;
   int latency_record_count ;
   struct latency_record latency_record[32] ;
   unsigned long timer_slack_ns ;
   unsigned long default_timer_slack_ns ;
   struct list_head *scm_work_list ;
   int curr_ret_stack ;
   struct ftrace_ret_stack *ret_stack ;
   unsigned long long ftrace_timestamp ;
   atomic_t trace_overrun ;
   atomic_t tracing_graph_pause ;
   unsigned long trace ;
   unsigned long trace_recursion ;
   struct memcg_batch_info memcg_batch ;
   atomic_t ptrace_bp_refcnt ;
};
struct pid_namespace;
struct usb_device;
struct usb_device;
struct usb_device;
struct usb_device;
struct usb_driver;
struct usb_driver;
struct usb_driver;
struct usb_driver;
struct wusb_dev;
struct wusb_dev;
struct wusb_dev;
struct wusb_dev;
struct ep_device;
struct ep_device;
struct ep_device;
struct ep_device;
struct usb_host_endpoint {
   struct usb_endpoint_descriptor desc ;
   struct usb_ss_ep_comp_descriptor ss_ep_comp ;
   struct list_head urb_list ;
   void *hcpriv ;
   struct ep_device *ep_dev ;
   unsigned char *extra ;
   int extralen ;
   int enabled ;
};
struct usb_host_interface {
   struct usb_interface_descriptor desc ;
   struct usb_host_endpoint *endpoint ;
   char *string ;
   unsigned char *extra ;
   int extralen ;
};
enum usb_interface_condition {
    USB_INTERFACE_UNBOUND = 0,
    USB_INTERFACE_BINDING = 1,
    USB_INTERFACE_BOUND = 2,
    USB_INTERFACE_UNBINDING = 3
} ;
struct usb_interface {
   struct usb_host_interface *altsetting ;
   struct usb_host_interface *cur_altsetting ;
   unsigned int num_altsetting ;
   struct usb_interface_assoc_descriptor *intf_assoc ;
   int minor ;
   enum usb_interface_condition condition ;
   unsigned int sysfs_files_created : 1 ;
   unsigned int ep_devs_created : 1 ;
   unsigned int unregistering : 1 ;
   unsigned int needs_remote_wakeup : 1 ;
   unsigned int needs_altsetting0 : 1 ;
   unsigned int needs_binding : 1 ;
   unsigned int reset_running : 1 ;
   unsigned int resetting_device : 1 ;
   struct device dev ;
   struct device *usb_dev ;
   atomic_t pm_usage_cnt ;
   struct work_struct reset_ws ;
};
struct usb_interface_cache {
   unsigned int num_altsetting ;
   struct kref ref ;
   struct usb_host_interface altsetting[0] ;
};
struct usb_host_config {
   struct usb_config_descriptor desc ;
   char *string ;
   struct usb_interface_assoc_descriptor *intf_assoc[16] ;
   struct usb_interface *interface[32] ;
   struct usb_interface_cache *intf_cache[32] ;
   unsigned char *extra ;
   int extralen ;
};
struct usb_devmap {
   unsigned long devicemap[128UL / (8UL * sizeof(unsigned long ))] ;
};
struct mon_bus;
struct mon_bus;
struct mon_bus;
struct usb_bus {
   struct device *controller ;
   int busnum ;
   char const *bus_name ;
   u8 uses_dma ;
   u8 uses_pio_for_control ;
   u8 otg_port ;
   unsigned int is_b_host : 1 ;
   unsigned int b_hnp_enable : 1 ;
   unsigned int sg_tablesize ;
   int devnum_next ;
   struct usb_devmap devmap ;
   struct usb_device *root_hub ;
   struct usb_bus *hs_companion ;
   struct list_head bus_list ;
   int bandwidth_allocated ;
   int bandwidth_int_reqs ;
   int bandwidth_isoc_reqs ;
   struct dentry *usbfs_dentry ;
   struct mon_bus *mon_bus ;
   int monitored ;
};
struct usb_tt;
struct usb_tt;
struct usb_tt;
struct usb_tt;
struct usb_device {
   int devnum ;
   char devpath[16] ;
   u32 route ;
   enum usb_device_state state ;
   enum usb_device_speed speed ;
   struct usb_tt *tt ;
   int ttport ;
   unsigned int toggle[2] ;
   struct usb_device *parent ;
   struct usb_bus *bus ;
   struct usb_host_endpoint ep0 ;
   struct device dev ;
   struct usb_device_descriptor descriptor ;
   struct usb_host_config *config ;
   struct usb_host_config *actconfig ;
   struct usb_host_endpoint *ep_in[16] ;
   struct usb_host_endpoint *ep_out[16] ;
   char **rawdescriptors ;
   unsigned short bus_mA ;
   u8 portnum ;
   u8 level ;
   unsigned int can_submit : 1 ;
   unsigned int persist_enabled : 1 ;
   unsigned int have_langid : 1 ;
   unsigned int authorized : 1 ;
   unsigned int authenticated : 1 ;
   unsigned int wusb : 1 ;
   int string_langid ;
   char *product ;
   char *manufacturer ;
   char *serial ;
   struct list_head filelist ;
   struct device *usb_classdev ;
   struct dentry *usbfs_dentry ;
   int maxchild ;
   struct usb_device *children[31] ;
   u32 quirks ;
   atomic_t urbnum ;
   unsigned long active_duration ;
   unsigned long connect_time ;
   unsigned int do_remote_wakeup : 1 ;
   unsigned int reset_resume : 1 ;
   struct wusb_dev *wusb_dev ;
   int slot_id ;
};
struct usb_dynids {
   spinlock_t lock ;
   struct list_head list ;
};
struct usbdrv_wrap {
   struct device_driver driver ;
   int for_devices ;
};
struct usb_driver {
   char const *name ;
   int (*probe)(struct usb_interface *intf , struct usb_device_id const *id ) ;
   void (*disconnect)(struct usb_interface *intf ) ;
   int (*unlocked_ioctl)(struct usb_interface *intf , unsigned int code , void *buf ) ;
   int (*suspend)(struct usb_interface *intf , pm_message_t message ) ;
   int (*resume)(struct usb_interface *intf ) ;
   int (*reset_resume)(struct usb_interface *intf ) ;
   int (*pre_reset)(struct usb_interface *intf ) ;
   int (*post_reset)(struct usb_interface *intf ) ;
   struct usb_device_id const *id_table ;
   struct usb_dynids dynids ;
   struct usbdrv_wrap drvwrap ;
   unsigned int no_dynamic_id : 1 ;
   unsigned int supports_autosuspend : 1 ;
   unsigned int soft_unbind : 1 ;
};
struct usb_class_driver {
   char *name ;
   char *(*devnode)(struct device *dev , mode_t *mode ) ;
   struct file_operations const *fops ;
   int minor_base ;
};
struct usb_iso_packet_descriptor {
   unsigned int offset ;
   unsigned int length ;
   unsigned int actual_length ;
   int status ;
};
struct urb;
struct urb;
struct urb;
struct urb;
struct usb_anchor {
   struct list_head urb_list ;
   wait_queue_head_t wait ;
   spinlock_t lock ;
   unsigned int poisoned : 1 ;
};
struct scatterlist;
struct scatterlist;
struct scatterlist;
struct urb {
   struct kref kref ;
   void *hcpriv ;
   atomic_t use_count ;
   atomic_t reject ;
   int unlinked ;
   struct list_head urb_list ;
   struct list_head anchor_list ;
   struct usb_anchor *anchor ;
   struct usb_device *dev ;
   struct usb_host_endpoint *ep ;
   unsigned int pipe ;
   unsigned int stream_id ;
   int status ;
   unsigned int transfer_flags ;
   void *transfer_buffer ;
   dma_addr_t transfer_dma ;
   struct scatterlist *sg ;
   int num_sgs ;
   u32 transfer_buffer_length ;
   u32 actual_length ;
   unsigned char *setup_packet ;
   dma_addr_t setup_dma ;
   int start_frame ;
   int number_of_packets ;
   int interval ;
   int error_count ;
   void *context ;
   void (*complete)(struct urb * ) ;
   struct usb_iso_packet_descriptor iso_frame_desc[0] ;
};
struct scatterlist;
struct poll_table_struct;
struct poll_table_struct {
   void (*qproc)(struct file * , wait_queue_head_t * , struct poll_table_struct * ) ;
   unsigned long key ;
};
struct scatterlist {
   unsigned long sg_magic ;
   unsigned long page_link ;
   unsigned int offset ;
   unsigned int length ;
   dma_addr_t dma_address ;
   unsigned int dma_length ;
};
struct mempolicy;
struct anon_vma;
struct file_ra_state;
struct user_struct;
struct writeback_control;
struct mm_struct;
struct vm_area_struct;
struct vm_fault {
   unsigned int flags ;
   unsigned long pgoff ;
   void *virtual_address ;
   struct page *page ;
};
struct vm_operations_struct {
   void (*open)(struct vm_area_struct *area ) ;
   void (*close)(struct vm_area_struct *area ) ;
   int (*fault)(struct vm_area_struct *vma , struct vm_fault *vmf ) ;
   int (*page_mkwrite)(struct vm_area_struct *vma , struct vm_fault *vmf ) ;
   int (*access)(struct vm_area_struct *vma , unsigned long addr , void *buf , int len ,
                 int write ) ;
   int (*set_policy)(struct vm_area_struct *vma , struct mempolicy *new ) ;
   struct mempolicy *(*get_policy)(struct vm_area_struct *vma , unsigned long addr ) ;
   int (*migrate)(struct vm_area_struct *vma , nodemask_t const *from , nodemask_t const *to ,
                  unsigned long flags ) ;
};
struct inode;
struct page;
struct __kfifo {
   unsigned int in ;
   unsigned int out ;
   unsigned int mask ;
   unsigned int esize ;
   void *data ;
};
union __anonunion____missing_field_name_248 {
   struct __kfifo kfifo ;
   unsigned char *type ;
   char (*rectype)[0] ;
   void *ptr ;
   void const *ptr_const ;
};
struct kfifo {
   union __anonunion____missing_field_name_248 __annonCompField41 ;
   unsigned char buf[0] ;
};
struct lirc_buffer {
   wait_queue_head_t wait_poll ;
   spinlock_t fifo_lock ;
   unsigned int chunk_size ;
   unsigned int size ;
   struct kfifo fifo ;
   u8 fifo_initialized ;
};
struct lirc_driver {
   char name[40] ;
   int minor ;
   __u32 code_length ;
   unsigned int buffer_size ;
   int sample_rate ;
   __u32 features ;
   unsigned int chunk_size ;
   void *data ;
   int min_timeout ;
   int max_timeout ;
   int (*add_to_buf)(void *data , struct lirc_buffer *buf ) ;
   struct lirc_buffer *rbuf ;
   int (*set_use_inc)(void *data ) ;
   void (*set_use_dec)(void *data ) ;
   struct file_operations const *fops ;
   struct device *dev ;
   struct module *owner ;
};
struct rx_data {
   int count ;
   int prev_bit ;
   int initial_space ;
};
struct tx_t {
   unsigned char data_buf[35] ;
   struct completion finished ;
   atomic_t busy ;
   int status ;
};
struct imon_context {
   struct usb_device *usbdev ;
   int display ;
   int display_isopen ;
   int ir_isopen ;
   int dev_present ;
   struct mutex ctx_lock ;
   wait_queue_head_t remove_ok ;
   int vfd_proto_6p ;
   struct lirc_driver *driver ;
   struct usb_endpoint_descriptor *rx_endpoint ;
   struct usb_endpoint_descriptor *tx_endpoint ;
   struct urb *rx_urb ;
   struct urb *tx_urb ;
   unsigned char usb_rx_buf[8] ;
   unsigned char usb_tx_buf[8] ;
   struct rx_data rx ;
   struct tx_t tx ;
};
void *__builtin_memcpy(void * , void const * , unsigned long ) ;
long __builtin_expect(long , long ) ;
extern int printk(char const *fmt , ...) ;
extern void warn_slowpath_fmt(char const *file , int line , char const *fmt , ...) ;
extern void *memdup_user(void const * , size_t ) ;
extern void *__memcpy(void *to , void const *from , size_t len ) ;
extern char *strcpy(char *dest , char const *src ) ;
__inline static long __attribute__((__warn_unused_result__)) PTR_ERR(void const *ptr )
{

  {
  return ((long )ptr);
}
}
__inline static long __attribute__((__warn_unused_result__)) IS_ERR(void const *ptr )
{ long tmp ;
  unsigned long __cil_tmp3 ;
  int __cil_tmp4 ;
  int __cil_tmp5 ;
  int __cil_tmp6 ;
  long __cil_tmp7 ;

  {
  {
  __cil_tmp3 = (unsigned long )ptr;
  __cil_tmp4 = __cil_tmp3 >= 1152921504606842881UL;
  __cil_tmp5 = ! __cil_tmp4;
  __cil_tmp6 = ! __cil_tmp5;
  __cil_tmp7 = (long )__cil_tmp6;
  tmp = __builtin_expect(__cil_tmp7, 0L);
  }
  return (tmp);
}
}
__inline static int atomic_read(atomic_t const *v )
{ int const *__cil_tmp2 ;
  int volatile *__cil_tmp3 ;
  int volatile __cil_tmp4 ;

  {
  {
  __cil_tmp2 = & v->counter;
  __cil_tmp3 = (int volatile *)__cil_tmp2;
  __cil_tmp4 = *__cil_tmp3;
  return ((int )__cil_tmp4);
  }
}
}
__inline static void atomic_set(atomic_t *v , int i )
{

  {
  v->counter = i;
  return;
}
}
extern void __raw_spin_lock_init(raw_spinlock_t *lock , char const *name , struct lock_class_key *key ) ;
extern unsigned long _raw_spin_lock_irqsave(raw_spinlock_t *lock ) __attribute__((__section__(".spinlock.text"))) ;
extern void _raw_spin_unlock_irqrestore(raw_spinlock_t *lock , unsigned long flags ) __attribute__((__section__(".spinlock.text"))) ;
__inline static raw_spinlock_t *spinlock_check(spinlock_t *lock )
{

  {
  return (& lock->__annonCompField18.rlock);
}
}
__inline static void spin_unlock_irqrestore(spinlock_t *lock , unsigned long flags )
{ struct raw_spinlock *__cil_tmp3 ;

  {
  {
  while (1) {
    while_continue: ;
    {
    __cil_tmp3 = & lock->__annonCompField18.rlock;
    _raw_spin_unlock_irqrestore(__cil_tmp3, flags);
    }
    goto while_break;
  }
  while_break___0: ;
  }

  while_break: ;
  return;
}
}
extern void __init_waitqueue_head(wait_queue_head_t *q , struct lock_class_key * ) ;
extern void __wake_up(wait_queue_head_t *q , unsigned int mode , int nr , void *key ) ;
extern void __mutex_init(struct mutex *lock , char const *name , struct lock_class_key *key ) ;
extern void mutex_lock_nested(struct mutex *lock , unsigned int subclass ) ;
extern void mutex_unlock(struct mutex *lock ) ;
static struct lock_class_key __key___2 ;
__inline static void init_completion(struct completion *x )
{ wait_queue_head_t *__cil_tmp2 ;

  {
  x->done = 0U;
  {
  while (1) {
    while_continue: ;
    {
    __cil_tmp2 = & x->wait;
    __init_waitqueue_head(__cil_tmp2, & __key___2);
    }
    goto while_break;
  }
  while_break___0: ;
  }

  while_break: ;
  return;
}
}
extern int wait_for_completion_interruptible(struct completion *x ) ;
extern void complete(struct completion * ) ;
extern void complete_all(struct completion * ) ;
extern void kfree(void const * ) ;
extern struct kernel_param_ops param_ops_int ;
int init_module(void) ;
void cleanup_module(void) ;
extern struct module __this_module ;
extern void *__kmalloc(size_t size , gfp_t flags ) ;
__inline static void *( __attribute__((__always_inline__)) kmalloc)(size_t size ,
                                                                    gfp_t flags )
{ void *tmp___2 ;

  {
  {
  tmp___2 = __kmalloc(size, flags);
  }
  return (tmp___2);
}
}
__inline static void *kzalloc(size_t size , gfp_t flags )
{ void *tmp ;
  unsigned int __cil_tmp4 ;

  {
  {
  __cil_tmp4 = flags | 32768U;
  tmp = kmalloc(size, __cil_tmp4);
  }
  return (tmp);
}
}
extern void *dev_get_drvdata(struct device const *dev ) __attribute__((__ldv_model__)) ;
extern int dev_set_drvdata(struct device *dev , void *data ) ;
extern int dev_printk(char const *level , struct device const *dev , char const *fmt
                      , ...) ;
extern int dev_warn(struct device const *dev , char const *fmt , ...) ;
extern int _dev_info(struct device const *dev , char const *fmt , ...) ;
__inline static unsigned int iminor(struct inode const *inode )
{ unsigned int __cil_tmp2 ;
  unsigned int __cil_tmp3 ;
  unsigned int __cil_tmp4 ;
  dev_t __cil_tmp5 ;
  unsigned int __cil_tmp6 ;

  {
  {
  __cil_tmp2 = 1U << 20;
  __cil_tmp3 = __cil_tmp2 - 1U;
  __cil_tmp4 = (unsigned int const )__cil_tmp3;
  __cil_tmp5 = inode->i_rdev;
  __cil_tmp6 = __cil_tmp5 & __cil_tmp4;
  return ((unsigned int )__cil_tmp6);
  }
}
}
extern loff_t noop_llseek(struct file *file , loff_t offset , int origin ) ;
__inline static void *usb_get_intfdata(struct usb_interface *intf ) __attribute__((__ldv_model__)) ;
__inline static void *usb_get_intfdata(struct usb_interface *intf ) __attribute__((__ldv_model__)) ;
__inline static void *usb_get_intfdata(struct usb_interface *intf )
{ void *tmp___7 ;
  struct device *__cil_tmp3 ;
  struct device const *__cil_tmp4 ;

  {
  {
  __cil_tmp3 = & intf->dev;
  __cil_tmp4 = (struct device const *)__cil_tmp3;
  tmp___7 = dev_get_drvdata(__cil_tmp4);
  }
  return (tmp___7);
}
}
__inline static void usb_set_intfdata(struct usb_interface *intf , void *data ) __attribute__((__ldv_model__)) ;
__inline static void usb_set_intfdata(struct usb_interface *intf , void *data ) __attribute__((__ldv_model__)) ;
__inline static void usb_set_intfdata(struct usb_interface *intf , void *data )
{ struct device *__cil_tmp3 ;

  {
  {
  __cil_tmp3 = & intf->dev;
  dev_set_drvdata(__cil_tmp3, data);
  }
  return;
}
}
__inline static struct usb_device *interface_to_usbdev(struct usb_interface *intf )
{ struct device const *__mptr ;
  struct device *__cil_tmp3 ;
  struct usb_device *__cil_tmp4 ;
  struct device *__cil_tmp5 ;
  unsigned int __cil_tmp6 ;
  char *__cil_tmp7 ;
  char *__cil_tmp8 ;

  {
  __cil_tmp3 = intf->dev.parent;
  __mptr = (struct device const *)__cil_tmp3;
  {
  __cil_tmp4 = (struct usb_device *)0;
  __cil_tmp5 = & __cil_tmp4->dev;
  __cil_tmp6 = (unsigned int )__cil_tmp5;
  __cil_tmp7 = (char *)__mptr;
  __cil_tmp8 = __cil_tmp7 - __cil_tmp6;
  return ((struct usb_device *)__cil_tmp8);
  }
}
}
extern struct usb_device *usb_get_dev(struct usb_device *dev ) ;
extern struct usb_device_id const *usb_match_id(struct usb_interface *interface ,
                                                  struct usb_device_id const *id ) ;
extern struct usb_interface *usb_find_interface(struct usb_driver *drv , int minor ) ;
extern int usb_register_driver(struct usb_driver * , struct module * , char const * ) ;
__inline static int usb_register(struct usb_driver *driver )
{ int tmp___7 ;

  {
  {
  tmp___7 = usb_register_driver(driver, & __this_module, "lirc_imon");
  }
  return (tmp___7);
}
}
extern void usb_deregister(struct usb_driver * ) ;
extern int usb_register_dev(struct usb_interface *intf , struct usb_class_driver *class_driver ) ;
extern void usb_deregister_dev(struct usb_interface *intf , struct usb_class_driver *class_driver ) ;
__inline static void usb_fill_int_urb(struct urb *urb , struct usb_device *dev , unsigned int pipe ,
                                      void *transfer_buffer , int buffer_length ,
                                      void (*complete_fn)(struct urb * ) , void *context ,
                                      int interval )
{ enum usb_device_speed __cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  int __cil_tmp11 ;
  enum usb_device_speed __cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  int __cil_tmp14 ;

  {
  urb->dev = dev;
  urb->pipe = pipe;
  urb->transfer_buffer = transfer_buffer;
  urb->transfer_buffer_length = (u32 )buffer_length;
  urb->complete = complete_fn;
  urb->context = context;
  {
  __cil_tmp9 = dev->speed;
  __cil_tmp10 = (unsigned int )__cil_tmp9;
  if (__cil_tmp10 == 3U) {
    __cil_tmp11 = interval - 1;
    urb->interval = 1 << __cil_tmp11;
  } else {
    {
    __cil_tmp12 = dev->speed;
    __cil_tmp13 = (unsigned int )__cil_tmp12;
    if (__cil_tmp13 == 5U) {
      __cil_tmp14 = interval - 1;
      urb->interval = 1 << __cil_tmp14;
    } else {
      urb->interval = interval;
    }
    }
  }
  }
  urb->start_frame = -1;
  return;
}
}
struct urb *usb_alloc_urb(int iso_packets , gfp_t mem_flags ) __attribute__((__ldv_model__)) ;
void usb_free_urb(struct urb *urb ) __attribute__((__ldv_model__)) ;
extern int usb_submit_urb(struct urb *urb , gfp_t mem_flags ) ;
extern void usb_kill_urb(struct urb *urb ) ;
void *usb_alloc_coherent(struct usb_device *dev , size_t size , gfp_t mem_flags ,
                         dma_addr_t *dma ) __attribute__((__ldv_model__)) ;
void usb_free_coherent(struct usb_device *dev , size_t size , void *addr , dma_addr_t dma ) __attribute__((__ldv_model__)) ;
__inline static unsigned int __create_pipe(struct usb_device *dev , unsigned int endpoint )
{ unsigned int __cil_tmp3 ;
  int __cil_tmp4 ;
  int __cil_tmp5 ;
  unsigned int __cil_tmp6 ;

  {
  {
  __cil_tmp3 = endpoint << 15;
  __cil_tmp4 = dev->devnum;
  __cil_tmp5 = __cil_tmp4 << 8;
  __cil_tmp6 = (unsigned int )__cil_tmp5;
  return (__cil_tmp6 | __cil_tmp3);
  }
}
}
__inline static int __attribute__((__warn_unused_result__)) __kfifo_int_must_check_helper(int val )
{

  {
  return (val);
}
}
extern int __kfifo_alloc(struct __kfifo *fifo , unsigned int size , size_t esize ,
                         gfp_t gfp_mask ) ;
extern void __kfifo_free(struct __kfifo *fifo ) ;
extern unsigned int __kfifo_in(struct __kfifo *fifo , void const *buf , unsigned int len ) ;
extern unsigned int __kfifo_in_r(struct __kfifo *fifo , void const *buf , unsigned int len ,
                                 size_t recsize ) ;
static struct lock_class_key __key___7 ;
static struct lock_class_key __key___8 ;
__inline static int lirc_buffer_init(struct lirc_buffer *buf , unsigned int chunk_size ,
                                     unsigned int size )
{ int ret ;
  struct kfifo *__tmp ;
  struct __kfifo *__kfifo ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp ;
  int tmp___9 ;
  wait_queue_head_t *__cil_tmp11 ;
  spinlock_t *__cil_tmp12 ;
  struct raw_spinlock *__cil_tmp13 ;
  unsigned int __cil_tmp14 ;

  {
  {
  while (1) {
    while_continue: ;
    {
    __cil_tmp11 = & buf->wait_poll;
    __init_waitqueue_head(__cil_tmp11, & __key___7);
    }
    goto while_break;
  }
  while_break___2: ;
  }

  while_break: ;
  {
  while (1) {
    while_continue___0: ;
    {
    __cil_tmp12 = & buf->fifo_lock;
    spinlock_check(__cil_tmp12);
    }
    {
    while (1) {
      while_continue___1: ;
      {
      __cil_tmp13 = & buf->fifo_lock.__annonCompField18.rlock;
      __raw_spin_lock_init(__cil_tmp13, "&(&buf->fifo_lock)->rlock", & __key___8);
      }
      goto while_break___1;
    }
    while_break___4: ;
    }

    while_break___1: ;
    goto while_break___0;
  }
  while_break___3: ;
  }

  while_break___0:
  buf->chunk_size = chunk_size;
  buf->size = size;
  __tmp = & buf->fifo;
  __kfifo = & __tmp->__annonCompField41.kfifo;
  if (24UL == 24UL) {
    {
    __cil_tmp14 = size * chunk_size;
    tmp___7 = __kfifo_alloc(__kfifo, __cil_tmp14, 1UL, 208U);
    tmp___8 = tmp___7;
    }
  } else {
    tmp___8 = -22;
  }
  {
  tmp___9 = (int )__kfifo_int_must_check_helper(tmp___8);
  tmp = tmp___9;
  ret = tmp;
  }
  if (ret == 0) {
    buf->fifo_initialized = (u8 )1;
  } else {

  }
  return (ret);
}
}
__inline static void lirc_buffer_free(struct lirc_buffer *buf )
{ struct kfifo *__tmp ;
  struct __kfifo *__kfifo ;
  int __ret_warn_on ;
  long tmp___7 ;
  int __cil_tmp6 ;
  int __cil_tmp7 ;
  long __cil_tmp8 ;
  int __cil_tmp9 ;
  int __cil_tmp10 ;
  int __cil_tmp11 ;
  int __cil_tmp12 ;
  long __cil_tmp13 ;

  {
  if (buf->fifo_initialized) {
    __tmp = & buf->fifo;
    __kfifo = & __tmp->__annonCompField41.kfifo;
    if (24UL == 24UL) {
      {
      __kfifo_free(__kfifo);
      }
    } else {

    }
    buf->fifo_initialized = (u8 )0;
  } else {
    {
    __ret_warn_on = 1;
    __cil_tmp6 = ! __ret_warn_on;
    __cil_tmp7 = ! __cil_tmp6;
    __cil_tmp8 = (long )__cil_tmp7;
    tmp___7 = __builtin_expect(__cil_tmp8, 0L);
    }
    if (tmp___7) {
      {
      __cil_tmp9 = (int const )72;
      __cil_tmp10 = (int )__cil_tmp9;
      warn_slowpath_fmt("include/media/lirc_dev.h", __cil_tmp10, "calling %s on an uninitialized lirc_buffer\n",
                        "lirc_buffer_free");
      }
    } else {

    }
    {
    __cil_tmp11 = ! __ret_warn_on;
    __cil_tmp12 = ! __cil_tmp11;
    __cil_tmp13 = (long )__cil_tmp12;
    __builtin_expect(__cil_tmp13, 0L);
    }
  }
  return;
}
}
__inline static unsigned int lirc_buffer_write(struct lirc_buffer *buf , unsigned char *orig )
{ unsigned int ret ;
  unsigned long __flags ;
  unsigned int __ret ;
  raw_spinlock_t *tmp___7 ;
  struct kfifo *__tmp ;
  unsigned char *__buf ;
  unsigned long __n ;
  size_t __recsize ;
  struct __kfifo *__kfifo ;
  unsigned int tmp___8 ;
  unsigned int tmp___9 ;
  unsigned int tmp___10 ;
  spinlock_t *__cil_tmp15 ;
  unsigned int __cil_tmp16 ;
  void const *__cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  void const *__cil_tmp19 ;
  unsigned int __cil_tmp20 ;
  spinlock_t *__cil_tmp21 ;

  {
  {
  while (1) {
    while_continue: ;

    {
    while (1) {
      while_continue___0: ;
      {
      __cil_tmp15 = & buf->fifo_lock;
      tmp___7 = spinlock_check(__cil_tmp15);
      __flags = _raw_spin_lock_irqsave(tmp___7);
      }
      goto while_break___0;
    }
    while_break___2: ;
    }

    while_break___0: ;
    goto while_break;
  }
  while_break___1: ;
  }

  while_break:
  __tmp = & buf->fifo;
  __buf = orig;
  __cil_tmp16 = buf->chunk_size;
  __n = (unsigned long )__cil_tmp16;
  __recsize = 0UL;
  __kfifo = & __tmp->__annonCompField41.kfifo;
  if (__recsize) {
    {
    __cil_tmp17 = (void const *)__buf;
    __cil_tmp18 = (unsigned int )__n;
    tmp___8 = __kfifo_in_r(__kfifo, __cil_tmp17, __cil_tmp18, __recsize);
    tmp___10 = tmp___8;
    }
  } else {
    {
    __cil_tmp19 = (void const *)__buf;
    __cil_tmp20 = (unsigned int )__n;
    tmp___9 = __kfifo_in(__kfifo, __cil_tmp19, __cil_tmp20);
    tmp___10 = tmp___9;
    }
  }
  {
  __ret = tmp___10;
  __cil_tmp21 = & buf->fifo_lock;
  spin_unlock_irqrestore(__cil_tmp21, __flags);
  ret = __ret;
  }
  return (ret);
}
}
extern int lirc_register_driver(struct lirc_driver *d ) ;
extern int lirc_unregister_driver(int minor ) ;
static int imon_probe(struct usb_interface *interface , struct usb_device_id const *id ) ;
static void imon_disconnect(struct usb_interface *interface ) ;
static void usb_rx_callback(struct urb *urb ) ;
static void usb_tx_callback(struct urb *urb ) ;
static int imon_resume(struct usb_interface *intf ) ;
static int imon_suspend(struct usb_interface *intf , pm_message_t message ) ;
static int display_open(struct inode *inode , struct file *file ) ;
static int display_close(struct inode *inode , struct file *file ) ;
static ssize_t vfd_write(struct file *file , char const *buf , size_t n_bytes ,
                         loff_t *pos ) ;
static int ir_open(void *data ) ;
static void ir_close(void *data ) ;
static int imon_init(void) __attribute__((__section__(".init.text"), __no_instrument_function__)) ;
static void imon_exit(void) __attribute__((__section__(".exit.text"), __no_instrument_function__)) ;
static struct file_operations const display_fops =
     {& __this_module, & noop_llseek, (ssize_t (*)(struct file * , char * , size_t ,
                                                 loff_t * ))0, & vfd_write, (ssize_t (*)(struct kiocb * ,
                                                                                         struct iovec const * ,
                                                                                         unsigned long ,
                                                                                         loff_t ))0,
    (ssize_t (*)(struct kiocb * , struct iovec const * , unsigned long , loff_t ))0,
    (int (*)(struct file * , void * , int (*)(void * , char const * , int , loff_t ,
                                              u64 , unsigned int ) ))0, (unsigned int (*)(struct file * ,
                                                                                            struct poll_table_struct * ))0,
    (long (*)(struct file * , unsigned int , unsigned long ))0, (long (*)(struct file * ,
                                                                            unsigned int ,
                                                                            unsigned long ))0,
    (int (*)(struct file * , struct vm_area_struct * ))0, & display_open, (int (*)(struct file * ,
                                                                                   fl_owner_t id ))0,
    & display_close, (int (*)(struct file * , int datasync ))0, (int (*)(struct kiocb * ,
                                                                         int datasync ))0,
    (int (*)(int , struct file * , int ))0, (int (*)(struct file * , int , struct file_lock * ))0,
    (ssize_t (*)(struct file * , struct page * , int , size_t , loff_t * , int ))0,
    (unsigned long (*)(struct file * , unsigned long , unsigned long , unsigned long ,
                       unsigned long ))0, (int (*)(int ))0, (int (*)(struct file * ,
                                                                       int , struct file_lock * ))0,
    (ssize_t (*)(struct pipe_inode_info * , struct file * , loff_t * , size_t , unsigned int ))0,
    (ssize_t (*)(struct file * , loff_t * , struct pipe_inode_info * , size_t , unsigned int ))0,
    (int (*)(struct file * , long , struct file_lock ** ))0, (long (*)(struct file *file ,
                                                                        int mode ,
                                                                        loff_t offset ,
                                                                        loff_t len ))0};
static struct usb_device_id imon_usb_id_table[4] = { {(__u16 )3, (__u16 )2728, (__u16 )32769, (unsigned short)0, (unsigned short)0,
      (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0,
      (unsigned char)0, 0UL},
        {(__u16 )3, (__u16 )1256, (__u16 )65328, (unsigned short)0, (unsigned short)0,
      (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0,
      (unsigned char)0, 0UL},
        {(__u16 )3, (__u16 )2728, (__u16 )65498, (unsigned short)0, (unsigned short)0,
      (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0,
      (unsigned char)0, 0UL},
        {(__u16 )3, (__u16 )5570, (__u16 )65498, (unsigned short)0, (unsigned short)0,
      (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0,
      (unsigned char)0, 0UL}};
static struct usb_device_id vfd_proto_6p_list[1] = { {(__u16 )3, (__u16 )5570, (__u16 )65498, (unsigned short)0, (unsigned short)0,
      (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0,
      (unsigned char)0, 0UL}};
static struct usb_device_id ir_only_list[2] = { {(__u16 )3, (__u16 )2728, (__u16 )32769, (unsigned short)0, (unsigned short)0,
      (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0,
      (unsigned char)0, 0UL},
        {(__u16 )3, (__u16 )1256, (__u16 )65328, (unsigned short)0, (unsigned short)0,
      (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0,
      (unsigned char)0, 0UL}};
static struct usb_driver imon_driver =
     {"lirc_imon", & imon_probe, & imon_disconnect, (int (*)(struct usb_interface *intf ,
                                                           unsigned int code , void *buf ))0,
    & imon_suspend, & imon_resume, (int (*)(struct usb_interface *intf ))0, (int (*)(struct usb_interface *intf ))0,
    (int (*)(struct usb_interface *intf ))0, (struct usb_device_id const *)(imon_usb_id_table),
    {{{{{0U}, 0U, 0U, (void *)0, {(struct lock_class_key *)0, {(struct lock_class *)0,
                                                               (struct lock_class *)0},
                                  (char const *)0, 0, 0UL}}}}, {(struct list_head *)0,
                                                                  (struct list_head *)0}},
    {{(char const *)0, (struct bus_type *)0, (struct module *)0, (char const *)0,
      (_Bool)0, (struct of_device_id const *)0, (int (*)(struct device *dev ))0,
      (int (*)(struct device *dev ))0, (void (*)(struct device *dev ))0, (int (*)(struct device *dev ,
                                                                                  pm_message_t state ))0,
      (int (*)(struct device *dev ))0, (struct attribute_group const **)0, (struct dev_pm_ops const *)0,
      (struct driver_private *)0}, 0}, 0U, 0U, 0U};
static struct usb_class_driver imon_class = {(char *)"lcd%d", (char *(*)(struct device *dev , mode_t *mode ))0, & display_fops,
    144};
static struct mutex driver_lock = {{1}, {{{{0U}, 3735899821U, 4294967295U, (void *)-1L, {(struct lock_class_key *)0,
                                                          {(struct lock_class *)0,
                                                           (struct lock_class *)0},
                                                          "driver_lock.wait_lock",
                                                          0, 0UL}}}}, {& driver_lock.wait_list,
                                                                       & driver_lock.wait_list},
    (struct task_struct *)0, (char const *)0, (void *)(& driver_lock), {(struct lock_class_key *)0,
                                                                          {(struct lock_class *)0,
                                                                           (struct lock_class *)0},
                                                                          "driver_lock",
                                                                          0, 0UL}};
static int debug ;
static char const __mod_author185[33] __attribute__((__used__, __unused__, __section__(".modinfo"),
__aligned__(1))) =
  { (char const )'a', (char const )'u', (char const )'t', (char const )'h',
        (char const )'o', (char const )'r', (char const )'=', (char const )'V',
        (char const )'e', (char const )'n', (char const )'k', (char const )'y',
        (char const )' ', (char const )'R', (char const )'a', (char const )'j',
        (char const )'u', (char const )' ', (char const )'<', (char const )'d',
        (char const )'e', (char const )'v', (char const )'@', (char const )'v',
        (char const )'e', (char const )'n', (char const )'k', (char const )'y',
        (char const )'.', (char const )'w', (char const )'s', (char const )'>',
        (char const )'\000'};
static char const __mod_description186[61] __attribute__((__used__, __unused__,
__section__(".modinfo"), __aligned__(1))) =
  { (char const )'d', (char const )'e', (char const )'s', (char const )'c',
        (char const )'r', (char const )'i', (char const )'p', (char const )'t',
        (char const )'i', (char const )'o', (char const )'n', (char const )'=',
        (char const )'D', (char const )'r', (char const )'i', (char const )'v',
        (char const )'e', (char const )'r', (char const )' ', (char const )'f',
        (char const )'o', (char const )'r', (char const )' ', (char const )'S',
        (char const )'o', (char const )'u', (char const )'n', (char const )'d',
        (char const )'G', (char const )'r', (char const )'a', (char const )'p',
        (char const )'h', (char const )' ', (char const )'i', (char const )'M',
        (char const )'O', (char const )'N', (char const )' ', (char const )'M',
        (char const )'u', (char const )'l', (char const )'t', (char const )'i',
        (char const )'M', (char const )'e', (char const )'d', (char const )'i',
        (char const )'a', (char const )' ', (char const )'I', (char const )'R',
        (char const )'/', (char const )'D', (char const )'i', (char const )'s',
        (char const )'p', (char const )'l', (char const )'a', (char const )'y',
        (char const )'\000'};
static char const __mod_version187[12] __attribute__((__used__, __unused__, __section__(".modinfo"),
__aligned__(1))) =
  { (char const )'v', (char const )'e', (char const )'r', (char const )'s',
        (char const )'i', (char const )'o', (char const )'n', (char const )'=',
        (char const )'0', (char const )'.', (char const )'8', (char const )'\000'};
static char const __mod_license188[12] __attribute__((__used__, __unused__, __section__(".modinfo"),
__aligned__(1))) =
  { (char const )'l', (char const )'i', (char const )'c', (char const )'e',
        (char const )'n', (char const )'s', (char const )'e', (char const )'=',
        (char const )'G', (char const )'P', (char const )'L', (char const )'\000'};
extern struct usb_device_id const __mod_usb_device_table __attribute__((__unused__,
__alias__("imon_usb_id_table"))) ;
static char const __param_str_debug[6] = { (char const )'d', (char const )'e', (char const )'b', (char const )'u',
        (char const )'g', (char const )'\000'};
static struct kernel_param const __param_debug __attribute__((__used__, __unused__,
__section__("__param"), __aligned__(sizeof(void *)))) = {__param_str_debug, (struct kernel_param_ops const *)(& param_ops_int), (u16 )420,
    (u16 )0, {(void *)(& debug)}};
static char const __mod_debugtype190[19] __attribute__((__used__, __unused__, __section__(".modinfo"),
__aligned__(1))) =
  { (char const )'p', (char const )'a', (char const )'r', (char const )'m',
        (char const )'t', (char const )'y', (char const )'p', (char const )'e',
        (char const )'=', (char const )'d', (char const )'e', (char const )'b',
        (char const )'u', (char const )'g', (char const )':', (char const )'i',
        (char const )'n', (char const )'t', (char const )'\000'};
static char const __mod_debug191[52] __attribute__((__used__, __unused__, __section__(".modinfo"),
__aligned__(1))) =
  { (char const )'p', (char const )'a', (char const )'r', (char const )'m',
        (char const )'=', (char const )'d', (char const )'e', (char const )'b',
        (char const )'u', (char const )'g', (char const )':', (char const )'D',
        (char const )'e', (char const )'b', (char const )'u', (char const )'g',
        (char const )' ', (char const )'m', (char const )'e', (char const )'s',
        (char const )'s', (char const )'a', (char const )'g', (char const )'e',
        (char const )'s', (char const )':', (char const )' ', (char const )'0',
        (char const )'=', (char const )'n', (char const )'o', (char const )',',
        (char const )' ', (char const )'1', (char const )'=', (char const )'y',
        (char const )'e', (char const )'s', (char const )'(', (char const )'d',
        (char const )'e', (char const )'f', (char const )'a', (char const )'u',
        (char const )'l', (char const )'t', (char const )':', (char const )' ',
        (char const )'n', (char const )'o', (char const )')', (char const )'\000'};
static void free_imon_context(struct imon_context *context ) ;
static struct _ddebug descriptor __attribute__((__used__, __section__("__verbose"),
__aligned__(8))) = {"lirc_imon", "free_imon_context", "/anthill/stuff/tacas-comp/work/current--X--drivers/staging/lirc/lirc_imon.ko--X--bulklinux-3.0.1--X--68_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/68_1/drivers/staging/lirc/lirc_imon.c.common.c",
    "%s: iMON context freed\n", 203U, 0U, (char)0};
static void free_imon_context(struct imon_context *context )
{ struct device *dev ;
  long tmp___7 ;
  struct lirc_driver *__cil_tmp4 ;
  struct urb *__cil_tmp5 ;
  struct urb *__cil_tmp6 ;
  struct lirc_driver *__cil_tmp7 ;
  struct lirc_buffer *__cil_tmp8 ;
  struct lirc_driver *__cil_tmp9 ;
  struct lirc_buffer *__cil_tmp10 ;
  void const *__cil_tmp11 ;
  struct lirc_driver *__cil_tmp12 ;
  void const *__cil_tmp13 ;
  void const *__cil_tmp14 ;
  int __cil_tmp15 ;
  int __cil_tmp16 ;
  long __cil_tmp17 ;
  struct device const *__cil_tmp18 ;

  {
  {
  __cil_tmp4 = context->driver;
  dev = __cil_tmp4->dev;
  __cil_tmp5 = context->tx_urb;
  usb_free_urb(__cil_tmp5);
  __cil_tmp6 = context->rx_urb;
  usb_free_urb(__cil_tmp6);
  __cil_tmp7 = context->driver;
  __cil_tmp8 = __cil_tmp7->rbuf;
  lirc_buffer_free(__cil_tmp8);
  __cil_tmp9 = context->driver;
  __cil_tmp10 = __cil_tmp9->rbuf;
  __cil_tmp11 = (void const *)__cil_tmp10;
  kfree(__cil_tmp11);
  __cil_tmp12 = context->driver;
  __cil_tmp13 = (void const *)__cil_tmp12;
  kfree(__cil_tmp13);
  __cil_tmp14 = (void const *)context;
  kfree(__cil_tmp14);
  }
  {
  while (1) {
    while_continue: ;

    {
    while (1) {
      while_continue___0: ;
      {
      __cil_tmp15 = ! descriptor.enabled;
      __cil_tmp16 = ! __cil_tmp15;
      __cil_tmp17 = (long )__cil_tmp16;
      tmp___7 = __builtin_expect(__cil_tmp17, 0L);
      }
      if (tmp___7) {
        {
        __cil_tmp18 = (struct device const *)dev;
        dev_printk("<7>", __cil_tmp18, "%s: iMON context freed\n", "free_imon_context");
        }
      } else {

      }
      goto while_break___0;
    }
    while_break___2: ;
    }

    while_break___0: ;
    goto while_break;
  }
  while_break___1: ;
  }

  while_break: ;
  return;
}
}
static void deregister_from_lirc(struct imon_context *context )
{ int retval ;
  int minor ;
  struct lirc_driver *__cil_tmp4 ;

  {
  {
  __cil_tmp4 = context->driver;
  minor = __cil_tmp4->minor;
  retval = lirc_unregister_driver(minor);
  }
  if (retval) {
    {
    printk("<3>lirc_imon: %s: unable to deregister from lirc(%d)\n", "deregister_from_lirc",
           retval);
    }
  } else {
    {
    printk("<6>lirc_imon: Deregistered iMON driver (minor:%d)\n", minor);
    }
  }
  return;
}
}
static int display_open(struct inode *inode , struct file *file )
{ struct usb_interface *interface ;
  struct imon_context *context ;
  int subminor ;
  int retval ;
  unsigned int tmp___7 ;
  void *tmp___8 ;
  void *__cil_tmp9 ;
  struct inode const *__cil_tmp10 ;
  struct mutex *__cil_tmp11 ;
  int __cil_tmp12 ;
  struct lirc_driver *__cil_tmp13 ;
  struct device *__cil_tmp14 ;
  struct device const *__cil_tmp15 ;
  struct mutex *__cil_tmp16 ;

  {
  {
  __cil_tmp9 = (void *)0;
  context = (struct imon_context *)__cil_tmp9;
  retval = 0;
  mutex_lock_nested(& driver_lock, 0U);
  __cil_tmp10 = (struct inode const *)inode;
  tmp___7 = iminor(__cil_tmp10);
  subminor = (int )tmp___7;
  interface = usb_find_interface(& imon_driver, subminor);
  }
  if (! interface) {
    {
    printk("<3>lirc_imon: %s: could not find interface for minor %d\n", "display_open",
           subminor);
    retval = -19;
    }
    goto exit;
  } else {

  }
  {
  tmp___8 = usb_get_intfdata(interface);
  context = (struct imon_context *)tmp___8;
  }
  if (! context) {
    {
    printk("<3>lirc_imon: %s: no context found for minor %d\n", "display_open", subminor);
    retval = -19;
    }
    goto exit;
  } else {

  }
  {
  __cil_tmp11 = & context->ctx_lock;
  mutex_lock_nested(__cil_tmp11, 0U);
  }
  {
  __cil_tmp12 = context->display;
  if (! __cil_tmp12) {
    {
    printk("<3>lirc_imon: %s: display not supported by device\n", "display_open");
    retval = -19;
    }
  } else
  if (context->display_isopen) {
    {
    printk("<3>lirc_imon: %s: display port is already open\n", "display_open");
    retval = -16;
    }
  } else {
    {
    context->display_isopen = 1;
    file->private_data = (void *)context;
    __cil_tmp13 = context->driver;
    __cil_tmp14 = __cil_tmp13->dev;
    __cil_tmp15 = (struct device const *)__cil_tmp14;
    _dev_info(__cil_tmp15, "display port opened\n");
    }
  }
  }
  {
  __cil_tmp16 = & context->ctx_lock;
  mutex_unlock(__cil_tmp16);
  }
  exit:
  {
  mutex_unlock(& driver_lock);
  }
  return (retval);
}
}
static int display_close(struct inode *inode , struct file *file )
{ struct imon_context *context ;
  int retval ;
  void *__cil_tmp5 ;
  void *__cil_tmp6 ;
  struct mutex *__cil_tmp7 ;
  int __cil_tmp8 ;
  int __cil_tmp9 ;
  struct lirc_driver *__cil_tmp10 ;
  struct device *__cil_tmp11 ;
  struct device const *__cil_tmp12 ;
  int __cil_tmp13 ;
  int __cil_tmp14 ;
  struct mutex *__cil_tmp15 ;
  struct mutex *__cil_tmp16 ;

  {
  __cil_tmp5 = (void *)0;
  context = (struct imon_context *)__cil_tmp5;
  retval = 0;
  __cil_tmp6 = file->private_data;
  context = (struct imon_context *)__cil_tmp6;
  if (! context) {
    {
    printk("<3>lirc_imon: %s: no context for device\n", "display_close");
    }
    return (-19);
  } else {

  }
  {
  __cil_tmp7 = & context->ctx_lock;
  mutex_lock_nested(__cil_tmp7, 0U);
  }
  {
  __cil_tmp8 = context->display;
  if (! __cil_tmp8) {
    {
    printk("<3>lirc_imon: %s: display not supported by device\n", "display_close");
    retval = -19;
    }
  } else {
    {
    __cil_tmp9 = context->display_isopen;
    if (! __cil_tmp9) {
      {
      printk("<3>lirc_imon: %s: display is not open\n", "display_close");
      retval = -5;
      }
    } else {
      {
      context->display_isopen = 0;
      __cil_tmp10 = context->driver;
      __cil_tmp11 = __cil_tmp10->dev;
      __cil_tmp12 = (struct device const *)__cil_tmp11;
      _dev_info(__cil_tmp12, "display port closed\n");
      }
      {
      __cil_tmp13 = context->dev_present;
      if (! __cil_tmp13) {
        {
        __cil_tmp14 = context->ir_isopen;
        if (! __cil_tmp14) {
          {
          __cil_tmp15 = & context->ctx_lock;
          mutex_unlock(__cil_tmp15);
          free_imon_context(context);
          }
          return (retval);
        } else {

        }
        }
      } else {

      }
      }
    }
    }
  }
  }
  {
  __cil_tmp16 = & context->ctx_lock;
  mutex_unlock(__cil_tmp16);
  }
  return (retval);
}
}
static int send_packet(struct imon_context *context )
{ unsigned int pipe ;
  int interval ;
  int retval ;
  unsigned int tmp___7 ;
  struct usb_device *__cil_tmp6 ;
  struct usb_endpoint_descriptor *__cil_tmp7 ;
  __u8 __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  int __cil_tmp10 ;
  unsigned int __cil_tmp11 ;
  struct usb_endpoint_descriptor *__cil_tmp12 ;
  __u8 __cil_tmp13 ;
  struct urb *__cil_tmp14 ;
  struct usb_device *__cil_tmp15 ;
  unsigned char *__cil_tmp16 ;
  void *__cil_tmp17 ;
  int __cil_tmp18 ;
  void *__cil_tmp19 ;
  struct urb *__cil_tmp20 ;
  struct completion *__cil_tmp21 ;
  atomic_t *__cil_tmp22 ;
  struct urb *__cil_tmp23 ;
  atomic_t *__cil_tmp24 ;
  struct mutex *__cil_tmp25 ;
  struct completion *__cil_tmp26 ;
  struct mutex *__cil_tmp27 ;

  {
  {
  interval = 0;
  retval = 0;
  __cil_tmp6 = context->usbdev;
  __cil_tmp7 = context->tx_endpoint;
  __cil_tmp8 = __cil_tmp7->bEndpointAddress;
  __cil_tmp9 = (unsigned int )__cil_tmp8;
  tmp___7 = __create_pipe(__cil_tmp6, __cil_tmp9);
  __cil_tmp10 = 1 << 30;
  __cil_tmp11 = (unsigned int )__cil_tmp10;
  pipe = __cil_tmp11 | tmp___7;
  __cil_tmp12 = context->tx_endpoint;
  __cil_tmp13 = __cil_tmp12->bInterval;
  interval = (int )__cil_tmp13;
  __cil_tmp14 = context->tx_urb;
  __cil_tmp15 = context->usbdev;
  __cil_tmp16 = & context->usb_tx_buf[0];
  __cil_tmp17 = (void *)__cil_tmp16;
  __cil_tmp18 = (int )8UL;
  __cil_tmp19 = (void *)context;
  usb_fill_int_urb(__cil_tmp14, __cil_tmp15, pipe, __cil_tmp17, __cil_tmp18, & usb_tx_callback,
                   __cil_tmp19, interval);
  __cil_tmp20 = context->tx_urb;
  __cil_tmp20->actual_length = (u32 )0;
  __cil_tmp21 = & context->tx.finished;
  init_completion(__cil_tmp21);
  __cil_tmp22 = & context->tx.busy;
  atomic_set(__cil_tmp22, 1);
  __cil_tmp23 = context->tx_urb;
  retval = usb_submit_urb(__cil_tmp23, 208U);
  }
  if (retval) {
    {
    __cil_tmp24 = & context->tx.busy;
    atomic_set(__cil_tmp24, 0);
    printk("<3>lirc_imon: %s: error submitting urb(%d)\n", "send_packet", retval);
    }
  } else {
    {
    __cil_tmp25 = & context->ctx_lock;
    mutex_unlock(__cil_tmp25);
    __cil_tmp26 = & context->tx.finished;
    retval = wait_for_completion_interruptible(__cil_tmp26);
    }
    if (retval) {
      {
      printk("<3>lirc_imon: %s: task interrupted\n", "send_packet");
      }
    } else {

    }
    {
    __cil_tmp27 = & context->ctx_lock;
    mutex_lock_nested(__cil_tmp27, 0U);
    retval = context->tx.status;
    }
    if (retval) {
      {
      printk("<3>lirc_imon: %s: packet tx failed (%d)\n", "send_packet", retval);
      }
    } else {

    }
  }
  return (retval);
}
}
static ssize_t vfd_write(struct file *file , char const *buf , size_t n_bytes ,
                         loff_t *pos )
{ int i ;
  int offset ;
  int seq ;
  int retval ;
  struct imon_context *context ;
  unsigned char vfd_packet6[7] ;
  int *data_buf ;
  void *tmp___7 ;
  long tmp___8 ;
  long tmp___9 ;
  size_t __len ;
  void *__ret ;
  size_t __len___0 ;
  void *__ret___0 ;
  size_t __len___1 ;
  void *__ret___1 ;
  size_t tmp___10 ;
  long tmp ;
  long tmp___11 ;
  long tmp___12 ;
  long tmp___13 ;
  void *__cil_tmp26 ;
  void *__cil_tmp27 ;
  struct mutex *__cil_tmp28 ;
  int __cil_tmp29 ;
  void const *__cil_tmp30 ;
  void const *__cil_tmp31 ;
  void const *__cil_tmp32 ;
  unsigned char *__cil_tmp33 ;
  void *__cil_tmp34 ;
  void const *__cil_tmp35 ;
  unsigned char *__cil_tmp36 ;
  void *__cil_tmp37 ;
  unsigned char *__cil_tmp38 ;
  unsigned char *__cil_tmp39 ;
  void const *__cil_tmp40 ;
  unsigned char *__cil_tmp41 ;
  void *__cil_tmp42 ;
  unsigned char *__cil_tmp43 ;
  unsigned char *__cil_tmp44 ;
  void const *__cil_tmp45 ;
  int __cil_tmp46 ;
  unsigned char *__cil_tmp47 ;
  void *__cil_tmp48 ;
  void const *__cil_tmp49 ;
  unsigned char *__cil_tmp50 ;
  void *__cil_tmp51 ;
  void const *__cil_tmp52 ;
  int __cil_tmp53 ;
  struct mutex *__cil_tmp54 ;
  void const *__cil_tmp55 ;

  {
  retval = 0;
  vfd_packet6[0] = (unsigned char)1;
  vfd_packet6[1] = (unsigned char)0;
  vfd_packet6[2] = (unsigned char)0;
  vfd_packet6[3] = (unsigned char)0;
  vfd_packet6[4] = (unsigned char)0;
  vfd_packet6[5] = (unsigned char)255;
  vfd_packet6[6] = (unsigned char)255;
  __cil_tmp26 = (void *)0;
  data_buf = (int *)__cil_tmp26;
  __cil_tmp27 = file->private_data;
  context = (struct imon_context *)__cil_tmp27;
  if (! context) {
    {
    printk("<3>lirc_imon: %s: no context for device\n", "vfd_write");
    }
    return ((ssize_t )-19);
  } else {

  }
  {
  __cil_tmp28 = & context->ctx_lock;
  mutex_lock_nested(__cil_tmp28, 0U);
  }
  {
  __cil_tmp29 = context->dev_present;
  if (! __cil_tmp29) {
    {
    printk("<3>lirc_imon: %s: no iMON device present\n", "vfd_write");
    retval = -19;
    }
    goto exit;
  } else {

  }
  }
  if (n_bytes <= 0UL) {
    {
    printk("<3>lirc_imon: %s: invalid payload size\n", "vfd_write");
    retval = -22;
    }
    goto exit;
  } else
  if (n_bytes > 32UL) {
    {
    printk("<3>lirc_imon: %s: invalid payload size\n", "vfd_write");
    retval = -22;
    }
    goto exit;
  } else {

  }
  {
  __cil_tmp30 = (void const *)buf;
  tmp___7 = memdup_user(__cil_tmp30, n_bytes);
  data_buf = (int *)tmp___7;
  __cil_tmp31 = (void const *)data_buf;
  tmp___12 = (long )IS_ERR(__cil_tmp31);
  tmp = tmp___12;
  tmp___9 = tmp;
  }
  if (tmp___9) {
    {
    __cil_tmp32 = (void const *)data_buf;
    tmp___13 = (long )PTR_ERR(__cil_tmp32);
    tmp___11 = tmp___13;
    tmp___8 = tmp___11;
    retval = (int )tmp___8;
    }
    goto exit;
  } else {

  }
  {
  __len = n_bytes;
  __cil_tmp33 = & context->tx.data_buf[0];
  __cil_tmp34 = (void *)__cil_tmp33;
  __cil_tmp35 = (void const *)data_buf;
  __ret = __builtin_memcpy(__cil_tmp34, __cil_tmp35, __len);
  i = (int )n_bytes;
  }
  {
  while (1) {
    while_continue: ;
    if (i < 32) {

    } else {
      goto while_break;
    }
    context->tx.data_buf[i] = (unsigned char )' ';
    i = i + 1;
  }
  while_break___2: ;
  }

  while_break:
  i = 32;
  {
  while (1) {
    while_continue___0: ;
    if (i < 35) {

    } else {
      goto while_break___0;
    }
    context->tx.data_buf[i] = (unsigned char)255;
    i = i + 1;
  }
  while_break___3: ;
  }

  while_break___0:
  offset = 0;
  seq = 0;
  {
  while (1) {
    while_continue___1: ;
    __len___0 = (size_t )7;
    if (__len___0 >= 64UL) {
      {
      __cil_tmp36 = & context->usb_tx_buf[0];
      __cil_tmp37 = (void *)__cil_tmp36;
      __cil_tmp38 = & context->tx.data_buf[0];
      __cil_tmp39 = __cil_tmp38 + offset;
      __cil_tmp40 = (void const *)__cil_tmp39;
      __ret___0 = __memcpy(__cil_tmp37, __cil_tmp40, __len___0);
      }
    } else {
      {
      __cil_tmp41 = & context->usb_tx_buf[0];
      __cil_tmp42 = (void *)__cil_tmp41;
      __cil_tmp43 = & context->tx.data_buf[0];
      __cil_tmp44 = __cil_tmp43 + offset;
      __cil_tmp45 = (void const *)__cil_tmp44;
      __ret___0 = __builtin_memcpy(__cil_tmp42, __cil_tmp45, __len___0);
      }
    }
    {
    context->usb_tx_buf[7] = (unsigned char )seq;
    retval = send_packet(context);
    }
    if (retval) {
      {
      __cil_tmp46 = seq / 2;
      printk("<3>lirc_imon: %s: send packet failed for packet #%d\n", "vfd_write",
             __cil_tmp46);
      }
      goto exit;
    } else {
      seq = seq + 2;
      offset = offset + 7;
    }
    if (offset < 35) {

    } else {
      goto while_break___1;
    }
  }
  while_break___4: ;
  }

  while_break___1: ;
  if (context->vfd_proto_6p) {
    __len___1 = 7UL;
    if (__len___1 >= 64UL) {
      {
      __cil_tmp47 = & context->usb_tx_buf[0];
      __cil_tmp48 = (void *)__cil_tmp47;
      __cil_tmp49 = (void const *)(& vfd_packet6);
      __ret___1 = __memcpy(__cil_tmp48, __cil_tmp49, __len___1);
      }
    } else {
      {
      __cil_tmp50 = & context->usb_tx_buf[0];
      __cil_tmp51 = (void *)__cil_tmp50;
      __cil_tmp52 = (void const *)(& vfd_packet6);
      __ret___1 = __builtin_memcpy(__cil_tmp51, __cil_tmp52, __len___1);
      }
    }
    {
    context->usb_tx_buf[7] = (unsigned char )seq;
    retval = send_packet(context);
    }
    if (retval) {
      {
      __cil_tmp53 = seq / 2;
      printk("<3>lirc_imon: %s: send packet failed for packet #%d\n", "vfd_write",
             __cil_tmp53);
      }
    } else {

    }
  } else {

  }
  exit:
  {
  __cil_tmp54 = & context->ctx_lock;
  mutex_unlock(__cil_tmp54);
  __cil_tmp55 = (void const *)data_buf;
  kfree(__cil_tmp55);
  }
  if (! retval) {
    tmp___10 = n_bytes;
  } else {
    tmp___10 = (size_t )retval;
  }
  return ((ssize_t )tmp___10);
}
}
static void usb_tx_callback(struct urb *urb )
{ struct imon_context *context ;
  void *__cil_tmp3 ;
  atomic_t *__cil_tmp4 ;
  struct completion *__cil_tmp5 ;

  {
  if (! urb) {
    return;
  } else {

  }
  __cil_tmp3 = urb->context;
  context = (struct imon_context *)__cil_tmp3;
  if (! context) {
    return;
  } else {

  }
  {
  context->tx.status = urb->status;
  __cil_tmp4 = & context->tx.busy;
  atomic_set(__cil_tmp4, 0);
  __cil_tmp5 = & context->tx.finished;
  complete(__cil_tmp5);
  }
  return;
}
}
static int ir_open(void *data )
{ int retval ;
  struct imon_context *context ;
  struct lirc_driver *__cil_tmp4 ;
  struct device *__cil_tmp5 ;
  struct device const *__cil_tmp6 ;

  {
  {
  retval = 0;
  mutex_lock_nested(& driver_lock, 0U);
  context = (struct imon_context *)data;
  context->rx.count = 0;
  context->rx.initial_space = 1;
  context->rx.prev_bit = 0;
  context->ir_isopen = 1;
  __cil_tmp4 = context->driver;
  __cil_tmp5 = __cil_tmp4->dev;
  __cil_tmp6 = (struct device const *)__cil_tmp5;
  _dev_info(__cil_tmp6, "IR port opened\n");
  mutex_unlock(& driver_lock);
  }
  return (retval);
}
}
static void ir_close(void *data )
{ struct imon_context *context ;
  struct mutex *__cil_tmp3 ;
  struct lirc_driver *__cil_tmp4 ;
  struct device *__cil_tmp5 ;
  struct device const *__cil_tmp6 ;
  int __cil_tmp7 ;
  int __cil_tmp8 ;
  struct mutex *__cil_tmp9 ;
  struct mutex *__cil_tmp10 ;

  {
  context = (struct imon_context *)data;
  if (! context) {
    {
    printk("<3>lirc_imon: %s: no context for device\n", "ir_close");
    }
    return;
  } else {

  }
  {
  __cil_tmp3 = & context->ctx_lock;
  mutex_lock_nested(__cil_tmp3, 0U);
  context->ir_isopen = 0;
  __cil_tmp4 = context->driver;
  __cil_tmp5 = __cil_tmp4->dev;
  __cil_tmp6 = (struct device const *)__cil_tmp5;
  _dev_info(__cil_tmp6, "IR port closed\n");
  }
  {
  __cil_tmp7 = context->dev_present;
  if (! __cil_tmp7) {
    {
    deregister_from_lirc(context);
    }
    {
    __cil_tmp8 = context->display_isopen;
    if (! __cil_tmp8) {
      {
      __cil_tmp9 = & context->ctx_lock;
      mutex_unlock(__cil_tmp9);
      free_imon_context(context);
      }
      return;
    } else {

    }
    }
  } else {

  }
  }
  {
  __cil_tmp10 = & context->ctx_lock;
  mutex_unlock(__cil_tmp10);
  }
  return;
}
}
static void submit_data(struct imon_context *context ) ;
static struct _ddebug descriptor___0 __attribute__((__used__, __section__("__verbose"),
__aligned__(8))) = {"lirc_imon", "submit_data", "/anthill/stuff/tacas-comp/work/current--X--drivers/staging/lirc/lirc_imon.ko--X--bulklinux-3.0.1--X--68_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/68_1/drivers/staging/lirc/lirc_imon.c.common.c",
    "submitting data to LIRC\n", 553U, 0U, (char)0};
static void submit_data(struct imon_context *context )
{ unsigned char buf[4] ;
  int value ;
  int i ;
  long tmp___7 ;
  int __cil_tmp6 ;
  int __cil_tmp7 ;
  long __cil_tmp8 ;
  struct lirc_driver *__cil_tmp9 ;
  struct device *__cil_tmp10 ;
  struct device const *__cil_tmp11 ;
  int __cil_tmp12 ;
  int __cil_tmp13 ;
  struct lirc_driver *__cil_tmp14 ;
  struct lirc_buffer *__cil_tmp15 ;
  unsigned char *__cil_tmp16 ;
  struct lirc_driver *__cil_tmp17 ;
  struct lirc_buffer *__cil_tmp18 ;
  wait_queue_head_t *__cil_tmp19 ;
  void *__cil_tmp20 ;

  {
  value = context->rx.count;
  {
  while (1) {
    while_continue: ;

    {
    while (1) {
      while_continue___0: ;
      {
      __cil_tmp6 = ! descriptor___0.enabled;
      __cil_tmp7 = ! __cil_tmp6;
      __cil_tmp8 = (long )__cil_tmp7;
      tmp___7 = __builtin_expect(__cil_tmp8, 0L);
      }
      if (tmp___7) {
        {
        __cil_tmp9 = context->driver;
        __cil_tmp10 = __cil_tmp9->dev;
        __cil_tmp11 = (struct device const *)__cil_tmp10;
        dev_printk("<7>", __cil_tmp11, "submitting data to LIRC\n");
        }
      } else {

      }
      goto while_break___0;
    }
    while_break___3: ;
    }

    while_break___0: ;
    goto while_break;
  }
  while_break___2: ;
  }

  while_break:
  value = value * 250;
  value = value & 16777215;
  if (context->rx.prev_bit) {
    value = value | 16777216;
  } else {

  }
  i = 0;
  {
  while (1) {
    while_continue___1: ;
    if (i < 4) {

    } else {
      goto while_break___1;
    }
    __cil_tmp12 = i * 8;
    __cil_tmp13 = value >> __cil_tmp12;
    buf[i] = (unsigned char )__cil_tmp13;
    i = i + 1;
  }
  while_break___4: ;
  }

  while_break___1:
  {
  __cil_tmp14 = context->driver;
  __cil_tmp15 = __cil_tmp14->rbuf;
  __cil_tmp16 = & buf[0];
  lirc_buffer_write(__cil_tmp15, __cil_tmp16);
  __cil_tmp17 = context->driver;
  __cil_tmp18 = __cil_tmp17->rbuf;
  __cil_tmp19 = & __cil_tmp18->wait_poll;
  __cil_tmp20 = (void *)0;
  __wake_up(__cil_tmp19, 3U, 1, __cil_tmp20);
  }
  return;
}
}
static void imon_incoming_packet(struct imon_context *context , struct urb *urb ,
                                 int intf )
{ int len ;
  unsigned char *buf ;
  struct device *dev ;
  int octet ;
  int bit ;
  unsigned char mask ;
  int i ;
  int curr_bit ;
  u32 __cil_tmp12 ;
  void *__cil_tmp13 ;
  struct lirc_driver *__cil_tmp14 ;
  int __cil_tmp15 ;
  struct device const *__cil_tmp16 ;
  unsigned char *__cil_tmp17 ;
  unsigned char __cil_tmp18 ;
  int __cil_tmp19 ;
  unsigned char *__cil_tmp20 ;
  unsigned char __cil_tmp21 ;
  int __cil_tmp22 ;
  int __cil_tmp23 ;
  unsigned char *__cil_tmp24 ;
  unsigned char __cil_tmp25 ;
  int __cil_tmp26 ;
  int __cil_tmp27 ;
  int __cil_tmp28 ;
  int __cil_tmp29 ;
  int __cil_tmp30 ;
  int __cil_tmp31 ;
  unsigned char *__cil_tmp32 ;
  unsigned char __cil_tmp33 ;
  int __cil_tmp34 ;

  {
  __cil_tmp12 = urb->actual_length;
  len = (int )__cil_tmp12;
  __cil_tmp13 = urb->transfer_buffer;
  buf = (unsigned char *)__cil_tmp13;
  __cil_tmp14 = context->driver;
  dev = __cil_tmp14->dev;
  {
  __cil_tmp15 = context->ir_isopen;
  if (! __cil_tmp15) {
    return;
  } else {

  }
  }
  if (len != 8) {
    {
    __cil_tmp16 = (struct device const *)dev;
    dev_warn(__cil_tmp16, "imon %s: invalid incoming packet size (len = %d, intf%d)\n",
             "imon_incoming_packet", len, intf);
    }
    return;
  } else {

  }
  if (debug) {
    {
    printk("<6>raw packet: ");
    i = 0;
    }
    {
    while (1) {
      while_continue: ;
      if (i < len) {

      } else {
        goto while_break;
      }
      {
      __cil_tmp17 = buf + i;
      __cil_tmp18 = *__cil_tmp17;
      __cil_tmp19 = (int )__cil_tmp18;
      printk("%02x ", __cil_tmp19);
      i = i + 1;
      }
    }
    while_break___2: ;
    }

    while_break:
    {
    printk("\n");
    }
  } else {

  }
  {
  __cil_tmp20 = buf + 7;
  __cil_tmp21 = *__cil_tmp20;
  __cil_tmp22 = (int )__cil_tmp21;
  if (__cil_tmp22 == 1) {
    if (context->rx.initial_space) {
      {
      context->rx.prev_bit = 0;
      context->rx.count = 4;
      submit_data(context);
      context->rx.count = 0;
      }
    } else {

    }
  } else {

  }
  }
  octet = 0;
  {
  while (1) {
    while_continue___0: ;
    if (octet < 5) {

    } else {
      goto while_break___0;
    }
    mask = (unsigned char)128;
    bit = 0;
    {
    while (1) {
      while_continue___1: ;
      if (bit < 8) {

      } else {
        goto while_break___1;
      }
      __cil_tmp23 = (int )mask;
      __cil_tmp24 = buf + octet;
      __cil_tmp25 = *__cil_tmp24;
      __cil_tmp26 = (int )__cil_tmp25;
      __cil_tmp27 = __cil_tmp26 & __cil_tmp23;
      curr_bit = ! __cil_tmp27;
      {
      __cil_tmp28 = context->rx.prev_bit;
      if (curr_bit != __cil_tmp28) {
        if (context->rx.count) {
          {
          submit_data(context);
          context->rx.count = 0;
          }
        } else {

        }
        context->rx.prev_bit = curr_bit;
      } else {

      }
      }
      __cil_tmp29 = context->rx.count;
      context->rx.count = __cil_tmp29 + 1;
      __cil_tmp30 = (int )mask;
      __cil_tmp31 = __cil_tmp30 >> 1;
      mask = (unsigned char )__cil_tmp31;
      bit = bit + 1;
    }
    while_break___4: ;
    }

    while_break___1:
    octet = octet + 1;
  }
  while_break___3: ;
  }

  while_break___0: ;
  {
  __cil_tmp32 = buf + 7;
  __cil_tmp33 = *__cil_tmp32;
  __cil_tmp34 = (int )__cil_tmp33;
  if (__cil_tmp34 == 10) {
    if (context->rx.count) {
      {
      submit_data(context);
      context->rx.count = 0;
      }
    } else {

    }
    context->rx.initial_space = context->rx.prev_bit;
  } else {

  }
  }
  return;
}
}
static void usb_rx_callback(struct urb *urb )
{ struct imon_context *context ;
  int intfnum ;
  void *__cil_tmp4 ;
  int __cil_tmp5 ;
  int __cil_tmp6 ;
  struct lirc_driver *__cil_tmp7 ;
  struct device *__cil_tmp8 ;
  struct device const *__cil_tmp9 ;
  int __cil_tmp10 ;
  struct urb *__cil_tmp11 ;

  {
  intfnum = 0;
  if (! urb) {
    return;
  } else {

  }
  __cil_tmp4 = urb->context;
  context = (struct imon_context *)__cil_tmp4;
  if (! context) {
    return;
  } else {

  }
  {
  __cil_tmp5 = urb->status;
  if (__cil_tmp5 == -2) {
    goto case_neg_2;
  } else {
    {
    __cil_tmp6 = urb->status;
    if (__cil_tmp6 == 0) {
      goto case_0;
    } else {
      goto switch_default;
      if (0) {
        case_neg_2:
        return;
        case_0:
        {
        imon_incoming_packet(context, urb, intfnum);
        }
        goto switch_break;
        switch_default:
        {
        __cil_tmp7 = context->driver;
        __cil_tmp8 = __cil_tmp7->dev;
        __cil_tmp9 = (struct device const *)__cil_tmp8;
        __cil_tmp10 = urb->status;
        dev_warn(__cil_tmp9, "imon %s: status(%d): ignored\n", "usb_rx_callback",
                 __cil_tmp10);
        }
        goto switch_break;
      } else {
        switch_break: ;
      }
    }
    }
  }
  }
  {
  __cil_tmp11 = context->rx_urb;
  usb_submit_urb(__cil_tmp11, 32U);
  }
  return;
}
}
static struct _ddebug descriptor___1 __attribute__((__used__, __section__("__verbose"),
__aligned__(8))) = {"lirc_imon", "imon_probe", "/anthill/stuff/tacas-comp/work/current--X--drivers/staging/lirc/lirc_imon.ko--X--bulklinux-3.0.1--X--68_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/68_1/drivers/staging/lirc/lirc_imon.c.common.c",
    "%s: found iMON device (%04x:%04x, intf%d)\n", 755U, 0U, (char)0};
static struct _ddebug descriptor___2 __attribute__((__used__, __section__("__verbose"),
__aligned__(8))) = {"lirc_imon", "imon_probe", "/anthill/stuff/tacas-comp/work/current--X--drivers/staging/lirc/lirc_imon.ko--X--bulklinux-3.0.1--X--68_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/68_1/drivers/staging/lirc/lirc_imon.c.common.c",
    "%s: found IR endpoint\n", 779U, 0U, (char)0};
static struct _ddebug descriptor___3 __attribute__((__used__, __section__("__verbose"),
__aligned__(8))) = {"lirc_imon", "imon_probe", "/anthill/stuff/tacas-comp/work/current--X--drivers/staging/lirc/lirc_imon.ko--X--bulklinux-3.0.1--X--68_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/68_1/drivers/staging/lirc/lirc_imon.c.common.c",
    "%s: found display endpoint\n", 785U, 0U, (char)0};
static struct _ddebug descriptor___4 __attribute__((__used__, __section__("__verbose"),
__aligned__(8))) = {"lirc_imon", "imon_probe", "/anthill/stuff/tacas-comp/work/current--X--drivers/staging/lirc/lirc_imon.ko--X--bulklinux-3.0.1--X--68_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/68_1/drivers/staging/lirc/lirc_imon.c.common.c",
    "%s: device has no display\n", 796U, 0U, (char)0};
static struct _ddebug descriptor___5 __attribute__((__used__, __section__("__verbose"),
__aligned__(8))) = {"lirc_imon", "imon_probe", "/anthill/stuff/tacas-comp/work/current--X--drivers/staging/lirc/lirc_imon.ko--X--bulklinux-3.0.1--X--68_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/68_1/drivers/staging/lirc/lirc_imon.c.common.c",
    "%s: vfd_proto_6p: %d\n", 813U, 0U, (char)0};
static struct lock_class_key __key___9 ;
static struct _ddebug descriptor___6 __attribute__((__used__, __section__("__verbose"),
__aligned__(8))) = {"lirc_imon", "imon_probe", "/anthill/stuff/tacas-comp/work/current--X--drivers/staging/lirc/lirc_imon.ko--X--bulklinux-3.0.1--X--68_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/68_1/drivers/staging/lirc/lirc_imon.c.common.c",
    "%s: Registering iMON display with sysfs\n", 914U, 0U, (char)0};
static int imon_probe(struct usb_interface *interface , struct usb_device_id const *id )
{ struct usb_device *usbdev ;
  struct usb_host_interface *iface_desc ;
  struct usb_endpoint_descriptor *rx_endpoint ;
  struct usb_endpoint_descriptor *tx_endpoint ;
  struct urb *rx_urb ;
  struct urb *tx_urb ;
  struct lirc_driver *driver ;
  struct lirc_buffer *rbuf ;
  struct device *dev ;
  int ifnum ;
  int lirc_minor ;
  int num_endpts ;
  int retval ;
  int display_ep_found ;
  int ir_ep_found ;
  int alloc_status ;
  int vfd_proto_6p ;
  struct imon_context *context ;
  int i ;
  u16 vendor ;
  u16 product ;
  void *tmp___7 ;
  struct usb_device_id const *tmp___8 ;
  struct usb_device *tmp___9 ;
  long tmp___10 ;
  struct usb_endpoint_descriptor *ep ;
  int ep_dir ;
  int ep_type ;
  long tmp___11 ;
  long tmp___12 ;
  long tmp___13 ;
  struct usb_device_id const *tmp___14 ;
  long tmp___15 ;
  void *tmp___16 ;
  void *tmp___17 ;
  int tmp___18 ;
  unsigned int tmp___19 ;
  long tmp___20 ;
  int tmp___21 ;
  void *__cil_tmp42 ;
  void *__cil_tmp43 ;
  void *__cil_tmp44 ;
  void *__cil_tmp45 ;
  void *__cil_tmp46 ;
  void *__cil_tmp47 ;
  void *__cil_tmp48 ;
  void *__cil_tmp49 ;
  void *__cil_tmp50 ;
  struct usb_device_id *__cil_tmp51 ;
  struct usb_device_id const *__cil_tmp52 ;
  __u8 __cil_tmp53 ;
  __u8 __cil_tmp54 ;
  int __cil_tmp55 ;
  int __cil_tmp56 ;
  long __cil_tmp57 ;
  struct device const *__cil_tmp58 ;
  int __cil_tmp59 ;
  int __cil_tmp60 ;
  struct usb_host_endpoint *__cil_tmp61 ;
  struct usb_host_endpoint *__cil_tmp62 ;
  __u8 __cil_tmp63 ;
  int __cil_tmp64 ;
  __u8 __cil_tmp65 ;
  int __cil_tmp66 ;
  int __cil_tmp67 ;
  int __cil_tmp68 ;
  long __cil_tmp69 ;
  struct device const *__cil_tmp70 ;
  int __cil_tmp71 ;
  int __cil_tmp72 ;
  long __cil_tmp73 ;
  struct device const *__cil_tmp74 ;
  int __cil_tmp75 ;
  int __cil_tmp76 ;
  int __cil_tmp77 ;
  long __cil_tmp78 ;
  struct device const *__cil_tmp79 ;
  struct usb_device_id *__cil_tmp80 ;
  struct usb_device_id const *__cil_tmp81 ;
  int __cil_tmp82 ;
  int __cil_tmp83 ;
  long __cil_tmp84 ;
  struct device const *__cil_tmp85 ;
  struct mutex *__cil_tmp86 ;
  char *__cil_tmp87 ;
  int __cil_tmp88 ;
  struct mutex *__cil_tmp89 ;
  struct device const *__cil_tmp90 ;
  struct usb_device *__cil_tmp91 ;
  struct usb_endpoint_descriptor *__cil_tmp92 ;
  __u8 __cil_tmp93 ;
  unsigned int __cil_tmp94 ;
  struct urb *__cil_tmp95 ;
  struct usb_device *__cil_tmp96 ;
  int __cil_tmp97 ;
  unsigned int __cil_tmp98 ;
  unsigned int __cil_tmp99 ;
  unsigned int __cil_tmp100 ;
  unsigned char *__cil_tmp101 ;
  void *__cil_tmp102 ;
  int __cil_tmp103 ;
  void *__cil_tmp104 ;
  struct usb_endpoint_descriptor *__cil_tmp105 ;
  __u8 __cil_tmp106 ;
  int __cil_tmp107 ;
  struct urb *__cil_tmp108 ;
  struct mutex *__cil_tmp109 ;
  void *__cil_tmp110 ;
  int __cil_tmp111 ;
  int __cil_tmp112 ;
  long __cil_tmp113 ;
  struct device const *__cil_tmp114 ;
  struct device const *__cil_tmp115 ;
  struct device const *__cil_tmp116 ;
  int __cil_tmp117 ;
  int __cil_tmp118 ;
  struct usb_bus *__cil_tmp119 ;
  int __cil_tmp120 ;
  int __cil_tmp121 ;
  struct mutex *__cil_tmp122 ;
  void const *__cil_tmp123 ;
  void const *__cil_tmp124 ;
  void const *__cil_tmp125 ;
  void *__cil_tmp126 ;

  {
  {
  __cil_tmp42 = (void *)0;
  usbdev = (struct usb_device *)__cil_tmp42;
  __cil_tmp43 = (void *)0;
  iface_desc = (struct usb_host_interface *)__cil_tmp43;
  __cil_tmp44 = (void *)0;
  rx_endpoint = (struct usb_endpoint_descriptor *)__cil_tmp44;
  __cil_tmp45 = (void *)0;
  tx_endpoint = (struct usb_endpoint_descriptor *)__cil_tmp45;
  __cil_tmp46 = (void *)0;
  rx_urb = (struct urb *)__cil_tmp46;
  __cil_tmp47 = (void *)0;
  tx_urb = (struct urb *)__cil_tmp47;
  __cil_tmp48 = (void *)0;
  driver = (struct lirc_driver *)__cil_tmp48;
  __cil_tmp49 = (void *)0;
  rbuf = (struct lirc_buffer *)__cil_tmp49;
  dev = & interface->dev;
  lirc_minor = 0;
  retval = 0;
  display_ep_found = 0;
  ir_ep_found = 0;
  alloc_status = 0;
  vfd_proto_6p = 0;
  __cil_tmp50 = (void *)0;
  context = (struct imon_context *)__cil_tmp50;
  tmp___7 = kzalloc(504UL, 208U);
  context = (struct imon_context *)tmp___7;
  }
  if (! context) {
    {
    printk("<3>lirc_imon: %s: kzalloc failed for context\n", "imon_probe");
    alloc_status = 1;
    }
    goto alloc_status_switch;
  } else {

  }
  {
  __cil_tmp51 = & ir_only_list[0];
  __cil_tmp52 = (struct usb_device_id const *)__cil_tmp51;
  tmp___8 = usb_match_id(interface, __cil_tmp52);
  }
  if (tmp___8) {
    context->display = 0;
  } else {
    context->display = 1;
  }
  {
  tmp___9 = interface_to_usbdev(interface);
  usbdev = usb_get_dev(tmp___9);
  iface_desc = interface->cur_altsetting;
  __cil_tmp53 = iface_desc->desc.bNumEndpoints;
  num_endpts = (int )__cil_tmp53;
  __cil_tmp54 = iface_desc->desc.bInterfaceNumber;
  ifnum = (int )__cil_tmp54;
  vendor = usbdev->descriptor.idVendor;
  product = usbdev->descriptor.idProduct;
  }
  {
  while (1) {
    while_continue: ;

    {
    while (1) {
      while_continue___0: ;
      {
      __cil_tmp55 = ! descriptor___1.enabled;
      __cil_tmp56 = ! __cil_tmp55;
      __cil_tmp57 = (long )__cil_tmp56;
      tmp___10 = __builtin_expect(__cil_tmp57, 0L);
      }
      if (tmp___10) {
        {
        __cil_tmp58 = (struct device const *)dev;
        __cil_tmp59 = (int )vendor;
        __cil_tmp60 = (int )product;
        dev_printk("<7>", __cil_tmp58, "%s: found iMON device (%04x:%04x, intf%d)\n",
                   "imon_probe", __cil_tmp59, __cil_tmp60, ifnum);
        }
      } else {

      }
      goto while_break___0;
    }
    while_break___14: ;
    }

    while_break___0: ;
    goto while_break;
  }
  while_break___13: ;
  }

  while_break:
  {
  mutex_lock_nested(& driver_lock, 0U);
  i = 0;
  }
  {
  while (1) {
    while_continue___1: ;
    if (i < num_endpts) {
      if (ir_ep_found) {
        if (display_ep_found) {
          goto while_break___1;
        } else {

        }
      } else {

      }
    } else {
      goto while_break___1;
    }
    __cil_tmp61 = iface_desc->endpoint;
    __cil_tmp62 = __cil_tmp61 + i;
    ep = & __cil_tmp62->desc;
    __cil_tmp63 = ep->bEndpointAddress;
    __cil_tmp64 = (int )__cil_tmp63;
    ep_dir = __cil_tmp64 & 128;
    __cil_tmp65 = ep->bmAttributes;
    __cil_tmp66 = (int )__cil_tmp65;
    ep_type = __cil_tmp66 & 3;
    if (! ir_ep_found) {
      if (ep_dir == 128) {
        if (ep_type == 3) {
          rx_endpoint = ep;
          ir_ep_found = 1;
          {
          while (1) {
            while_continue___2: ;

            {
            while (1) {
              while_continue___3: ;
              {
              __cil_tmp67 = ! descriptor___2.enabled;
              __cil_tmp68 = ! __cil_tmp67;
              __cil_tmp69 = (long )__cil_tmp68;
              tmp___11 = __builtin_expect(__cil_tmp69, 0L);
              }
              if (tmp___11) {
                {
                __cil_tmp70 = (struct device const *)dev;
                dev_printk("<7>", __cil_tmp70, "%s: found IR endpoint\n", "imon_probe");
                }
              } else {

              }
              goto while_break___3;
            }
            while_break___17: ;
            }

            while_break___3: ;
            goto while_break___2;
          }
          while_break___16: ;
          }

          while_break___2: ;
        } else {
          goto _L___0;
        }
      } else {
        goto _L___0;
      }
    } else
    _L___0:
    if (! display_ep_found) {
      if (ep_dir == 0) {
        if (ep_type == 3) {
          tx_endpoint = ep;
          display_ep_found = 1;
          {
          while (1) {
            while_continue___4: ;

            {
            while (1) {
              while_continue___5: ;
              {
              __cil_tmp71 = ! descriptor___3.enabled;
              __cil_tmp72 = ! __cil_tmp71;
              __cil_tmp73 = (long )__cil_tmp72;
              tmp___12 = __builtin_expect(__cil_tmp73, 0L);
              }
              if (tmp___12) {
                {
                __cil_tmp74 = (struct device const *)dev;
                dev_printk("<7>", __cil_tmp74, "%s: found display endpoint\n", "imon_probe");
                }
              } else {

              }
              goto while_break___5;
            }
            while_break___19: ;
            }

            while_break___5: ;
            goto while_break___4;
          }
          while_break___18: ;
          }

          while_break___4: ;
        } else {

        }
      } else {

      }
    } else {

    }
    i = i + 1;
  }
  while_break___15: ;
  }

  while_break___1: ;
  {
  __cil_tmp75 = context->display;
  if (__cil_tmp75 == 0) {
    display_ep_found = 0;
    {
    while (1) {
      while_continue___6: ;

      {
      while (1) {
        while_continue___7: ;
        {
        __cil_tmp76 = ! descriptor___4.enabled;
        __cil_tmp77 = ! __cil_tmp76;
        __cil_tmp78 = (long )__cil_tmp77;
        tmp___13 = __builtin_expect(__cil_tmp78, 0L);
        }
        if (tmp___13) {
          {
          __cil_tmp79 = (struct device const *)dev;
          dev_printk("<7>", __cil_tmp79, "%s: device has no display\n", "imon_probe");
          }
        } else {

        }
        goto while_break___7;
      }
      while_break___21: ;
      }

      while_break___7: ;
      goto while_break___6;
    }
    while_break___20: ;
    }

    while_break___6: ;
  } else {

  }
  }
  if (! ir_ep_found) {
    {
    printk("<3>lirc_imon: %s: no valid input (IR) endpoint found.\n", "imon_probe");
    retval = -19;
    alloc_status = 2;
    }
    goto alloc_status_switch;
  } else {

  }
  if (display_ep_found) {
    {
    __cil_tmp80 = & vfd_proto_6p_list[0];
    __cil_tmp81 = (struct usb_device_id const *)__cil_tmp80;
    tmp___14 = usb_match_id(interface, __cil_tmp81);
    }
    if (tmp___14) {
      vfd_proto_6p = 1;
    } else {

    }
    {
    while (1) {
      while_continue___8: ;

      {
      while (1) {
        while_continue___9: ;
        {
        __cil_tmp82 = ! descriptor___5.enabled;
        __cil_tmp83 = ! __cil_tmp82;
        __cil_tmp84 = (long )__cil_tmp83;
        tmp___15 = __builtin_expect(__cil_tmp84, 0L);
        }
        if (tmp___15) {
          {
          __cil_tmp85 = (struct device const *)dev;
          dev_printk("<7>", __cil_tmp85, "%s: vfd_proto_6p: %d\n", "imon_probe", vfd_proto_6p);
          }
        } else {

        }
        goto while_break___9;
      }
      while_break___23: ;
      }

      while_break___9: ;
      goto while_break___8;
    }
    while_break___22: ;
    }

    while_break___8: ;
  } else {

  }
  {
  tmp___16 = kzalloc(136UL, 208U);
  driver = (struct lirc_driver *)tmp___16;
  }
  if (! driver) {
    {
    printk("<3>lirc_imon: %s: kzalloc failed for lirc_driver\n", "imon_probe");
    alloc_status = 2;
    }
    goto alloc_status_switch;
  } else {

  }
  {
  tmp___17 = kmalloc(200UL, 208U);
  rbuf = (struct lirc_buffer *)tmp___17;
  }
  if (! rbuf) {
    {
    printk("<3>lirc_imon: %s: kmalloc failed for lirc_buffer\n", "imon_probe");
    alloc_status = 3;
    }
    goto alloc_status_switch;
  } else {

  }
  {
  tmp___18 = lirc_buffer_init(rbuf, 4U, 128U);
  }
  if (tmp___18) {
    {
    printk("<3>lirc_imon: %s: lirc_buffer_init failed\n", "imon_probe");
    alloc_status = 4;
    }
    goto alloc_status_switch;
  } else {

  }
  {
  rx_urb = usb_alloc_urb(0, 208U);
  }
  if (! rx_urb) {
    {
    printk("<3>lirc_imon: %s: usb_alloc_urb failed for IR urb\n", "imon_probe");
    alloc_status = 5;
    }
    goto alloc_status_switch;
  } else {

  }
  {
  tx_urb = usb_alloc_urb(0, 208U);
  }
  if (! tx_urb) {
    {
    printk("<3>lirc_imon: %s: usb_alloc_urb failed for display urb\n", "imon_probe");
    alloc_status = 6;
    }
    goto alloc_status_switch;
  } else {

  }
  {
  while (1) {
    while_continue___10: ;
    {
    __cil_tmp86 = & context->ctx_lock;
    __mutex_init(__cil_tmp86, "&context->ctx_lock", & __key___9);
    }
    goto while_break___10;
  }
  while_break___24: ;
  }

  while_break___10:
  {
  context->vfd_proto_6p = vfd_proto_6p;
  __cil_tmp87 = & driver->name[0];
  strcpy(__cil_tmp87, "lirc_imon");
  driver->minor = -1;
  driver->code_length = (__u32 )32;
  driver->sample_rate = 0;
  __cil_tmp88 = 4 << 16;
  driver->features = (__u32 )__cil_tmp88;
  driver->data = (void *)context;
  driver->rbuf = rbuf;
  driver->set_use_inc = & ir_open;
  driver->set_use_dec = & ir_close;
  driver->dev = & interface->dev;
  driver->owner = & __this_module;
  __cil_tmp89 = & context->ctx_lock;
  mutex_lock_nested(__cil_tmp89, 0U);
  context->driver = driver;
  lirc_minor = lirc_register_driver(driver);
  }
  if (lirc_minor < 0) {
    {
    printk("<3>lirc_imon: %s: lirc_register_driver failed\n", "imon_probe");
    alloc_status = 7;
    }
    goto unlock;
  } else {
    {
    __cil_tmp90 = (struct device const *)dev;
    _dev_info(__cil_tmp90, "Registered iMON driver (lirc minor: %d)\n", lirc_minor);
    }
  }
  driver->minor = lirc_minor;
  context->usbdev = usbdev;
  context->dev_present = 1;
  context->rx_endpoint = rx_endpoint;
  context->rx_urb = rx_urb;
  context->tx_endpoint = tx_endpoint;
  context->tx_urb = tx_urb;
  if (display_ep_found) {
    context->display = 1;
  } else {

  }
  {
  __cil_tmp91 = context->usbdev;
  __cil_tmp92 = context->rx_endpoint;
  __cil_tmp93 = __cil_tmp92->bEndpointAddress;
  __cil_tmp94 = (unsigned int )__cil_tmp93;
  tmp___19 = __create_pipe(__cil_tmp91, __cil_tmp94);
  __cil_tmp95 = context->rx_urb;
  __cil_tmp96 = context->usbdev;
  __cil_tmp97 = 1 << 30;
  __cil_tmp98 = (unsigned int )__cil_tmp97;
  __cil_tmp99 = __cil_tmp98 | tmp___19;
  __cil_tmp100 = __cil_tmp99 | 128U;
  __cil_tmp101 = & context->usb_rx_buf[0];
  __cil_tmp102 = (void *)__cil_tmp101;
  __cil_tmp103 = (int )8UL;
  __cil_tmp104 = (void *)context;
  __cil_tmp105 = context->rx_endpoint;
  __cil_tmp106 = __cil_tmp105->bInterval;
  __cil_tmp107 = (int )__cil_tmp106;
  usb_fill_int_urb(__cil_tmp95, __cil_tmp96, __cil_tmp100, __cil_tmp102, __cil_tmp103,
                   & usb_rx_callback, __cil_tmp104, __cil_tmp107);
  __cil_tmp108 = context->rx_urb;
  retval = usb_submit_urb(__cil_tmp108, 208U);
  }
  if (retval) {
    {
    printk("<3>lirc_imon: %s: usb_submit_urb failed for intf0 (%d)\n", "imon_probe",
           retval);
    __cil_tmp109 = & context->ctx_lock;
    mutex_unlock(__cil_tmp109);
    }
    goto exit;
  } else {

  }
  {
  __cil_tmp110 = (void *)context;
  usb_set_intfdata(interface, __cil_tmp110);
  }
  if (context->display) {
    if (ifnum == 0) {
      {
      while (1) {
        while_continue___11: ;

        {
        while (1) {
          while_continue___12: ;
          {
          __cil_tmp111 = ! descriptor___6.enabled;
          __cil_tmp112 = ! __cil_tmp111;
          __cil_tmp113 = (long )__cil_tmp112;
          tmp___20 = __builtin_expect(__cil_tmp113, 0L);
          }
          if (tmp___20) {
            {
            __cil_tmp114 = (struct device const *)dev;
            dev_printk("<7>", __cil_tmp114, "%s: Registering iMON display with sysfs\n",
                       "imon_probe");
            }
          } else {

          }
          goto while_break___12;
        }
        while_break___26: ;
        }

        while_break___12: ;
        goto while_break___11;
      }
      while_break___25: ;
      }

      while_break___11:
      {
      tmp___21 = usb_register_dev(interface, & imon_class);
      }
      if (tmp___21) {
        {
        __cil_tmp115 = (struct device const *)dev;
        _dev_info(__cil_tmp115, "%s: could not get a minor number for display\n",
                  "imon_probe");
        }
      } else {

      }
    } else {

    }
  } else {

  }
  {
  __cil_tmp116 = (struct device const *)dev;
  __cil_tmp117 = (int )vendor;
  __cil_tmp118 = (int )product;
  __cil_tmp119 = usbdev->bus;
  __cil_tmp120 = __cil_tmp119->busnum;
  __cil_tmp121 = usbdev->devnum;
  _dev_info(__cil_tmp116, "iMON device (%04x:%04x, intf%d) on usb<%d:%d> initialized\n",
            __cil_tmp117, __cil_tmp118, ifnum, __cil_tmp120, __cil_tmp121);
  }
  unlock:
  {
  __cil_tmp122 = & context->ctx_lock;
  mutex_unlock(__cil_tmp122);
  }
  alloc_status_switch:
  if (alloc_status == 7) {
    goto case_7;
  } else
  if (alloc_status == 6) {
    goto case_6;
  } else
  if (alloc_status == 5) {
    goto case_5;
  } else
  if (alloc_status == 4) {
    goto case_4;
  } else
  if (alloc_status == 3) {
    goto case_3;
  } else
  if (alloc_status == 2) {
    goto case_2;
  } else
  if (alloc_status == 1) {
    goto case_1;
  } else
  if (alloc_status == 0) {
    goto case_0;
  } else
  if (0) {
    case_7:
    {
    usb_free_urb(tx_urb);
    }
    case_6:
    {
    usb_free_urb(rx_urb);
    }
    case_5:
    if (rbuf) {
      {
      lirc_buffer_free(rbuf);
      }
    } else {

    }
    case_4:
    {
    __cil_tmp123 = (void const *)rbuf;
    kfree(__cil_tmp123);
    }
    case_3:
    {
    __cil_tmp124 = (void const *)driver;
    kfree(__cil_tmp124);
    }
    case_2:
    {
    __cil_tmp125 = (void const *)context;
    kfree(__cil_tmp125);
    __cil_tmp126 = (void *)0;
    context = (struct imon_context *)__cil_tmp126;
    }
    case_1:
    if (retval != -19) {
      retval = -12;
    } else {

    }
    goto switch_break;
    case_0:
    retval = 0;
  } else {
    switch_break: ;
  }
  exit:
  {
  mutex_unlock(& driver_lock);
  }
  return (retval);
}
}
static void imon_disconnect(struct usb_interface *interface )
{ struct imon_context *context ;
  int ifnum ;
  void *tmp___7 ;
  int tmp___8 ;
  struct usb_host_interface *__cil_tmp6 ;
  __u8 __cil_tmp7 ;
  struct mutex *__cil_tmp8 ;
  void *__cil_tmp9 ;
  atomic_t *__cil_tmp10 ;
  atomic_t const *__cil_tmp11 ;
  struct urb *__cil_tmp12 ;
  struct completion *__cil_tmp13 ;
  struct urb *__cil_tmp14 ;
  int __cil_tmp15 ;
  int __cil_tmp16 ;
  struct mutex *__cil_tmp17 ;
  int __cil_tmp18 ;
  struct mutex *__cil_tmp19 ;
  struct mutex *__cil_tmp20 ;

  {
  {
  mutex_lock_nested(& driver_lock, 0U);
  tmp___7 = usb_get_intfdata(interface);
  context = (struct imon_context *)tmp___7;
  __cil_tmp6 = interface->cur_altsetting;
  __cil_tmp7 = __cil_tmp6->desc.bInterfaceNumber;
  ifnum = (int )__cil_tmp7;
  __cil_tmp8 = & context->ctx_lock;
  mutex_lock_nested(__cil_tmp8, 0U);
  __cil_tmp9 = (void *)0;
  usb_set_intfdata(interface, __cil_tmp9);
  __cil_tmp10 = & context->tx.busy;
  __cil_tmp11 = (atomic_t const *)__cil_tmp10;
  tmp___8 = atomic_read(__cil_tmp11);
  }
  if (tmp___8) {
    {
    __cil_tmp12 = context->tx_urb;
    usb_kill_urb(__cil_tmp12);
    __cil_tmp13 = & context->tx.finished;
    complete_all(__cil_tmp13);
    }
  } else {

  }
  {
  context->dev_present = 0;
  __cil_tmp14 = context->rx_urb;
  usb_kill_urb(__cil_tmp14);
  }
  if (context->display) {
    {
    usb_deregister_dev(interface, & imon_class);
    }
  } else {

  }
  {
  __cil_tmp15 = context->ir_isopen;
  if (! __cil_tmp15) {
    {
    __cil_tmp16 = context->dev_present;
    if (! __cil_tmp16) {
      {
      deregister_from_lirc(context);
      __cil_tmp17 = & context->ctx_lock;
      mutex_unlock(__cil_tmp17);
      }
      {
      __cil_tmp18 = context->display_isopen;
      if (! __cil_tmp18) {
        {
        free_imon_context(context);
        }
      } else {

      }
      }
    } else {
      {
      __cil_tmp19 = & context->ctx_lock;
      mutex_unlock(__cil_tmp19);
      }
    }
    }
  } else {
    {
    __cil_tmp20 = & context->ctx_lock;
    mutex_unlock(__cil_tmp20);
    }
  }
  }
  {
  mutex_unlock(& driver_lock);
  printk("<6>%s: iMON device (intf%d) disconnected\n", "imon_disconnect", ifnum);
  }
  return;
}
}
static int imon_suspend(struct usb_interface *intf , pm_message_t message )
{ struct imon_context *context ;
  void *tmp___7 ;
  struct urb *__cil_tmp5 ;

  {
  {
  tmp___7 = usb_get_intfdata(intf);
  context = (struct imon_context *)tmp___7;
  __cil_tmp5 = context->rx_urb;
  usb_kill_urb(__cil_tmp5);
  }
  return (0);
}
}
static int imon_resume(struct usb_interface *intf )
{ int rc ;
  struct imon_context *context ;
  void *tmp___7 ;
  unsigned int tmp___8 ;
  struct usb_device *__cil_tmp6 ;
  struct usb_endpoint_descriptor *__cil_tmp7 ;
  __u8 __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  struct urb *__cil_tmp10 ;
  struct usb_device *__cil_tmp11 ;
  int __cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  unsigned int __cil_tmp15 ;
  unsigned char *__cil_tmp16 ;
  void *__cil_tmp17 ;
  int __cil_tmp18 ;
  void *__cil_tmp19 ;
  struct usb_endpoint_descriptor *__cil_tmp20 ;
  __u8 __cil_tmp21 ;
  int __cil_tmp22 ;
  struct urb *__cil_tmp23 ;

  {
  {
  rc = 0;
  tmp___7 = usb_get_intfdata(intf);
  context = (struct imon_context *)tmp___7;
  __cil_tmp6 = context->usbdev;
  __cil_tmp7 = context->rx_endpoint;
  __cil_tmp8 = __cil_tmp7->bEndpointAddress;
  __cil_tmp9 = (unsigned int )__cil_tmp8;
  tmp___8 = __create_pipe(__cil_tmp6, __cil_tmp9);
  __cil_tmp10 = context->rx_urb;
  __cil_tmp11 = context->usbdev;
  __cil_tmp12 = 1 << 30;
  __cil_tmp13 = (unsigned int )__cil_tmp12;
  __cil_tmp14 = __cil_tmp13 | tmp___8;
  __cil_tmp15 = __cil_tmp14 | 128U;
  __cil_tmp16 = & context->usb_rx_buf[0];
  __cil_tmp17 = (void *)__cil_tmp16;
  __cil_tmp18 = (int )8UL;
  __cil_tmp19 = (void *)context;
  __cil_tmp20 = context->rx_endpoint;
  __cil_tmp21 = __cil_tmp20->bInterval;
  __cil_tmp22 = (int )__cil_tmp21;
  usb_fill_int_urb(__cil_tmp10, __cil_tmp11, __cil_tmp15, __cil_tmp17, __cil_tmp18,
                   & usb_rx_callback, __cil_tmp19, __cil_tmp22);
  __cil_tmp23 = context->rx_urb;
  rc = usb_submit_urb(__cil_tmp23, 32U);
  }
  return (rc);
}
}
static int imon_init(void) __attribute__((__section__(".init.text"), __no_instrument_function__)) ;
static int imon_init(void)
{ int rc ;

  {
  {
  printk("<6>lirc_imon: Driver for SoundGraph iMON MultiMedia IR/Display, v0.8\n");
  rc = usb_register(& imon_driver);
  }
  if (rc) {
    {
    printk("<3>lirc_imon: %s: usb register failed(%d)\n", "imon_init", rc);
    }
    return (-19);
  } else {

  }
  return (0);
}
}
static void imon_exit(void) __attribute__((__section__(".exit.text"), __no_instrument_function__)) ;
static void imon_exit(void)
{

  {
  {
  usb_deregister(& imon_driver);
  printk("<6>lirc_imon: module removed. Goodbye!\n");
  }
  return;
}
}
int init_module(void)
{ int tmp___7 ;

  {
  {
  tmp___7 = imon_init();
  }
  return (tmp___7);
}
}
void cleanup_module(void)
{

  {
  {
  imon_exit();
  }
  return;
}
}
void ldv_check_final_state(void) __attribute__((__ldv_model__)) ;
extern void ldv_check_return_value(int res ) ;
extern void ldv_initialize(void) ;
extern int nondet_int(void) ;
int LDV_IN_INTERRUPT ;
static int res_imon_probe_13 ;
void main1(void)
{ struct usb_interface *var_group1 ;
  struct usb_device_id const *var_imon_probe_13_p1 ;
  pm_message_t var_imon_suspend_15_p1 ;
  int tmp___7 ;
  int ldv_s_imon_driver_usb_driver ;
  int tmp___8 ;
  int tmp___9 ;
  int __cil_tmp8 ;

  {
  {
  LDV_IN_INTERRUPT = 1;
  ldv_initialize();
  tmp___7 = imon_init();
  }
  if (tmp___7) {
    goto ldv_final;
  } else {

  }
  ldv_s_imon_driver_usb_driver = 0;
  {
  while (1) {
    while_continue: ;
    {
    tmp___9 = nondet_int();
    }
    if (tmp___9) {

    } else {
      {
      __cil_tmp8 = ldv_s_imon_driver_usb_driver == 0;
      if (! __cil_tmp8) {

      } else {
        goto while_break;
      }
      }
    }
    {
    tmp___8 = nondet_int();
    }
    if (tmp___8 == 0) {
      goto case_0;
    } else
    if (tmp___8 == 1) {
      goto case_1;
    } else
    if (tmp___8 == 2) {
      goto case_2;
    } else
    if (tmp___8 == 3) {
      goto case_3;
    } else {
      goto switch_default;
      if (0) {
        case_0:
        if (ldv_s_imon_driver_usb_driver == 0) {
          {
          res_imon_probe_13 = imon_probe(var_group1, var_imon_probe_13_p1);
          ldv_check_return_value(res_imon_probe_13);
          }
          if (res_imon_probe_13) {
            goto ldv_module_exit;
          } else {

          }
          ldv_s_imon_driver_usb_driver = ldv_s_imon_driver_usb_driver + 1;
        } else {

        }
        goto switch_break;
        case_1:
        if (ldv_s_imon_driver_usb_driver == 1) {
          {
          imon_suspend(var_group1, var_imon_suspend_15_p1);
          ldv_s_imon_driver_usb_driver = ldv_s_imon_driver_usb_driver + 1;
          }
        } else {

        }
        goto switch_break;
        case_2:
        if (ldv_s_imon_driver_usb_driver == 2) {
          {
          imon_resume(var_group1);
          ldv_s_imon_driver_usb_driver = ldv_s_imon_driver_usb_driver + 1;
          }
        } else {

        }
        goto switch_break;
        case_3:
        if (ldv_s_imon_driver_usb_driver == 3) {
          {
          imon_disconnect(var_group1);
          ldv_s_imon_driver_usb_driver = 0;
          }
        } else {

        }
        goto switch_break;
        switch_default:
        goto switch_break;
      } else {
        switch_break: ;
      }
    }
  }
  while_break___0: ;
  }

  while_break: ;
  ldv_module_exit:
  {
  imon_exit();
  }
  ldv_final:
  {
  ldv_check_final_state();
  }
  return;
}
}
void ldv_blast_assert(void)
{

  {
  ERROR:
  goto ERROR;
}
}
extern void *ldv_undefined_pointer(void) ;
void ldv_assume_stop(void) __attribute__((__ldv_model_inline__)) ;
void ldv_assume_stop(void) __attribute__((__ldv_model_inline__)) ;
void ldv_assume_stop(void)
{

  {
  LDV_STOP:
  goto LDV_STOP;
}
}
int ldv_urb_state = 0;
int ldv_coherent_state = 0;
void *usb_alloc_coherent(struct usb_device *dev , size_t size , gfp_t mem_flags ,
                         dma_addr_t *dma ) __attribute__((__ldv_model__)) ;
void *usb_alloc_coherent(struct usb_device *dev , size_t size , gfp_t mem_flags ,
                         dma_addr_t *dma )
{ void *arbitrary_memory ;
  void *tmp___7 ;

  {
  {
  while (1) {
    while_continue: ;
    {
    tmp___7 = ldv_undefined_pointer();
    arbitrary_memory = tmp___7;
    }
    if (! arbitrary_memory) {
      return ((void *)0);
    } else {

    }
    ldv_coherent_state = ldv_coherent_state + 1;
    return (arbitrary_memory);
    goto while_break;
  }
  while_break___0: ;
  }

  while_break: ;
  return ((void *)0);
}
}
void usb_free_coherent(struct usb_device *dev , size_t size , void *addr , dma_addr_t dma ) __attribute__((__ldv_model__)) ;
void usb_free_coherent(struct usb_device *dev , size_t size , void *addr , dma_addr_t dma )
{ void *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  int __cil_tmp8 ;

  {
  {
  while (1) {
    while_continue: ;

    {
    __cil_tmp5 = (void *)0;
    __cil_tmp6 = (unsigned long )__cil_tmp5;
    __cil_tmp7 = (unsigned long )addr;
    __cil_tmp8 = __cil_tmp7 != __cil_tmp6;
    if (! __cil_tmp8) {
      {
      ldv_assume_stop();
      }
    } else {

    }
    }
    if (addr) {
      if (ldv_coherent_state >= 1) {

      } else {
        {
        ldv_blast_assert();
        }
      }
      ldv_coherent_state = ldv_coherent_state - 1;
    } else {

    }
    goto while_break;
  }
  while_break___0: ;
  }

  while_break: ;
  return;
}
}
struct urb *usb_alloc_urb(int iso_packets , gfp_t mem_flags ) __attribute__((__ldv_model__)) ;
struct urb *usb_alloc_urb(int iso_packets , gfp_t mem_flags )
{ void *arbitrary_memory ;
  void *tmp___7 ;
  void *__cil_tmp5 ;

  {
  {
  while (1) {
    while_continue: ;
    {
    tmp___7 = ldv_undefined_pointer();
    arbitrary_memory = tmp___7;
    }
    if (! arbitrary_memory) {
      {
      __cil_tmp5 = (void *)0;
      return ((struct urb *)__cil_tmp5);
      }
    } else {

    }
    ldv_urb_state = ldv_urb_state + 1;
    return ((struct urb *)arbitrary_memory);
    goto while_break;
  }
  while_break___0: ;
  }

  while_break: ;
  return ((struct urb *)0);
}
}
void usb_free_urb(struct urb *urb ) __attribute__((__ldv_model__)) ;
void usb_free_urb(struct urb *urb )
{ struct urb *__cil_tmp2 ;
  unsigned long __cil_tmp3 ;
  unsigned long __cil_tmp4 ;
  int __cil_tmp5 ;

  {
  {
  while (1) {
    while_continue: ;

    {
    __cil_tmp2 = (struct urb *)0;
    __cil_tmp3 = (unsigned long )__cil_tmp2;
    __cil_tmp4 = (unsigned long )urb;
    __cil_tmp5 = __cil_tmp4 != __cil_tmp3;
    if (! __cil_tmp5) {
      {
      ldv_assume_stop();
      }
    } else {

    }
    }
    if (urb) {
      if (ldv_urb_state >= 1) {

      } else {
        {
        ldv_blast_assert();
        }
      }
      ldv_urb_state = ldv_urb_state - 1;
    } else {

    }
    goto while_break;
  }
  while_break___0: ;
  }

  while_break: ;
  return;
}
}
void ldv_check_final_state(void) __attribute__((__ldv_model__)) ;
void ldv_check_final_state(void)
{

  {
  if (ldv_urb_state == 0) {

  } else {
    {
    ldv_blast_assert();
    }
  }
  if (ldv_coherent_state == 0) {

  } else {
    {
    ldv_blast_assert();
    }
  }
  return;
}
}
int m_run_st ;
int m_run_i ;
int m_run_pc ;
int s_memory0 ;

int s_run_st ;
int s_run_i ;
int s_run_pc ;
int c_m_lock ;
int c_m_ev ;
int c_req_type ;
int c_req_a ;
int c_req_d ;
int c_rsp_type ;
int c_rsp_status ;
int c_rsp_d ;
int c_empty_req ;
int c_empty_rsp ;
int c_read_req_ev ;
int c_write_req_ev ;
int c_read_rsp_ev ;
int c_write_rsp_ev ;
static int d_t ;
static int a_t ;
static int req_t_type ;
static int req_t_a ;
static int req_t_d ;
static int rsp_t_type ;
static int rsp_t_status ;
static int rsp_t_d ;
static int req_tt_type ;
static int req_tt_a ;
static int req_tt_d ;
static int rsp_tt_type ;
static int rsp_tt_status ;
static int rsp_tt_d ;

int s_memory_read(int i)
{
  int x;

  if (i==0)
    x = s_memory0;
  else
    error();

  return (x);
}

void s_memory_write(int i, int v)
{
  if (i==0)
    s_memory0 = v;
  else
    error();

  return;
}


void m_run(void)
{ int d ;
  int a ;
  int req_type ;
  int req_a ;
  int req_d ;
  int rsp_type ;
  int rsp_status ;
  int rsp_d ;
  int req_type___0 ;
  int req_a___0 ;
  int req_d___0 ;
  int rsp_type___0 ;
  int rsp_status___0 ;
  int rsp_d___0 ;

  {
  if ((int )m_run_pc == 0) {
    goto L_MASTER_RUN_ENTRY;
  } else {
    if ((int )m_run_pc == 1) {
      goto L_MASTER_RUN_MUTEX;
    } else {
      if ((int )m_run_pc == 2) {
        goto L_MASTER_RUN_PUT;
      } else {
        if ((int )m_run_pc == 3) {
          goto L_MASTER_RUN_GET;
        } else {
          if ((int )m_run_pc == 4) {
            goto L_MASTER_RUN_MUTEX2;
          } else {
            if ((int )m_run_pc == 5) {
              goto L_MASTER_RUN_PUT2;
            } else {
              if ((int )m_run_pc == 6) {
                goto L_MASTER_RUN_GET2;
              } else {

              }
            }
          }
        }
      }
    }
  }
  L_MASTER_RUN_ENTRY:
  a = 0;
  {
  while (1) {
    while_0_continue: ;
    if (a < 1) {

    } else {
      goto while_0_break;
    }
    req_type = 1;
    req_a = a;
    req_d = a + 50;
    {
    while (1) {
      while_1_continue: ;
      if (c_m_lock == 1) {

      } else {
        goto while_1_break;
      }
      m_run_st = 2;
      m_run_pc = 1;
      req_t_type = req_type;
      req_t_a = req_a;
      req_t_d = req_d;
      rsp_t_type = rsp_type;
      rsp_t_status = rsp_status;
      rsp_t_d = rsp_d;
      d_t = d;
      a_t = a;

      goto return_label;
      L_MASTER_RUN_MUTEX:
      req_type = req_t_type;
      req_a = req_t_a;
      req_d = req_t_d;
      rsp_type = rsp_t_type;
      rsp_status = rsp_t_status;
      rsp_d = rsp_t_d;
      d = d_t;
      a = a_t;
    }
    while_1_break: ;
    }
    c_m_lock = 1;
    {
    while (1) {
      while_2_continue: ;
      if ((int )c_empty_req == 0) {

      } else {
        goto while_2_break;
      }
      m_run_st = 2;
      m_run_pc = 2;
      req_t_type = req_type;
      req_t_a = req_a;
      req_t_d = req_d;
      rsp_t_type = rsp_type;
      rsp_t_status = rsp_status;
      rsp_t_d = rsp_d;
      d_t = d;
      a_t = a;

      goto return_label;
      L_MASTER_RUN_PUT:
      req_type = req_t_type;
      req_a = req_t_a;
      req_d = req_t_d;
      rsp_type = rsp_t_type;
      rsp_status = rsp_t_status;
      rsp_d = rsp_t_d;
      a = a_t;
      d = d_t;
    }
    while_2_break: ;
    }
    c_req_type = req_type;
    c_req_a = req_a;
    c_req_d = req_d;
    c_empty_req = 0;
    c_write_req_ev = 1;
    if ((int )m_run_pc == 1) {
      if ((int )c_m_ev == 1) {
        m_run_st = 0;
      } else {
        goto _L___3;
      }
    } else {
      _L___3:
      if ((int )m_run_pc == 2) {
        if ((int )c_read_req_ev == 1) {
          m_run_st = 0;
        } else {
          goto _L___2;
        }
      } else {
        _L___2:
        if ((int )m_run_pc == 3) {
          if ((int )c_write_rsp_ev == 1) {
            m_run_st = 0;
          } else {
            goto _L___1;
          }
        } else {
          _L___1:
          if ((int )m_run_pc == 4) {
            if ((int )c_m_ev == 1) {
              m_run_st = 0;
            } else {
              goto _L___0;
            }
          } else {
            _L___0:
            if ((int )m_run_pc == 5) {
              if ((int )c_read_req_ev == 1) {
                m_run_st = 0;
              } else {
                goto _L;
              }
            } else {
              _L:
              if ((int )m_run_pc == 6) {
                if ((int )c_write_rsp_ev == 1) {
                  m_run_st = 0;
                } else {

                }
              } else {

              }
            }
          }
        }
      }
    }
    if ((int )s_run_pc == 2) {
      if ((int )c_write_req_ev == 1) {
        s_run_st = 0;
      } else {
        goto _L___4;
      }
    } else {
      _L___4:
      if ((int )s_run_pc == 1) {
        if ((int )c_read_rsp_ev == 1) {
          s_run_st = 0;
        } else {

        }
      } else {

      }
    }
    c_write_req_ev = 2;
    {
    while (1) {
      while_3_continue: ;
      if ((int )c_empty_rsp == 1) {

      } else {
        goto while_3_break;
      }
      m_run_st = 2;
      m_run_pc = 3;
      req_t_type = req_type;
      req_t_a = req_a;
      req_t_d = req_d;
      rsp_t_type = rsp_type;
      rsp_t_status = rsp_status;
      rsp_t_d = rsp_d;
      d_t = d;
      a_t = a;

      goto return_label;
      L_MASTER_RUN_GET:
      req_type = req_t_type;
      req_a = req_t_a;
      req_d = req_t_d;
      rsp_type = rsp_t_type;
      rsp_status = rsp_t_status;
      rsp_d = rsp_t_d;
      d = d_t;
      a = a_t;
    }
    while_3_break: ;
    }
    rsp_type = c_rsp_type;
    rsp_status = c_rsp_status;
    rsp_d = c_rsp_d;
    c_empty_rsp = 1;
    c_read_rsp_ev = 1;
    if ((int )m_run_pc == 1) {
      if ((int )c_m_ev == 1) {
        m_run_st = 0;
      } else {
        goto _L___9;
      }
    } else {
      _L___9:
      if ((int )m_run_pc == 2) {
        if ((int )c_read_req_ev == 1) {
          m_run_st = 0;
        } else {
          goto _L___8;
        }
      } else {
        _L___8:
        if ((int )m_run_pc == 3) {
          if ((int )c_write_rsp_ev == 1) {
            m_run_st = 0;
          } else {
            goto _L___7;
          }
        } else {
          _L___7:
          if ((int )m_run_pc == 4) {
            if ((int )c_m_ev == 1) {
              m_run_st = 0;
            } else {
              goto _L___6;
            }
          } else {
            _L___6:
            if ((int )m_run_pc == 5) {
              if ((int )c_read_req_ev == 1) {
                m_run_st = 0;
              } else {
                goto _L___5;
              }
            } else {
              _L___5:
              if ((int )m_run_pc == 6) {
                if ((int )c_write_rsp_ev == 1) {
                  m_run_st = 0;
                } else {

                }
              } else {

              }
            }
          }
        }
      }
    }
    if ((int )s_run_pc == 2) {
      if ((int )c_write_req_ev == 1) {
        s_run_st = 0;
      } else {
        goto _L___10;
      }
    } else {
      _L___10:
      if ((int )s_run_pc == 1) {
        if ((int )c_read_rsp_ev == 1) {
          s_run_st = 0;
        } else {

        }
      } else {

      }
    }
    c_read_rsp_ev = 2;
    if (c_m_lock == 0) {
      {
      error();
      }
    } else {

    }
    c_m_lock = 0;
    c_m_ev = 1;
    if ((int )m_run_pc == 1) {
      if ((int )c_m_ev == 1) {
        m_run_st = 0;
      } else {
        goto _L___15;
      }
    } else {
      _L___15:
      if ((int )m_run_pc == 2) {
        if ((int )c_read_req_ev == 1) {
          m_run_st = 0;
        } else {
          goto _L___14;
        }
      } else {
        _L___14:
        if ((int )m_run_pc == 3) {
          if ((int )c_write_rsp_ev == 1) {
            m_run_st = 0;
          } else {
            goto _L___13;
          }
        } else {
          _L___13:
          if ((int )m_run_pc == 4) {
            if ((int )c_m_ev == 1) {
              m_run_st = 0;
            } else {
              goto _L___12;
            }
          } else {
            _L___12:
            if ((int )m_run_pc == 5) {
              if ((int )c_read_req_ev == 1) {
                m_run_st = 0;
              } else {
                goto _L___11;
              }
            } else {
              _L___11:
              if ((int )m_run_pc == 6) {
                if ((int )c_write_rsp_ev == 1) {
                  m_run_st = 0;
                } else {

                }
              } else {

              }
            }
          }
        }
      }
    }
    if ((int )s_run_pc == 2) {
      if ((int )c_write_req_ev == 1) {
        s_run_st = 0;
      } else {
        goto _L___16;
      }
    } else {
      _L___16:
      if ((int )s_run_pc == 1) {
        if ((int )c_read_rsp_ev == 1) {
          s_run_st = 0;
        } else {

        }
      } else {

      }
    }
    c_m_ev = 2;
    a += 1;
  }
  while_0_break: ;
  }
  a = 0;
  {
  while (1) {
    while_4_continue: ;
    if (a < 1) {

    } else {
      goto while_4_break;
    }
    req_type___0 = 0;
    req_a___0 = a;
    {
    while (1) {
      while_5_continue: ;
      if (c_m_lock == 1) {

      } else {
        goto while_5_break;
      }
      m_run_st = 2;
      m_run_pc = 4;
      req_tt_type = req_type___0;
      req_tt_a = req_a___0;
      req_tt_d = req_d___0;
      rsp_tt_type = rsp_type___0;
      rsp_tt_status = rsp_status___0;
      rsp_tt_d = rsp_d___0;
      d_t = d;
      a_t = a;

      goto return_label;
      L_MASTER_RUN_MUTEX2:
      req_type___0 = req_tt_type;
      req_a___0 = req_tt_a;
      req_d___0 = req_tt_d;
      rsp_type___0 = rsp_tt_type;
      rsp_status___0 = rsp_tt_status;
      rsp_d___0 = rsp_tt_d;
      d = d_t;
      a = a_t;
    }
    while_5_break: ;
    }
    c_m_lock = 1;
    {
    while (1) {
      while_6_continue: ;
      if ((int )c_empty_req == 0) {

      } else {
        goto while_6_break;
      }
      m_run_st = 2;
      m_run_pc = 5;
      req_tt_type = req_type___0;
      req_tt_a = req_a___0;
      req_tt_d = req_d___0;
      rsp_tt_type = rsp_type___0;
      rsp_tt_status = rsp_status___0;
      rsp_tt_d = rsp_d___0;
      d_t = d;
      a_t = a;

      goto return_label;
      L_MASTER_RUN_PUT2:
      req_type___0 = req_tt_type;
      req_a___0 = req_tt_a;
      req_d___0 = req_tt_d;
      rsp_type___0 = rsp_tt_type;
      rsp_status___0 = rsp_tt_status;
      rsp_d___0 = rsp_tt_d;
      d = d_t;
      a = a_t;
    }
    while_6_break: ;
    }
    c_req_type = req_type___0;
    c_req_a = req_a___0;
    c_req_d = req_d___0;
    c_empty_req = 0;
    c_write_req_ev = 1;
    if ((int )m_run_pc == 1) {
      if ((int )c_m_ev == 1) {
        m_run_st = 0;
      } else {
        goto _L___21;
      }
    } else {
      _L___21:
      if ((int )m_run_pc == 2) {
        if ((int )c_read_req_ev == 1) {
          m_run_st = 0;
        } else {
          goto _L___20;
        }
      } else {
        _L___20:
        if ((int )m_run_pc == 3) {
          if ((int )c_write_rsp_ev == 1) {
            m_run_st = 0;
          } else {
            goto _L___19;
          }
        } else {
          _L___19:
          if ((int )m_run_pc == 4) {
            if ((int )c_m_ev == 1) {
              m_run_st = 0;
            } else {
              goto _L___18;
            }
          } else {
            _L___18:
            if ((int )m_run_pc == 5) {
              if ((int )c_read_req_ev == 1) {
                m_run_st = 0;
              } else {
                goto _L___17;
              }
            } else {
              _L___17:
              if ((int )m_run_pc == 6) {
                if ((int )c_write_rsp_ev == 1) {
                  m_run_st = 0;
                } else {

                }
              } else {

              }
            }
          }
        }
      }
    }
    if ((int )s_run_pc == 2) {
      if ((int )c_write_req_ev == 1) {
        s_run_st = 0;
      } else {
        goto _L___22;
      }
    } else {
      _L___22:
      if ((int )s_run_pc == 1) {
        if ((int )c_read_rsp_ev == 1) {
          s_run_st = 0;
        } else {

        }
      } else {

      }
    }
    c_write_req_ev = 2;
    {
    while (1) {
      while_7_continue: ;
      if ((int )c_empty_rsp == 1) {

      } else {
        goto while_7_break;
      }
      m_run_st = 2;
      m_run_pc = 6;
      req_tt_type = req_type___0;
      req_tt_a = req_a___0;
      req_tt_d = req_d___0;
      rsp_tt_type = rsp_type___0;
      rsp_tt_status = rsp_status___0;
      rsp_tt_d = rsp_d___0;
      d_t = d;
      a_t = a;

      goto return_label;
      L_MASTER_RUN_GET2:
      req_type___0 = req_tt_type;
      req_a___0 = req_tt_a;
      req_d___0 = req_tt_d;
      rsp_type___0 = rsp_tt_type;
      rsp_status___0 = rsp_tt_status;
      rsp_d___0 = rsp_tt_d;
      d = d_t;
      a = a_t;
    }
    while_7_break: ;
    }
    rsp_type___0 = c_rsp_type;
    rsp_status___0 = c_rsp_status;
    rsp_d___0 = c_rsp_d;
    c_empty_rsp = 1;
    c_read_rsp_ev = 1;
    if ((int )m_run_pc == 1) {
      if ((int )c_m_ev == 1) {
        m_run_st = 0;
      } else {
        goto _L___27;
      }
    } else {
      _L___27:
      if ((int )m_run_pc == 2) {
        if ((int )c_read_req_ev == 1) {
          m_run_st = 0;
        } else {
          goto _L___26;
        }
      } else {
        _L___26:
        if ((int )m_run_pc == 3) {
          if ((int )c_write_rsp_ev == 1) {
            m_run_st = 0;
          } else {
            goto _L___25;
          }
        } else {
          _L___25:
          if ((int )m_run_pc == 4) {
            if ((int )c_m_ev == 1) {
              m_run_st = 0;
            } else {
              goto _L___24;
            }
          } else {
            _L___24:
            if ((int )m_run_pc == 5) {
              if ((int )c_read_req_ev == 1) {
                m_run_st = 0;
              } else {
                goto _L___23;
              }
            } else {
              _L___23:
              if ((int )m_run_pc == 6) {
                if ((int )c_write_rsp_ev == 1) {
                  m_run_st = 0;
                } else {

                }
              } else {

              }
            }
          }
        }
      }
    }
    if ((int )s_run_pc == 2) {
      if ((int )c_write_req_ev == 1) {
        s_run_st = 0;
      } else {
        goto _L___28;
      }
    } else {
      _L___28:
      if ((int )s_run_pc == 1) {
        if ((int )c_read_rsp_ev == 1) {
          s_run_st = 0;
        } else {

        }
      } else {

      }
    }
    c_read_rsp_ev = 2;
    if (c_m_lock == 0) {
      {
      error();
      }
    } else {

    }
    c_m_lock = 0;
    c_m_ev = 1;
    if ((int )m_run_pc == 1) {
      if ((int )c_m_ev == 1) {
        m_run_st = 0;
      } else {
        goto _L___33;
      }
    } else {
      _L___33:
      if ((int )m_run_pc == 2) {
        if ((int )c_read_req_ev == 1) {
          m_run_st = 0;
        } else {
          goto _L___32;
        }
      } else {
        _L___32:
        if ((int )m_run_pc == 3) {
          if ((int )c_write_rsp_ev == 1) {
            m_run_st = 0;
          } else {
            goto _L___31;
          }
        } else {
          _L___31:
          if ((int )m_run_pc == 4) {
            if ((int )c_m_ev == 1) {
              m_run_st = 0;
            } else {
              goto _L___30;
            }
          } else {
            _L___30:
            if ((int )m_run_pc == 5) {
              if ((int )c_read_req_ev == 1) {
                m_run_st = 0;
              } else {
                goto _L___29;
              }
            } else {
              _L___29:
              if ((int )m_run_pc == 6) {
                if ((int )c_write_rsp_ev == 1) {
                  m_run_st = 0;
                } else {

                }
              } else {

              }
            }
          }
        }
      }
    }
    if ((int )s_run_pc == 2) {
      if ((int )c_write_req_ev == 1) {
        s_run_st = 0;
      } else {
        goto _L___34;
      }
    } else {
      _L___34:
      if ((int )s_run_pc == 1) {
        if ((int )c_read_rsp_ev == 1) {
          s_run_st = 0;
        } else {

        }
      } else {

      }
    }
    c_m_ev = 2;
    if (! (req_a___0 + 50 == rsp_d___0)) {
      {
      error();
      }
    } else {

    }
    a += 1;
  }
  while_4_break: ;
  }

  return_label:
  return;
}
}
static int req_t_type___0 ;
static int req_t_a___0 ;
static int req_t_d___0 ;
static int rsp_t_type___0 ;
static int rsp_t_status___0 ;
static int rsp_t_d___0 ;
void s_run(void)
{ int req_type ;
  int req_a ;
  int req_d ;
  int rsp_type ;
  int rsp_status ;
  int rsp_d ;
  int dummy ;

  {
  if ((int )s_run_pc == 0) {
    goto L_SLAVE_RUN_ENTRY;
  } else {
    if ((int )s_run_pc == 1) {
      goto L_SLAVE_RUN_PUT;
    } else {
      if ((int )s_run_pc == 2) {
        goto L_SLAVE_RUN_GET;
      } else {

      }
    }
  }
  L_SLAVE_RUN_ENTRY:
  {
  while (1) {
    while_8_continue: ;
    {
    while (1) {
      while_9_continue: ;
      if ((int )c_empty_req == 1) {

      } else {
        goto while_9_break;
      }
      s_run_st = 2;
      s_run_pc = 2;
      req_t_type___0 = req_type;
      req_t_a___0 = req_a;
      req_t_d___0 = req_d;
      rsp_t_type___0 = rsp_type;
      rsp_t_status___0 = rsp_status;
      rsp_t_d___0 = rsp_d;

      goto return_label;
      L_SLAVE_RUN_GET:
      req_type = req_t_type___0;
      req_a = req_t_a___0;
      req_d = req_t_d___0;
      rsp_type = rsp_t_type___0;
      rsp_status = rsp_t_status___0;
      rsp_d = rsp_t_d___0;
    }
    while_9_break: ;
    }
    req_type = c_req_type;
    req_a = c_req_a;
    req_d = c_req_d;
    c_empty_req = 1;
    c_read_req_ev = 1;
    if ((int )m_run_pc == 1) {
      if ((int )c_m_ev == 1) {
        m_run_st = 0;
      } else {
        goto _L___3;
      }
    } else {
      _L___3:
      if ((int )m_run_pc == 2) {
        if ((int )c_read_req_ev == 1) {
          m_run_st = 0;
        } else {
          goto _L___2;
        }
      } else {
        _L___2:
        if ((int )m_run_pc == 3) {
          if ((int )c_write_rsp_ev == 1) {
            m_run_st = 0;
          } else {
            goto _L___1;
          }
        } else {
          _L___1:
          if ((int )m_run_pc == 4) {
            if ((int )c_m_ev == 1) {
              m_run_st = 0;
            } else {
              goto _L___0;
            }
          } else {
            _L___0:
            if ((int )m_run_pc == 5) {
              if ((int )c_read_req_ev == 1) {
                m_run_st = 0;
              } else {
                goto _L;
              }
            } else {
              _L:
              if ((int )m_run_pc == 6) {
                if ((int )c_write_rsp_ev == 1) {
                  m_run_st = 0;
                } else {

                }
              } else {

              }
            }
          }
        }
      }
    }
    if ((int )s_run_pc == 2) {
      if ((int )c_write_req_ev == 1) {
        s_run_st = 0;
      } else {
        goto _L___4;
      }
    } else {
      _L___4:
      if ((int )s_run_pc == 1) {
        if ((int )c_read_rsp_ev == 1) {
          s_run_st = 0;
        } else {

        }
      } else {

      }
    }
    c_read_req_ev = 2;
    rsp_type = req_type;
    if ((int )req_type == 0) {

      rsp_d = s_memory_read(req_a);

      rsp_status = 1;
    } else {
      if ((int )req_type == 1) {

 s_memory_write(req_a,req_d);

        rsp_status = 1;
      } else {
        rsp_status = 0;
      }
    }
    {
    while (1) {
      while_10_continue: ;
      if ((int )c_empty_rsp == 0) {

      } else {
        goto while_10_break;
      }
      s_run_st = 2;
      s_run_pc = 1;
      req_t_type___0 = req_type;
      req_t_a___0 = req_a;
      req_t_d___0 = req_d;
      rsp_t_type___0 = rsp_type;
      rsp_t_status___0 = rsp_status;
      rsp_t_d___0 = rsp_d;

      goto return_label;
      L_SLAVE_RUN_PUT:
      req_type = req_t_type___0;
      req_a = req_t_a___0;
      req_d = req_t_d___0;
      rsp_type = rsp_t_type___0;
      rsp_status = rsp_t_status___0;
      rsp_d = rsp_t_d___0;
    }
    while_10_break: ;
    }
    c_rsp_type = rsp_type;
    c_rsp_status = rsp_status;
    c_rsp_d = rsp_d;
    c_empty_rsp = 0;
    c_write_rsp_ev = 1;
    if ((int )m_run_pc == 1) {
      if ((int )c_m_ev == 1) {
        m_run_st = 0;
      } else {
        goto _L___9;
      }
    } else {
      _L___9:
      if ((int )m_run_pc == 2) {
        if ((int )c_read_req_ev == 1) {
          m_run_st = 0;
        } else {
          goto _L___8;
        }
      } else {
        _L___8:
        if ((int )m_run_pc == 3) {
          if ((int )c_write_rsp_ev == 1) {
            m_run_st = 0;
          } else {
            goto _L___7;
          }
        } else {
          _L___7:
          if ((int )m_run_pc == 4) {
            if ((int )c_m_ev == 1) {
              m_run_st = 0;
            } else {
              goto _L___6;
            }
          } else {
            _L___6:
            if ((int )m_run_pc == 5) {
              if ((int )c_read_req_ev == 1) {
                m_run_st = 0;
              } else {
                goto _L___5;
              }
            } else {
              _L___5:
              if ((int )m_run_pc == 6) {
                if ((int )c_write_rsp_ev == 1) {
                  m_run_st = 0;
                } else {

                }
              } else {

              }
            }
          }
        }
      }
    }
    if ((int )s_run_pc == 2) {
      if ((int )c_write_req_ev == 1) {
        s_run_st = 0;
      } else {
        goto _L___10;
      }
    } else {
      _L___10:
      if ((int )s_run_pc == 1) {
        if ((int )c_read_rsp_ev == 1) {
          s_run_st = 0;
        } else {

        }
      } else {

      }
    }
    c_write_rsp_ev = 2;
  }
  while_8_break: ;
  }
  return_label:
  return;
}
}
void eval(void)
{ int tmp ;
  int tmp___0 ;


  {
  {
  while (1) {
    while_11_continue: ;
    if ((int )m_run_st == 0) {

    } else {
      if ((int )s_run_st == 0) {

      } else {
        goto while_11_break;
      }
    }
    if ((int )m_run_st == 0) {
      {
 tmp = __VERIFIER_nondet_int();
      }
      if (tmp) {
        {
        m_run_st = 1;
        m_run();
        }
      } else {

      }
    } else {

    }
    if ((int )s_run_st == 0) {
      {
 tmp___0 = __VERIFIER_nondet_int();
      }
      if (tmp___0) {
        {
        s_run_st = 1;
        s_run();
        }
      } else {

      }
    } else {

    }
  }
  while_11_break: ;
  }

  return;
}
}
void start_simulation(void)
{ int kernel_st ;

  {
  kernel_st = 0;
  if ((int )m_run_i == 1) {
    m_run_st = 0;
  } else {
    m_run_st = 2;
  }
  if ((int )s_run_i == 1) {
    s_run_st = 0;
  } else {
    s_run_st = 2;
  }
  if ((int )m_run_pc == 1) {
    if ((int )c_m_ev == 1) {
      m_run_st = 0;
    } else {
      goto _L___3;
    }
  } else {
    _L___3:
    if ((int )m_run_pc == 2) {
      if ((int )c_read_req_ev == 1) {
        m_run_st = 0;
      } else {
        goto _L___2;
      }
    } else {
      _L___2:
      if ((int )m_run_pc == 3) {
        if ((int )c_write_rsp_ev == 1) {
          m_run_st = 0;
        } else {
          goto _L___1;
        }
      } else {
        _L___1:
        if ((int )m_run_pc == 4) {
          if ((int )c_m_ev == 1) {
            m_run_st = 0;
          } else {
            goto _L___0;
          }
        } else {
          _L___0:
          if ((int )m_run_pc == 5) {
            if ((int )c_read_req_ev == 1) {
              m_run_st = 0;
            } else {
              goto _L;
            }
          } else {
            _L:
            if ((int )m_run_pc == 6) {
              if ((int )c_write_rsp_ev == 1) {
                m_run_st = 0;
              } else {

              }
            } else {

            }
          }
        }
      }
    }
  }
  if ((int )s_run_pc == 2) {
    if ((int )c_write_req_ev == 1) {
      s_run_st = 0;
    } else {
      goto _L___4;
    }
  } else {
    _L___4:
    if ((int )s_run_pc == 1) {
      if ((int )c_read_rsp_ev == 1) {
        s_run_st = 0;
      } else {

      }
    } else {

    }
  }
  {
  while (1) {
    while_12_continue: ;
    {
    kernel_st = 1;
    eval();
    }
    kernel_st = 2;
    kernel_st = 3;
    if ((int )m_run_pc == 1) {
      if ((int )c_m_ev == 1) {
        m_run_st = 0;
      } else {
        goto _L___9;
      }
    } else {
      _L___9:
      if ((int )m_run_pc == 2) {
        if ((int )c_read_req_ev == 1) {
          m_run_st = 0;
        } else {
          goto _L___8;
        }
      } else {
        _L___8:
        if ((int )m_run_pc == 3) {
          if ((int )c_write_rsp_ev == 1) {
            m_run_st = 0;
          } else {
            goto _L___7;
          }
        } else {
          _L___7:
          if ((int )m_run_pc == 4) {
            if ((int )c_m_ev == 1) {
              m_run_st = 0;
            } else {
              goto _L___6;
            }
          } else {
            _L___6:
            if ((int )m_run_pc == 5) {
              if ((int )c_read_req_ev == 1) {
                m_run_st = 0;
              } else {
                goto _L___5;
              }
            } else {
              _L___5:
              if ((int )m_run_pc == 6) {
                if ((int )c_write_rsp_ev == 1) {
                  m_run_st = 0;
                } else {

                }
              } else {

              }
            }
          }
        }
      }
    }
    if ((int )s_run_pc == 2) {
      if ((int )c_write_req_ev == 1) {
        s_run_st = 0;
      } else {
        goto _L___10;
      }
    } else {
      _L___10:
      if ((int )s_run_pc == 1) {
        if ((int )c_read_rsp_ev == 1) {
          s_run_st = 0;
        } else {

        }
      } else {

      }
    }
    if ((int )m_run_st == 0) {

    } else {
      if ((int )s_run_st == 0) {

      } else {
        goto while_12_break;
      }
    }
  }
  while_12_break: ;
  }

  return;
}
}
int main0(void)
{ int __retres1 ;

  {
  {
 c_m_lock = 0;
 c_m_ev = 2;

  m_run_i = 1;
  m_run_pc = 0;
  s_run_i = 1;
  s_run_pc = 0;
  c_empty_req = 1;
  c_empty_rsp = 1;
  c_read_req_ev = 2;
  c_write_req_ev = 2;
  c_read_rsp_ev = 2;
  c_write_rsp_ev = 2;
  c_m_lock = 0;
  c_m_ev = 2;
  start_simulation();
  }
  __retres1 = 0;
  return (__retres1);
}
}

void main() {
  int x;
  if (x) main1();
  if (\!x) main0();
}
