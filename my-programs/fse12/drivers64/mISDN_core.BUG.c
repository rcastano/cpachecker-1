int __VERIFIER_nondet_int();

void error() {
  ERROR:
    goto ERROR;
}

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
typedef int s32;
typedef unsigned int u32;
typedef long long s64;
typedef unsigned long long u64;
typedef unsigned short umode_t;
typedef unsigned int __kernel_mode_t;
typedef unsigned long __kernel_nlink_t;
typedef long __kernel_off_t;
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
typedef __kernel_nlink_t nlink_t;
typedef __kernel_off_t off_t;
typedef __kernel_pid_t pid_t;
typedef __kernel_clockid_t clockid_t;
typedef _Bool bool;
typedef __kernel_uid32_t uid_t;
typedef __kernel_gid32_t gid_t;
typedef __kernel_loff_t loff_t;
typedef __kernel_size_t size_t;
typedef __kernel_ssize_t ssize_t;
typedef __kernel_time_t time_t;
typedef unsigned char u_char;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef __s32 int32_t;
typedef __u32 uint32_t;
typedef unsigned long sector_t;
typedef unsigned long blkcnt_t;
typedef u64 dma_addr_t;
typedef __u16 __be16;
typedef __u32 __be32;
typedef __u32 __wsum;
typedef unsigned int gfp_t;
typedef unsigned int fmode_t;
struct __anonstruct_atomic_t_6 {
   int counter ;
};
typedef struct __anonstruct_atomic_t_6 atomic_t;
struct __anonstruct_atomic64_t_7 {
   long counter ;
};
typedef struct __anonstruct_atomic64_t_7 atomic64_t;
struct list_head {
   struct list_head *next ;
   struct list_head *prev ;
};
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
typedef void (*ctor_fn_t)(void);
struct bug_entry {
   int bug_addr_disp ;
   int file_disp ;
   unsigned short line ;
   unsigned short flags ;
};
struct completion;
struct completion;
struct pt_regs;
struct pt_regs;
struct pid;
struct pid;
struct timespec;
struct timespec;
struct page;
struct page;
struct task_struct;
struct task_struct;
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
union __anonunion_ldv_2292_12 {
   struct pt_regs *regs ;
   struct kernel_vm86_regs *vm86 ;
};
struct math_emu_info {
   long ___orig_eip ;
   union __anonunion_ldv_2292_12 ldv_2292 ;
};
typedef unsigned long pgdval_t;
typedef unsigned long pgprotval_t;
struct pgprot {
   pgprotval_t pgprot ;
};
typedef struct pgprot pgprot_t;
struct __anonstruct_pgd_t_15 {
   pgdval_t pgd ;
};
typedef struct __anonstruct_pgd_t_15 pgd_t;
typedef struct page *pgtable_t;
struct file;
struct file;
struct seq_file;
struct seq_file;
struct __anonstruct_ldv_2526_19 {
   unsigned int a ;
   unsigned int b ;
};
struct __anonstruct_ldv_2541_20 {
   u16 limit0 ;
   u16 base0 ;
   unsigned char base1 ;
   unsigned char type : 4 ;
   unsigned char s : 1 ;
   unsigned char dpl : 2 ;
   unsigned char p : 1 ;
   unsigned char limit : 4 ;
   unsigned char avl : 1 ;
   unsigned char l : 1 ;
   unsigned char d : 1 ;
   unsigned char g : 1 ;
   unsigned char base2 ;
};
union __anonunion_ldv_2542_18 {
   struct __anonstruct_ldv_2526_19 ldv_2526 ;
   struct __anonstruct_ldv_2541_20 ldv_2541 ;
};
struct desc_struct {
   union __anonunion_ldv_2542_18 ldv_2542 ;
};
struct thread_struct;
struct thread_struct;
struct cpumask;
struct cpumask;
struct arch_spinlock;
struct arch_spinlock;
struct cpumask {
   unsigned long bits[64U] ;
};
typedef struct cpumask cpumask_t;
typedef struct cpumask *cpumask_var_t;
struct seq_operations;
struct seq_operations;
struct i387_fsave_struct {
   u32 cwd ;
   u32 swd ;
   u32 twd ;
   u32 fip ;
   u32 fcs ;
   u32 foo ;
   u32 fos ;
   u32 st_space[20U] ;
   u32 status ;
};
struct __anonstruct_ldv_5171_24 {
   u64 rip ;
   u64 rdp ;
};
struct __anonstruct_ldv_5177_25 {
   u32 fip ;
   u32 fcs ;
   u32 foo ;
   u32 fos ;
};
union __anonunion_ldv_5178_23 {
   struct __anonstruct_ldv_5171_24 ldv_5171 ;
   struct __anonstruct_ldv_5177_25 ldv_5177 ;
};
union __anonunion_ldv_5187_26 {
   u32 padding1[12U] ;
   u32 sw_reserved[12U] ;
};
struct i387_fxsave_struct {
   u16 cwd ;
   u16 swd ;
   u16 twd ;
   u16 fop ;
   union __anonunion_ldv_5178_23 ldv_5178 ;
   u32 mxcsr ;
   u32 mxcsr_mask ;
   u32 st_space[32U] ;
   u32 xmm_space[64U] ;
   u32 padding[12U] ;
   union __anonunion_ldv_5187_26 ldv_5187 ;
};
struct i387_soft_struct {
   u32 cwd ;
   u32 swd ;
   u32 twd ;
   u32 fip ;
   u32 fcs ;
   u32 foo ;
   u32 fos ;
   u32 st_space[20U] ;
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
   u32 ymmh_space[64U] ;
};
struct xsave_hdr_struct {
   u64 xstate_bv ;
   u64 reserved1[2U] ;
   u64 reserved2[5U] ;
};
struct xsave_struct {
   struct i387_fxsave_struct i387 ;
   struct xsave_hdr_struct xsave_hdr ;
   struct ymmh_struct ymmh ;
};
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
struct perf_event;
struct perf_event;
struct thread_struct {
   struct desc_struct tls_array[3U] ;
   unsigned long sp0 ;
   unsigned long sp ;
   unsigned long usersp ;
   unsigned short es ;
   unsigned short ds ;
   unsigned short fsindex ;
   unsigned short gsindex ;
   unsigned long fs ;
   unsigned long gs ;
   struct perf_event *ptrace_bps[4U] ;
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
struct __anonstruct_arch_rwlock_t_29 {
   unsigned int lock ;
};
typedef struct __anonstruct_arch_rwlock_t_29 arch_rwlock_t;
struct lockdep_map;
struct lockdep_map;
struct stack_trace {
   unsigned int nr_entries ;
   unsigned int max_entries ;
   unsigned long *entries ;
   int skip ;
};
struct lockdep_subclass_key {
   char __one_byte ;
};
struct lock_class_key {
   struct lockdep_subclass_key subkeys[8U] ;
};
struct lock_class {
   struct list_head hash_entry ;
   struct list_head lock_entry ;
   struct lockdep_subclass_key *key ;
   unsigned int subclass ;
   unsigned int dep_gen_id ;
   unsigned long usage_mask ;
   struct stack_trace usage_traces[13U] ;
   struct list_head locks_after ;
   struct list_head locks_before ;
   unsigned int version ;
   unsigned long ops ;
   char const *name ;
   int name_version ;
   unsigned long contention_point[4U] ;
   unsigned long contending_point[4U] ;
};
struct lockdep_map {
   struct lock_class_key *key ;
   struct lock_class *class_cache[2U] ;
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
   unsigned short class_idx : 13 ;
   unsigned char irq_context : 2 ;
   unsigned char trylock : 1 ;
   unsigned char read : 2 ;
   unsigned char check : 2 ;
   unsigned char hardirqs_off : 1 ;
   unsigned short references : 11 ;
};
struct raw_spinlock {
   arch_spinlock_t raw_lock ;
   unsigned int magic ;
   unsigned int owner_cpu ;
   void *owner ;
   struct lockdep_map dep_map ;
};
typedef struct raw_spinlock raw_spinlock_t;
struct __anonstruct_ldv_6059_31 {
   u8 __padding[24U] ;
   struct lockdep_map dep_map ;
};
union __anonunion_ldv_6060_30 {
   struct raw_spinlock rlock ;
   struct __anonstruct_ldv_6059_31 ldv_6059 ;
};
struct spinlock {
   union __anonunion_ldv_6060_30 ldv_6060 ;
};
typedef struct spinlock spinlock_t;
struct __anonstruct_rwlock_t_32 {
   arch_rwlock_t raw_lock ;
   unsigned int magic ;
   unsigned int owner_cpu ;
   void *owner ;
   struct lockdep_map dep_map ;
};
typedef struct __anonstruct_rwlock_t_32 rwlock_t;
struct __anonstruct_seqlock_t_33 {
   unsigned int sequence ;
   spinlock_t lock ;
};
typedef struct __anonstruct_seqlock_t_33 seqlock_t;
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
struct __anonstruct_nodemask_t_34 {
   unsigned long bits[16U] ;
};
typedef struct __anonstruct_nodemask_t_34 nodemask_t;
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
struct rw_semaphore {
   long count ;
   spinlock_t wait_lock ;
   struct list_head wait_list ;
   struct lockdep_map dep_map ;
};
struct ctl_table;
struct ctl_table;
struct device;
struct device;
union ktime {
   s64 tv64 ;
};
typedef union ktime ktime_t;
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
   char start_comm[16U] ;
   struct lockdep_map lockdep_map ;
};
struct hrtimer;
struct hrtimer;
enum hrtimer_restart;
enum hrtimer_restart;
enum hrtimer_restart;
struct work_struct;
struct work_struct;
struct work_struct {
   atomic_long_t data ;
   struct list_head entry ;
   void (*func)(struct work_struct * ) ;
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
struct pm_message {
   int event ;
};
typedef struct pm_message pm_message_t;
struct dev_pm_ops {
   int (*prepare)(struct device * ) ;
   void (*complete)(struct device * ) ;
   int (*suspend)(struct device * ) ;
   int (*resume)(struct device * ) ;
   int (*freeze)(struct device * ) ;
   int (*thaw)(struct device * ) ;
   int (*poweroff)(struct device * ) ;
   int (*restore)(struct device * ) ;
   int (*suspend_noirq)(struct device * ) ;
   int (*resume_noirq)(struct device * ) ;
   int (*freeze_noirq)(struct device * ) ;
   int (*thaw_noirq)(struct device * ) ;
   int (*poweroff_noirq)(struct device * ) ;
   int (*restore_noirq)(struct device * ) ;
   int (*runtime_suspend)(struct device * ) ;
   int (*runtime_resume)(struct device * ) ;
   int (*runtime_idle)(struct device * ) ;
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
struct dev_pm_info {
   pm_message_t power_state ;
   unsigned char can_wakeup : 1 ;
   unsigned char async_suspend : 1 ;
   bool is_prepared ;
   bool is_suspended ;
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
   unsigned char disable_depth : 3 ;
   unsigned char ignore_children : 1 ;
   unsigned char idle_notification : 1 ;
   unsigned char request_pending : 1 ;
   unsigned char deferred_resume : 1 ;
   unsigned char run_wake : 1 ;
   unsigned char runtime_auto : 1 ;
   unsigned char no_callbacks : 1 ;
   unsigned char irq_safe : 1 ;
   unsigned char use_autosuspend : 1 ;
   unsigned char timer_autosuspends : 1 ;
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
struct __anonstruct_mm_context_t_99 {
   void *ldt ;
   int size ;
   unsigned short ia32_compat ;
   struct mutex lock ;
   void *vdso ;
};
typedef struct __anonstruct_mm_context_t_99 mm_context_t;
struct vm_area_struct;
struct vm_area_struct;
struct rcu_head {
   struct rcu_head *next ;
   void (*func)(struct rcu_head * ) ;
};
struct nsproxy;
struct nsproxy;
struct ctl_table_root;
struct ctl_table_root;
struct ctl_table_set {
   struct list_head list ;
   struct ctl_table_set *parent ;
   int (*is_seen)(struct ctl_table_set * ) ;
};
struct ctl_table_header;
struct ctl_table_header;
typedef int proc_handler(struct ctl_table * , int , void * , size_t * , loff_t * );
struct ctl_table {
   char const *procname ;
   void *data ;
   int maxlen ;
   mode_t mode ;
   struct ctl_table *child ;
   struct ctl_table *parent ;
   proc_handler *proc_handler ;
   void *extra1 ;
   void *extra2 ;
};
struct ctl_table_root {
   struct list_head root_list ;
   struct ctl_table_set default_set ;
   struct ctl_table_set *(*lookup)(struct ctl_table_root * , struct nsproxy * ) ;
   int (*permissions)(struct ctl_table_root * , struct nsproxy * , struct ctl_table * ) ;
};
struct __anonstruct_ldv_12193_124 {
   struct ctl_table *ctl_table ;
   struct list_head ctl_entry ;
   int used ;
   int count ;
};
union __anonunion_ldv_12195_123 {
   struct __anonstruct_ldv_12193_124 ldv_12193 ;
   struct rcu_head rcu ;
};
struct ctl_table_header {
   union __anonunion_ldv_12195_123 ldv_12195 ;
   struct completion *unregistering ;
   struct ctl_table *ctl_table_arg ;
   struct ctl_table_root *root ;
   struct ctl_table_set *set ;
   struct ctl_table *attached_by ;
   struct ctl_table *attached_to ;
   struct ctl_table_header *parent ;
};
struct cred;
struct cred;
struct linux_binprm;
struct linux_binprm;
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
   void const *(*netlink_ns)(struct sock * ) ;
   void const *(*initial_ns)(void) ;
   void (*drop_ns)(void * ) ;
};
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
struct bin_attribute {
   struct attribute attr ;
   size_t size ;
   void *private ;
   ssize_t (*read)(struct file * , struct kobject * , struct bin_attribute * , char * ,
                   loff_t , size_t ) ;
   ssize_t (*write)(struct file * , struct kobject * , struct bin_attribute * , char * ,
                    loff_t , size_t ) ;
   int (*mmap)(struct file * , struct kobject * , struct bin_attribute * , struct vm_area_struct * ) ;
};
struct sysfs_ops {
   ssize_t (*show)(struct kobject * , struct attribute * , char * ) ;
   ssize_t (*store)(struct kobject * , struct attribute * , char const * , size_t ) ;
};
struct sysfs_dirent;
struct sysfs_dirent;
struct kref {
   atomic_t refcount ;
};
struct kset;
struct kset;
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
   unsigned char state_initialized : 1 ;
   unsigned char state_in_sysfs : 1 ;
   unsigned char state_add_uevent_sent : 1 ;
   unsigned char state_remove_uevent_sent : 1 ;
   unsigned char uevent_suppress : 1 ;
};
struct kobj_type {
   void (*release)(struct kobject * ) ;
   struct sysfs_ops const *sysfs_ops ;
   struct attribute **default_attrs ;
   struct kobj_ns_type_operations const *(*child_ns_type)(struct kobject * ) ;
   void const *(*namespace)(struct kobject * ) ;
};
struct kobj_uevent_env {
   char *envp[32U] ;
   int envp_idx ;
   char buf[2048U] ;
   int buflen ;
};
struct kset_uevent_ops {
   int (* const filter)(struct kset * , struct kobject * ) ;
   char const *(* const name)(struct kset * , struct kobject * ) ;
   int (* const uevent)(struct kset * , struct kobject * , struct kobj_uevent_env * ) ;
};
struct kset {
   struct list_head list ;
   spinlock_t list_lock ;
   struct kobject kobj ;
   struct kset_uevent_ops const *uevent_ops ;
};
struct kernel_param;
struct kernel_param;
struct kernel_param_ops {
   int (*set)(char const * , struct kernel_param const * ) ;
   int (*get)(char * , struct kernel_param const * ) ;
   void (*free)(void * ) ;
};
struct kparam_string;
struct kparam_string;
struct kparam_array;
struct kparam_array;
union __anonunion_ldv_12924_129 {
   void *arg ;
   struct kparam_string const *str ;
   struct kparam_array const *arr ;
};
struct kernel_param {
   char const *name ;
   struct kernel_param_ops const *ops ;
   u16 perm ;
   u16 flags ;
   union __anonunion_ldv_12924_129 ldv_12924 ;
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
struct jump_label_key {
   atomic_t enabled ;
};
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
struct kernel_symbol {
   unsigned long value ;
   char const *name ;
};
struct module_attribute {
   struct attribute attr ;
   ssize_t (*show)(struct module_attribute * , struct module * , char * ) ;
   ssize_t (*store)(struct module_attribute * , struct module * , char const * ,
                    size_t ) ;
   void (*setup)(struct module * , char const * ) ;
   int (*test)(struct module * ) ;
   void (*free)(struct module * ) ;
};
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
enum module_state {
    MODULE_STATE_LIVE = 0,
    MODULE_STATE_COMING = 1,
    MODULE_STATE_GOING = 2
} ;
struct module_ref {
   unsigned int incs ;
   unsigned int decs ;
};
struct module_sect_attrs;
struct module_sect_attrs;
struct module_notes_attrs;
struct module_notes_attrs;
struct ftrace_event_call;
struct ftrace_event_call;
struct module {
   enum module_state state ;
   struct list_head list ;
   char name[56U] ;
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
   ctor_fn_t (**ctors)(void) ;
   unsigned int num_ctors ;
};
struct kmem_cache_cpu {
   void **freelist ;
   unsigned long tid ;
   struct page *page ;
   int node ;
   unsigned int stat[19U] ;
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
   struct kmem_cache_node *node[1024U] ;
};
struct iovec {
   void *iov_base ;
   __kernel_size_t iov_len ;
};
typedef unsigned short sa_family_t;
struct sockaddr {
   sa_family_t sa_family ;
   char sa_data[14U] ;
};
struct msghdr {
   void *msg_name ;
   int msg_namelen ;
   struct iovec *msg_iov ;
   __kernel_size_t msg_iovlen ;
   void *msg_control ;
   __kernel_size_t msg_controllen ;
   unsigned int msg_flags ;
};
struct sockaddr_mISDN {
   sa_family_t family ;
   unsigned char dev ;
   unsigned char channel ;
   unsigned char sapi ;
   unsigned char tei ;
};
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
struct rb_node {
   unsigned long rb_parent_color ;
   struct rb_node *rb_right ;
   struct rb_node *rb_left ;
};
struct rb_root {
   struct rb_node *rb_node ;
};
struct address_space;
struct address_space;
struct __anonstruct_ldv_14162_131 {
   u16 inuse ;
   u16 objects ;
};
union __anonunion_ldv_14163_130 {
   atomic_t _mapcount ;
   struct __anonstruct_ldv_14162_131 ldv_14162 ;
};
struct __anonstruct_ldv_14168_133 {
   unsigned long private ;
   struct address_space *mapping ;
};
union __anonunion_ldv_14171_132 {
   struct __anonstruct_ldv_14168_133 ldv_14168 ;
   struct kmem_cache *slab ;
   struct page *first_page ;
};
union __anonunion_ldv_14175_134 {
   unsigned long index ;
   void *freelist ;
};
struct page {
   unsigned long flags ;
   atomic_t _count ;
   union __anonunion_ldv_14163_130 ldv_14163 ;
   union __anonunion_ldv_14171_132 ldv_14171 ;
   union __anonunion_ldv_14175_134 ldv_14175 ;
   struct list_head lru ;
};
struct __anonstruct_vm_set_136 {
   struct list_head list ;
   void *parent ;
   struct vm_area_struct *head ;
};
union __anonunion_shared_135 {
   struct __anonstruct_vm_set_136 vm_set ;
   struct raw_prio_tree_node prio_tree_node ;
};
struct anon_vma;
struct anon_vma;
struct vm_operations_struct;
struct vm_operations_struct;
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
   union __anonunion_shared_135 shared ;
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
   atomic_long_t count[3U] ;
};
struct linux_binfmt;
struct linux_binfmt;
struct mmu_notifier_mm;
struct mmu_notifier_mm;
struct mm_struct {
   struct vm_area_struct *mmap ;
   struct rb_root mm_rb ;
   struct vm_area_struct *mmap_cache ;
   unsigned long (*get_unmapped_area)(struct file * , unsigned long , unsigned long ,
                                      unsigned long , unsigned long ) ;
   void (*unmap_area)(struct mm_struct * , unsigned long ) ;
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
   unsigned long saved_auxv[44U] ;
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
enum ldv_13800 {
    SS_FREE = 0,
    SS_UNCONNECTED = 1,
    SS_CONNECTING = 2,
    SS_CONNECTED = 3,
    SS_DISCONNECTING = 4
} ;
typedef enum ldv_13800 socket_state;
struct poll_table_struct;
struct poll_table_struct;
struct pipe_inode_info;
struct pipe_inode_info;
struct inode;
struct inode;
struct net;
struct net;
struct fasync_struct;
struct fasync_struct;
struct socket_wq {
   wait_queue_head_t wait ;
   struct fasync_struct *fasync_list ;
   struct rcu_head rcu ;
};
struct proto_ops;
struct proto_ops;
struct socket {
   socket_state state ;
   short type ;
   unsigned long flags ;
   struct socket_wq *wq ;
   struct file *file ;
   struct sock *sk ;
   struct proto_ops const *ops ;
};
struct kiocb;
struct kiocb;
struct proto_ops {
   int family ;
   struct module *owner ;
   int (*release)(struct socket * ) ;
   int (*bind)(struct socket * , struct sockaddr * , int ) ;
   int (*connect)(struct socket * , struct sockaddr * , int , int ) ;
   int (*socketpair)(struct socket * , struct socket * ) ;
   int (*accept)(struct socket * , struct socket * , int ) ;
   int (*getname)(struct socket * , struct sockaddr * , int * , int ) ;
   unsigned int (*poll)(struct file * , struct socket * , struct poll_table_struct * ) ;
   int (*ioctl)(struct socket * , unsigned int , unsigned long ) ;
   int (*compat_ioctl)(struct socket * , unsigned int , unsigned long ) ;
   int (*listen)(struct socket * , int ) ;
   int (*shutdown)(struct socket * , int ) ;
   int (*setsockopt)(struct socket * , int , int , char * , unsigned int ) ;
   int (*getsockopt)(struct socket * , int , int , char * , int * ) ;
   int (*compat_setsockopt)(struct socket * , int , int , char * , unsigned int ) ;
   int (*compat_getsockopt)(struct socket * , int , int , char * , int * ) ;
   int (*sendmsg)(struct kiocb * , struct socket * , struct msghdr * , size_t ) ;
   int (*recvmsg)(struct kiocb * , struct socket * , struct msghdr * , size_t , int ) ;
   int (*mmap)(struct file * , struct socket * , struct vm_area_struct * ) ;
   ssize_t (*sendpage)(struct socket * , struct page * , int , size_t , int ) ;
   ssize_t (*splice_read)(struct socket * , loff_t * , struct pipe_inode_info * ,
                          size_t , unsigned int ) ;
};
struct exception_table_entry {
   unsigned long insn ;
   unsigned long fixup ;
};
struct sk_buff;
struct sk_buff;
struct klist_node;
struct klist_node;
struct klist_node {
   void *n_klist ;
   struct list_head n_node ;
   struct kref n_ref ;
};
struct dma_map_ops;
struct dma_map_ops;
struct dev_archdata {
   void *acpi_handle ;
   struct dma_map_ops *dma_ops ;
   void *iommu ;
};
struct device_private;
struct device_private;
struct device_driver;
struct device_driver;
struct driver_private;
struct driver_private;
struct class;
struct class;
struct subsys_private;
struct subsys_private;
struct bus_type;
struct bus_type;
struct device_node;
struct device_node;
struct bus_attribute {
   struct attribute attr ;
   ssize_t (*show)(struct bus_type * , char * ) ;
   ssize_t (*store)(struct bus_type * , char const * , size_t ) ;
};
struct device_attribute;
struct device_attribute;
struct driver_attribute;
struct driver_attribute;
struct bus_type {
   char const *name ;
   struct bus_attribute *bus_attrs ;
   struct device_attribute *dev_attrs ;
   struct driver_attribute *drv_attrs ;
   int (*match)(struct device * , struct device_driver * ) ;
   int (*uevent)(struct device * , struct kobj_uevent_env * ) ;
   int (*probe)(struct device * ) ;
   int (*remove)(struct device * ) ;
   void (*shutdown)(struct device * ) ;
   int (*suspend)(struct device * , pm_message_t ) ;
   int (*resume)(struct device * ) ;
   struct dev_pm_ops const *pm ;
   struct subsys_private *p ;
};
struct of_device_id;
struct of_device_id;
struct device_driver {
   char const *name ;
   struct bus_type *bus ;
   struct module *owner ;
   char const *mod_name ;
   bool suppress_bind_attrs ;
   struct of_device_id const *of_match_table ;
   int (*probe)(struct device * ) ;
   int (*remove)(struct device * ) ;
   void (*shutdown)(struct device * ) ;
   int (*suspend)(struct device * , pm_message_t ) ;
   int (*resume)(struct device * ) ;
   struct attribute_group const **groups ;
   struct dev_pm_ops const *pm ;
   struct driver_private *p ;
};
struct driver_attribute {
   struct attribute attr ;
   ssize_t (*show)(struct device_driver * , char * ) ;
   ssize_t (*store)(struct device_driver * , char const * , size_t ) ;
};
struct class_attribute;
struct class_attribute;
struct class {
   char const *name ;
   struct module *owner ;
   struct class_attribute *class_attrs ;
   struct device_attribute *dev_attrs ;
   struct bin_attribute *dev_bin_attrs ;
   struct kobject *dev_kobj ;
   int (*dev_uevent)(struct device * , struct kobj_uevent_env * ) ;
   char *(*devnode)(struct device * , mode_t * ) ;
   void (*class_release)(struct class * ) ;
   void (*dev_release)(struct device * ) ;
   int (*suspend)(struct device * , pm_message_t ) ;
   int (*resume)(struct device * ) ;
   struct kobj_ns_type_operations const *ns_type ;
   void const *(*namespace)(struct device * ) ;
   struct dev_pm_ops const *pm ;
   struct subsys_private *p ;
};
struct device_type;
struct device_type;
struct class_attribute {
   struct attribute attr ;
   ssize_t (*show)(struct class * , struct class_attribute * , char * ) ;
   ssize_t (*store)(struct class * , struct class_attribute * , char const * , size_t ) ;
};
struct device_type {
   char const *name ;
   struct attribute_group const **groups ;
   int (*uevent)(struct device * , struct kobj_uevent_env * ) ;
   char *(*devnode)(struct device * , mode_t * ) ;
   void (*release)(struct device * ) ;
   struct dev_pm_ops const *pm ;
};
struct device_attribute {
   struct attribute attr ;
   ssize_t (*show)(struct device * , struct device_attribute * , char * ) ;
   ssize_t (*store)(struct device * , struct device_attribute * , char const * ,
                    size_t ) ;
};
struct device_dma_parameters {
   unsigned int max_segment_size ;
   unsigned long segment_boundary_mask ;
};
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
   void (*release)(struct device * ) ;
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
   unsigned char active : 1 ;
};
struct dma_attrs {
   unsigned long flags[1U] ;
};
struct scatterlist {
   unsigned long sg_magic ;
   unsigned long page_link ;
   unsigned int offset ;
   unsigned int length ;
   dma_addr_t dma_address ;
   unsigned int dma_length ;
};
struct file_ra_state;
struct file_ra_state;
struct user_struct;
struct user_struct;
struct writeback_control;
struct writeback_control;
struct vm_fault {
   unsigned int flags ;
   unsigned long pgoff ;
   void *virtual_address ;
   struct page *page ;
};
struct vm_operations_struct {
   void (*open)(struct vm_area_struct * ) ;
   void (*close)(struct vm_area_struct * ) ;
   int (*fault)(struct vm_area_struct * , struct vm_fault * ) ;
   int (*page_mkwrite)(struct vm_area_struct * , struct vm_fault * ) ;
   int (*access)(struct vm_area_struct * , unsigned long , void * , int , int ) ;
   int (*set_policy)(struct vm_area_struct * , struct mempolicy * ) ;
   struct mempolicy *(*get_policy)(struct vm_area_struct * , unsigned long ) ;
   int (*migrate)(struct vm_area_struct * , nodemask_t const * , nodemask_t const * ,
                  unsigned long ) ;
};
enum dma_data_direction {
    DMA_BIDIRECTIONAL = 0,
    DMA_TO_DEVICE = 1,
    DMA_FROM_DEVICE = 2,
    DMA_NONE = 3
} ;
struct dma_map_ops {
   void *(*alloc_coherent)(struct device * , size_t , dma_addr_t * , gfp_t ) ;
   void (*free_coherent)(struct device * , size_t , void * , dma_addr_t ) ;
   dma_addr_t (*map_page)(struct device * , struct page * , unsigned long , size_t ,
                          enum dma_data_direction , struct dma_attrs * ) ;
   void (*unmap_page)(struct device * , dma_addr_t , size_t , enum dma_data_direction ,
                      struct dma_attrs * ) ;
   int (*map_sg)(struct device * , struct scatterlist * , int , enum dma_data_direction ,
                 struct dma_attrs * ) ;
   void (*unmap_sg)(struct device * , struct scatterlist * , int , enum dma_data_direction ,
                    struct dma_attrs * ) ;
   void (*sync_single_for_cpu)(struct device * , dma_addr_t , size_t , enum dma_data_direction ) ;
   void (*sync_single_for_device)(struct device * , dma_addr_t , size_t , enum dma_data_direction ) ;
   void (*sync_sg_for_cpu)(struct device * , struct scatterlist * , int , enum dma_data_direction ) ;
   void (*sync_sg_for_device)(struct device * , struct scatterlist * , int , enum dma_data_direction ) ;
   int (*mapping_error)(struct device * , dma_addr_t ) ;
   int (*dma_supported)(struct device * , u64 ) ;
   int (*set_dma_mask)(struct device * , u64 ) ;
   int is_phys ;
};
typedef s32 dma_cookie_t;
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
   char start_comm[16U] ;
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
   struct hrtimer_clock_base clock_base[3U] ;
};
struct net_device;
struct net_device;
struct nf_conntrack {
   atomic_t use ;
};
struct nf_bridge_info {
   atomic_t use ;
   struct net_device *physindev ;
   struct net_device *physoutdev ;
   unsigned int mask ;
   unsigned long data[4U] ;
};
struct sk_buff_head {
   struct sk_buff *next ;
   struct sk_buff *prev ;
   __u32 qlen ;
   spinlock_t lock ;
};
typedef unsigned int sk_buff_data_t;
struct sec_path;
struct sec_path;
struct __anonstruct_ldv_19528_139 {
   __u16 csum_start ;
   __u16 csum_offset ;
};
union __anonunion_ldv_19529_138 {
   __wsum csum ;
   struct __anonstruct_ldv_19528_139 ldv_19528 ;
};
union __anonunion_ldv_19559_140 {
   __u32 mark ;
   __u32 dropcount ;
};
struct sk_buff {
   struct sk_buff *next ;
   struct sk_buff *prev ;
   ktime_t tstamp ;
   struct sock *sk ;
   struct net_device *dev ;
   char cb[48U] ;
   unsigned long _skb_refdst ;
   struct sec_path *sp ;
   unsigned int len ;
   unsigned int data_len ;
   __u16 mac_len ;
   __u16 hdr_len ;
   union __anonunion_ldv_19529_138 ldv_19529 ;
   __u32 priority ;
   unsigned char local_df : 1 ;
   unsigned char cloned : 1 ;
   unsigned char ip_summed : 2 ;
   unsigned char nohdr : 1 ;
   unsigned char nfctinfo : 3 ;
   unsigned char pkt_type : 3 ;
   unsigned char fclone : 2 ;
   unsigned char ipvs_property : 1 ;
   unsigned char peeked : 1 ;
   unsigned char nf_trace : 1 ;
   __be16 protocol ;
   void (*destructor)(struct sk_buff * ) ;
   struct nf_conntrack *nfct ;
   struct sk_buff *nfct_reasm ;
   struct nf_bridge_info *nf_bridge ;
   int skb_iif ;
   __u16 tc_index ;
   __u16 tc_verd ;
   __u32 rxhash ;
   __u16 queue_mapping ;
   unsigned char ndisc_nodetype : 2 ;
   unsigned char ooo_okay : 1 ;
   dma_cookie_t dma_cookie ;
   __u32 secmark ;
   union __anonunion_ldv_19559_140 ldv_19559 ;
   __u16 vlan_tci ;
   sk_buff_data_t transport_header ;
   sk_buff_data_t network_header ;
   sk_buff_data_t mac_header ;
   sk_buff_data_t tail ;
   sk_buff_data_t end ;
   unsigned char *head ;
   unsigned char *data ;
   unsigned int truesize ;
   atomic_t users ;
};
struct dst_entry;
struct dst_entry;
struct rtable;
struct rtable;
struct hlist_nulls_node;
struct hlist_nulls_node;
struct hlist_nulls_head {
   struct hlist_nulls_node *first ;
};
struct hlist_nulls_node {
   struct hlist_nulls_node *next ;
   struct hlist_nulls_node **pprev ;
};
struct __anonstruct_sync_serial_settings_141 {
   unsigned int clock_rate ;
   unsigned int clock_type ;
   unsigned short loopback ;
};
typedef struct __anonstruct_sync_serial_settings_141 sync_serial_settings;
struct __anonstruct_te1_settings_142 {
   unsigned int clock_rate ;
   unsigned int clock_type ;
   unsigned short loopback ;
   unsigned int slot_map ;
};
typedef struct __anonstruct_te1_settings_142 te1_settings;
struct __anonstruct_raw_hdlc_proto_143 {
   unsigned short encoding ;
   unsigned short parity ;
};
typedef struct __anonstruct_raw_hdlc_proto_143 raw_hdlc_proto;
struct __anonstruct_fr_proto_144 {
   unsigned int t391 ;
   unsigned int t392 ;
   unsigned int n391 ;
   unsigned int n392 ;
   unsigned int n393 ;
   unsigned short lmi ;
   unsigned short dce ;
};
typedef struct __anonstruct_fr_proto_144 fr_proto;
struct __anonstruct_fr_proto_pvc_145 {
   unsigned int dlci ;
};
typedef struct __anonstruct_fr_proto_pvc_145 fr_proto_pvc;
struct __anonstruct_fr_proto_pvc_info_146 {
   unsigned int dlci ;
   char master[16U] ;
};
typedef struct __anonstruct_fr_proto_pvc_info_146 fr_proto_pvc_info;
struct __anonstruct_cisco_proto_147 {
   unsigned int interval ;
   unsigned int timeout ;
};
typedef struct __anonstruct_cisco_proto_147 cisco_proto;
struct ifmap {
   unsigned long mem_start ;
   unsigned long mem_end ;
   unsigned short base_addr ;
   unsigned char irq ;
   unsigned char dma ;
   unsigned char port ;
};
union __anonunion_ifs_ifsu_148 {
   raw_hdlc_proto *raw_hdlc ;
   cisco_proto *cisco ;
   fr_proto *fr ;
   fr_proto_pvc *fr_pvc ;
   fr_proto_pvc_info *fr_pvc_info ;
   sync_serial_settings *sync ;
   te1_settings *te1 ;
};
struct if_settings {
   unsigned int type ;
   unsigned int size ;
   union __anonunion_ifs_ifsu_148 ifs_ifsu ;
};
union __anonunion_ifr_ifrn_149 {
   char ifrn_name[16U] ;
};
union __anonunion_ifr_ifru_150 {
   struct sockaddr ifru_addr ;
   struct sockaddr ifru_dstaddr ;
   struct sockaddr ifru_broadaddr ;
   struct sockaddr ifru_netmask ;
   struct sockaddr ifru_hwaddr ;
   short ifru_flags ;
   int ifru_ivalue ;
   int ifru_mtu ;
   struct ifmap ifru_map ;
   char ifru_slave[16U] ;
   char ifru_newname[16U] ;
   void *ifru_data ;
   struct if_settings ifru_settings ;
};
struct ifreq {
   union __anonunion_ifr_ifrn_149 ifr_ifrn ;
   union __anonunion_ifr_ifru_150 ifr_ifru ;
};
struct ethhdr {
   unsigned char h_dest[6U] ;
   unsigned char h_source[6U] ;
   __be16 h_proto ;
};
struct nlattr {
   __u16 nla_len ;
   __u16 nla_type ;
};
struct kernel_cap_struct {
   __u32 cap[2U] ;
};
typedef struct kernel_cap_struct kernel_cap_t;
struct dentry;
struct dentry;
struct user_namespace;
struct user_namespace;
struct rtnl_link_stats64 {
   __u64 rx_packets ;
   __u64 tx_packets ;
   __u64 rx_bytes ;
   __u64 tx_bytes ;
   __u64 rx_errors ;
   __u64 tx_errors ;
   __u64 rx_dropped ;
   __u64 tx_dropped ;
   __u64 multicast ;
   __u64 collisions ;
   __u64 rx_length_errors ;
   __u64 rx_over_errors ;
   __u64 rx_crc_errors ;
   __u64 rx_frame_errors ;
   __u64 rx_fifo_errors ;
   __u64 rx_missed_errors ;
   __u64 tx_aborted_errors ;
   __u64 tx_carrier_errors ;
   __u64 tx_fifo_errors ;
   __u64 tx_heartbeat_errors ;
   __u64 tx_window_errors ;
   __u64 rx_compressed ;
   __u64 tx_compressed ;
};
struct ifla_vf_info {
   __u32 vf ;
   __u8 mac[32U] ;
   __u32 vlan ;
   __u32 qos ;
   __u32 tx_rate ;
};
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
struct file_operations;
struct file_operations;
struct pm_qos_request_list {
   struct plist_node list ;
   int pm_qos_class ;
};
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
struct block_device;
struct block_device;
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
struct path;
struct path;
struct vfsmount;
struct vfsmount;
struct qstr {
   unsigned int hash ;
   unsigned int len ;
   unsigned char const *name ;
};
struct dentry_operations;
struct dentry_operations;
struct super_block;
struct super_block;
union __anonunion_d_u_153 {
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
   unsigned char d_iname[32U] ;
   unsigned int d_count ;
   spinlock_t d_lock ;
   struct dentry_operations const *d_op ;
   struct super_block *d_sb ;
   unsigned long d_time ;
   void *d_fsdata ;
   struct list_head d_lru ;
   union __anonunion_d_u_153 d_u ;
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
};
struct path {
   struct vfsmount *mnt ;
   struct dentry *dentry ;
};
struct radix_tree_node;
struct radix_tree_node;
struct radix_tree_root {
   unsigned int height ;
   gfp_t gfp_mask ;
   struct radix_tree_node *rnode ;
};
enum pid_type {
    PIDTYPE_PID = 0,
    PIDTYPE_PGID = 1,
    PIDTYPE_SID = 2,
    PIDTYPE_MAX = 3
} ;
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
   struct hlist_head tasks[3U] ;
   struct rcu_head rcu ;
   struct upid numbers[1U] ;
};
struct pid_link {
   struct hlist_node node ;
   struct pid *pid ;
};
struct fiemap_extent {
   __u64 fe_logical ;
   __u64 fe_physical ;
   __u64 fe_length ;
   __u64 fe_reserved64[2U] ;
   __u32 fe_flags ;
   __u32 fe_reserved[3U] ;
};
struct export_operations;
struct export_operations;
struct kstatfs;
struct kstatfs;
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
struct percpu_counter {
   spinlock_t lock ;
   s64 count ;
   struct list_head list ;
   s32 *counters ;
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
   char d_padding4[8U] ;
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
   int (*check_quota_file)(struct super_block * , int ) ;
   int (*read_file_info)(struct super_block * , int ) ;
   int (*write_file_info)(struct super_block * , int ) ;
   int (*free_file_info)(struct super_block * , int ) ;
   int (*read_dqblk)(struct dquot * ) ;
   int (*commit_dqblk)(struct dquot * ) ;
   int (*release_dqblk)(struct dquot * ) ;
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
   struct inode *files[2U] ;
   struct mem_dqinfo info[2U] ;
   struct quota_format_ops const *ops[2U] ;
};
union __anonunion_arg_155 {
   char *buf ;
   void *data ;
};
struct __anonstruct_read_descriptor_t_154 {
   size_t written ;
   size_t count ;
   union __anonunion_arg_155 arg ;
   int error ;
};
typedef struct __anonstruct_read_descriptor_t_154 read_descriptor_t;
struct address_space_operations {
   int (*writepage)(struct page * , struct writeback_control * ) ;
   int (*readpage)(struct file * , struct page * ) ;
   int (*writepages)(struct address_space * , struct writeback_control * ) ;
   int (*set_page_dirty)(struct page * ) ;
   int (*readpages)(struct file * , struct address_space * , struct list_head * ,
                    unsigned int ) ;
   int (*write_begin)(struct file * , struct address_space * , loff_t , unsigned int ,
                      unsigned int , struct page ** , void ** ) ;
   int (*write_end)(struct file * , struct address_space * , loff_t , unsigned int ,
                    unsigned int , struct page * , void * ) ;
   sector_t (*bmap)(struct address_space * , sector_t ) ;
   void (*invalidatepage)(struct page * , unsigned long ) ;
   int (*releasepage)(struct page * , gfp_t ) ;
   void (*freepage)(struct page * ) ;
   ssize_t (*direct_IO)(int , struct kiocb * , struct iovec const * , loff_t ,
                        unsigned long ) ;
   int (*get_xip_mem)(struct address_space * , unsigned long , int , void ** , unsigned long * ) ;
   int (*migratepage)(struct address_space * , struct page * , struct page * ) ;
   int (*launder_page)(struct page * ) ;
   int (*is_partially_uptodate)(struct page * , read_descriptor_t * , unsigned long ) ;
   int (*error_remove_page)(struct address_space * , struct page * ) ;
};
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
};
struct hd_struct;
struct hd_struct;
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
struct inode_operations;
struct inode_operations;
union __anonunion_ldv_22627_156 {
   struct list_head i_dentry ;
   struct rcu_head i_rcu ;
};
struct file_lock;
struct file_lock;
struct cdev;
struct cdev;
union __anonunion_ldv_22653_157 {
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
   union __anonunion_ldv_22627_156 ldv_22627 ;
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
   struct dquot *i_dquot[2U] ;
   struct list_head i_devices ;
   union __anonunion_ldv_22653_157 ldv_22653 ;
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
union __anonunion_f_u_158 {
   struct list_head fu_list ;
   struct rcu_head fu_rcuhead ;
};
struct file {
   union __anonunion_f_u_158 f_u ;
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
struct nfs_lock_info {
   u32 state ;
   struct nlm_lockowner *owner ;
   struct list_head list ;
};
struct nfs4_lock_state;
struct nfs4_lock_state;
struct nfs4_lock_info {
   struct nfs4_lock_state *owner ;
};
struct __anonstruct_afs_160 {
   struct list_head link ;
   int state ;
};
union __anonunion_fl_u_159 {
   struct nfs_lock_info nfs_fl ;
   struct nfs4_lock_info nfs4_fl ;
   struct __anonstruct_afs_160 afs ;
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
   union __anonunion_fl_u_159 fl_u ;
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
struct super_operations;
struct super_operations;
struct xattr_handler;
struct xattr_handler;
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
   char s_id[32U] ;
   u8 s_uuid[16U] ;
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
   int (*flush)(struct file * , fl_owner_t ) ;
   int (*release)(struct inode * , struct file * ) ;
   int (*fsync)(struct file * , int ) ;
   int (*aio_fsync)(struct kiocb * , int ) ;
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
   long (*fallocate)(struct file * , int , loff_t , loff_t ) ;
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
   int (*getattr)(struct vfsmount * , struct dentry * , struct kstat * ) ;
   int (*setxattr)(struct dentry * , char const * , void const * , size_t , int ) ;
   ssize_t (*getxattr)(struct dentry * , char const * , void * , size_t ) ;
   ssize_t (*listxattr)(struct dentry * , char * , size_t ) ;
   int (*removexattr)(struct dentry * , char const * ) ;
   void (*truncate_range)(struct inode * , loff_t , loff_t ) ;
   int (*fiemap)(struct inode * , struct fiemap_extent_info * , u64 , u64 ) ;
};
struct super_operations {
   struct inode *(*alloc_inode)(struct super_block * ) ;
   void (*destroy_inode)(struct inode * ) ;
   void (*dirty_inode)(struct inode * , int ) ;
   int (*write_inode)(struct inode * , struct writeback_control * ) ;
   int (*drop_inode)(struct inode * ) ;
   void (*evict_inode)(struct inode * ) ;
   void (*put_super)(struct super_block * ) ;
   void (*write_super)(struct super_block * ) ;
   int (*sync_fs)(struct super_block * , int ) ;
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
struct io_event {
   __u64 data ;
   __u64 obj ;
   __s64 res ;
   __s64 res2 ;
};
typedef unsigned long cputime_t;
struct siginfo;
struct siginfo;
struct __anonstruct_sigset_t_161 {
   unsigned long sig[1U] ;
};
typedef struct __anonstruct_sigset_t_161 sigset_t;
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
struct __anonstruct__kill_163 {
   __kernel_pid_t _pid ;
   __kernel_uid32_t _uid ;
};
struct __anonstruct__timer_164 {
   __kernel_timer_t _tid ;
   int _overrun ;
   char _pad[0U] ;
   sigval_t _sigval ;
   int _sys_private ;
};
struct __anonstruct__rt_165 {
   __kernel_pid_t _pid ;
   __kernel_uid32_t _uid ;
   sigval_t _sigval ;
};
struct __anonstruct__sigchld_166 {
   __kernel_pid_t _pid ;
   __kernel_uid32_t _uid ;
   int _status ;
   __kernel_clock_t _utime ;
   __kernel_clock_t _stime ;
};
struct __anonstruct__sigfault_167 {
   void *_addr ;
   short _addr_lsb ;
};
struct __anonstruct__sigpoll_168 {
   long _band ;
   int _fd ;
};
union __anonunion__sifields_162 {
   int _pad[28U] ;
   struct __anonstruct__kill_163 _kill ;
   struct __anonstruct__timer_164 _timer ;
   struct __anonstruct__rt_165 _rt ;
   struct __anonstruct__sigchld_166 _sigchld ;
   struct __anonstruct__sigfault_167 _sigfault ;
   struct __anonstruct__sigpoll_168 _sigpoll ;
};
struct siginfo {
   int si_signo ;
   int si_errno ;
   int si_code ;
   union __anonunion__sifields_162 _sifields ;
};
typedef struct siginfo siginfo_t;
struct sigpending {
   struct list_head list ;
   sigset_t signal ;
};
struct prop_local_single {
   unsigned long events ;
   unsigned long period ;
   int shift ;
   spinlock_t lock ;
};
struct __anonstruct_seccomp_t_171 {
   int mode ;
};
typedef struct __anonstruct_seccomp_t_171 seccomp_t;
struct rt_mutex_waiter;
struct rt_mutex_waiter;
struct rlimit {
   unsigned long rlim_cur ;
   unsigned long rlim_max ;
};
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
   unsigned long backtrace[12U] ;
   unsigned int count ;
   unsigned long time ;
   unsigned long max ;
};
typedef int32_t key_serial_t;
typedef uint32_t key_perm_t;
struct key;
struct key;
struct signal_struct;
struct signal_struct;
struct key_type;
struct key_type;
struct keyring_list;
struct keyring_list;
struct key_user;
struct key_user;
union __anonunion_ldv_25207_172 {
   time_t expiry ;
   time_t revoked_at ;
};
union __anonunion_type_data_173 {
   struct list_head link ;
   unsigned long x[2U] ;
   void *p[2U] ;
   int reject_error ;
};
union __anonunion_payload_174 {
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
   union __anonunion_ldv_25207_172 ldv_25207 ;
   uid_t uid ;
   gid_t gid ;
   key_perm_t perm ;
   unsigned short quotalen ;
   unsigned short datalen ;
   unsigned long flags ;
   char *description ;
   union __anonunion_type_data_173 type_data ;
   union __anonunion_payload_174 payload ;
};
struct audit_context;
struct audit_context;
struct group_info {
   atomic_t usage ;
   int ngroups ;
   int nblocks ;
   gid_t small_block[32U] ;
   gid_t *blocks[0U] ;
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
struct robust_list_head;
struct robust_list_head;
struct bio_list;
struct bio_list;
struct fs_struct;
struct fs_struct;
struct perf_event_context;
struct perf_event_context;
struct blk_plug;
struct blk_plug;
struct cfs_rq;
struct cfs_rq;
struct kioctx;
struct kioctx;
union __anonunion_ki_obj_175 {
   void *user ;
   struct task_struct *tsk ;
};
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
   union __anonunion_ki_obj_175 ki_obj ;
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
   struct page *internal_pages[8U] ;
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
struct sighand_struct {
   atomic_t count ;
   struct k_sigaction action[64U] ;
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
struct tty_struct;
struct tty_struct;
struct taskstats;
struct taskstats;
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
   struct cpu_itimer it[2U] ;
   struct thread_group_cputimer cputimer ;
   struct task_cputime cputime_expires ;
   struct list_head cpu_timers[3U] ;
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
   struct rlimit rlim[16U] ;
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
struct rq;
struct rq;
struct sched_class {
   struct sched_class const *next ;
   void (*enqueue_task)(struct rq * , struct task_struct * , int ) ;
   void (*dequeue_task)(struct rq * , struct task_struct * , int ) ;
   void (*yield_task)(struct rq * ) ;
   bool (*yield_to_task)(struct rq * , struct task_struct * , bool ) ;
   void (*check_preempt_curr)(struct rq * , struct task_struct * , int ) ;
   struct task_struct *(*pick_next_task)(struct rq * ) ;
   void (*put_prev_task)(struct rq * , struct task_struct * ) ;
   int (*select_task_rq)(struct task_struct * , int , int ) ;
   void (*pre_schedule)(struct rq * , struct task_struct * ) ;
   void (*post_schedule)(struct rq * ) ;
   void (*task_waking)(struct task_struct * ) ;
   void (*task_woken)(struct rq * , struct task_struct * ) ;
   void (*set_cpus_allowed)(struct task_struct * , struct cpumask const * ) ;
   void (*rq_online)(struct rq * ) ;
   void (*rq_offline)(struct rq * ) ;
   void (*set_curr_task)(struct rq * ) ;
   void (*task_tick)(struct rq * , struct task_struct * , int ) ;
   void (*task_fork)(struct task_struct * ) ;
   void (*switched_from)(struct rq * , struct task_struct * ) ;
   void (*switched_to)(struct rq * , struct task_struct * ) ;
   void (*prio_changed)(struct rq * , struct task_struct * , int ) ;
   unsigned int (*get_rr_interval)(struct rq * , struct task_struct * ) ;
   void (*task_move_group)(struct task_struct * , int ) ;
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
struct mem_cgroup;
struct mem_cgroup;
struct memcg_batch_info {
   int do_batch ;
   struct mem_cgroup *memcg ;
   unsigned long nr_pages ;
   unsigned long memsw_nr_pages ;
};
struct irqaction;
struct irqaction;
struct css_set;
struct css_set;
struct compat_robust_list_head;
struct compat_robust_list_head;
struct ftrace_ret_stack;
struct ftrace_ret_stack;
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
   unsigned char brk_randomized : 1 ;
   int exit_state ;
   int exit_code ;
   int exit_signal ;
   int pdeath_signal ;
   unsigned int group_stop ;
   unsigned int personality ;
   unsigned char did_exec : 1 ;
   unsigned char in_execve : 1 ;
   unsigned char in_iowait : 1 ;
   unsigned char sched_reset_on_fork : 1 ;
   unsigned char sched_contributes_to_load : 1 ;
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
   struct pid_link pids[3U] ;
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
   struct list_head cpu_timers[3U] ;
   struct cred const *real_cred ;
   struct cred const *cred ;
   struct cred *replacement_session_keyring ;
   char comm[16U] ;
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
   int (*notifier)(void * ) ;
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
   struct held_lock held_locks[48U] ;
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
   struct perf_event_context *perf_event_ctxp[2U] ;
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
   struct latency_record latency_record[32U] ;
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
typedef s32 compat_long_t;
typedef u32 compat_uptr_t;
struct compat_robust_list {
   compat_uptr_t next ;
};
struct compat_robust_list_head {
   struct compat_robust_list list ;
   compat_long_t futex_offset ;
   compat_uptr_t list_op_pending ;
};
struct ethtool_cmd {
   __u32 cmd ;
   __u32 supported ;
   __u32 advertising ;
   __u16 speed ;
   __u8 duplex ;
   __u8 port ;
   __u8 phy_address ;
   __u8 transceiver ;
   __u8 autoneg ;
   __u8 mdio_support ;
   __u32 maxtxpkt ;
   __u32 maxrxpkt ;
   __u16 speed_hi ;
   __u8 eth_tp_mdix ;
   __u8 reserved2 ;
   __u32 lp_advertising ;
   __u32 reserved[2U] ;
};
struct ethtool_drvinfo {
   __u32 cmd ;
   char driver[32U] ;
   char version[32U] ;
   char fw_version[32U] ;
   char bus_info[32U] ;
   char reserved1[32U] ;
   char reserved2[12U] ;
   __u32 n_priv_flags ;
   __u32 n_stats ;
   __u32 testinfo_len ;
   __u32 eedump_len ;
   __u32 regdump_len ;
};
struct ethtool_wolinfo {
   __u32 cmd ;
   __u32 supported ;
   __u32 wolopts ;
   __u8 sopass[6U] ;
};
struct ethtool_regs {
   __u32 cmd ;
   __u32 version ;
   __u32 len ;
   __u8 data[0U] ;
};
struct ethtool_eeprom {
   __u32 cmd ;
   __u32 magic ;
   __u32 offset ;
   __u32 len ;
   __u8 data[0U] ;
};
struct ethtool_coalesce {
   __u32 cmd ;
   __u32 rx_coalesce_usecs ;
   __u32 rx_max_coalesced_frames ;
   __u32 rx_coalesce_usecs_irq ;
   __u32 rx_max_coalesced_frames_irq ;
   __u32 tx_coalesce_usecs ;
   __u32 tx_max_coalesced_frames ;
   __u32 tx_coalesce_usecs_irq ;
   __u32 tx_max_coalesced_frames_irq ;
   __u32 stats_block_coalesce_usecs ;
   __u32 use_adaptive_rx_coalesce ;
   __u32 use_adaptive_tx_coalesce ;
   __u32 pkt_rate_low ;
   __u32 rx_coalesce_usecs_low ;
   __u32 rx_max_coalesced_frames_low ;
   __u32 tx_coalesce_usecs_low ;
   __u32 tx_max_coalesced_frames_low ;
   __u32 pkt_rate_high ;
   __u32 rx_coalesce_usecs_high ;
   __u32 rx_max_coalesced_frames_high ;
   __u32 tx_coalesce_usecs_high ;
   __u32 tx_max_coalesced_frames_high ;
   __u32 rate_sample_interval ;
};
struct ethtool_ringparam {
   __u32 cmd ;
   __u32 rx_max_pending ;
   __u32 rx_mini_max_pending ;
   __u32 rx_jumbo_max_pending ;
   __u32 tx_max_pending ;
   __u32 rx_pending ;
   __u32 rx_mini_pending ;
   __u32 rx_jumbo_pending ;
   __u32 tx_pending ;
};
struct ethtool_channels {
   __u32 cmd ;
   __u32 max_rx ;
   __u32 max_tx ;
   __u32 max_other ;
   __u32 max_combined ;
   __u32 rx_count ;
   __u32 tx_count ;
   __u32 other_count ;
   __u32 combined_count ;
};
struct ethtool_pauseparam {
   __u32 cmd ;
   __u32 autoneg ;
   __u32 rx_pause ;
   __u32 tx_pause ;
};
struct ethtool_test {
   __u32 cmd ;
   __u32 flags ;
   __u32 reserved ;
   __u32 len ;
   __u64 data[0U] ;
};
struct ethtool_stats {
   __u32 cmd ;
   __u32 n_stats ;
   __u64 data[0U] ;
};
struct ethtool_tcpip4_spec {
   __be32 ip4src ;
   __be32 ip4dst ;
   __be16 psrc ;
   __be16 pdst ;
   __u8 tos ;
};
struct ethtool_ah_espip4_spec {
   __be32 ip4src ;
   __be32 ip4dst ;
   __be32 spi ;
   __u8 tos ;
};
struct ethtool_usrip4_spec {
   __be32 ip4src ;
   __be32 ip4dst ;
   __be32 l4_4_bytes ;
   __u8 tos ;
   __u8 ip_ver ;
   __u8 proto ;
};
union ethtool_flow_union {
   struct ethtool_tcpip4_spec tcp_ip4_spec ;
   struct ethtool_tcpip4_spec udp_ip4_spec ;
   struct ethtool_tcpip4_spec sctp_ip4_spec ;
   struct ethtool_ah_espip4_spec ah_ip4_spec ;
   struct ethtool_ah_espip4_spec esp_ip4_spec ;
   struct ethtool_usrip4_spec usr_ip4_spec ;
   struct ethhdr ether_spec ;
   __u8 hdata[60U] ;
};
struct ethtool_flow_ext {
   __be16 vlan_etype ;
   __be16 vlan_tci ;
   __be32 data[2U] ;
};
struct ethtool_rx_flow_spec {
   __u32 flow_type ;
   union ethtool_flow_union h_u ;
   struct ethtool_flow_ext h_ext ;
   union ethtool_flow_union m_u ;
   struct ethtool_flow_ext m_ext ;
   __u64 ring_cookie ;
   __u32 location ;
};
struct ethtool_rxnfc {
   __u32 cmd ;
   __u32 flow_type ;
   __u64 data ;
   struct ethtool_rx_flow_spec fs ;
   __u32 rule_cnt ;
   __u32 rule_locs[0U] ;
};
struct ethtool_rxfh_indir {
   __u32 cmd ;
   __u32 size ;
   __u32 ring_index[0U] ;
};
union __anonunion_h_u_182 {
   struct ethtool_tcpip4_spec tcp_ip4_spec ;
   struct ethtool_tcpip4_spec udp_ip4_spec ;
   struct ethtool_tcpip4_spec sctp_ip4_spec ;
   struct ethtool_ah_espip4_spec ah_ip4_spec ;
   struct ethtool_ah_espip4_spec esp_ip4_spec ;
   struct ethtool_usrip4_spec usr_ip4_spec ;
   struct ethhdr ether_spec ;
   __u8 hdata[72U] ;
};
union __anonunion_m_u_183 {
   struct ethtool_tcpip4_spec tcp_ip4_spec ;
   struct ethtool_tcpip4_spec udp_ip4_spec ;
   struct ethtool_tcpip4_spec sctp_ip4_spec ;
   struct ethtool_ah_espip4_spec ah_ip4_spec ;
   struct ethtool_ah_espip4_spec esp_ip4_spec ;
   struct ethtool_usrip4_spec usr_ip4_spec ;
   struct ethhdr ether_spec ;
   __u8 hdata[72U] ;
};
struct ethtool_rx_ntuple_flow_spec {
   __u32 flow_type ;
   union __anonunion_h_u_182 h_u ;
   union __anonunion_m_u_183 m_u ;
   __u16 vlan_tag ;
   __u16 vlan_tag_mask ;
   __u64 data ;
   __u64 data_mask ;
   __s32 action ;
};
struct ethtool_rx_ntuple {
   __u32 cmd ;
   struct ethtool_rx_ntuple_flow_spec fs ;
};
struct ethtool_flash {
   __u32 cmd ;
   __u32 region ;
   char data[128U] ;
};
struct ethtool_dump {
   __u32 cmd ;
   __u32 version ;
   __u32 flag ;
   __u32 len ;
   __u8 data[0U] ;
};
struct ethtool_rx_ntuple_list {
   struct list_head list ;
   unsigned int count ;
};
enum ethtool_phys_id_state {
    ETHTOOL_ID_INACTIVE = 0,
    ETHTOOL_ID_ACTIVE = 1,
    ETHTOOL_ID_ON = 2,
    ETHTOOL_ID_OFF = 3
} ;
struct ethtool_ops {
   int (*get_settings)(struct net_device * , struct ethtool_cmd * ) ;
   int (*set_settings)(struct net_device * , struct ethtool_cmd * ) ;
   void (*get_drvinfo)(struct net_device * , struct ethtool_drvinfo * ) ;
   int (*get_regs_len)(struct net_device * ) ;
   void (*get_regs)(struct net_device * , struct ethtool_regs * , void * ) ;
   void (*get_wol)(struct net_device * , struct ethtool_wolinfo * ) ;
   int (*set_wol)(struct net_device * , struct ethtool_wolinfo * ) ;
   u32 (*get_msglevel)(struct net_device * ) ;
   void (*set_msglevel)(struct net_device * , u32 ) ;
   int (*nway_reset)(struct net_device * ) ;
   u32 (*get_link)(struct net_device * ) ;
   int (*get_eeprom_len)(struct net_device * ) ;
   int (*get_eeprom)(struct net_device * , struct ethtool_eeprom * , u8 * ) ;
   int (*set_eeprom)(struct net_device * , struct ethtool_eeprom * , u8 * ) ;
   int (*get_coalesce)(struct net_device * , struct ethtool_coalesce * ) ;
   int (*set_coalesce)(struct net_device * , struct ethtool_coalesce * ) ;
   void (*get_ringparam)(struct net_device * , struct ethtool_ringparam * ) ;
   int (*set_ringparam)(struct net_device * , struct ethtool_ringparam * ) ;
   void (*get_pauseparam)(struct net_device * , struct ethtool_pauseparam * ) ;
   int (*set_pauseparam)(struct net_device * , struct ethtool_pauseparam * ) ;
   u32 (*get_rx_csum)(struct net_device * ) ;
   int (*set_rx_csum)(struct net_device * , u32 ) ;
   u32 (*get_tx_csum)(struct net_device * ) ;
   int (*set_tx_csum)(struct net_device * , u32 ) ;
   u32 (*get_sg)(struct net_device * ) ;
   int (*set_sg)(struct net_device * , u32 ) ;
   u32 (*get_tso)(struct net_device * ) ;
   int (*set_tso)(struct net_device * , u32 ) ;
   void (*self_test)(struct net_device * , struct ethtool_test * , u64 * ) ;
   void (*get_strings)(struct net_device * , u32 , u8 * ) ;
   int (*set_phys_id)(struct net_device * , enum ethtool_phys_id_state ) ;
   void (*get_ethtool_stats)(struct net_device * , struct ethtool_stats * , u64 * ) ;
   int (*begin)(struct net_device * ) ;
   void (*complete)(struct net_device * ) ;
   u32 (*get_ufo)(struct net_device * ) ;
   int (*set_ufo)(struct net_device * , u32 ) ;
   u32 (*get_flags)(struct net_device * ) ;
   int (*set_flags)(struct net_device * , u32 ) ;
   u32 (*get_priv_flags)(struct net_device * ) ;
   int (*set_priv_flags)(struct net_device * , u32 ) ;
   int (*get_sset_count)(struct net_device * , int ) ;
   int (*get_rxnfc)(struct net_device * , struct ethtool_rxnfc * , void * ) ;
   int (*set_rxnfc)(struct net_device * , struct ethtool_rxnfc * ) ;
   int (*flash_device)(struct net_device * , struct ethtool_flash * ) ;
   int (*reset)(struct net_device * , u32 * ) ;
   int (*set_rx_ntuple)(struct net_device * , struct ethtool_rx_ntuple * ) ;
   int (*get_rx_ntuple)(struct net_device * , u32 , void * ) ;
   int (*get_rxfh_indir)(struct net_device * , struct ethtool_rxfh_indir * ) ;
   int (*set_rxfh_indir)(struct net_device * , struct ethtool_rxfh_indir const * ) ;
   void (*get_channels)(struct net_device * , struct ethtool_channels * ) ;
   int (*set_channels)(struct net_device * , struct ethtool_channels * ) ;
   int (*get_dump_flag)(struct net_device * , struct ethtool_dump * ) ;
   int (*get_dump_data)(struct net_device * , struct ethtool_dump * , void * ) ;
   int (*set_dump)(struct net_device * , struct ethtool_dump * ) ;
};
struct prot_inuse;
struct prot_inuse;
struct netns_core {
   struct ctl_table_header *sysctl_hdr ;
   int sysctl_somaxconn ;
   struct prot_inuse *inuse ;
};
struct u64_stats_sync {

};
struct ipstats_mib {
   u64 mibs[31U] ;
   struct u64_stats_sync syncp ;
};
struct icmp_mib {
   unsigned long mibs[27U] ;
};
struct icmpmsg_mib {
   unsigned long mibs[512U] ;
};
struct icmpv6_mib {
   unsigned long mibs[5U] ;
};
struct icmpv6msg_mib {
   unsigned long mibs[512U] ;
};
struct tcp_mib {
   unsigned long mibs[15U] ;
};
struct udp_mib {
   unsigned long mibs[7U] ;
};
struct linux_mib {
   unsigned long mibs[80U] ;
};
struct linux_xfrm_mib {
   unsigned long mibs[27U] ;
};
struct proc_dir_entry;
struct proc_dir_entry;
struct netns_mib {
   struct tcp_mib *tcp_statistics[2U] ;
   struct ipstats_mib *ip_statistics[2U] ;
   struct linux_mib *net_statistics[2U] ;
   struct udp_mib *udp_statistics[2U] ;
   struct udp_mib *udplite_statistics[2U] ;
   struct icmp_mib *icmp_statistics[2U] ;
   struct icmpmsg_mib *icmpmsg_statistics[2U] ;
   struct proc_dir_entry *proc_net_devsnmp6 ;
   struct udp_mib *udp_stats_in6[2U] ;
   struct udp_mib *udplite_stats_in6[2U] ;
   struct ipstats_mib *ipv6_statistics[2U] ;
   struct icmpv6_mib *icmpv6_statistics[2U] ;
   struct icmpv6msg_mib *icmpv6msg_statistics[2U] ;
   struct linux_xfrm_mib *xfrm_statistics[2U] ;
};
struct netns_unix {
   int sysctl_max_dgram_qlen ;
   struct ctl_table_header *ctl ;
};
struct netns_packet {
   spinlock_t sklist_lock ;
   struct hlist_head sklist ;
};
struct netns_frags {
   int nqueues ;
   atomic_t mem ;
   struct list_head lru_list ;
   int timeout ;
   int high_thresh ;
   int low_thresh ;
};
struct ipv4_devconf;
struct ipv4_devconf;
struct fib_rules_ops;
struct fib_rules_ops;
struct xt_table;
struct xt_table;
struct netns_ipv4 {
   struct ctl_table_header *forw_hdr ;
   struct ctl_table_header *frags_hdr ;
   struct ctl_table_header *ipv4_hdr ;
   struct ctl_table_header *route_hdr ;
   struct ipv4_devconf *devconf_all ;
   struct ipv4_devconf *devconf_dflt ;
   struct fib_rules_ops *rules_ops ;
   struct hlist_head *fib_table_hash ;
   struct sock *fibnl ;
   struct sock **icmp_sk ;
   struct sock *tcp_sock ;
   struct netns_frags frags ;
   struct xt_table *iptable_filter ;
   struct xt_table *iptable_mangle ;
   struct xt_table *iptable_raw ;
   struct xt_table *arptable_filter ;
   struct xt_table *iptable_security ;
   struct xt_table *nat_table ;
   struct hlist_head *nat_bysource ;
   unsigned int nat_htable_size ;
   int sysctl_icmp_echo_ignore_all ;
   int sysctl_icmp_echo_ignore_broadcasts ;
   int sysctl_icmp_ignore_bogus_error_responses ;
   int sysctl_icmp_ratelimit ;
   int sysctl_icmp_ratemask ;
   int sysctl_icmp_errors_use_inbound_ifaddr ;
   int sysctl_rt_cache_rebuild_count ;
   int current_rt_cache_rebuild_count ;
   unsigned int sysctl_ping_group_range[2U] ;
   atomic_t rt_genid ;
   atomic_t dev_addr_genid ;
   struct list_head mr_tables ;
   struct fib_rules_ops *mr_rules_ops ;
};
struct dst_ops {
   unsigned short family ;
   __be16 protocol ;
   unsigned int gc_thresh ;
   int (*gc)(struct dst_ops * ) ;
   struct dst_entry *(*check)(struct dst_entry * , __u32 ) ;
   unsigned int (*default_advmss)(struct dst_entry const * ) ;
   unsigned int (*default_mtu)(struct dst_entry const * ) ;
   u32 *(*cow_metrics)(struct dst_entry * , unsigned long ) ;
   void (*destroy)(struct dst_entry * ) ;
   void (*ifdown)(struct dst_entry * , struct net_device * , int ) ;
   struct dst_entry *(*negative_advice)(struct dst_entry * ) ;
   void (*link_failure)(struct sk_buff * ) ;
   void (*update_pmtu)(struct dst_entry * , u32 ) ;
   int (*local_out)(struct sk_buff * ) ;
   struct kmem_cache *kmem_cachep ;
   struct percpu_counter pcpuc_entries ;
};
struct netns_sysctl_ipv6 {
   struct ctl_table_header *table ;
   struct ctl_table_header *frags_hdr ;
   int bindv6only ;
   int flush_delay ;
   int ip6_rt_max_size ;
   int ip6_rt_gc_min_interval ;
   int ip6_rt_gc_timeout ;
   int ip6_rt_gc_interval ;
   int ip6_rt_gc_elasticity ;
   int ip6_rt_mtu_expires ;
   int ip6_rt_min_advmss ;
   int icmpv6_time ;
};
struct ipv6_devconf;
struct ipv6_devconf;
struct rt6_info;
struct rt6_info;
struct rt6_statistics;
struct rt6_statistics;
struct fib6_table;
struct fib6_table;
struct netns_ipv6 {
   struct netns_sysctl_ipv6 sysctl ;
   struct ipv6_devconf *devconf_all ;
   struct ipv6_devconf *devconf_dflt ;
   struct netns_frags frags ;
   struct xt_table *ip6table_filter ;
   struct xt_table *ip6table_mangle ;
   struct xt_table *ip6table_raw ;
   struct xt_table *ip6table_security ;
   struct rt6_info *ip6_null_entry ;
   struct rt6_statistics *rt6_stats ;
   struct timer_list ip6_fib_timer ;
   struct hlist_head *fib_table_hash ;
   struct fib6_table *fib6_main_tbl ;
   struct dst_ops ip6_dst_ops ;
   unsigned int ip6_rt_gc_expire ;
   unsigned long ip6_rt_last_gc ;
   struct rt6_info *ip6_prohibit_entry ;
   struct rt6_info *ip6_blk_hole_entry ;
   struct fib6_table *fib6_local_tbl ;
   struct fib_rules_ops *fib6_rules_ops ;
   struct sock **icmp_sk ;
   struct sock *ndisc_sk ;
   struct sock *tcp_sk ;
   struct sock *igmp_sk ;
   struct list_head mr6_tables ;
   struct fib_rules_ops *mr6_rules_ops ;
};
struct netns_dccp {
   struct sock *v4_ctl_sk ;
   struct sock *v6_ctl_sk ;
};
typedef int read_proc_t(char * , char ** , off_t , int , int * , void * );
typedef int write_proc_t(struct file * , char const * , unsigned long , void * );
struct proc_dir_entry {
   unsigned int low_ino ;
   unsigned int namelen ;
   char const *name ;
   mode_t mode ;
   nlink_t nlink ;
   uid_t uid ;
   gid_t gid ;
   loff_t size ;
   struct inode_operations const *proc_iops ;
   struct file_operations const *proc_fops ;
   struct proc_dir_entry *next ;
   struct proc_dir_entry *parent ;
   struct proc_dir_entry *subdir ;
   void *data ;
   read_proc_t *read_proc ;
   write_proc_t *write_proc ;
   atomic_t count ;
   int pde_users ;
   spinlock_t pde_unload_lock ;
   struct completion *pde_unload_completion ;
   struct list_head pde_openers ;
};
struct ebt_table;
struct ebt_table;
struct netns_xt {
   struct list_head tables[13U] ;
   struct ebt_table *broute_table ;
   struct ebt_table *frame_filter ;
   struct ebt_table *frame_nat ;
};
struct ip_conntrack_stat;
struct ip_conntrack_stat;
struct netns_ct {
   atomic_t count ;
   unsigned int expect_count ;
   unsigned int htable_size ;
   struct kmem_cache *nf_conntrack_cachep ;
   struct hlist_nulls_head *hash ;
   struct hlist_head *expect_hash ;
   struct hlist_nulls_head unconfirmed ;
   struct hlist_nulls_head dying ;
   struct ip_conntrack_stat *stat ;
   int sysctl_events ;
   unsigned int sysctl_events_retry_timeout ;
   int sysctl_acct ;
   int sysctl_tstamp ;
   int sysctl_checksum ;
   unsigned int sysctl_log_invalid ;
   struct ctl_table_header *sysctl_header ;
   struct ctl_table_header *acct_sysctl_header ;
   struct ctl_table_header *tstamp_sysctl_header ;
   struct ctl_table_header *event_sysctl_header ;
   char *slabname ;
};
struct xfrm_policy_hash {
   struct hlist_head *table ;
   unsigned int hmask ;
};
struct netns_xfrm {
   struct list_head state_all ;
   struct hlist_head *state_bydst ;
   struct hlist_head *state_bysrc ;
   struct hlist_head *state_byspi ;
   unsigned int state_hmask ;
   unsigned int state_num ;
   struct work_struct state_hash_work ;
   struct hlist_head state_gc_list ;
   struct work_struct state_gc_work ;
   wait_queue_head_t km_waitq ;
   struct list_head policy_all ;
   struct hlist_head *policy_byidx ;
   unsigned int policy_idx_hmask ;
   struct hlist_head policy_inexact[6U] ;
   struct xfrm_policy_hash policy_bydst[6U] ;
   unsigned int policy_count[6U] ;
   struct work_struct policy_hash_work ;
   struct sock *nlsk ;
   struct sock *nlsk_stash ;
   u32 sysctl_aevent_etime ;
   u32 sysctl_aevent_rseqth ;
   int sysctl_larval_drop ;
   u32 sysctl_acq_expires ;
   struct ctl_table_header *sysctl_hdr ;
   struct dst_ops xfrm4_dst_ops ;
   struct dst_ops xfrm6_dst_ops ;
};
struct net_generic;
struct net_generic;
struct netns_ipvs;
struct netns_ipvs;
struct net {
   atomic_t passive ;
   atomic_t count ;
   spinlock_t rules_mod_lock ;
   struct list_head list ;
   struct list_head cleanup_list ;
   struct list_head exit_list ;
   struct proc_dir_entry *proc_net ;
   struct proc_dir_entry *proc_net_stat ;
   struct ctl_table_set sysctls ;
   struct sock *rtnl ;
   struct sock *genl_sock ;
   struct list_head dev_base_head ;
   struct hlist_head *dev_name_head ;
   struct hlist_head *dev_index_head ;
   struct list_head rules_ops ;
   struct net_device *loopback_dev ;
   struct netns_core core ;
   struct netns_mib mib ;
   struct netns_packet packet ;
   struct netns_unix unx ;
   struct netns_ipv4 ipv4 ;
   struct netns_ipv6 ipv6 ;
   struct netns_dccp dccp ;
   struct netns_xt xt ;
   struct netns_ct ct ;
   struct sock *nfnl ;
   struct sock *nfnl_stash ;
   struct sk_buff_head wext_nlevents ;
   struct net_generic *gen ;
   struct netns_xfrm xfrm ;
   struct netns_ipvs *ipvs ;
};
struct seq_file {
   char *buf ;
   size_t size ;
   size_t from ;
   size_t count ;
   loff_t index ;
   loff_t read_pos ;
   u64 version ;
   struct mutex lock ;
   struct seq_operations const *op ;
   void *private ;
};
struct seq_operations {
   void *(*start)(struct seq_file * , loff_t * ) ;
   void (*stop)(struct seq_file * , void * ) ;
   void *(*next)(struct seq_file * , void * , loff_t * ) ;
   int (*show)(struct seq_file * , void * ) ;
};
struct ieee_ets {
   __u8 willing ;
   __u8 ets_cap ;
   __u8 cbs ;
   __u8 tc_tx_bw[8U] ;
   __u8 tc_rx_bw[8U] ;
   __u8 tc_tsa[8U] ;
   __u8 prio_tc[8U] ;
   __u8 tc_reco_bw[8U] ;
   __u8 tc_reco_tsa[8U] ;
   __u8 reco_prio_tc[8U] ;
};
struct ieee_pfc {
   __u8 pfc_cap ;
   __u8 pfc_en ;
   __u8 mbc ;
   __u16 delay ;
   __u64 requests[8U] ;
   __u64 indications[8U] ;
};
struct cee_pg {
   __u8 willing ;
   __u8 error ;
   __u8 pg_en ;
   __u8 tcs_supported ;
   __u8 pg_bw[8U] ;
   __u8 prio_pg[8U] ;
};
struct cee_pfc {
   __u8 willing ;
   __u8 error ;
   __u8 pfc_en ;
   __u8 tcs_supported ;
};
struct dcb_app {
   __u8 selector ;
   __u8 priority ;
   __u16 protocol ;
};
struct dcb_peer_app_info {
   __u8 willing ;
   __u8 error ;
};
struct dcbnl_rtnl_ops {
   int (*ieee_getets)(struct net_device * , struct ieee_ets * ) ;
   int (*ieee_setets)(struct net_device * , struct ieee_ets * ) ;
   int (*ieee_getpfc)(struct net_device * , struct ieee_pfc * ) ;
   int (*ieee_setpfc)(struct net_device * , struct ieee_pfc * ) ;
   int (*ieee_getapp)(struct net_device * , struct dcb_app * ) ;
   int (*ieee_setapp)(struct net_device * , struct dcb_app * ) ;
   int (*ieee_peer_getets)(struct net_device * , struct ieee_ets * ) ;
   int (*ieee_peer_getpfc)(struct net_device * , struct ieee_pfc * ) ;
   u8 (*getstate)(struct net_device * ) ;
   u8 (*setstate)(struct net_device * , u8 ) ;
   void (*getpermhwaddr)(struct net_device * , u8 * ) ;
   void (*setpgtccfgtx)(struct net_device * , int , u8 , u8 , u8 , u8 ) ;
   void (*setpgbwgcfgtx)(struct net_device * , int , u8 ) ;
   void (*setpgtccfgrx)(struct net_device * , int , u8 , u8 , u8 , u8 ) ;
   void (*setpgbwgcfgrx)(struct net_device * , int , u8 ) ;
   void (*getpgtccfgtx)(struct net_device * , int , u8 * , u8 * , u8 * , u8 * ) ;
   void (*getpgbwgcfgtx)(struct net_device * , int , u8 * ) ;
   void (*getpgtccfgrx)(struct net_device * , int , u8 * , u8 * , u8 * , u8 * ) ;
   void (*getpgbwgcfgrx)(struct net_device * , int , u8 * ) ;
   void (*setpfccfg)(struct net_device * , int , u8 ) ;
   void (*getpfccfg)(struct net_device * , int , u8 * ) ;
   u8 (*setall)(struct net_device * ) ;
   u8 (*getcap)(struct net_device * , int , u8 * ) ;
   u8 (*getnumtcs)(struct net_device * , int , u8 * ) ;
   u8 (*setnumtcs)(struct net_device * , int , u8 ) ;
   u8 (*getpfcstate)(struct net_device * ) ;
   void (*setpfcstate)(struct net_device * , u8 ) ;
   void (*getbcncfg)(struct net_device * , int , u32 * ) ;
   void (*setbcncfg)(struct net_device * , int , u32 ) ;
   void (*getbcnrp)(struct net_device * , int , u8 * ) ;
   void (*setbcnrp)(struct net_device * , int , u8 ) ;
   u8 (*setapp)(struct net_device * , u8 , u16 , u8 ) ;
   u8 (*getapp)(struct net_device * , u8 , u16 ) ;
   u8 (*getfeatcfg)(struct net_device * , int , u8 * ) ;
   u8 (*setfeatcfg)(struct net_device * , int , u8 ) ;
   u8 (*getdcbx)(struct net_device * ) ;
   u8 (*setdcbx)(struct net_device * , u8 ) ;
   int (*peer_getappinfo)(struct net_device * , struct dcb_peer_app_info * , u16 * ) ;
   int (*peer_getapptable)(struct net_device * , struct dcb_app * ) ;
   int (*cee_peer_getpg)(struct net_device * , struct cee_pg * ) ;
   int (*cee_peer_getpfc)(struct net_device * , struct cee_pfc * ) ;
};
struct vlan_group;
struct vlan_group;
struct netpoll_info;
struct netpoll_info;
struct phy_device;
struct phy_device;
struct wireless_dev;
struct wireless_dev;
enum netdev_tx {
    __NETDEV_TX_MIN = (-0x7FFFFFFF-1),
    NETDEV_TX_OK = 0,
    NETDEV_TX_BUSY = 16,
    NETDEV_TX_LOCKED = 32
} ;
typedef enum netdev_tx netdev_tx_t;
struct net_device_stats {
   unsigned long rx_packets ;
   unsigned long tx_packets ;
   unsigned long rx_bytes ;
   unsigned long tx_bytes ;
   unsigned long rx_errors ;
   unsigned long tx_errors ;
   unsigned long rx_dropped ;
   unsigned long tx_dropped ;
   unsigned long multicast ;
   unsigned long collisions ;
   unsigned long rx_length_errors ;
   unsigned long rx_over_errors ;
   unsigned long rx_crc_errors ;
   unsigned long rx_frame_errors ;
   unsigned long rx_fifo_errors ;
   unsigned long rx_missed_errors ;
   unsigned long tx_aborted_errors ;
   unsigned long tx_carrier_errors ;
   unsigned long tx_fifo_errors ;
   unsigned long tx_heartbeat_errors ;
   unsigned long tx_window_errors ;
   unsigned long rx_compressed ;
   unsigned long tx_compressed ;
};
struct neighbour;
struct neighbour;
struct neigh_parms;
struct neigh_parms;
struct netdev_hw_addr_list {
   struct list_head list ;
   int count ;
};
struct hh_cache {
   struct hh_cache *hh_next ;
   atomic_t hh_refcnt ;
   __be16 hh_type ;
   u16 hh_len ;
   int (*hh_output)(struct sk_buff * ) ;
   seqlock_t hh_lock ;
   unsigned long hh_data[16U] ;
};
struct header_ops {
   int (*create)(struct sk_buff * , struct net_device * , unsigned short , void const * ,
                 void const * , unsigned int ) ;
   int (*parse)(struct sk_buff const * , unsigned char * ) ;
   int (*rebuild)(struct sk_buff * ) ;
   int (*cache)(struct neighbour const * , struct hh_cache * ) ;
   void (*cache_update)(struct hh_cache * , struct net_device const * , unsigned char const * ) ;
};
enum rx_handler_result {
    RX_HANDLER_CONSUMED = 0,
    RX_HANDLER_ANOTHER = 1,
    RX_HANDLER_EXACT = 2,
    RX_HANDLER_PASS = 3
} ;
typedef enum rx_handler_result rx_handler_result_t;
typedef rx_handler_result_t rx_handler_func_t(struct sk_buff ** );
struct Qdisc;
struct Qdisc;
struct netdev_queue {
   struct net_device *dev ;
   struct Qdisc *qdisc ;
   unsigned long state ;
   struct Qdisc *qdisc_sleeping ;
   struct kobject kobj ;
   int numa_node ;
   spinlock_t _xmit_lock ;
   int xmit_lock_owner ;
   unsigned long trans_start ;
};
struct rps_map {
   unsigned int len ;
   struct rcu_head rcu ;
   u16 cpus[0U] ;
};
struct rps_dev_flow {
   u16 cpu ;
   u16 filter ;
   unsigned int last_qtail ;
};
struct rps_dev_flow_table {
   unsigned int mask ;
   struct rcu_head rcu ;
   struct work_struct free_work ;
   struct rps_dev_flow flows[0U] ;
};
struct netdev_rx_queue {
   struct rps_map *rps_map ;
   struct rps_dev_flow_table *rps_flow_table ;
   struct kobject kobj ;
   struct net_device *dev ;
};
struct xps_map {
   unsigned int len ;
   unsigned int alloc_len ;
   struct rcu_head rcu ;
   u16 queues[0U] ;
};
struct xps_dev_maps {
   struct rcu_head rcu ;
   struct xps_map *cpu_map[0U] ;
};
struct netdev_tc_txq {
   u16 count ;
   u16 offset ;
};
struct net_device_ops {
   int (*ndo_init)(struct net_device * ) ;
   void (*ndo_uninit)(struct net_device * ) ;
   int (*ndo_open)(struct net_device * ) ;
   int (*ndo_stop)(struct net_device * ) ;
   netdev_tx_t (*ndo_start_xmit)(struct sk_buff * , struct net_device * ) ;
   u16 (*ndo_select_queue)(struct net_device * , struct sk_buff * ) ;
   void (*ndo_change_rx_flags)(struct net_device * , int ) ;
   void (*ndo_set_rx_mode)(struct net_device * ) ;
   void (*ndo_set_multicast_list)(struct net_device * ) ;
   int (*ndo_set_mac_address)(struct net_device * , void * ) ;
   int (*ndo_validate_addr)(struct net_device * ) ;
   int (*ndo_do_ioctl)(struct net_device * , struct ifreq * , int ) ;
   int (*ndo_set_config)(struct net_device * , struct ifmap * ) ;
   int (*ndo_change_mtu)(struct net_device * , int ) ;
   int (*ndo_neigh_setup)(struct net_device * , struct neigh_parms * ) ;
   void (*ndo_tx_timeout)(struct net_device * ) ;
   struct rtnl_link_stats64 *(*ndo_get_stats64)(struct net_device * , struct rtnl_link_stats64 * ) ;
   struct net_device_stats *(*ndo_get_stats)(struct net_device * ) ;
   void (*ndo_vlan_rx_register)(struct net_device * , struct vlan_group * ) ;
   void (*ndo_vlan_rx_add_vid)(struct net_device * , unsigned short ) ;
   void (*ndo_vlan_rx_kill_vid)(struct net_device * , unsigned short ) ;
   void (*ndo_poll_controller)(struct net_device * ) ;
   int (*ndo_netpoll_setup)(struct net_device * , struct netpoll_info * ) ;
   void (*ndo_netpoll_cleanup)(struct net_device * ) ;
   int (*ndo_set_vf_mac)(struct net_device * , int , u8 * ) ;
   int (*ndo_set_vf_vlan)(struct net_device * , int , u16 , u8 ) ;
   int (*ndo_set_vf_tx_rate)(struct net_device * , int , int ) ;
   int (*ndo_get_vf_config)(struct net_device * , int , struct ifla_vf_info * ) ;
   int (*ndo_set_vf_port)(struct net_device * , int , struct nlattr ** ) ;
   int (*ndo_get_vf_port)(struct net_device * , int , struct sk_buff * ) ;
   int (*ndo_setup_tc)(struct net_device * , u8 ) ;
   int (*ndo_fcoe_enable)(struct net_device * ) ;
   int (*ndo_fcoe_disable)(struct net_device * ) ;
   int (*ndo_fcoe_ddp_setup)(struct net_device * , u16 , struct scatterlist * , unsigned int ) ;
   int (*ndo_fcoe_ddp_done)(struct net_device * , u16 ) ;
   int (*ndo_fcoe_ddp_target)(struct net_device * , u16 , struct scatterlist * ,
                              unsigned int ) ;
   int (*ndo_fcoe_get_wwn)(struct net_device * , u64 * , int ) ;
   int (*ndo_rx_flow_steer)(struct net_device * , struct sk_buff const * , u16 ,
                            u32 ) ;
   int (*ndo_add_slave)(struct net_device * , struct net_device * ) ;
   int (*ndo_del_slave)(struct net_device * , struct net_device * ) ;
   u32 (*ndo_fix_features)(struct net_device * , u32 ) ;
   int (*ndo_set_features)(struct net_device * , u32 ) ;
};
struct iw_handler_def;
struct iw_handler_def;
struct iw_public_data;
struct iw_public_data;
struct in_device;
struct in_device;
struct dn_dev;
struct dn_dev;
struct inet6_dev;
struct inet6_dev;
struct cpu_rmap;
struct cpu_rmap;
struct pcpu_lstats;
struct pcpu_lstats;
struct pcpu_tstats;
struct pcpu_tstats;
struct pcpu_dstats;
struct pcpu_dstats;
union __anonunion_ldv_30952_191 {
   void *ml_priv ;
   struct pcpu_lstats *lstats ;
   struct pcpu_tstats *tstats ;
   struct pcpu_dstats *dstats ;
};
struct garp_port;
struct garp_port;
struct rtnl_link_ops;
struct rtnl_link_ops;
struct net_device {
   char name[16U] ;
   struct pm_qos_request_list pm_qos_req ;
   struct hlist_node name_hlist ;
   char *ifalias ;
   unsigned long mem_end ;
   unsigned long mem_start ;
   unsigned long base_addr ;
   unsigned int irq ;
   unsigned long state ;
   struct list_head dev_list ;
   struct list_head napi_list ;
   struct list_head unreg_list ;
   u32 features ;
   u32 hw_features ;
   u32 wanted_features ;
   u32 vlan_features ;
   int ifindex ;
   int iflink ;
   struct net_device_stats stats ;
   atomic_long_t rx_dropped ;
   struct iw_handler_def const *wireless_handlers ;
   struct iw_public_data *wireless_data ;
   struct net_device_ops const *netdev_ops ;
   struct ethtool_ops const *ethtool_ops ;
   struct header_ops const *header_ops ;
   unsigned int flags ;
   unsigned int priv_flags ;
   unsigned short gflags ;
   unsigned short padded ;
   unsigned char operstate ;
   unsigned char link_mode ;
   unsigned char if_port ;
   unsigned char dma ;
   unsigned int mtu ;
   unsigned short type ;
   unsigned short hard_header_len ;
   unsigned short needed_headroom ;
   unsigned short needed_tailroom ;
   unsigned char perm_addr[32U] ;
   unsigned char addr_assign_type ;
   unsigned char addr_len ;
   unsigned short dev_id ;
   spinlock_t addr_list_lock ;
   struct netdev_hw_addr_list uc ;
   struct netdev_hw_addr_list mc ;
   int uc_promisc ;
   unsigned int promiscuity ;
   unsigned int allmulti ;
   struct vlan_group *vlgrp ;
   void *dsa_ptr ;
   void *atalk_ptr ;
   struct in_device *ip_ptr ;
   struct dn_dev *dn_ptr ;
   struct inet6_dev *ip6_ptr ;
   void *ec_ptr ;
   void *ax25_ptr ;
   struct wireless_dev *ieee80211_ptr ;
   unsigned long last_rx ;
   struct net_device *master ;
   unsigned char *dev_addr ;
   struct netdev_hw_addr_list dev_addrs ;
   unsigned char broadcast[32U] ;
   struct kset *queues_kset ;
   struct netdev_rx_queue *_rx ;
   unsigned int num_rx_queues ;
   unsigned int real_num_rx_queues ;
   struct cpu_rmap *rx_cpu_rmap ;
   rx_handler_func_t *rx_handler ;
   void *rx_handler_data ;
   struct netdev_queue *ingress_queue ;
   struct netdev_queue *_tx ;
   unsigned int num_tx_queues ;
   unsigned int real_num_tx_queues ;
   struct Qdisc *qdisc ;
   unsigned long tx_queue_len ;
   spinlock_t tx_global_lock ;
   struct xps_dev_maps *xps_maps ;
   unsigned long trans_start ;
   int watchdog_timeo ;
   struct timer_list watchdog_timer ;
   int *pcpu_refcnt ;
   struct list_head todo_list ;
   struct hlist_node index_hlist ;
   struct list_head link_watch_list ;
   unsigned char reg_state ;
   bool dismantle ;
   unsigned short rtnl_link_state ;
   void (*destructor)(struct net_device * ) ;
   struct netpoll_info *npinfo ;
   struct net *nd_net ;
   union __anonunion_ldv_30952_191 ldv_30952 ;
   struct garp_port *garp_port ;
   struct device dev ;
   struct attribute_group const *sysfs_groups[4U] ;
   struct rtnl_link_ops const *rtnl_link_ops ;
   unsigned int gso_max_size ;
   struct dcbnl_rtnl_ops const *dcbnl_ops ;
   u8 num_tc ;
   struct netdev_tc_txq tc_to_txq[16U] ;
   u8 prio_tc_map[16U] ;
   unsigned int fcoe_ddp_xid ;
   struct ethtool_rx_ntuple_list ethtool_ntuple_list ;
   struct phy_device *phydev ;
   int group ;
};
enum irqreturn {
    IRQ_NONE = 0,
    IRQ_HANDLED = 1,
    IRQ_WAKE_THREAD = 2
} ;
typedef enum irqreturn irqreturn_t;
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
};
struct linux_binprm {
   char buf[128U] ;
   struct vm_area_struct *vma ;
   unsigned long vma_pages ;
   struct mm_struct *mm ;
   unsigned long p ;
   unsigned char cred_prepared : 1 ;
   unsigned char cap_effective : 1 ;
   unsigned int recursion_depth ;
   struct file *file ;
   struct cred *cred ;
   int unsafe ;
   unsigned int per_clear ;
   int argc ;
   int envc ;
   char const *filename ;
   char const *interp ;
   unsigned int interp_flags ;
   unsigned int interp_data ;
   unsigned long loader ;
   unsigned long exec ;
};
struct coredump_params {
   long signr ;
   struct pt_regs *regs ;
   struct file *file ;
   unsigned long limit ;
   unsigned long mm_flags ;
};
struct linux_binfmt {
   struct list_head lh ;
   struct module *module ;
   int (*load_binary)(struct linux_binprm * , struct pt_regs * ) ;
   int (*load_shlib)(struct file * ) ;
   int (*core_dump)(struct coredump_params * ) ;
   unsigned long min_coredump ;
};
struct xfrm_policy;
struct xfrm_policy;
struct xfrm_state;
struct xfrm_state;
struct sock_filter {
   __u16 code ;
   __u8 jt ;
   __u8 jf ;
   __u32 k ;
};
struct sk_filter {
   atomic_t refcnt ;
   unsigned int len ;
   unsigned int (*bpf_func)(struct sk_buff const * , struct sock_filter const * ) ;
   struct rcu_head rcu ;
   struct sock_filter insns[0U] ;
};
struct poll_table_struct {
   void (*qproc)(struct file * , wait_queue_head_t * , struct poll_table_struct * ) ;
   unsigned long key ;
};
struct nla_policy {
   u16 type ;
   u16 len ;
};
struct rtnl_link_ops {
   struct list_head list ;
   char const *kind ;
   size_t priv_size ;
   void (*setup)(struct net_device * ) ;
   int maxtype ;
   struct nla_policy const *policy ;
   int (*validate)(struct nlattr ** , struct nlattr ** ) ;
   int (*newlink)(struct net * , struct net_device * , struct nlattr ** , struct nlattr ** ) ;
   int (*changelink)(struct net_device * , struct nlattr ** , struct nlattr ** ) ;
   void (*dellink)(struct net_device * , struct list_head * ) ;
   size_t (*get_size)(struct net_device const * ) ;
   int (*fill_info)(struct sk_buff * , struct net_device const * ) ;
   size_t (*get_xstats_size)(struct net_device const * ) ;
   int (*fill_xstats)(struct sk_buff * , struct net_device const * ) ;
   int (*get_tx_queues)(struct net * , struct nlattr ** , unsigned int * , unsigned int * ) ;
};
struct neigh_table;
struct neigh_table;
struct neigh_parms {
   struct net *net ;
   struct net_device *dev ;
   struct neigh_parms *next ;
   int (*neigh_setup)(struct neighbour * ) ;
   void (*neigh_cleanup)(struct neighbour * ) ;
   struct neigh_table *tbl ;
   void *sysctl_table ;
   int dead ;
   atomic_t refcnt ;
   struct rcu_head rcu_head ;
   int base_reachable_time ;
   int retrans_time ;
   int gc_staletime ;
   int reachable_time ;
   int delay_probe_time ;
   int queue_len ;
   int ucast_probes ;
   int app_probes ;
   int mcast_probes ;
   int anycast_delay ;
   int proxy_delay ;
   int proxy_qlen ;
   int locktime ;
};
struct neigh_statistics {
   unsigned long allocs ;
   unsigned long destroys ;
   unsigned long hash_grows ;
   unsigned long res_failed ;
   unsigned long lookups ;
   unsigned long hits ;
   unsigned long rcv_probes_mcast ;
   unsigned long rcv_probes_ucast ;
   unsigned long periodic_gc_runs ;
   unsigned long forced_gc_runs ;
   unsigned long unres_discards ;
};
struct neigh_ops;
struct neigh_ops;
struct neighbour {
   struct neighbour *next ;
   struct neigh_table *tbl ;
   struct neigh_parms *parms ;
   unsigned long confirmed ;
   unsigned long updated ;
   rwlock_t lock ;
   atomic_t refcnt ;
   struct sk_buff_head arp_queue ;
   struct timer_list timer ;
   unsigned long used ;
   atomic_t probes ;
   __u8 flags ;
   __u8 nud_state ;
   __u8 type ;
   __u8 dead ;
   seqlock_t ha_lock ;
   unsigned char ha[32U] ;
   struct hh_cache *hh ;
   int (*output)(struct sk_buff * ) ;
   struct neigh_ops const *ops ;
   struct rcu_head rcu ;
   struct net_device *dev ;
   u8 primary_key[0U] ;
};
struct neigh_ops {
   int family ;
   void (*solicit)(struct neighbour * , struct sk_buff * ) ;
   void (*error_report)(struct neighbour * , struct sk_buff * ) ;
   int (*output)(struct sk_buff * ) ;
   int (*connected_output)(struct sk_buff * ) ;
   int (*hh_output)(struct sk_buff * ) ;
   int (*queue_xmit)(struct sk_buff * ) ;
};
struct pneigh_entry {
   struct pneigh_entry *next ;
   struct net *net ;
   struct net_device *dev ;
   u8 flags ;
   u8 key[0U] ;
};
struct neigh_hash_table {
   struct neighbour **hash_buckets ;
   unsigned int hash_mask ;
   __u32 hash_rnd ;
   struct rcu_head rcu ;
};
struct neigh_table {
   struct neigh_table *next ;
   int family ;
   int entry_size ;
   int key_len ;
   __u32 (*hash)(void const * , struct net_device const * , __u32 ) ;
   int (*constructor)(struct neighbour * ) ;
   int (*pconstructor)(struct pneigh_entry * ) ;
   void (*pdestructor)(struct pneigh_entry * ) ;
   void (*proxy_redo)(struct sk_buff * ) ;
   char *id ;
   struct neigh_parms parms ;
   int gc_interval ;
   int gc_thresh1 ;
   int gc_thresh2 ;
   int gc_thresh3 ;
   unsigned long last_flush ;
   struct delayed_work gc_work ;
   struct timer_list proxy_timer ;
   struct sk_buff_head proxy_queue ;
   atomic_t entries ;
   rwlock_t lock ;
   unsigned long last_rand ;
   struct kmem_cache *kmem_cachep ;
   struct neigh_statistics *stats ;
   struct neigh_hash_table *nht ;
   struct pneigh_entry **phash_buckets ;
};
struct dn_route;
struct dn_route;
union __anonunion_ldv_36975_200 {
   struct dst_entry *next ;
   struct rtable *rt_next ;
   struct rt6_info *rt6_next ;
   struct dn_route *dn_next ;
};
struct dst_entry {
   struct rcu_head rcu_head ;
   struct dst_entry *child ;
   struct net_device *dev ;
   struct dst_ops *ops ;
   unsigned long _metrics ;
   unsigned long expires ;
   struct dst_entry *path ;
   struct neighbour *neighbour ;
   struct hh_cache *hh ;
   struct xfrm_state *xfrm ;
   int (*input)(struct sk_buff * ) ;
   int (*output)(struct sk_buff * ) ;
   short error ;
   short obsolete ;
   unsigned short header_len ;
   unsigned short trailer_len ;
   __u32 tclassid ;
   long __pad_to_align_refcnt[1U] ;
   atomic_t __refcnt ;
   int __use ;
   unsigned long lastuse ;
   int flags ;
   union __anonunion_ldv_36975_200 ldv_36975 ;
};
struct __anonstruct_socket_lock_t_201 {
   spinlock_t slock ;
   int owned ;
   wait_queue_head_t wq ;
   struct lockdep_map dep_map ;
};
typedef struct __anonstruct_socket_lock_t_201 socket_lock_t;
struct proto;
struct proto;
union __anonunion_ldv_37176_202 {
   unsigned int skc_hash ;
   __u16 skc_u16hashes[2U] ;
};
union __anonunion_ldv_37184_203 {
   struct hlist_node skc_bind_node ;
   struct hlist_nulls_node skc_portaddr_node ;
};
union __anonunion_ldv_37191_204 {
   struct hlist_node skc_node ;
   struct hlist_nulls_node skc_nulls_node ;
};
struct sock_common {
   __be32 skc_daddr ;
   __be32 skc_rcv_saddr ;
   union __anonunion_ldv_37176_202 ldv_37176 ;
   unsigned short skc_family ;
   unsigned char volatile skc_state ;
   unsigned char skc_reuse ;
   int skc_bound_dev_if ;
   union __anonunion_ldv_37184_203 ldv_37184 ;
   struct proto *skc_prot ;
   struct net *skc_net ;
   int skc_dontcopy_begin[0U] ;
   union __anonunion_ldv_37191_204 ldv_37191 ;
   int skc_tx_queue_mapping ;
   atomic_t skc_refcnt ;
   int skc_dontcopy_end[0U] ;
};
struct __anonstruct_sk_backlog_205 {
   atomic_t rmem_alloc ;
   int len ;
   struct sk_buff *head ;
   struct sk_buff *tail ;
};
struct sock {
   struct sock_common __sk_common ;
   socket_lock_t sk_lock ;
   struct sk_buff_head sk_receive_queue ;
   struct __anonstruct_sk_backlog_205 sk_backlog ;
   int sk_forward_alloc ;
   __u32 sk_rxhash ;
   atomic_t sk_drops ;
   int sk_rcvbuf ;
   struct sk_filter *sk_filter ;
   struct socket_wq *sk_wq ;
   struct sk_buff_head sk_async_wait_queue ;
   struct xfrm_policy *sk_policy[2U] ;
   unsigned long sk_flags ;
   struct dst_entry *sk_dst_cache ;
   spinlock_t sk_dst_lock ;
   atomic_t sk_wmem_alloc ;
   atomic_t sk_omem_alloc ;
   int sk_sndbuf ;
   struct sk_buff_head sk_write_queue ;
   unsigned char sk_shutdown : 2 ;
   unsigned char sk_no_check : 2 ;
   unsigned char sk_userlocks : 4 ;
   unsigned char sk_protocol ;
   unsigned short sk_type ;
   int sk_wmem_queued ;
   gfp_t sk_allocation ;
   int sk_route_caps ;
   int sk_route_nocaps ;
   int sk_gso_type ;
   unsigned int sk_gso_max_size ;
   int sk_rcvlowat ;
   unsigned long sk_lingertime ;
   struct sk_buff_head sk_error_queue ;
   struct proto *sk_prot_creator ;
   rwlock_t sk_callback_lock ;
   int sk_err ;
   int sk_err_soft ;
   unsigned short sk_ack_backlog ;
   unsigned short sk_max_ack_backlog ;
   __u32 sk_priority ;
   struct pid *sk_peer_pid ;
   struct cred const *sk_peer_cred ;
   long sk_rcvtimeo ;
   long sk_sndtimeo ;
   void *sk_protinfo ;
   struct timer_list sk_timer ;
   ktime_t sk_stamp ;
   struct socket *sk_socket ;
   void *sk_user_data ;
   struct page *sk_sndmsg_page ;
   struct sk_buff *sk_send_head ;
   __u32 sk_sndmsg_off ;
   int sk_write_pending ;
   void *sk_security ;
   __u32 sk_mark ;
   u32 sk_classid ;
   void (*sk_state_change)(struct sock * ) ;
   void (*sk_data_ready)(struct sock * , int ) ;
   void (*sk_write_space)(struct sock * ) ;
   void (*sk_error_report)(struct sock * ) ;
   int (*sk_backlog_rcv)(struct sock * , struct sk_buff * ) ;
   void (*sk_destruct)(struct sock * ) ;
};
struct request_sock_ops;
struct request_sock_ops;
struct timewait_sock_ops;
struct timewait_sock_ops;
struct inet_hashinfo;
struct inet_hashinfo;
struct raw_hashinfo;
struct raw_hashinfo;
struct udp_table;
struct udp_table;
union __anonunion_h_206 {
   struct inet_hashinfo *hashinfo ;
   struct udp_table *udp_table ;
   struct raw_hashinfo *raw_hash ;
};
struct proto {
   void (*close)(struct sock * , long ) ;
   int (*connect)(struct sock * , struct sockaddr * , int ) ;
   int (*disconnect)(struct sock * , int ) ;
   struct sock *(*accept)(struct sock * , int , int * ) ;
   int (*ioctl)(struct sock * , int , unsigned long ) ;
   int (*init)(struct sock * ) ;
   void (*destroy)(struct sock * ) ;
   void (*shutdown)(struct sock * , int ) ;
   int (*setsockopt)(struct sock * , int , int , char * , unsigned int ) ;
   int (*getsockopt)(struct sock * , int , int , char * , int * ) ;
   int (*compat_setsockopt)(struct sock * , int , int , char * , unsigned int ) ;
   int (*compat_getsockopt)(struct sock * , int , int , char * , int * ) ;
   int (*compat_ioctl)(struct sock * , unsigned int , unsigned long ) ;
   int (*sendmsg)(struct kiocb * , struct sock * , struct msghdr * , size_t ) ;
   int (*recvmsg)(struct kiocb * , struct sock * , struct msghdr * , size_t , int ,
                  int , int * ) ;
   int (*sendpage)(struct sock * , struct page * , int , size_t , int ) ;
   int (*bind)(struct sock * , struct sockaddr * , int ) ;
   int (*backlog_rcv)(struct sock * , struct sk_buff * ) ;
   void (*hash)(struct sock * ) ;
   void (*unhash)(struct sock * ) ;
   void (*rehash)(struct sock * ) ;
   int (*get_port)(struct sock * , unsigned short ) ;
   void (*clear_sk)(struct sock * , int ) ;
   unsigned int inuse_idx ;
   void (*enter_memory_pressure)(struct sock * ) ;
   atomic_long_t *memory_allocated ;
   struct percpu_counter *sockets_allocated ;
   int *memory_pressure ;
   long *sysctl_mem ;
   int *sysctl_wmem ;
   int *sysctl_rmem ;
   int max_header ;
   bool no_autobind ;
   struct kmem_cache *slab ;
   unsigned int obj_size ;
   int slab_flags ;
   struct percpu_counter *orphan_count ;
   struct request_sock_ops *rsk_prot ;
   struct timewait_sock_ops *twsk_prot ;
   union __anonunion_h_206 h ;
   struct module *owner ;
   char name[32U] ;
   struct list_head node ;
};
struct mISDNchannel;
struct mISDNchannel;
struct mISDNdevice;
struct mISDNdevice;
struct mISDNstack;
struct mISDNstack;
struct channel_req {
   u_int protocol ;
   struct sockaddr_mISDN adr ;
   struct mISDNchannel *ch ;
};
typedef int ctrl_func_t(struct mISDNchannel * , u_int , void * );
typedef int send_func_t(struct mISDNchannel * , struct sk_buff * );
typedef int create_func_t(struct channel_req * );
struct Bprotocol {
   struct list_head list ;
   char *name ;
   u_int Bprotocols ;
   create_func_t *create ;
};
struct mISDNchannel {
   struct list_head list ;
   u_int protocol ;
   u_int nr ;
   u_long opt ;
   u_int addr ;
   struct mISDNstack *st ;
   struct mISDNchannel *peer ;
   send_func_t *send ;
   send_func_t *recv ;
   ctrl_func_t *ctrl ;
};
struct mISDN_sock_list {
   struct hlist_head head ;
   rwlock_t lock ;
};
struct mISDNdevice {
   struct mISDNchannel D ;
   u_int id ;
   u_int Dprotocols ;
   u_int Bprotocols ;
   u_int nrbchan ;
   u_char channelmap[16U] ;
   struct list_head bchannels ;
   struct mISDNchannel *teimgr ;
   struct device dev ;
};
struct mISDNstack {
   u_long status ;
   struct mISDNdevice *dev ;
   struct task_struct *thread ;
   struct completion *notify ;
   wait_queue_head_t workq ;
   struct sk_buff_head msgq ;
   struct list_head layer2 ;
   struct mISDNchannel *layer1 ;
   struct mISDNchannel own ;
   struct mutex lmutex ;
   struct mISDN_sock_list l1sock ;
};
struct FsmInst;
struct FsmInst;
typedef void (*FSMFNPTR)(struct FsmInst * , int , void * );
struct Fsm {
   FSMFNPTR (**jumpmatrix)(struct FsmInst * , int , void * ) ;
   int state_count ;
   int event_count ;
   char **strEvent ;
   char **strState ;
};
struct FsmInst {
   struct Fsm *fsm ;
   int state ;
   int debug ;
   void *userdata ;
   int userint ;
   void (*printdebug)(struct FsmInst * , char * , ...) ;
};
struct FsmNode {
   int state ;
   int event ;
   void (*routine)(struct FsmInst * , int , void * ) ;
};
struct FsmTimer {
   struct FsmInst *fi ;
   struct timer_list tl ;
   int event ;
   void *arg ;
};
typedef long __kernel_suseconds_t;
struct timeval {
   __kernel_time_t tv_sec ;
   __kernel_suseconds_t tv_usec ;
};
enum hrtimer_restart;
enum hrtimer_restart;
struct mISDNhead {
   unsigned int prim ;
   unsigned int id ;
};
struct mISDNversion {
   unsigned char major ;
   unsigned char minor ;
   unsigned short release ;
};
struct mISDN_devinfo {
   u_int id ;
   u_int Dprotocols ;
   u_int Bprotocols ;
   u_int protocol ;
   u_char channelmap[16U] ;
   u_int nrbchan ;
   char name[20U] ;
};
struct mISDN_devrename {
   u_int id ;
   char name[20U] ;
};
struct mISDN_ctrl_req {
   int op ;
   int channel ;
   int p1 ;
   int p2 ;
};
struct net_proto_family {
   int family ;
   int (*create)(struct net * , struct socket * , int , int ) ;
   struct module *owner ;
};
enum sock_flags {
    SOCK_DEAD = 0,
    SOCK_DONE = 1,
    SOCK_URGINLINE = 2,
    SOCK_KEEPOPEN = 3,
    SOCK_LINGER = 4,
    SOCK_DESTROY = 5,
    SOCK_BROADCAST = 6,
    SOCK_TIMESTAMP = 7,
    SOCK_ZAPPED = 8,
    SOCK_USE_WRITE_QUEUE = 9,
    SOCK_DBG = 10,
    SOCK_RCVTSTAMP = 11,
    SOCK_RCVTSTAMPNS = 12,
    SOCK_LOCALROUTE = 13,
    SOCK_QUEUE_SHRUNK = 14,
    SOCK_TIMESTAMPING_TX_HARDWARE = 15,
    SOCK_TIMESTAMPING_TX_SOFTWARE = 16,
    SOCK_TIMESTAMPING_RX_HARDWARE = 17,
    SOCK_TIMESTAMPING_RX_SOFTWARE = 18,
    SOCK_TIMESTAMPING_SOFTWARE = 19,
    SOCK_TIMESTAMPING_RAW_HARDWARE = 20,
    SOCK_TIMESTAMPING_SYS_HARDWARE = 21,
    SOCK_FASYNC = 22,
    SOCK_RXQ_OVFL = 23
} ;
struct mISDN_sock {
   struct sock sk ;
   struct mISDNchannel ch ;
   u_int cmask ;
   struct mISDNdevice *dev ;
};
struct mISDNclock;
struct mISDNclock;
typedef int clockctl_func_t(void * , int );
struct mISDNclock {
   struct list_head list ;
   char name[64U] ;
   int pri ;
   clockctl_func_t *ctl ;
   void *priv ;
};
enum hrtimer_restart;
enum hrtimer_restart;
struct dchannel {
   struct mISDNdevice dev ;
   u_long Flags ;
   struct work_struct workq ;
   void (*phfunc)(struct dchannel * ) ;
   u_int state ;
   void *l1 ;
   void *hw ;
   int slot ;
   struct timer_list timer ;
   struct sk_buff *rx_skb ;
   int maxlen ;
   struct sk_buff_head squeue ;
   struct sk_buff_head rqueue ;
   struct sk_buff *tx_skb ;
   int tx_idx ;
   int debug ;
   int err_crc ;
   int err_tx ;
   int err_rx ;
};
struct bchannel {
   struct mISDNchannel ch ;
   int nr ;
   u_long Flags ;
   struct work_struct workq ;
   u_int state ;
   void *hw ;
   int slot ;
   struct timer_list timer ;
   struct sk_buff *rx_skb ;
   int maxlen ;
   struct sk_buff *next_skb ;
   struct sk_buff *tx_skb ;
   struct sk_buff_head rqueue ;
   int rcount ;
   int tx_idx ;
   int debug ;
   int err_crc ;
   int err_tx ;
   int err_rx ;
};
struct compat_timespec;
struct compat_timespec;
struct __anonstruct_futex_9 {
   u32 *uaddr ;
   u32 val ;
   u32 flags ;
   u32 bitset ;
   u64 time ;
   u32 *uaddr2 ;
};
struct __anonstruct_nanosleep_10 {
   clockid_t clockid ;
   struct timespec *rmtp ;
   struct compat_timespec *compat_rmtp ;
   u64 expires ;
};
struct pollfd;
struct pollfd;
struct __anonstruct_poll_11 {
   struct pollfd *ufds ;
   int nfds ;
   int has_timeout ;
   unsigned long tv_sec ;
   unsigned long tv_nsec ;
};
union __anonunion_ldv_2052_8 {
   struct __anonstruct_futex_9 futex ;
   struct __anonstruct_nanosleep_10 nanosleep ;
   struct __anonstruct_poll_11 poll ;
};
struct restart_block {
   long (*fn)(struct restart_block * ) ;
   union __anonunion_ldv_2052_8 ldv_2052 ;
};
struct exec_domain;
struct exec_domain;
struct map_segment;
struct map_segment;
struct exec_domain {
   char const *name ;
   void (*handler)(int , struct pt_regs * ) ;
   unsigned char pers_low ;
   unsigned char pers_high ;
   unsigned long *signal_map ;
   unsigned long *signal_invmap ;
   struct map_segment *err_map ;
   struct map_segment *socktype_map ;
   struct map_segment *sockopt_map ;
   struct map_segment *af_map ;
   struct module *module ;
   struct exec_domain *next ;
};
struct __anonstruct_mm_segment_t_28 {
   unsigned long seg ;
};
typedef struct __anonstruct_mm_segment_t_28 mm_segment_t;
struct thread_info {
   struct task_struct *task ;
   struct exec_domain *exec_domain ;
   __u32 flags ;
   __u32 status ;
   __u32 cpu ;
   int preempt_count ;
   mm_segment_t addr_limit ;
   struct restart_block restart_block ;
   void *sysenter_return ;
   int uaccess_err ;
};
struct __wait_queue;
struct __wait_queue;
typedef struct __wait_queue wait_queue_t;
struct __wait_queue {
   unsigned int flags ;
   void *private ;
   int (*func)(wait_queue_t * , unsigned int , int , void * ) ;
   struct list_head task_list ;
};
enum hrtimer_restart;
enum hrtimer_restart;
typedef s32 compat_time_t;
struct compat_timespec {
   compat_time_t tv_sec ;
   s32 tv_nsec ;
};
struct pollfd {
   int fd ;
   short events ;
   short revents ;
};
struct __va_list_tag;
struct __va_list_tag;
typedef struct __va_list_tag __va_list_tag;
typedef __builtin_va_list __gnuc_va_list[1U];
typedef __gnuc_va_list va_list[1U];
struct va_format {
   char const *fmt ;
   va_list *va ;
};
enum hrtimer_restart;
enum hrtimer_restart;
typedef int dchannel_l1callback(struct dchannel * , u_int );
struct layer1;
struct layer1;
struct layer1 {
   u_long Flags ;
   struct FsmInst l1m ;
   struct FsmTimer timer ;
   int delay ;
   struct dchannel *dch ;
   dchannel_l1callback *dcb ;
};
enum hrtimer_restart;
enum hrtimer_restart;
struct manager {
   struct mISDNchannel ch ;
   struct mISDNchannel bcast ;
   u_long options ;
   struct list_head layer2 ;
   rwlock_t lock ;
   struct FsmInst deact ;
   struct FsmTimer datimer ;
   struct sk_buff_head sendq ;
   struct mISDNchannel *up ;
   u_int nextid ;
   u_int lastid ;
};
struct layer2;
struct layer2;
struct teimgr {
   int ri ;
   int rcnt ;
   struct FsmInst tei_m ;
   struct FsmTimer timer ;
   int tval ;
   int nval ;
   struct layer2 *l2 ;
   struct manager *mgr ;
};
struct laddr {
   u_char A ;
   u_char B ;
};
struct layer2 {
   struct list_head list ;
   struct mISDNchannel ch ;
   u_long flag ;
   int id ;
   struct mISDNchannel *up ;
   signed char sapi ;
   signed char tei ;
   struct laddr addr ;
   u_int maxlen ;
   struct teimgr *tm ;
   u_int vs ;
   u_int va ;
   u_int vr ;
   int rc ;
   u_int window ;
   u_int sow ;
   struct FsmInst l2m ;
   struct FsmTimer t200 ;
   struct FsmTimer t203 ;
   int T200 ;
   int N200 ;
   int T203 ;
   u_int next_id ;
   u_int down_id ;
   struct sk_buff *windowar[8U] ;
   struct sk_buff_head i_queue ;
   struct sk_buff_head ui_queue ;
   struct sk_buff_head down_queue ;
   struct sk_buff_head tmp_queue ;
};
enum hrtimer_restart;
enum hrtimer_restart;
enum hrtimer_restart;
enum hrtimer_restart;
typedef struct poll_table_struct poll_table;
struct miscdevice {
   int minor ;
   char const *name ;
   struct file_operations const *fops ;
   struct list_head list ;
   struct device *parent ;
   struct device *this_device ;
   char const *nodename ;
   mode_t mode ;
};
struct mISDNtimerdev {
   int next_id ;
   struct list_head pending ;
   struct list_head expired ;
   wait_queue_head_t wait ;
   u_int work ;
   spinlock_t lock ;
};
struct mISDNtimer {
   struct list_head list ;
   struct mISDNtimerdev *dev ;
   struct timer_list tl ;
   int id ;
};
void *__builtin_memcpy(void * , void const * , unsigned long ) ;
void __builtin_va_end(__builtin_va_list ) ;
unsigned long __builtin_object_size(void * , int ) ;
long __builtin_expect(long , long ) ;
void __builtin_va_start(__builtin_va_list ) ;
extern void __list_add(struct list_head * , struct list_head * , struct list_head * ) ;
__inline static void list_add_tail(struct list_head *new , struct list_head *head )
{ struct list_head *__cil_tmp3 ;

  {
  {
  __cil_tmp3 = head->prev;
  __list_add(new, __cil_tmp3, head);
  }
  return;
}
}
extern void list_del(struct list_head * ) ;
__inline static int test_and_set_bit(int nr , unsigned long volatile *addr )
{ int oldbit ;
  long volatile *__cil_tmp4 ;

  {
  __cil_tmp4 = (long volatile *)addr;
  __asm__ volatile (".section .smp_locks,\"a\"\n.balign 4\n.long 671f - .\n.previous\n671:\n\tlock; bts %2,%1\n\tsbb %0,%0": "=r" (oldbit),
                       "+m" (*__cil_tmp4): "Ir" (nr): "memory");
  return (oldbit);
}
}
__inline static int test_and_clear_bit(int nr , unsigned long volatile *addr )
{ int oldbit ;
  long volatile *__cil_tmp4 ;

  {
  __cil_tmp4 = (long volatile *)addr;
  __asm__ volatile (".section .smp_locks,\"a\"\n.balign 4\n.long 671f - .\n.previous\n671:\n\tlock; btr %2,%1\n\tsbb %0,%0": "=r" (oldbit),
                       "+m" (*__cil_tmp4): "Ir" (nr): "memory");
  return (oldbit);
}
}
extern int printk(char const * , ...) ;
extern int sprintf(char * , char const * , ...) ;
extern size_t strlen(char const * ) ;
extern char *strcpy(char * , char const * ) ;
extern void _raw_read_lock(rwlock_t * ) ;
extern unsigned long _raw_write_lock_irqsave(rwlock_t * ) ;
extern void _raw_read_unlock(rwlock_t * ) ;
extern void _raw_write_unlock_irqrestore(rwlock_t * , unsigned long ) ;
__inline static char const *kobject_name(struct kobject const *kobj )
{ char const *__cil_tmp2 ;

  {
  {
  __cil_tmp2 = kobj->name;
  return ((char const *)__cil_tmp2);
  }
}
}
extern int add_uevent_var(struct kobj_uevent_env * , char const * , ...) ;
extern struct module __this_module ;
int ldv_try_module_get(struct module *module ) ;
void ldv_module_get(struct module *module ) ;
void ldv_module_put(struct module *module ) ;
unsigned int ldv_module_refcount(void) ;
void ldv_module_put_and_exit(void) ;
__inline static int test_channelmap(u_int nr , u_char *map )
{ int __cil_tmp3 ;
  int __cil_tmp4 ;
  int __cil_tmp5 ;
  u_int __cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  u_char *__cil_tmp8 ;
  u_char __cil_tmp9 ;
  int __cil_tmp10 ;

  {
  if (nr <= 127U) {
    {
    __cil_tmp3 = (int )nr;
    __cil_tmp4 = __cil_tmp3 & 7;
    __cil_tmp5 = 1 << __cil_tmp4;
    __cil_tmp6 = nr >> 3;
    __cil_tmp7 = (unsigned long )__cil_tmp6;
    __cil_tmp8 = map + __cil_tmp7;
    __cil_tmp9 = *__cil_tmp8;
    __cil_tmp10 = (int )__cil_tmp9;
    return (__cil_tmp10 & __cil_tmp5);
    }
  } else {
    return (0);
  }
}
}
extern int class_for_each_device(struct class * , struct device * , void * , int (*)(struct device * ,
                                                                                     void * ) ) ;
extern struct device *class_find_device(struct class * , struct device * , void * ,
                                        int (*)(struct device * , void * ) ) ;
__inline static char const *dev_name(struct device const *dev )
{ char const *tmp ;
  char const *__cil_tmp3 ;
  unsigned long __cil_tmp4 ;
  char const *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  char const *__cil_tmp7 ;
  struct kobject const *__cil_tmp8 ;

  {
  {
  __cil_tmp3 = (char const * const )0;
  __cil_tmp4 = (unsigned long )__cil_tmp3;
  __cil_tmp5 = dev->init_name;
  __cil_tmp6 = (unsigned long )__cil_tmp5;
  if (__cil_tmp6 != __cil_tmp4) {
    {
    __cil_tmp7 = dev->init_name;
    return ((char const *)__cil_tmp7);
    }
  } else {

  }
  }
  {
  __cil_tmp8 = & dev->kobj;
  tmp = kobject_name(__cil_tmp8);
  }
  return (tmp);
}
}
extern int dev_set_name(struct device * , char const * , ...) ;
extern void device_initialize(struct device * ) ;
extern int device_add(struct device * ) ;
extern void device_del(struct device * ) ;
extern void *dev_get_drvdata(struct device const * ) ;
extern int dev_set_drvdata(struct device * , void * ) ;
extern void put_device(struct device * ) ;
int mISDN_register_device(struct mISDNdevice *dev , struct device *parent , char *name ) ;
void mISDN_unregister_device(struct mISDNdevice *dev ) ;
int mISDN_register_Bprotocol(struct Bprotocol *bp ) ;
void mISDN_unregister_Bprotocol(struct Bprotocol *bp ) ;
__inline static struct mISDNdevice *dev_to_mISDN(struct device *dev )
{ void *tmp ;
  struct device *__cil_tmp3 ;
  unsigned long __cil_tmp4 ;
  unsigned long __cil_tmp5 ;
  struct device const *__cil_tmp6 ;

  {
  {
  __cil_tmp3 = (struct device *)0;
  __cil_tmp4 = (unsigned long )__cil_tmp3;
  __cil_tmp5 = (unsigned long )dev;
  if (__cil_tmp5 != __cil_tmp4) {
    {
    __cil_tmp6 = (struct device const *)dev;
    tmp = dev_get_drvdata(__cil_tmp6);
    }
    return ((struct mISDNdevice *)tmp);
  } else {
    return ((struct mISDNdevice *)0);
  }
  }
}
}
struct mISDNdevice *get_mdevice(u_int id ) ;
int get_mdevice_count(void) ;
int create_stack(struct mISDNdevice *dev ) ;
void delete_stack(struct mISDNdevice *dev ) ;
void mISDN_initstack(u_int *dp ) ;
int misdn_sock_init(u_int *deb ) ;
void misdn_sock_cleanup(void) ;
u_int get_all_Bprotocols(void) ;
struct Bprotocol *get_Bprotocol4mask(u_int m ) ;
struct Bprotocol *get_Bprotocol4id(u_int id ) ;
int mISDN_inittimer(u_int *deb ) ;
void mISDN_timer_cleanup(void) ;
int l1_init(u_int *deb ) ;
void l1_cleanup(void) ;
int Isdnl2_Init(u_int *deb ) ;
void Isdnl2_cleanup(void) ;
void mISDN_init_clock(u_int *dp ) ;
static u_int debug ;
static u64 device_ids ;
static struct list_head Bprotocols = {& Bprotocols, & Bprotocols};
static rwlock_t bp_lock = {{16777216U}, 3736018669U, 4294967295U, (void *)1152921504606846975UL, {(struct lock_class_key *)0,
                                                                           {(struct lock_class *)0,
                                                                            (struct lock_class *)0},
                                                                           "bp_lock",
                                                                           0, 0UL}};
static void mISDN_dev_release(struct device *dev )
{

  {
  return;
}
}
static ssize_t _show_id(struct device *dev , struct device_attribute *attr , char *buf )
{ struct mISDNdevice *mdev ;
  struct mISDNdevice *tmp ;
  int tmp___0 ;
  struct mISDNdevice *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  u_int __cil_tmp10 ;

  {
  {
  tmp = dev_to_mISDN(dev);
  mdev = tmp;
  }
  {
  __cil_tmp7 = (struct mISDNdevice *)0;
  __cil_tmp8 = (unsigned long )__cil_tmp7;
  __cil_tmp9 = (unsigned long )mdev;
  if (__cil_tmp9 == __cil_tmp8) {
    return (-19L);
  } else {

  }
  }
  {
  __cil_tmp10 = mdev->id;
  tmp___0 = sprintf(buf, "%d\n", __cil_tmp10);
  }
  return ((ssize_t )tmp___0);
}
}
static ssize_t _show_nrbchan(struct device *dev , struct device_attribute *attr ,
                             char *buf )
{ struct mISDNdevice *mdev ;
  struct mISDNdevice *tmp ;
  int tmp___0 ;
  struct mISDNdevice *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  u_int __cil_tmp10 ;

  {
  {
  tmp = dev_to_mISDN(dev);
  mdev = tmp;
  }
  {
  __cil_tmp7 = (struct mISDNdevice *)0;
  __cil_tmp8 = (unsigned long )__cil_tmp7;
  __cil_tmp9 = (unsigned long )mdev;
  if (__cil_tmp9 == __cil_tmp8) {
    return (-19L);
  } else {

  }
  }
  {
  __cil_tmp10 = mdev->nrbchan;
  tmp___0 = sprintf(buf, "%d\n", __cil_tmp10);
  }
  return ((ssize_t )tmp___0);
}
}
static ssize_t _show_d_protocols(struct device *dev , struct device_attribute *attr ,
                                 char *buf )
{ struct mISDNdevice *mdev ;
  struct mISDNdevice *tmp ;
  int tmp___0 ;
  struct mISDNdevice *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  u_int __cil_tmp10 ;

  {
  {
  tmp = dev_to_mISDN(dev);
  mdev = tmp;
  }
  {
  __cil_tmp7 = (struct mISDNdevice *)0;
  __cil_tmp8 = (unsigned long )__cil_tmp7;
  __cil_tmp9 = (unsigned long )mdev;
  if (__cil_tmp9 == __cil_tmp8) {
    return (-19L);
  } else {

  }
  }
  {
  __cil_tmp10 = mdev->Dprotocols;
  tmp___0 = sprintf(buf, "%d\n", __cil_tmp10);
  }
  return ((ssize_t )tmp___0);
}
}
static ssize_t _show_b_protocols(struct device *dev , struct device_attribute *attr ,
                                 char *buf )
{ struct mISDNdevice *mdev ;
  struct mISDNdevice *tmp ;
  u_int tmp___0 ;
  int tmp___1 ;
  struct mISDNdevice *__cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  u_int __cil_tmp11 ;
  unsigned int __cil_tmp12 ;

  {
  {
  tmp = dev_to_mISDN(dev);
  mdev = tmp;
  }
  {
  __cil_tmp8 = (struct mISDNdevice *)0;
  __cil_tmp9 = (unsigned long )__cil_tmp8;
  __cil_tmp10 = (unsigned long )mdev;
  if (__cil_tmp10 == __cil_tmp9) {
    return (-19L);
  } else {

  }
  }
  {
  tmp___0 = get_all_Bprotocols();
  __cil_tmp11 = mdev->Bprotocols;
  __cil_tmp12 = __cil_tmp11 | tmp___0;
  tmp___1 = sprintf(buf, "%d\n", __cil_tmp12);
  }
  return ((ssize_t )tmp___1);
}
}
static ssize_t _show_protocol(struct device *dev , struct device_attribute *attr ,
                              char *buf )
{ struct mISDNdevice *mdev ;
  struct mISDNdevice *tmp ;
  int tmp___0 ;
  struct mISDNdevice *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  u_int __cil_tmp10 ;

  {
  {
  tmp = dev_to_mISDN(dev);
  mdev = tmp;
  }
  {
  __cil_tmp7 = (struct mISDNdevice *)0;
  __cil_tmp8 = (unsigned long )__cil_tmp7;
  __cil_tmp9 = (unsigned long )mdev;
  if (__cil_tmp9 == __cil_tmp8) {
    return (-19L);
  } else {

  }
  }
  {
  __cil_tmp10 = mdev->D.protocol;
  tmp___0 = sprintf(buf, "%d\n", __cil_tmp10);
  }
  return ((ssize_t )tmp___0);
}
}
static ssize_t _show_name(struct device *dev , struct device_attribute *attr , char *buf )
{ char const *tmp ;
  size_t tmp___0 ;
  struct device const *__cil_tmp6 ;
  char const *__cil_tmp7 ;

  {
  {
  __cil_tmp6 = (struct device const *)dev;
  tmp = dev_name(__cil_tmp6);
  strcpy(buf, tmp);
  __cil_tmp7 = (char const *)buf;
  tmp___0 = strlen(__cil_tmp7);
  }
  return ((ssize_t )tmp___0);
}
}
static ssize_t _show_channelmap(struct device *dev , struct device_attribute *attr ,
                                char *buf )
{ struct mISDNdevice *mdev ;
  struct mISDNdevice *tmp ;
  char *bp ;
  int i ;
  char *tmp___0 ;
  int tmp___2 ;
  u_int __cil_tmp10 ;
  u_char (*__cil_tmp11)[16U] ;
  u_char *__cil_tmp12 ;
  u_int __cil_tmp13 ;
  u_int __cil_tmp14 ;
  long __cil_tmp15 ;
  long __cil_tmp16 ;

  {
  {
  tmp = dev_to_mISDN(dev);
  mdev = tmp;
  bp = buf;
  i = 0;
  }
  goto ldv_38429;
  ldv_38428:
  {
  tmp___0 = bp;
  bp = bp + 1;
  __cil_tmp10 = (u_int )i;
  __cil_tmp11 = & mdev->channelmap;
  __cil_tmp12 = (u_char *)__cil_tmp11;
  tmp___2 = test_channelmap(__cil_tmp10, __cil_tmp12);
  }
  if (tmp___2 != 0) {
    *tmp___0 = (char)49;
  } else {
    *tmp___0 = (char)48;
  }
  i = i + 1;
  ldv_38429: ;
  {
  __cil_tmp13 = mdev->nrbchan;
  __cil_tmp14 = (u_int )i;
  if (__cil_tmp14 <= __cil_tmp13) {
    goto ldv_38428;
  } else {
    goto ldv_38430;
  }
  }
  ldv_38430: ;
  {
  __cil_tmp15 = (long )buf;
  __cil_tmp16 = (long )bp;
  return (__cil_tmp16 - __cil_tmp15);
  }
}
}
static struct device_attribute mISDN_dev_attrs[8U] =
  { {{"id", 292U, (struct lock_class_key *)0, {{{(char)0}, {(char)0}, {(char)0},
                                                 {(char)0}, {(char)0}, {(char)0},
                                                 {(char)0}, {(char)0}}}}, & _show_id,
      (ssize_t (*)(struct device * , struct device_attribute * , char const * ,
                   size_t ))0},
        {{"d_protocols", 292U, (struct lock_class_key *)0, {{{(char)0}, {(char)0}, {(char)0},
                                                          {(char)0}, {(char)0}, {(char)0},
                                                          {(char)0}, {(char)0}}}},
      & _show_d_protocols, (ssize_t (*)(struct device * , struct device_attribute * ,
                                        char const * , size_t ))0},
        {{"b_protocols", 292U, (struct lock_class_key *)0, {{{(char)0}, {(char)0}, {(char)0},
                                                          {(char)0}, {(char)0}, {(char)0},
                                                          {(char)0}, {(char)0}}}},
      & _show_b_protocols, (ssize_t (*)(struct device * , struct device_attribute * ,
                                        char const * , size_t ))0},
        {{"protocol", 292U, (struct lock_class_key *)0, {{{(char)0}, {(char)0}, {(char)0},
                                                       {(char)0}, {(char)0}, {(char)0},
                                                       {(char)0}, {(char)0}}}}, & _show_protocol,
      (ssize_t (*)(struct device * , struct device_attribute * , char const * ,
                   size_t ))0},
        {{"channelmap", 292U, (struct lock_class_key *)0, {{{(char)0}, {(char)0}, {(char)0},
                                                         {(char)0}, {(char)0}, {(char)0},
                                                         {(char)0}, {(char)0}}}},
      & _show_channelmap, (ssize_t (*)(struct device * , struct device_attribute * ,
                                       char const * , size_t ))0},
        {{"nrbchan", 292U, (struct lock_class_key *)0, {{{(char)0}, {(char)0}, {(char)0},
                                                      {(char)0}, {(char)0}, {(char)0},
                                                      {(char)0}, {(char)0}}}}, & _show_nrbchan,
      (ssize_t (*)(struct device * , struct device_attribute * , char const * ,
                   size_t ))0},
        {{"name", 292U, (struct lock_class_key *)0, {{{(char)0}, {(char)0}, {(char)0},
                                                   {(char)0}, {(char)0}, {(char)0},
                                                   {(char)0}, {(char)0}}}}, & _show_name,
      (ssize_t (*)(struct device * , struct device_attribute * , char const * ,
                   size_t ))0},
        {{(char const *)0, 0U, (struct lock_class_key *)0, {{{(char)0}, {(char)0},
                                                            {(char)0}, {(char)0},
                                                            {(char)0}, {(char)0},
                                                            {(char)0}, {(char)0}}}},
      (ssize_t (*)(struct device * , struct device_attribute * , char * ))0, (ssize_t (*)(struct device * ,
                                                                                          struct device_attribute * ,
                                                                                          char const * ,
                                                                                          size_t ))0}};
static int mISDN_uevent(struct device *dev , struct kobj_uevent_env *env )
{ struct mISDNdevice *mdev ;
  struct mISDNdevice *tmp ;
  int tmp___0 ;
  struct mISDNdevice *__cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  u_int __cil_tmp9 ;

  {
  {
  tmp = dev_to_mISDN(dev);
  mdev = tmp;
  }
  {
  __cil_tmp6 = (struct mISDNdevice *)0;
  __cil_tmp7 = (unsigned long )__cil_tmp6;
  __cil_tmp8 = (unsigned long )mdev;
  if (__cil_tmp8 == __cil_tmp7) {
    return (0);
  } else {

  }
  }
  {
  __cil_tmp9 = mdev->nrbchan;
  tmp___0 = add_uevent_var(env, "nchans=%d", __cil_tmp9);
  }
  if (tmp___0 != 0) {
    return (-12);
  } else {

  }
  return (0);
}
}
static void mISDN_class_release(struct class *cls )
{

  {
  return;
}
}
static struct class mISDN_class =
     {"mISDN", & __this_module, (struct class_attribute *)0, (struct device_attribute *)(& mISDN_dev_attrs),
    (struct bin_attribute *)0, (struct kobject *)0, & mISDN_uevent, (char *(*)(struct device * ,
                                                                               mode_t * ))0,
    & mISDN_class_release, & mISDN_dev_release, (int (*)(struct device * , pm_message_t ))0,
    (int (*)(struct device * ))0, (struct kobj_ns_type_operations const *)0, (void const *(*)(struct device * ))0,
    (struct dev_pm_ops const *)0, (struct subsys_private *)0};
static int _get_mdevice(struct device *dev , void *id )
{ struct mISDNdevice *mdev ;
  struct mISDNdevice *tmp ;
  struct mISDNdevice *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  u_int *__cil_tmp8 ;
  u_int __cil_tmp9 ;
  u_int __cil_tmp10 ;

  {
  {
  tmp = dev_to_mISDN(dev);
  mdev = tmp;
  }
  {
  __cil_tmp5 = (struct mISDNdevice *)0;
  __cil_tmp6 = (unsigned long )__cil_tmp5;
  __cil_tmp7 = (unsigned long )mdev;
  if (__cil_tmp7 == __cil_tmp6) {
    return (0);
  } else {

  }
  }
  {
  __cil_tmp8 = (u_int *)id;
  __cil_tmp9 = *__cil_tmp8;
  __cil_tmp10 = mdev->id;
  if (__cil_tmp10 != __cil_tmp9) {
    return (0);
  } else {

  }
  }
  return (1);
}
}
struct mISDNdevice *get_mdevice(u_int id )
{ struct device *tmp ;
  struct mISDNdevice *tmp___0 ;
  struct device *__cil_tmp4 ;
  void *__cil_tmp5 ;

  {
  {
  __cil_tmp4 = (struct device *)0;
  __cil_tmp5 = (void *)(& id);
  tmp = class_find_device(& mISDN_class, __cil_tmp4, __cil_tmp5, & _get_mdevice);
  tmp___0 = dev_to_mISDN(tmp);
  }
  return (tmp___0);
}
}
static int _get_mdevice_count(struct device *dev , void *cnt )
{ int *__cil_tmp3 ;
  int *__cil_tmp4 ;
  int __cil_tmp5 ;

  {
  __cil_tmp3 = (int *)cnt;
  __cil_tmp4 = (int *)cnt;
  __cil_tmp5 = *__cil_tmp4;
  *__cil_tmp3 = __cil_tmp5 + 1;
  return (0);
}
}
int get_mdevice_count(void)
{ int cnt ;
  struct device *__cil_tmp2 ;
  void *__cil_tmp3 ;

  {
  {
  cnt = 0;
  __cil_tmp2 = (struct device *)0;
  __cil_tmp3 = (void *)(& cnt);
  class_for_each_device(& mISDN_class, __cil_tmp2, __cil_tmp3, & _get_mdevice_count);
  }
  return (cnt);
}
}
static int get_free_devid(void)
{ u_int i ;
  int tmp ;
  int __cil_tmp3 ;
  unsigned long volatile *__cil_tmp4 ;

  {
  i = 0U;
  goto ldv_38463;
  ldv_38462:
  {
  __cil_tmp3 = (int )i;
  __cil_tmp4 = (unsigned long volatile *)(& device_ids);
  tmp = test_and_set_bit(__cil_tmp3, __cil_tmp4);
  }
  if (tmp == 0) {
    goto ldv_38461;
  } else {

  }
  i = i + 1U;
  ldv_38463: ;
  if (i <= 63U) {
    goto ldv_38462;
  } else {
    goto ldv_38461;
  }
  ldv_38461: ;
  if (i > 63U) {
    return (-16);
  } else {

  }
  return ((int )i);
}
}
int mISDN_register_device(struct mISDNdevice *dev , struct device *parent , char *name )
{ int err ;
  char const *tmp ;
  struct device *__cil_tmp6 ;
  char *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  char __cil_tmp10 ;
  signed char __cil_tmp11 ;
  int __cil_tmp12 ;
  struct device *__cil_tmp13 ;
  struct device *__cil_tmp14 ;
  u_int __cil_tmp15 ;
  struct device *__cil_tmp16 ;
  u_int __cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  struct device *__cil_tmp19 ;
  struct device const *__cil_tmp20 ;
  u_int __cil_tmp21 ;
  struct device *__cil_tmp22 ;
  void *__cil_tmp23 ;
  struct device *__cil_tmp24 ;

  {
  {
  err = get_free_devid();
  }
  if (err < 0) {
    goto error1;
  } else {

  }
  {
  dev->id = (u_int )err;
  __cil_tmp6 = & dev->dev;
  device_initialize(__cil_tmp6);
  }
  {
  __cil_tmp7 = (char *)0;
  __cil_tmp8 = (unsigned long )__cil_tmp7;
  __cil_tmp9 = (unsigned long )name;
  if (__cil_tmp9 != __cil_tmp8) {
    {
    __cil_tmp10 = *name;
    __cil_tmp11 = (signed char )__cil_tmp10;
    __cil_tmp12 = (int )__cil_tmp11;
    if (__cil_tmp12 != 0) {
      {
      __cil_tmp13 = & dev->dev;
      dev_set_name(__cil_tmp13, "%s", name);
      }
    } else {
      {
      __cil_tmp14 = & dev->dev;
      __cil_tmp15 = dev->id;
      dev_set_name(__cil_tmp14, "mISDN%d", __cil_tmp15);
      }
    }
    }
  } else {
    {
    __cil_tmp16 = & dev->dev;
    __cil_tmp17 = dev->id;
    dev_set_name(__cil_tmp16, "mISDN%d", __cil_tmp17);
    }
  }
  }
  {
  __cil_tmp18 = debug & 255U;
  if (__cil_tmp18 != 0U) {
    {
    __cil_tmp19 = & dev->dev;
    __cil_tmp20 = (struct device const *)__cil_tmp19;
    tmp = dev_name(__cil_tmp20);
    __cil_tmp21 = dev->id;
    printk("<7>mISDN_register %s %d\n", tmp, __cil_tmp21);
    }
  } else {

  }
  }
  {
  err = create_stack(dev);
  }
  if (err != 0) {
    goto error1;
  } else {

  }
  {
  dev->dev.class = & mISDN_class;
  dev->dev.platform_data = (void *)dev;
  dev->dev.parent = parent;
  __cil_tmp22 = & dev->dev;
  __cil_tmp23 = (void *)dev;
  dev_set_drvdata(__cil_tmp22, __cil_tmp23);
  __cil_tmp24 = & dev->dev;
  err = device_add(__cil_tmp24);
  }
  if (err != 0) {
    goto error3;
  } else {

  }
  return (0);
  error3:
  {
  delete_stack(dev);
  }
  return (err);
  error1: ;
  return (err);
}
}
void mISDN_unregister_device(struct mISDNdevice *dev )
{ char const *tmp ;
  unsigned int __cil_tmp3 ;
  struct device *__cil_tmp4 ;
  struct device const *__cil_tmp5 ;
  u_int __cil_tmp6 ;
  struct device *__cil_tmp7 ;
  struct device *__cil_tmp8 ;
  void *__cil_tmp9 ;
  u_int __cil_tmp10 ;
  int __cil_tmp11 ;
  unsigned long volatile *__cil_tmp12 ;
  struct device *__cil_tmp13 ;

  {
  {
  __cil_tmp3 = debug & 255U;
  if (__cil_tmp3 != 0U) {
    {
    __cil_tmp4 = & dev->dev;
    __cil_tmp5 = (struct device const *)__cil_tmp4;
    tmp = dev_name(__cil_tmp5);
    __cil_tmp6 = dev->id;
    printk("<7>mISDN_unregister %s %d\n", tmp, __cil_tmp6);
    }
  } else {

  }
  }
  {
  __cil_tmp7 = & dev->dev;
  device_del(__cil_tmp7);
  __cil_tmp8 = & dev->dev;
  __cil_tmp9 = (void *)0;
  dev_set_drvdata(__cil_tmp8, __cil_tmp9);
  __cil_tmp10 = dev->id;
  __cil_tmp11 = (int )__cil_tmp10;
  __cil_tmp12 = (unsigned long volatile *)(& device_ids);
  test_and_clear_bit(__cil_tmp11, __cil_tmp12);
  delete_stack(dev);
  __cil_tmp13 = & dev->dev;
  put_device(__cil_tmp13);
  }
  return;
}
}
u_int get_all_Bprotocols(void)
{ struct Bprotocol *bp ;
  u_int m ;
  struct list_head const *__mptr ;
  struct list_head const *__mptr___0 ;
  u_int __cil_tmp5 ;
  struct list_head *__cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  struct list_head *__cil_tmp8 ;
  unsigned long __cil_tmp9 ;

  {
  {
  m = 0U;
  _raw_read_lock(& bp_lock);
  __mptr = (struct list_head const *)Bprotocols.next;
  bp = (struct Bprotocol *)__mptr;
  }
  goto ldv_38499;
  ldv_38498:
  __cil_tmp5 = bp->Bprotocols;
  m = __cil_tmp5 | m;
  __cil_tmp6 = bp->list.next;
  __mptr___0 = (struct list_head const *)__cil_tmp6;
  bp = (struct Bprotocol *)__mptr___0;
  ldv_38499: ;
  {
  __cil_tmp7 = (unsigned long )(& Bprotocols);
  __cil_tmp8 = & bp->list;
  __cil_tmp9 = (unsigned long )__cil_tmp8;
  if (__cil_tmp9 != __cil_tmp7) {
    goto ldv_38498;
  } else {
    goto ldv_38500;
  }
  }
  ldv_38500:
  {
  _raw_read_unlock(& bp_lock);
  }
  return (m);
}
}
struct Bprotocol *get_Bprotocol4mask(u_int m )
{ struct Bprotocol *bp ;
  struct list_head const *__mptr ;
  struct list_head const *__mptr___0 ;
  u_int __cil_tmp5 ;
  unsigned int __cil_tmp6 ;
  struct list_head *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  struct list_head *__cil_tmp9 ;
  unsigned long __cil_tmp10 ;

  {
  {
  _raw_read_lock(& bp_lock);
  __mptr = (struct list_head const *)Bprotocols.next;
  bp = (struct Bprotocol *)__mptr;
  }
  goto ldv_38510;
  ldv_38509: ;
  {
  __cil_tmp5 = bp->Bprotocols;
  __cil_tmp6 = __cil_tmp5 & m;
  if (__cil_tmp6 != 0U) {
    {
    _raw_read_unlock(& bp_lock);
    }
    return (bp);
  } else {

  }
  }
  __cil_tmp7 = bp->list.next;
  __mptr___0 = (struct list_head const *)__cil_tmp7;
  bp = (struct Bprotocol *)__mptr___0;
  ldv_38510: ;
  {
  __cil_tmp8 = (unsigned long )(& Bprotocols);
  __cil_tmp9 = & bp->list;
  __cil_tmp10 = (unsigned long )__cil_tmp9;
  if (__cil_tmp10 != __cil_tmp8) {
    goto ldv_38509;
  } else {
    goto ldv_38511;
  }
  }
  ldv_38511:
  {
  _raw_read_unlock(& bp_lock);
  }
  return ((struct Bprotocol *)0);
}
}
struct Bprotocol *get_Bprotocol4id(u_int id )
{ u_int m ;
  struct Bprotocol *tmp ;
  int __cil_tmp4 ;
  int __cil_tmp5 ;
  int __cil_tmp6 ;

  {
  if (id <= 31U) {
    {
    printk("<4>%s id not in range  %d\n", "get_Bprotocol4id", id);
    }
    return ((struct Bprotocol *)0);
  } else
  if (id > 63U) {
    {
    printk("<4>%s id not in range  %d\n", "get_Bprotocol4id", id);
    }
    return ((struct Bprotocol *)0);
  } else {

  }
  {
  __cil_tmp4 = (int )id;
  __cil_tmp5 = __cil_tmp4 & 31;
  __cil_tmp6 = 1 << __cil_tmp5;
  m = (u_int )__cil_tmp6;
  tmp = get_Bprotocol4mask(m);
  }
  return (tmp);
}
}
int mISDN_register_Bprotocol(struct Bprotocol *bp )
{ u_long flags ;
  struct Bprotocol *old ;
  unsigned int __cil_tmp4 ;
  char *__cil_tmp5 ;
  u_int __cil_tmp6 ;
  u_int __cil_tmp7 ;
  struct Bprotocol *__cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  char *__cil_tmp11 ;
  u_int __cil_tmp12 ;
  char *__cil_tmp13 ;
  u_int __cil_tmp14 ;
  struct list_head *__cil_tmp15 ;

  {
  {
  __cil_tmp4 = debug & 255U;
  if (__cil_tmp4 != 0U) {
    {
    __cil_tmp5 = bp->name;
    __cil_tmp6 = bp->Bprotocols;
    printk("<7>%s: %s/%x\n", "mISDN_register_Bprotocol", __cil_tmp5, __cil_tmp6);
    }
  } else {

  }
  }
  {
  __cil_tmp7 = bp->Bprotocols;
  old = get_Bprotocol4mask(__cil_tmp7);
  }
  {
  __cil_tmp8 = (struct Bprotocol *)0;
  __cil_tmp9 = (unsigned long )__cil_tmp8;
  __cil_tmp10 = (unsigned long )old;
  if (__cil_tmp10 != __cil_tmp9) {
    {
    __cil_tmp11 = old->name;
    __cil_tmp12 = old->Bprotocols;
    __cil_tmp13 = bp->name;
    __cil_tmp14 = bp->Bprotocols;
    printk("<4>register duplicate protocol old %s/%x new %s/%x\n", __cil_tmp11, __cil_tmp12,
           __cil_tmp13, __cil_tmp14);
    }
    return (-16);
  } else {

  }
  }
  {
  flags = _raw_write_lock_irqsave(& bp_lock);
  __cil_tmp15 = & bp->list;
  list_add_tail(__cil_tmp15, & Bprotocols);
  _raw_write_unlock_irqrestore(& bp_lock, flags);
  }
  return (0);
}
}
void mISDN_unregister_Bprotocol(struct Bprotocol *bp )
{ u_long flags ;
  unsigned int __cil_tmp3 ;
  char *__cil_tmp4 ;
  u_int __cil_tmp5 ;
  struct list_head *__cil_tmp6 ;

  {
  {
  __cil_tmp3 = debug & 255U;
  if (__cil_tmp3 != 0U) {
    {
    __cil_tmp4 = bp->name;
    __cil_tmp5 = bp->Bprotocols;
    printk("<7>%s: %s/%x\n", "mISDN_unregister_Bprotocol", __cil_tmp4, __cil_tmp5);
    }
  } else {

  }
  }
  {
  flags = _raw_write_lock_irqsave(& bp_lock);
  __cil_tmp6 = & bp->list;
  list_del(__cil_tmp6);
  _raw_write_unlock_irqrestore(& bp_lock, flags);
  }
  return;
}
}
void ldv_check_final_state(void) ;
extern void ldv_initialize(void) ;
extern int nondet_int(void) ;
int LDV_IN_INTERRUPT ;
void ldv_blast_assert(void)
{

  {
  ERROR: ;
  goto ERROR;
}
}
extern int ldv_undefined_int(void) ;
int ldv_module_refcounter = 1;
void ldv_module_get(struct module *module )
{ struct module *__cil_tmp2 ;
  unsigned long __cil_tmp3 ;
  unsigned long __cil_tmp4 ;

  {
  {
  __cil_tmp2 = (struct module *)0;
  __cil_tmp3 = (unsigned long )__cil_tmp2;
  __cil_tmp4 = (unsigned long )module;
  if (__cil_tmp4 != __cil_tmp3) {
    ldv_module_refcounter = ldv_module_refcounter + 1;
  } else {

  }
  }
  return;
}
}
int ldv_try_module_get(struct module *module )
{ int module_get_succeeded ;
  struct module *__cil_tmp3 ;
  unsigned long __cil_tmp4 ;
  unsigned long __cil_tmp5 ;

  {
  {
  __cil_tmp3 = (struct module *)0;
  __cil_tmp4 = (unsigned long )__cil_tmp3;
  __cil_tmp5 = (unsigned long )module;
  if (__cil_tmp5 != __cil_tmp4) {
    {
    module_get_succeeded = ldv_undefined_int();
    }
    if (module_get_succeeded == 1) {
      ldv_module_refcounter = ldv_module_refcounter + 1;
      return (1);
    } else {
      return (0);
    }
  } else {

  }
  }
  return (0);
}
}
void ldv_module_put(struct module *module )
{ struct module *__cil_tmp2 ;
  unsigned long __cil_tmp3 ;
  unsigned long __cil_tmp4 ;

  {
  {
  __cil_tmp2 = (struct module *)0;
  __cil_tmp3 = (unsigned long )__cil_tmp2;
  __cil_tmp4 = (unsigned long )module;
  if (__cil_tmp4 != __cil_tmp3) {
    if (ldv_module_refcounter <= 1) {
      {
      ldv_blast_assert();
      }
    } else {

    }
    ldv_module_refcounter = ldv_module_refcounter - 1;
  } else {

  }
  }
  return;
}
}
void ldv_module_put_and_exit(void)
{ struct module *__cil_tmp1 ;

  {
  {
  __cil_tmp1 = (struct module *)1;
  ldv_module_put(__cil_tmp1);
  }
  LDV_STOP: ;
  goto LDV_STOP;
}
}
unsigned int ldv_module_refcount(void)
{ int __cil_tmp1 ;

  {
  {
  __cil_tmp1 = ldv_module_refcounter + -1;
  return ((unsigned int )__cil_tmp1);
  }
}
}
void ldv_check_final_state(void)
{

  {
  if (ldv_module_refcounter != 1) {
    {
    ldv_blast_assert();
    }
  } else {

  }
  return;
}
}
extern unsigned long volatile jiffies ;
extern void init_timer_key(struct timer_list * , char const * , struct lock_class_key * ) ;
__inline static int timer_pending(struct timer_list const *timer )
{ struct list_head *__cil_tmp2 ;
  unsigned long __cil_tmp3 ;
  struct list_head *__cil_tmp4 ;
  unsigned long __cil_tmp5 ;

  {
  {
  __cil_tmp2 = (struct list_head * const )0;
  __cil_tmp3 = (unsigned long )__cil_tmp2;
  __cil_tmp4 = timer->entry.next;
  __cil_tmp5 = (unsigned long )__cil_tmp4;
  return (__cil_tmp5 != __cil_tmp3);
  }
}
}
extern int del_timer(struct timer_list * ) ;
extern void add_timer(struct timer_list * ) ;
extern void kfree(void const * ) ;
extern void *__kmalloc(size_t , gfp_t ) ;
__inline static void *kmalloc(size_t size , gfp_t flags )
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
void mISDN_FsmNew(struct Fsm *fsm , struct FsmNode *fnlist , int fncount ) ;
void mISDN_FsmFree(struct Fsm *fsm ) ;
int mISDN_FsmEvent(struct FsmInst *fi , int event , void *arg ) ;
void mISDN_FsmChangeState(struct FsmInst *fi , int newstate ) ;
void mISDN_FsmInitTimer(struct FsmInst *fi , struct FsmTimer *ft ) ;
int mISDN_FsmAddTimer(struct FsmTimer *ft , int millisec , int event , void *arg ,
                      int where ) ;
void mISDN_FsmRestartTimer(struct FsmTimer *ft , int millisec , int event , void *arg ,
                           int where ) ;
void mISDN_FsmDelTimer(struct FsmTimer *ft , int where ) ;
void mISDN_FsmNew(struct Fsm *fsm , struct FsmNode *fnlist , int fncount )
{ int i ;
  void *tmp ;
  int __cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  int __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  int __cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  struct FsmNode *__cil_tmp14 ;
  int __cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  struct FsmNode *__cil_tmp17 ;
  int __cil_tmp18 ;
  long __cil_tmp19 ;
  int __cil_tmp20 ;
  long __cil_tmp21 ;
  unsigned long __cil_tmp22 ;
  struct FsmNode *__cil_tmp23 ;
  int __cil_tmp24 ;
  long __cil_tmp25 ;
  int __cil_tmp26 ;
  long __cil_tmp27 ;
  int __cil_tmp28 ;
  unsigned long __cil_tmp29 ;
  struct FsmNode *__cil_tmp30 ;
  int __cil_tmp31 ;
  unsigned long __cil_tmp32 ;
  struct FsmNode *__cil_tmp33 ;
  int __cil_tmp34 ;
  long __cil_tmp35 ;
  int __cil_tmp36 ;
  long __cil_tmp37 ;
  unsigned long __cil_tmp38 ;
  struct FsmNode *__cil_tmp39 ;
  int __cil_tmp40 ;
  long __cil_tmp41 ;
  int __cil_tmp42 ;
  long __cil_tmp43 ;
  unsigned long __cil_tmp44 ;
  struct FsmNode *__cil_tmp45 ;
  int __cil_tmp46 ;
  unsigned long __cil_tmp47 ;
  struct FsmNode *__cil_tmp48 ;
  int __cil_tmp49 ;
  int __cil_tmp50 ;
  int __cil_tmp51 ;
  int __cil_tmp52 ;
  unsigned long __cil_tmp53 ;
  FSMFNPTR (**__cil_tmp54)(struct FsmInst * , int , void * ) ;
  FSMFNPTR (**__cil_tmp55)(struct FsmInst * , int , void * ) ;
  unsigned long __cil_tmp56 ;
  struct FsmNode *__cil_tmp57 ;
  void (*__cil_tmp58)(struct FsmInst * , int , void * ) ;

  {
  {
  __cil_tmp6 = fsm->event_count;
  __cil_tmp7 = (unsigned long )__cil_tmp6;
  __cil_tmp8 = fsm->state_count;
  __cil_tmp9 = (unsigned long )__cil_tmp8;
  __cil_tmp10 = __cil_tmp9 * __cil_tmp7;
  __cil_tmp11 = __cil_tmp10 * 8UL;
  tmp = kzalloc(__cil_tmp11, 208U);
  fsm->jumpmatrix = (FSMFNPTR (**)(struct FsmInst * , int , void * ))tmp;
  i = 0;
  }
  goto ldv_13951;
  ldv_13950: ;
  {
  __cil_tmp12 = fsm->state_count;
  __cil_tmp13 = (unsigned long )i;
  __cil_tmp14 = fnlist + __cil_tmp13;
  __cil_tmp15 = __cil_tmp14->state;
  if (__cil_tmp15 >= __cil_tmp12) {
    {
    __cil_tmp16 = (unsigned long )i;
    __cil_tmp17 = fnlist + __cil_tmp16;
    __cil_tmp18 = __cil_tmp17->state;
    __cil_tmp19 = (long )__cil_tmp18;
    __cil_tmp20 = fsm->state_count;
    __cil_tmp21 = (long )__cil_tmp20;
    __cil_tmp22 = (unsigned long )i;
    __cil_tmp23 = fnlist + __cil_tmp22;
    __cil_tmp24 = __cil_tmp23->event;
    __cil_tmp25 = (long )__cil_tmp24;
    __cil_tmp26 = fsm->event_count;
    __cil_tmp27 = (long )__cil_tmp26;
    printk("<3>mISDN_FsmNew Error: %d st(%ld/%ld) ev(%ld/%ld)\n", i, __cil_tmp19,
           __cil_tmp21, __cil_tmp25, __cil_tmp27);
    }
  } else {
    {
    __cil_tmp28 = fsm->event_count;
    __cil_tmp29 = (unsigned long )i;
    __cil_tmp30 = fnlist + __cil_tmp29;
    __cil_tmp31 = __cil_tmp30->event;
    if (__cil_tmp31 >= __cil_tmp28) {
      {
      __cil_tmp32 = (unsigned long )i;
      __cil_tmp33 = fnlist + __cil_tmp32;
      __cil_tmp34 = __cil_tmp33->state;
      __cil_tmp35 = (long )__cil_tmp34;
      __cil_tmp36 = fsm->state_count;
      __cil_tmp37 = (long )__cil_tmp36;
      __cil_tmp38 = (unsigned long )i;
      __cil_tmp39 = fnlist + __cil_tmp38;
      __cil_tmp40 = __cil_tmp39->event;
      __cil_tmp41 = (long )__cil_tmp40;
      __cil_tmp42 = fsm->event_count;
      __cil_tmp43 = (long )__cil_tmp42;
      printk("<3>mISDN_FsmNew Error: %d st(%ld/%ld) ev(%ld/%ld)\n", i, __cil_tmp35,
             __cil_tmp37, __cil_tmp41, __cil_tmp43);
      }
    } else {
      __cil_tmp44 = (unsigned long )i;
      __cil_tmp45 = fnlist + __cil_tmp44;
      __cil_tmp46 = __cil_tmp45->state;
      __cil_tmp47 = (unsigned long )i;
      __cil_tmp48 = fnlist + __cil_tmp47;
      __cil_tmp49 = __cil_tmp48->event;
      __cil_tmp50 = fsm->state_count;
      __cil_tmp51 = __cil_tmp50 * __cil_tmp49;
      __cil_tmp52 = __cil_tmp51 + __cil_tmp46;
      __cil_tmp53 = (unsigned long )__cil_tmp52;
      __cil_tmp54 = fsm->jumpmatrix;
      __cil_tmp55 = __cil_tmp54 + __cil_tmp53;
      __cil_tmp56 = (unsigned long )i;
      __cil_tmp57 = fnlist + __cil_tmp56;
      __cil_tmp58 = __cil_tmp57->routine;
      *__cil_tmp55 = (FSMFNPTR (*)(struct FsmInst * , int , void * ))__cil_tmp58;
    }
    }
  }
  }
  i = i + 1;
  ldv_13951: ;
  if (i < fncount) {
    goto ldv_13950;
  } else {
    goto ldv_13952;
  }
  ldv_13952: ;
  return;
}
}
void mISDN_FsmFree(struct Fsm *fsm )
{ FSMFNPTR (**__cil_tmp2)(struct FsmInst * , int , void * ) ;
  void const *__cil_tmp3 ;

  {
  {
  __cil_tmp2 = fsm->jumpmatrix;
  __cil_tmp3 = (void const *)__cil_tmp2;
  kfree(__cil_tmp3);
  }
  return;
}
}
int mISDN_FsmEvent(struct FsmInst *fi , int event , void *arg )
{ void (*r)(struct FsmInst * , int , void * ) ;
  struct Fsm *__cil_tmp5 ;
  int __cil_tmp6 ;
  int __cil_tmp7 ;
  int __cil_tmp8 ;
  long __cil_tmp9 ;
  struct Fsm *__cil_tmp10 ;
  int __cil_tmp11 ;
  long __cil_tmp12 ;
  struct Fsm *__cil_tmp13 ;
  int __cil_tmp14 ;
  long __cil_tmp15 ;
  struct Fsm *__cil_tmp16 ;
  int __cil_tmp17 ;
  int __cil_tmp18 ;
  long __cil_tmp19 ;
  struct Fsm *__cil_tmp20 ;
  int __cil_tmp21 ;
  long __cil_tmp22 ;
  struct Fsm *__cil_tmp23 ;
  int __cil_tmp24 ;
  long __cil_tmp25 ;
  int __cil_tmp26 ;
  struct Fsm *__cil_tmp27 ;
  int __cil_tmp28 ;
  int __cil_tmp29 ;
  int __cil_tmp30 ;
  unsigned long __cil_tmp31 ;
  struct Fsm *__cil_tmp32 ;
  FSMFNPTR (**__cil_tmp33)(struct FsmInst * , int , void * ) ;
  FSMFNPTR (**__cil_tmp34)(struct FsmInst * , int , void * ) ;
  FSMFNPTR (*__cil_tmp35)(struct FsmInst * , int , void * ) ;
  void (*__cil_tmp36)(struct FsmInst * , int , void * ) ;
  unsigned long __cil_tmp37 ;
  unsigned long __cil_tmp38 ;
  int __cil_tmp39 ;
  void (*__cil_tmp40)(struct FsmInst * , char * , ...) ;
  char *__cil_tmp41 ;
  int __cil_tmp42 ;
  unsigned long __cil_tmp43 ;
  struct Fsm *__cil_tmp44 ;
  char **__cil_tmp45 ;
  char **__cil_tmp46 ;
  char *__cil_tmp47 ;
  unsigned long __cil_tmp48 ;
  struct Fsm *__cil_tmp49 ;
  char **__cil_tmp50 ;
  char **__cil_tmp51 ;
  char *__cil_tmp52 ;
  int __cil_tmp53 ;
  void (*__cil_tmp54)(struct FsmInst * , char * , ...) ;
  char *__cil_tmp55 ;
  int __cil_tmp56 ;
  unsigned long __cil_tmp57 ;
  struct Fsm *__cil_tmp58 ;
  char **__cil_tmp59 ;
  char **__cil_tmp60 ;
  char *__cil_tmp61 ;
  unsigned long __cil_tmp62 ;
  struct Fsm *__cil_tmp63 ;
  char **__cil_tmp64 ;
  char **__cil_tmp65 ;
  char *__cil_tmp66 ;

  {
  {
  __cil_tmp5 = fi->fsm;
  __cil_tmp6 = __cil_tmp5->state_count;
  __cil_tmp7 = fi->state;
  if (__cil_tmp7 >= __cil_tmp6) {
    {
    __cil_tmp8 = fi->state;
    __cil_tmp9 = (long )__cil_tmp8;
    __cil_tmp10 = fi->fsm;
    __cil_tmp11 = __cil_tmp10->state_count;
    __cil_tmp12 = (long )__cil_tmp11;
    __cil_tmp13 = fi->fsm;
    __cil_tmp14 = __cil_tmp13->event_count;
    __cil_tmp15 = (long )__cil_tmp14;
    printk("<3>mISDN_FsmEvent Error st(%ld/%ld) ev(%d/%ld)\n", __cil_tmp9, __cil_tmp12,
           event, __cil_tmp15);
    }
    return (1);
  } else {
    {
    __cil_tmp16 = fi->fsm;
    __cil_tmp17 = __cil_tmp16->event_count;
    if (__cil_tmp17 <= event) {
      {
      __cil_tmp18 = fi->state;
      __cil_tmp19 = (long )__cil_tmp18;
      __cil_tmp20 = fi->fsm;
      __cil_tmp21 = __cil_tmp20->state_count;
      __cil_tmp22 = (long )__cil_tmp21;
      __cil_tmp23 = fi->fsm;
      __cil_tmp24 = __cil_tmp23->event_count;
      __cil_tmp25 = (long )__cil_tmp24;
      printk("<3>mISDN_FsmEvent Error st(%ld/%ld) ev(%d/%ld)\n", __cil_tmp19, __cil_tmp22,
             event, __cil_tmp25);
      }
      return (1);
    } else {

    }
    }
  }
  }
  __cil_tmp26 = fi->state;
  __cil_tmp27 = fi->fsm;
  __cil_tmp28 = __cil_tmp27->state_count;
  __cil_tmp29 = __cil_tmp28 * event;
  __cil_tmp30 = __cil_tmp29 + __cil_tmp26;
  __cil_tmp31 = (unsigned long )__cil_tmp30;
  __cil_tmp32 = fi->fsm;
  __cil_tmp33 = __cil_tmp32->jumpmatrix;
  __cil_tmp34 = __cil_tmp33 + __cil_tmp31;
  __cil_tmp35 = *__cil_tmp34;
  r = (void (*)(struct FsmInst * , int , void * ))__cil_tmp35;
  {
  __cil_tmp36 = (void (*)(struct FsmInst * , int , void * ))0;
  __cil_tmp37 = (unsigned long )__cil_tmp36;
  __cil_tmp38 = (unsigned long )r;
  if (__cil_tmp38 != __cil_tmp37) {
    {
    __cil_tmp39 = fi->debug;
    if (__cil_tmp39 != 0) {
      {
      __cil_tmp40 = fi->printdebug;
      __cil_tmp41 = (char *)"State %s Event %s";
      __cil_tmp42 = fi->state;
      __cil_tmp43 = (unsigned long )__cil_tmp42;
      __cil_tmp44 = fi->fsm;
      __cil_tmp45 = __cil_tmp44->strState;
      __cil_tmp46 = __cil_tmp45 + __cil_tmp43;
      __cil_tmp47 = *__cil_tmp46;
      __cil_tmp48 = (unsigned long )event;
      __cil_tmp49 = fi->fsm;
      __cil_tmp50 = __cil_tmp49->strEvent;
      __cil_tmp51 = __cil_tmp50 + __cil_tmp48;
      __cil_tmp52 = *__cil_tmp51;
      (*__cil_tmp40)(fi, __cil_tmp41, __cil_tmp47, __cil_tmp52);
      }
    } else {

    }
    }
    {
    (*r)(fi, event, arg);
    }
    return (0);
  } else {
    {
    __cil_tmp53 = fi->debug;
    if (__cil_tmp53 != 0) {
      {
      __cil_tmp54 = fi->printdebug;
      __cil_tmp55 = (char *)"State %s Event %s no action";
      __cil_tmp56 = fi->state;
      __cil_tmp57 = (unsigned long )__cil_tmp56;
      __cil_tmp58 = fi->fsm;
      __cil_tmp59 = __cil_tmp58->strState;
      __cil_tmp60 = __cil_tmp59 + __cil_tmp57;
      __cil_tmp61 = *__cil_tmp60;
      __cil_tmp62 = (unsigned long )event;
      __cil_tmp63 = fi->fsm;
      __cil_tmp64 = __cil_tmp63->strEvent;
      __cil_tmp65 = __cil_tmp64 + __cil_tmp62;
      __cil_tmp66 = *__cil_tmp65;
      (*__cil_tmp54)(fi, __cil_tmp55, __cil_tmp61, __cil_tmp66);
      }
    } else {

    }
    }
    return (1);
  }
  }
}
}
void mISDN_FsmChangeState(struct FsmInst *fi , int newstate )
{ int __cil_tmp3 ;
  void (*__cil_tmp4)(struct FsmInst * , char * , ...) ;
  char *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  struct Fsm *__cil_tmp7 ;
  char **__cil_tmp8 ;
  char **__cil_tmp9 ;
  char *__cil_tmp10 ;

  {
  fi->state = newstate;
  {
  __cil_tmp3 = fi->debug;
  if (__cil_tmp3 != 0) {
    {
    __cil_tmp4 = fi->printdebug;
    __cil_tmp5 = (char *)"ChangeState %s";
    __cil_tmp6 = (unsigned long )newstate;
    __cil_tmp7 = fi->fsm;
    __cil_tmp8 = __cil_tmp7->strState;
    __cil_tmp9 = __cil_tmp8 + __cil_tmp6;
    __cil_tmp10 = *__cil_tmp9;
    (*__cil_tmp4)(fi, __cil_tmp5, __cil_tmp10);
    }
  } else {

  }
  }
  return;
}
}
static void FsmExpireTimer(struct FsmTimer *ft )
{ struct FsmInst *__cil_tmp2 ;
  int __cil_tmp3 ;
  void *__cil_tmp4 ;

  {
  {
  __cil_tmp2 = ft->fi;
  __cil_tmp3 = ft->event;
  __cil_tmp4 = ft->arg;
  mISDN_FsmEvent(__cil_tmp2, __cil_tmp3, __cil_tmp4);
  }
  return;
}
}
void mISDN_FsmInitTimer(struct FsmInst *fi , struct FsmTimer *ft )
{ struct lock_class_key __key ;
  struct timer_list *__cil_tmp4 ;

  {
  {
  ft->fi = fi;
  ft->tl.function = (void (*)(unsigned long ))(& FsmExpireTimer);
  ft->tl.data = (unsigned long )ft;
  __cil_tmp4 = & ft->tl;
  init_timer_key(__cil_tmp4, "&ft->tl", & __key);
  }
  return;
}
}
void mISDN_FsmDelTimer(struct FsmTimer *ft , int where )
{ struct timer_list *__cil_tmp3 ;

  {
  {
  __cil_tmp3 = & ft->tl;
  del_timer(__cil_tmp3);
  }
  return;
}
}
int mISDN_FsmAddTimer(struct FsmTimer *ft , int millisec , int event , void *arg ,
                      int where )
{ int tmp ;
  struct lock_class_key __key ;
  struct timer_list *__cil_tmp8 ;
  struct timer_list const *__cil_tmp9 ;
  struct FsmInst *__cil_tmp10 ;
  int __cil_tmp11 ;
  struct FsmInst *__cil_tmp12 ;
  void (*__cil_tmp13)(struct FsmInst * , char * , ...) ;
  struct FsmInst *__cil_tmp14 ;
  char *__cil_tmp15 ;
  struct timer_list *__cil_tmp16 ;
  unsigned long __cil_tmp17 ;
  int __cil_tmp18 ;
  int __cil_tmp19 ;
  unsigned long __cil_tmp20 ;
  struct timer_list *__cil_tmp21 ;

  {
  {
  __cil_tmp8 = & ft->tl;
  __cil_tmp9 = (struct timer_list const *)__cil_tmp8;
  tmp = timer_pending(__cil_tmp9);
  }
  if (tmp != 0) {
    {
    __cil_tmp10 = ft->fi;
    __cil_tmp11 = __cil_tmp10->debug;
    if (__cil_tmp11 != 0) {
      {
      printk("<4>mISDN_FsmAddTimer: timer already active!\n");
      __cil_tmp12 = ft->fi;
      __cil_tmp13 = __cil_tmp12->printdebug;
      __cil_tmp14 = ft->fi;
      __cil_tmp15 = (char *)"mISDN_FsmAddTimer already active!";
      (*__cil_tmp13)(__cil_tmp14, __cil_tmp15);
      }
    } else {

    }
    }
    return (-1);
  } else {

  }
  {
  __cil_tmp16 = & ft->tl;
  init_timer_key(__cil_tmp16, "&ft->tl", & __key);
  ft->event = event;
  ft->arg = arg;
  __cil_tmp17 = (unsigned long )jiffies;
  __cil_tmp18 = millisec * 250;
  __cil_tmp19 = __cil_tmp18 / 1000;
  __cil_tmp20 = (unsigned long )__cil_tmp19;
  ft->tl.expires = __cil_tmp20 + __cil_tmp17;
  __cil_tmp21 = & ft->tl;
  add_timer(__cil_tmp21);
  }
  return (0);
}
}
void mISDN_FsmRestartTimer(struct FsmTimer *ft , int millisec , int event , void *arg ,
                           int where )
{ int tmp ;
  struct lock_class_key __key ;
  struct timer_list *__cil_tmp8 ;
  struct timer_list const *__cil_tmp9 ;
  struct timer_list *__cil_tmp10 ;
  struct timer_list *__cil_tmp11 ;
  unsigned long __cil_tmp12 ;
  int __cil_tmp13 ;
  int __cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  struct timer_list *__cil_tmp16 ;

  {
  {
  __cil_tmp8 = & ft->tl;
  __cil_tmp9 = (struct timer_list const *)__cil_tmp8;
  tmp = timer_pending(__cil_tmp9);
  }
  if (tmp != 0) {
    {
    __cil_tmp10 = & ft->tl;
    del_timer(__cil_tmp10);
    }
  } else {

  }
  {
  __cil_tmp11 = & ft->tl;
  init_timer_key(__cil_tmp11, "&ft->tl", & __key);
  ft->event = event;
  ft->arg = arg;
  __cil_tmp12 = (unsigned long )jiffies;
  __cil_tmp13 = millisec * 250;
  __cil_tmp14 = __cil_tmp13 / 1000;
  __cil_tmp15 = (unsigned long )__cil_tmp14;
  ft->tl.expires = __cil_tmp15 + __cil_tmp12;
  __cil_tmp16 = & ft->tl;
  add_timer(__cil_tmp16);
  }
  return;
}
}
__inline static int hlist_unhashed(struct hlist_node const *h )
{ struct hlist_node **__cil_tmp2 ;
  unsigned long __cil_tmp3 ;
  struct hlist_node **__cil_tmp4 ;
  unsigned long __cil_tmp5 ;

  {
  {
  __cil_tmp2 = (struct hlist_node ** const )0;
  __cil_tmp3 = (unsigned long )__cil_tmp2;
  __cil_tmp4 = h->pprev;
  __cil_tmp5 = (unsigned long )__cil_tmp4;
  return (__cil_tmp5 == __cil_tmp3);
  }
}
}
__inline static void __hlist_del(struct hlist_node *n )
{ struct hlist_node *next ;
  struct hlist_node **pprev ;
  struct hlist_node *__cil_tmp4 ;
  unsigned long __cil_tmp5 ;
  unsigned long __cil_tmp6 ;

  {
  next = n->next;
  pprev = n->pprev;
  *pprev = next;
  {
  __cil_tmp4 = (struct hlist_node *)0;
  __cil_tmp5 = (unsigned long )__cil_tmp4;
  __cil_tmp6 = (unsigned long )next;
  if (__cil_tmp6 != __cil_tmp5) {
    next->pprev = pprev;
  } else {

  }
  }
  return;
}
}
__inline static void hlist_add_head(struct hlist_node *n , struct hlist_head *h )
{ struct hlist_node *first ;
  struct hlist_node *__cil_tmp4 ;
  unsigned long __cil_tmp5 ;
  unsigned long __cil_tmp6 ;

  {
  first = h->first;
  n->next = first;
  {
  __cil_tmp4 = (struct hlist_node *)0;
  __cil_tmp5 = (unsigned long )__cil_tmp4;
  __cil_tmp6 = (unsigned long )first;
  if (__cil_tmp6 != __cil_tmp5) {
    first->pprev = & n->next;
  } else {

  }
  }
  h->first = n;
  n->pprev = & h->first;
  return;
}
}
__inline static void __set_bit(int nr , unsigned long volatile *addr )
{ long volatile *__cil_tmp3 ;

  {
  __cil_tmp3 = (long volatile *)addr;
  __asm__ volatile ("bts %1,%0": "+m" (*__cil_tmp3): "Ir" (nr): "memory");
  return;
}
}
__inline static void __clear_bit(int nr , unsigned long volatile *addr )
{ long volatile *__cil_tmp3 ;

  {
  __cil_tmp3 = (long volatile *)addr;
  __asm__ volatile ("btr %1,%0": "+m" (*__cil_tmp3): "Ir" (nr));
  return;
}
}
extern void warn_slowpath_fmt(char const * , int , char const * , ...) ;
extern void warn_slowpath_null(char const * , int ) ;
extern void might_fault(void) ;
extern void *__memcpy(void * , void const * , size_t ) ;
extern void *memset(void * , int , size_t ) ;
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
__inline static void atomic_inc(atomic_t *v )
{

  {
  __asm__ volatile (".section .smp_locks,\"a\"\n.balign 4\n.long 671f - .\n.previous\n671:\n\tlock; incl %0": "+m" (v->counter));
  return;
}
}
__inline static void atomic_dec(atomic_t *v )
{

  {
  __asm__ volatile (".section .smp_locks,\"a\"\n.balign 4\n.long 671f - .\n.previous\n671:\n\tlock; decl %0": "+m" (v->counter));
  return;
}
}
__inline static int atomic_dec_and_test(atomic_t *v )
{ unsigned char c ;
  unsigned int __cil_tmp3 ;

  {
  __asm__ volatile (".section .smp_locks,\"a\"\n.balign 4\n.long 671f - .\n.previous\n671:\n\tlock; decl %0; sete %1": "+m" (v->counter),
                       "=qm" (c): : "memory");
  {
  __cil_tmp3 = (unsigned int )c;
  return (__cil_tmp3 != 0U);
  }
}
}
extern void _raw_read_lock_bh(rwlock_t * ) ;
extern void _raw_write_lock_bh(rwlock_t * ) ;
extern void _raw_read_unlock_bh(rwlock_t * ) ;
extern void _raw_write_unlock_bh(rwlock_t * ) ;
extern struct timeval ns_to_timeval(s64 ) ;
extern int memcpy_fromiovec(unsigned char * , struct iovec * , int ) ;
extern int put_cmsg(struct msghdr * , int , int , int , void * ) ;
extern int sock_register(struct net_proto_family const * ) ;
extern void sock_unregister(int ) ;
extern unsigned long _copy_to_user(void * , void const * , unsigned int ) ;
extern unsigned long _copy_from_user(void * , void const * , unsigned int ) ;
__inline static unsigned long copy_from_user(void *to , void const *from , unsigned long n )
{ int sz ;
  unsigned long tmp ;
  int __ret_warn_on ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  void const *__cil_tmp10 ;
  void *__cil_tmp11 ;
  int __cil_tmp12 ;
  long __cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  int __cil_tmp16 ;
  long __cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  int __cil_tmp19 ;
  long __cil_tmp20 ;
  int __cil_tmp21 ;
  int __cil_tmp22 ;
  int __cil_tmp23 ;
  long __cil_tmp24 ;

  {
  {
  __cil_tmp10 = (void const *)to;
  __cil_tmp11 = (void *)__cil_tmp10;
  tmp = __builtin_object_size(__cil_tmp11, 0);
  sz = (int )tmp;
  might_fault();
  __cil_tmp12 = sz == -1;
  __cil_tmp13 = (long )__cil_tmp12;
  tmp___1 = __builtin_expect(__cil_tmp13, 1L);
  }
  if (tmp___1 != 0L) {
    {
    __cil_tmp14 = (unsigned int )n;
    n = _copy_from_user(to, from, __cil_tmp14);
    }
  } else {
    {
    __cil_tmp15 = (unsigned long )sz;
    __cil_tmp16 = __cil_tmp15 >= n;
    __cil_tmp17 = (long )__cil_tmp16;
    tmp___2 = __builtin_expect(__cil_tmp17, 1L);
    }
    if (tmp___2 != 0L) {
      {
      __cil_tmp18 = (unsigned int )n;
      n = _copy_from_user(to, from, __cil_tmp18);
      }
    } else {
      {
      __ret_warn_on = 1;
      __cil_tmp19 = __ret_warn_on != 0;
      __cil_tmp20 = (long )__cil_tmp19;
      tmp___0 = __builtin_expect(__cil_tmp20, 0L);
      }
      if (tmp___0 != 0L) {
        {
        __cil_tmp21 = (int const )57;
        __cil_tmp22 = (int )__cil_tmp21;
        warn_slowpath_fmt("/anthill/stuff/tacas-comp/inst/current/envs/linux-3.0.1/linux-3.0.1/arch/x86/include/asm/uaccess_64.h",
                          __cil_tmp22, "Buffer overflow detected!\n");
        }
      } else {

      }
      {
      __cil_tmp23 = __ret_warn_on != 0;
      __cil_tmp24 = (long )__cil_tmp23;
      __builtin_expect(__cil_tmp24, 0L);
      }
    }
  }
  return (n);
}
}
__inline static int copy_to_user(void *dst , void const *src , unsigned int size )
{ unsigned long tmp ;

  {
  {
  might_fault();
  tmp = _copy_to_user(dst, src, size);
  }
  return ((int )tmp);
}
}
extern int device_rename(struct device * , char const * ) ;
extern ktime_t ktime_get_real(void) ;
extern void kfree_skb(struct sk_buff * ) ;
extern struct sk_buff *__alloc_skb(unsigned int , gfp_t , int , int ) ;
__inline static struct sk_buff *alloc_skb(unsigned int size , gfp_t priority )
{ struct sk_buff *tmp ;

  {
  {
  tmp = __alloc_skb(size, priority, 0, -1);
  }
  return (tmp);
}
}
extern void skb_queue_head(struct sk_buff_head * , struct sk_buff * ) ;
extern unsigned char *skb_put(struct sk_buff * , unsigned int ) ;
extern unsigned char *skb_push(struct sk_buff * , unsigned int ) ;
extern unsigned char *skb_pull(struct sk_buff * , unsigned int ) ;
__inline static void skb_reserve(struct sk_buff *skb , int len )
{ unsigned long __cil_tmp3 ;
  unsigned char *__cil_tmp4 ;
  sk_buff_data_t __cil_tmp5 ;
  sk_buff_data_t __cil_tmp6 ;

  {
  __cil_tmp3 = (unsigned long )len;
  __cil_tmp4 = skb->data;
  skb->data = __cil_tmp4 + __cil_tmp3;
  __cil_tmp5 = (sk_buff_data_t )len;
  __cil_tmp6 = skb->tail;
  skb->tail = __cil_tmp6 + __cil_tmp5;
  return;
}
}
extern void skb_queue_purge(struct sk_buff_head * ) ;
extern struct sk_buff *skb_recv_datagram(struct sock * , unsigned int , int , int * ) ;
extern unsigned int datagram_poll(struct file * , struct socket * , struct poll_table_struct * ) ;
extern int skb_copy_datagram_iovec(struct sk_buff const * , int , struct iovec * ,
                                   int ) ;
extern void skb_free_datagram(struct sock * , struct sk_buff * ) ;
__inline static void skb_get_timestamp(struct sk_buff const *skb , struct timeval *stamp )
{ s64 __cil_tmp3 ;
  s64 __cil_tmp4 ;

  {
  {
  __cil_tmp3 = skb->tstamp.tv64;
  __cil_tmp4 = (s64 )__cil_tmp3;
  *stamp = ns_to_timeval(__cil_tmp4);
  }
  return;
}
}
__inline static void __net_timestamp(struct sk_buff *skb )
{

  {
  {
  skb->tstamp = ktime_get_real();
  }
  return;
}
}
__inline static int sk_unhashed(struct sock const *sk )
{ int tmp ;
  struct hlist_node const *__cil_tmp3 ;

  {
  {
  __cil_tmp3 = & sk->__sk_common.ldv_37191.skc_node;
  tmp = hlist_unhashed(__cil_tmp3);
  }
  return (tmp);
}
}
__inline static int sk_hashed(struct sock const *sk )
{ int tmp ;

  {
  {
  tmp = sk_unhashed(sk);
  }
  return (tmp == 0);
}
}
__inline static void sk_node_init(struct hlist_node *node )
{

  {
  node->pprev = (struct hlist_node **)0;
  return;
}
}
__inline static void __sk_del_node(struct sock *sk )
{ struct hlist_node *__cil_tmp2 ;

  {
  {
  __cil_tmp2 = & sk->__sk_common.ldv_37191.skc_node;
  __hlist_del(__cil_tmp2);
  }
  return;
}
}
__inline static int __sk_del_node_init(struct sock *sk )
{ int tmp ;
  struct sock const *__cil_tmp3 ;
  struct hlist_node *__cil_tmp4 ;

  {
  {
  __cil_tmp3 = (struct sock const *)sk;
  tmp = sk_hashed(__cil_tmp3);
  }
  if (tmp != 0) {
    {
    __sk_del_node(sk);
    __cil_tmp4 = & sk->__sk_common.ldv_37191.skc_node;
    sk_node_init(__cil_tmp4);
    }
    return (1);
  } else {

  }
  return (0);
}
}
__inline static void sock_hold(struct sock *sk )
{ atomic_t *__cil_tmp2 ;

  {
  {
  __cil_tmp2 = & sk->__sk_common.skc_refcnt;
  atomic_inc(__cil_tmp2);
  }
  return;
}
}
__inline static void __sock_put(struct sock *sk )
{ atomic_t *__cil_tmp2 ;

  {
  {
  __cil_tmp2 = & sk->__sk_common.skc_refcnt;
  atomic_dec(__cil_tmp2);
  }
  return;
}
}
__inline static int sk_del_node_init(struct sock *sk )
{ int rc ;
  int tmp ;
  int __ret_warn_on ;
  int tmp___0 ;
  long tmp___1 ;
  atomic_t *__cil_tmp7 ;
  atomic_t const *__cil_tmp8 ;
  int __cil_tmp9 ;
  long __cil_tmp10 ;
  int __cil_tmp11 ;
  int __cil_tmp12 ;
  int __cil_tmp13 ;
  long __cil_tmp14 ;

  {
  {
  tmp = __sk_del_node_init(sk);
  rc = tmp;
  }
  if (rc != 0) {
    {
    __cil_tmp7 = & sk->__sk_common.skc_refcnt;
    __cil_tmp8 = (atomic_t const *)__cil_tmp7;
    tmp___0 = atomic_read(__cil_tmp8);
    __ret_warn_on = tmp___0 == 1;
    __cil_tmp9 = __ret_warn_on != 0;
    __cil_tmp10 = (long )__cil_tmp9;
    tmp___1 = __builtin_expect(__cil_tmp10, 0L);
    }
    if (tmp___1 != 0L) {
      {
      __cil_tmp11 = (int const )453;
      __cil_tmp12 = (int )__cil_tmp11;
      warn_slowpath_null("include/net/sock.h", __cil_tmp12);
      }
    } else {

    }
    {
    __cil_tmp13 = __ret_warn_on != 0;
    __cil_tmp14 = (long )__cil_tmp13;
    __builtin_expect(__cil_tmp14, 0L);
    __sock_put(sk);
    }
  } else {

  }
  return (rc);
}
}
__inline static void __sk_add_node(struct sock *sk , struct hlist_head *list )
{ struct hlist_node *__cil_tmp3 ;

  {
  {
  __cil_tmp3 = & sk->__sk_common.ldv_37191.skc_node;
  hlist_add_head(__cil_tmp3, list);
  }
  return;
}
}
__inline static void sk_add_node(struct sock *sk , struct hlist_head *list )
{

  {
  {
  sock_hold(sk);
  __sk_add_node(sk, list);
  }
  return;
}
}
__inline static void sock_set_flag(struct sock *sk , enum sock_flags flag )
{ int __cil_tmp3 ;
  unsigned long *__cil_tmp4 ;
  unsigned long volatile *__cil_tmp5 ;

  {
  {
  __cil_tmp3 = (int )flag;
  __cil_tmp4 = & sk->sk_flags;
  __cil_tmp5 = (unsigned long volatile *)__cil_tmp4;
  __set_bit(__cil_tmp3, __cil_tmp5);
  }
  return;
}
}
__inline static void sock_reset_flag(struct sock *sk , enum sock_flags flag )
{ int __cil_tmp3 ;
  unsigned long *__cil_tmp4 ;
  unsigned long volatile *__cil_tmp5 ;

  {
  {
  __cil_tmp3 = (int )flag;
  __cil_tmp4 = & sk->sk_flags;
  __cil_tmp5 = (unsigned long volatile *)__cil_tmp4;
  __clear_bit(__cil_tmp3, __cil_tmp5);
  }
  return;
}
}
extern void lock_sock_nested(struct sock * , int ) ;
__inline static void lock_sock(struct sock *sk )
{

  {
  {
  lock_sock_nested(sk, 0);
  }
  return;
}
}
extern void release_sock(struct sock * ) ;
extern struct sock *sk_alloc(struct net * , int , gfp_t , struct proto * ) ;
extern void sk_free(struct sock * ) ;
extern int sock_no_connect(struct socket * , struct sockaddr * , int , int ) ;
extern int sock_no_socketpair(struct socket * , struct socket * ) ;
extern int sock_no_accept(struct socket * , struct socket * , int ) ;
extern int sock_no_getname(struct socket * , struct sockaddr * , int * , int ) ;
extern unsigned int sock_no_poll(struct file * , struct socket * , struct poll_table_struct * ) ;
extern int sock_no_listen(struct socket * , int ) ;
extern int sock_no_shutdown(struct socket * , int ) ;
extern int sock_no_getsockopt(struct socket * , int , int , char * , int * ) ;
extern int sock_no_setsockopt(struct socket * , int , int , char * , unsigned int ) ;
extern int sock_no_sendmsg(struct kiocb * , struct socket * , struct msghdr * , size_t ) ;
extern int sock_no_recvmsg(struct kiocb * , struct socket * , struct msghdr * , size_t ,
                           int ) ;
extern int sock_no_mmap(struct file * , struct socket * , struct vm_area_struct * ) ;
extern void sock_init_data(struct socket * , struct sock * ) ;
__inline static void sock_put(struct sock *sk )
{ int tmp ;
  atomic_t *__cil_tmp3 ;

  {
  {
  __cil_tmp3 = & sk->__sk_common.skc_refcnt;
  tmp = atomic_dec_and_test(__cil_tmp3);
  }
  if (tmp != 0) {
    {
    sk_free(sk);
    }
  } else {

  }
  return;
}
}
__inline static void sk_tx_queue_clear(struct sock *sk )
{

  {
  sk->__sk_common.skc_tx_queue_mapping = -1;
  return;
}
}
__inline static void sk_set_socket(struct sock *sk , struct socket *sock )
{

  {
  {
  sk_tx_queue_clear(sk);
  sk->sk_socket = sock;
  }
  return;
}
}
__inline static void sock_orphan(struct sock *sk )
{ rwlock_t *__cil_tmp2 ;
  enum sock_flags __cil_tmp3 ;
  struct socket *__cil_tmp4 ;
  rwlock_t *__cil_tmp5 ;

  {
  {
  __cil_tmp2 = & sk->sk_callback_lock;
  _raw_write_lock_bh(__cil_tmp2);
  __cil_tmp3 = (enum sock_flags )0;
  sock_set_flag(sk, __cil_tmp3);
  __cil_tmp4 = (struct socket *)0;
  sk_set_socket(sk, __cil_tmp4);
  sk->sk_wq = (struct socket_wq *)0;
  __cil_tmp5 = & sk->sk_callback_lock;
  _raw_write_unlock_bh(__cil_tmp5);
  }
  return;
}
}
extern int sock_queue_rcv_skb(struct sock * , struct sk_buff * ) ;
int connect_Bstack(struct mISDNdevice *dev , struct mISDNchannel *ch , u_int protocol ,
                   struct sockaddr_mISDN *adr ) ;
int connect_layer1(struct mISDNdevice *dev , struct mISDNchannel *ch , u_int protocol ,
                   struct sockaddr_mISDN *adr ) ;
int create_l2entity(struct mISDNdevice *dev , struct mISDNchannel *ch , u_int protocol ,
                    struct sockaddr_mISDN *adr ) ;
void delete_channel(struct mISDNchannel *ch ) ;
static u_int *debug___0 ;
static struct proto mISDN_proto =
     {(void (*)(struct sock * , long ))0, (int (*)(struct sock * , struct sockaddr * ,
                                                  int ))0, (int (*)(struct sock * ,
                                                                     int ))0, (struct sock *(*)(struct sock * ,
                                                                                                 int ,
                                                                                                 int * ))0,
    (int (*)(struct sock * , int , unsigned long ))0, (int (*)(struct sock * ))0,
    (void (*)(struct sock * ))0, (void (*)(struct sock * , int ))0, (int (*)(struct sock * ,
                                                                              int ,
                                                                              int ,
                                                                              char * ,
                                                                              unsigned int ))0,
    (int (*)(struct sock * , int , int , char * , int * ))0, (int (*)(struct sock * ,
                                                                        int , int ,
                                                                        char * , unsigned int ))0,
    (int (*)(struct sock * , int , int , char * , int * ))0, (int (*)(struct sock * ,
                                                                        unsigned int ,
                                                                        unsigned long ))0,
    (int (*)(struct kiocb * , struct sock * , struct msghdr * , size_t ))0, (int (*)(struct kiocb * ,
                                                                                      struct sock * ,
                                                                                      struct msghdr * ,
                                                                                      size_t ,
                                                                                      int ,
                                                                                      int ,
                                                                                      int * ))0,
    (int (*)(struct sock * , struct page * , int , size_t , int ))0, (int (*)(struct sock * ,
                                                                                 struct sockaddr * ,
                                                                                 int ))0,
    (int (*)(struct sock * , struct sk_buff * ))0, (void (*)(struct sock * ))0, (void (*)(struct sock * ))0,
    (void (*)(struct sock * ))0, (int (*)(struct sock * , unsigned short ))0, (void (*)(struct sock * ,
                                                                                         int ))0,
    0U, (void (*)(struct sock * ))0, (atomic_long_t *)0, (struct percpu_counter *)0,
    (int *)0, (long *)0, (int *)0, (int *)0, 0, (_Bool)0, (struct kmem_cache *)0,
    1368U, 0, (struct percpu_counter *)0, (struct request_sock_ops *)0, (struct timewait_sock_ops *)0,
    {(struct inet_hashinfo *)0}, & __this_module, {(char )'m', (char )'i', (char )'s',
                                                   (char )'d', (char )'n', (char )'\000'},
    {(struct list_head *)0, (struct list_head *)0}};
static struct mISDN_sock_list data_sockets = {{(struct hlist_node *)0}, {{16777216U}, 3736018669U, 4294967295U, (void *)1152921504606846975UL,
                               {(struct lock_class_key *)0, {(struct lock_class *)0,
                                                             (struct lock_class *)0},
                                "data_sockets.lock", 0, 0UL}}};
static struct mISDN_sock_list base_sockets = {{(struct hlist_node *)0}, {{16777216U}, 3736018669U, 4294967295U, (void *)1152921504606846975UL,
                               {(struct lock_class_key *)0, {(struct lock_class *)0,
                                                             (struct lock_class *)0},
                                "base_sockets.lock", 0, 0UL}}};
__inline static struct sk_buff *_l2_alloc_skb(unsigned int len , gfp_t gfp_mask )
{ struct sk_buff *skb ;
  long tmp ;
  unsigned int __cil_tmp5 ;
  struct sk_buff *__cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  int __cil_tmp9 ;
  long __cil_tmp10 ;

  {
  {
  __cil_tmp5 = len + 4U;
  skb = alloc_skb(__cil_tmp5, gfp_mask);
  __cil_tmp6 = (struct sk_buff *)0;
  __cil_tmp7 = (unsigned long )__cil_tmp6;
  __cil_tmp8 = (unsigned long )skb;
  __cil_tmp9 = __cil_tmp8 != __cil_tmp7;
  __cil_tmp10 = (long )__cil_tmp9;
  tmp = __builtin_expect(__cil_tmp10, 1L);
  }
  if (tmp != 0L) {
    {
    skb_reserve(skb, 4);
    }
  } else {

  }
  return (skb);
}
}
static void mISDN_sock_link(struct mISDN_sock_list *l , struct sock *sk )
{ rwlock_t *__cil_tmp3 ;
  struct hlist_head *__cil_tmp4 ;
  rwlock_t *__cil_tmp5 ;

  {
  {
  __cil_tmp3 = & l->lock;
  _raw_write_lock_bh(__cil_tmp3);
  __cil_tmp4 = & l->head;
  sk_add_node(sk, __cil_tmp4);
  __cil_tmp5 = & l->lock;
  _raw_write_unlock_bh(__cil_tmp5);
  }
  return;
}
}
static void mISDN_sock_unlink(struct mISDN_sock_list *l , struct sock *sk )
{ rwlock_t *__cil_tmp3 ;
  rwlock_t *__cil_tmp4 ;

  {
  {
  __cil_tmp3 = & l->lock;
  _raw_write_lock_bh(__cil_tmp3);
  sk_del_node_init(sk);
  __cil_tmp4 = & l->lock;
  _raw_write_unlock_bh(__cil_tmp4);
  }
  return;
}
}
static int mISDN_send(struct mISDNchannel *ch , struct sk_buff *skb )
{ struct mISDN_sock *msk ;
  int err ;
  struct mISDNchannel const *__mptr ;
  struct mISDN_sock *__cil_tmp6 ;
  u_int __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  unsigned char volatile __cil_tmp10 ;
  unsigned char __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  struct sock *__cil_tmp13 ;

  {
  __mptr = (struct mISDNchannel const *)ch;
  __cil_tmp6 = (struct mISDN_sock *)__mptr;
  msk = __cil_tmp6 + 1152921504606845704UL;
  {
  __cil_tmp7 = *debug___0;
  __cil_tmp8 = __cil_tmp7 & 4U;
  if (__cil_tmp8 != 0U) {
    {
    __cil_tmp9 = skb->len;
    printk("<7>%s len %d %p\n", "mISDN_send", __cil_tmp9, skb);
    }
  } else {

  }
  }
  {
  __cil_tmp10 = msk->sk.__sk_common.skc_state;
  __cil_tmp11 = (unsigned char )__cil_tmp10;
  __cil_tmp12 = (unsigned int )__cil_tmp11;
  if (__cil_tmp12 == 3U) {
    return (-49);
  } else {

  }
  }
  {
  __net_timestamp(skb);
  __cil_tmp13 = & msk->sk;
  err = sock_queue_rcv_skb(__cil_tmp13, skb);
  }
  if (err != 0) {
    {
    printk("<4>%s: error %d\n", "mISDN_send", err);
    }
  } else {

  }
  return (err);
}
}
static int mISDN_ctrl(struct mISDNchannel *ch , u_int cmd , void *arg )
{ struct mISDN_sock *msk ;
  struct mISDNchannel const *__mptr ;
  struct mISDN_sock *__cil_tmp6 ;
  u_int __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  int __cil_tmp9 ;

  {
  __mptr = (struct mISDNchannel const *)ch;
  __cil_tmp6 = (struct mISDN_sock *)__mptr;
  msk = __cil_tmp6 + 1152921504606845704UL;
  {
  __cil_tmp7 = *debug___0;
  __cil_tmp8 = __cil_tmp7 & 4U;
  if (__cil_tmp8 != 0U) {
    {
    printk("<7>%s(%p, %x, %p)\n", "mISDN_ctrl", ch, cmd, arg);
    }
  } else {

  }
  }
  {
  __cil_tmp9 = (int )cmd;
  if (__cil_tmp9 == 512) {
    goto case_512;
  } else
  if (0) {
    case_512:
    msk->sk.__sk_common.skc_state = (unsigned char volatile )3U;
    goto ldv_38402;
  } else {

  }
  }
  ldv_38402: ;
  return (0);
}
}
__inline static void mISDN_sock_cmsg(struct sock *sk , struct msghdr *msg , struct sk_buff *skb )
{ struct timeval tv ;
  struct mISDN_sock *__cil_tmp5 ;
  u_int __cil_tmp6 ;
  int __cil_tmp7 ;
  struct sk_buff const *__cil_tmp8 ;
  void *__cil_tmp9 ;

  {
  {
  __cil_tmp5 = (struct mISDN_sock *)sk;
  __cil_tmp6 = __cil_tmp5->cmask;
  __cil_tmp7 = (int )__cil_tmp6;
  if (__cil_tmp7 & 1) {
    {
    __cil_tmp8 = (struct sk_buff const *)skb;
    skb_get_timestamp(__cil_tmp8, & tv);
    __cil_tmp9 = (void *)(& tv);
    put_cmsg(msg, 0, 1, 16, __cil_tmp9);
    }
  } else {

  }
  }
  return;
}
}
static int mISDN_sock_recvmsg(struct kiocb *iocb , struct socket *sock , struct msghdr *msg ,
                              size_t len , int flags )
{ struct sk_buff *skb ;
  struct sock *sk ;
  struct sockaddr_mISDN *maddr ;
  int copied ;
  int err ;
  size_t __len ;
  void *__ret ;
  unsigned char *tmp ;
  unsigned char *tmp___0 ;
  int tmp___1 ;
  u_int __cil_tmp16 ;
  unsigned int __cil_tmp17 ;
  int __cil_tmp18 ;
  struct mISDN_sock *__cil_tmp19 ;
  u_int __cil_tmp20 ;
  unsigned char __cil_tmp21 ;
  int __cil_tmp22 ;
  unsigned char volatile __cil_tmp23 ;
  unsigned char __cil_tmp24 ;
  unsigned int __cil_tmp25 ;
  unsigned int __cil_tmp26 ;
  int __cil_tmp27 ;
  struct sk_buff *__cil_tmp28 ;
  unsigned long __cil_tmp29 ;
  unsigned long __cil_tmp30 ;
  int __cil_tmp31 ;
  unsigned int __cil_tmp32 ;
  void *__cil_tmp33 ;
  struct mISDN_sock *__cil_tmp34 ;
  struct mISDNdevice *__cil_tmp35 ;
  u_int __cil_tmp36 ;
  unsigned char __cil_tmp37 ;
  unsigned int __cil_tmp38 ;
  char (*__cil_tmp39)[48U] ;
  struct mISDNhead *__cil_tmp40 ;
  unsigned int __cil_tmp41 ;
  unsigned int __cil_tmp42 ;
  char (*__cil_tmp43)[48U] ;
  struct mISDNhead *__cil_tmp44 ;
  unsigned int __cil_tmp45 ;
  unsigned int __cil_tmp46 ;
  char (*__cil_tmp47)[48U] ;
  struct mISDNhead *__cil_tmp48 ;
  unsigned int __cil_tmp49 ;
  unsigned char __cil_tmp50 ;
  unsigned int __cil_tmp51 ;
  char (*__cil_tmp52)[48U] ;
  struct mISDNhead *__cil_tmp53 ;
  unsigned int __cil_tmp54 ;
  unsigned int __cil_tmp55 ;
  char (*__cil_tmp56)[48U] ;
  struct mISDNhead *__cil_tmp57 ;
  unsigned int __cil_tmp58 ;
  unsigned int __cil_tmp59 ;
  char (*__cil_tmp60)[48U] ;
  struct mISDNhead *__cil_tmp61 ;
  unsigned int __cil_tmp62 ;
  struct mISDN_sock *__cil_tmp63 ;
  u_int __cil_tmp64 ;
  struct mISDN_sock *__cil_tmp65 ;
  u_int __cil_tmp66 ;
  struct mISDN_sock *__cil_tmp67 ;
  u_int __cil_tmp68 ;
  u_int __cil_tmp69 ;
  int __cil_tmp70 ;
  int __cil_tmp71 ;
  unsigned int __cil_tmp72 ;
  unsigned int __cil_tmp73 ;
  size_t __cil_tmp74 ;
  int __cil_tmp75 ;
  atomic_t *__cil_tmp76 ;
  struct sk_buff_head *__cil_tmp77 ;
  void *__cil_tmp78 ;
  char (*__cil_tmp79)[48U] ;
  void const *__cil_tmp80 ;
  void *__cil_tmp81 ;
  char (*__cil_tmp82)[48U] ;
  void const *__cil_tmp83 ;
  struct sk_buff const *__cil_tmp84 ;
  struct iovec *__cil_tmp85 ;

  {
  sk = sock->sk;
  {
  __cil_tmp16 = *debug___0;
  __cil_tmp17 = __cil_tmp16 & 4U;
  if (__cil_tmp17 != 0U) {
    {
    __cil_tmp18 = (int )len;
    __cil_tmp19 = (struct mISDN_sock *)sk;
    __cil_tmp20 = __cil_tmp19->ch.nr;
    __cil_tmp21 = sk->sk_protocol;
    __cil_tmp22 = (int )__cil_tmp21;
    printk("<7>%s: len %d, flags %x ch.nr %d, proto %x\n", "mISDN_sock_recvmsg", __cil_tmp18,
           flags, __cil_tmp20, __cil_tmp22);
    }
  } else {

  }
  }
  if (flags & 1) {
    return (-95);
  } else {

  }
  {
  __cil_tmp23 = sk->__sk_common.skc_state;
  __cil_tmp24 = (unsigned char )__cil_tmp23;
  __cil_tmp25 = (unsigned int )__cil_tmp24;
  if (__cil_tmp25 == 3U) {
    return (0);
  } else {

  }
  }
  {
  __cil_tmp26 = (unsigned int )flags;
  __cil_tmp27 = flags & 64;
  skb = skb_recv_datagram(sk, __cil_tmp26, __cil_tmp27, & err);
  }
  {
  __cil_tmp28 = (struct sk_buff *)0;
  __cil_tmp29 = (unsigned long )__cil_tmp28;
  __cil_tmp30 = (unsigned long )skb;
  if (__cil_tmp30 == __cil_tmp29) {
    return (err);
  } else {

  }
  }
  {
  __cil_tmp31 = msg->msg_namelen;
  __cil_tmp32 = (unsigned int )__cil_tmp31;
  if (__cil_tmp32 > 5U) {
    msg->msg_namelen = 6;
    __cil_tmp33 = msg->msg_name;
    maddr = (struct sockaddr_mISDN *)__cil_tmp33;
    maddr->family = (sa_family_t )34U;
    __cil_tmp34 = (struct mISDN_sock *)sk;
    __cil_tmp35 = __cil_tmp34->dev;
    __cil_tmp36 = __cil_tmp35->id;
    maddr->dev = (unsigned char )__cil_tmp36;
    {
    __cil_tmp37 = sk->sk_protocol;
    __cil_tmp38 = (unsigned int )__cil_tmp37;
    if (__cil_tmp38 == 16U) {
      __cil_tmp39 = & skb->cb;
      __cil_tmp40 = (struct mISDNhead *)__cil_tmp39;
      __cil_tmp41 = __cil_tmp40->id;
      __cil_tmp42 = __cil_tmp41 >> 16;
      maddr->channel = (unsigned char )__cil_tmp42;
      __cil_tmp43 = & skb->cb;
      __cil_tmp44 = (struct mISDNhead *)__cil_tmp43;
      __cil_tmp45 = __cil_tmp44->id;
      __cil_tmp46 = __cil_tmp45 >> 8;
      maddr->tei = (unsigned char )__cil_tmp46;
      __cil_tmp47 = & skb->cb;
      __cil_tmp48 = (struct mISDNhead *)__cil_tmp47;
      __cil_tmp49 = __cil_tmp48->id;
      maddr->sapi = (unsigned char )__cil_tmp49;
    } else {
      {
      __cil_tmp50 = sk->sk_protocol;
      __cil_tmp51 = (unsigned int )__cil_tmp50;
      if (__cil_tmp51 == 17U) {
        __cil_tmp52 = & skb->cb;
        __cil_tmp53 = (struct mISDNhead *)__cil_tmp52;
        __cil_tmp54 = __cil_tmp53->id;
        __cil_tmp55 = __cil_tmp54 >> 16;
        maddr->channel = (unsigned char )__cil_tmp55;
        __cil_tmp56 = & skb->cb;
        __cil_tmp57 = (struct mISDNhead *)__cil_tmp56;
        __cil_tmp58 = __cil_tmp57->id;
        __cil_tmp59 = __cil_tmp58 >> 8;
        maddr->tei = (unsigned char )__cil_tmp59;
        __cil_tmp60 = & skb->cb;
        __cil_tmp61 = (struct mISDNhead *)__cil_tmp60;
        __cil_tmp62 = __cil_tmp61->id;
        maddr->sapi = (unsigned char )__cil_tmp62;
      } else {
        __cil_tmp63 = (struct mISDN_sock *)sk;
        __cil_tmp64 = __cil_tmp63->ch.nr;
        maddr->channel = (unsigned char )__cil_tmp64;
        __cil_tmp65 = (struct mISDN_sock *)sk;
        __cil_tmp66 = __cil_tmp65->ch.addr;
        maddr->sapi = (unsigned char )__cil_tmp66;
        __cil_tmp67 = (struct mISDN_sock *)sk;
        __cil_tmp68 = __cil_tmp67->ch.addr;
        __cil_tmp69 = __cil_tmp68 >> 8;
        maddr->tei = (unsigned char )__cil_tmp69;
      }
      }
    }
    }
  } else {
    {
    __cil_tmp70 = msg->msg_namelen;
    if (__cil_tmp70 != 0) {
      {
      __cil_tmp71 = msg->msg_namelen;
      printk("<4>%s: too small namelen %d\n", "mISDN_sock_recvmsg", __cil_tmp71);
      }
    } else {

    }
    }
    msg->msg_namelen = 0;
  }
  }
  __cil_tmp72 = skb->len;
  __cil_tmp73 = __cil_tmp72 + 8U;
  copied = (int )__cil_tmp73;
  {
  __cil_tmp74 = (size_t )copied;
  if (__cil_tmp74 > len) {
    {
    __cil_tmp75 = flags & 2;
    if (__cil_tmp75 != 0) {
      {
      __cil_tmp76 = & skb->users;
      atomic_dec(__cil_tmp76);
      }
    } else {
      {
      __cil_tmp77 = & sk->sk_receive_queue;
      skb_queue_head(__cil_tmp77, skb);
      }
    }
    }
    return (-28);
  } else {

  }
  }
  __len = 8UL;
  if (__len > 63UL) {
    {
    tmp = skb_push(skb, 8U);
    __cil_tmp78 = (void *)tmp;
    __cil_tmp79 = & skb->cb;
    __cil_tmp80 = (void const *)__cil_tmp79;
    __ret = __memcpy(__cil_tmp78, __cil_tmp80, __len);
    }
  } else {
    {
    tmp___0 = skb_push(skb, 8U);
    __cil_tmp81 = (void *)tmp___0;
    __cil_tmp82 = & skb->cb;
    __cil_tmp83 = (void const *)__cil_tmp82;
    __ret = __builtin_memcpy(__cil_tmp81, __cil_tmp83, __len);
    }
  }
  {
  __cil_tmp84 = (struct sk_buff const *)skb;
  __cil_tmp85 = msg->msg_iov;
  err = skb_copy_datagram_iovec(__cil_tmp84, 0, __cil_tmp85, copied);
  mISDN_sock_cmsg(sk, msg, skb);
  skb_free_datagram(sk, skb);
  }
  if (err != 0) {
    tmp___1 = err;
  } else {
    tmp___1 = copied;
  }
  return (tmp___1);
}
}
static int mISDN_sock_sendmsg(struct kiocb *iocb , struct socket *sock , struct msghdr *msg ,
                              size_t len )
{ struct sock *sk ;
  struct sk_buff *skb ;
  int err ;
  struct sockaddr_mISDN *maddr ;
  unsigned char *tmp ;
  int tmp___0 ;
  size_t __len ;
  void *__ret ;
  u_int __cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  int __cil_tmp15 ;
  unsigned int __cil_tmp16 ;
  struct mISDN_sock *__cil_tmp17 ;
  u_int __cil_tmp18 ;
  unsigned char __cil_tmp19 ;
  int __cil_tmp20 ;
  unsigned int __cil_tmp21 ;
  int __cil_tmp22 ;
  unsigned int __cil_tmp23 ;
  unsigned int __cil_tmp24 ;
  unsigned char volatile __cil_tmp25 ;
  unsigned char __cil_tmp26 ;
  unsigned int __cil_tmp27 ;
  unsigned int __cil_tmp28 ;
  struct sk_buff *__cil_tmp29 ;
  unsigned long __cil_tmp30 ;
  unsigned long __cil_tmp31 ;
  unsigned int __cil_tmp32 ;
  struct iovec *__cil_tmp33 ;
  int __cil_tmp34 ;
  char (*__cil_tmp35)[48U] ;
  void *__cil_tmp36 ;
  unsigned char *__cil_tmp37 ;
  void const *__cil_tmp38 ;
  char (*__cil_tmp39)[48U] ;
  void *__cil_tmp40 ;
  unsigned char *__cil_tmp41 ;
  void const *__cil_tmp42 ;
  int __cil_tmp43 ;
  unsigned int __cil_tmp44 ;
  void *__cil_tmp45 ;
  char (*__cil_tmp46)[48U] ;
  struct mISDNhead *__cil_tmp47 ;
  unsigned char __cil_tmp48 ;
  unsigned char __cil_tmp49 ;
  unsigned int __cil_tmp50 ;
  char (*__cil_tmp51)[48U] ;
  struct mISDNhead *__cil_tmp52 ;
  struct mISDN_sock *__cil_tmp53 ;
  unsigned char __cil_tmp54 ;
  unsigned int __cil_tmp55 ;
  char (*__cil_tmp56)[48U] ;
  struct mISDNhead *__cil_tmp57 ;
  struct mISDN_sock *__cil_tmp58 ;
  u_int __cil_tmp59 ;
  unsigned int __cil_tmp60 ;
  char (*__cil_tmp61)[48U] ;
  struct mISDNhead *__cil_tmp62 ;
  unsigned int __cil_tmp63 ;
  struct mISDNchannel *__cil_tmp64 ;
  unsigned long __cil_tmp65 ;
  struct mISDN_sock *__cil_tmp66 ;
  struct mISDNchannel *__cil_tmp67 ;
  unsigned long __cil_tmp68 ;
  struct mISDN_sock *__cil_tmp69 ;
  send_func_t *__cil_tmp70 ;
  struct mISDN_sock *__cil_tmp71 ;
  struct mISDNchannel *__cil_tmp72 ;
  struct sk_buff *__cil_tmp73 ;
  unsigned long __cil_tmp74 ;
  unsigned long __cil_tmp75 ;

  {
  sk = sock->sk;
  err = -12;
  {
  __cil_tmp13 = *debug___0;
  __cil_tmp14 = __cil_tmp13 & 4U;
  if (__cil_tmp14 != 0U) {
    {
    __cil_tmp15 = (int )len;
    __cil_tmp16 = msg->msg_flags;
    __cil_tmp17 = (struct mISDN_sock *)sk;
    __cil_tmp18 = __cil_tmp17->ch.nr;
    __cil_tmp19 = sk->sk_protocol;
    __cil_tmp20 = (int )__cil_tmp19;
    printk("<7>%s: len %d flags %x ch %d proto %x\n", "mISDN_sock_sendmsg", __cil_tmp15,
           __cil_tmp16, __cil_tmp18, __cil_tmp20);
    }
  } else {

  }
  }
  {
  __cil_tmp21 = msg->msg_flags;
  __cil_tmp22 = (int )__cil_tmp21;
  if (__cil_tmp22 & 1) {
    return (-95);
  } else {

  }
  }
  {
  __cil_tmp23 = msg->msg_flags;
  __cil_tmp24 = __cil_tmp23 & 4294942655U;
  if (__cil_tmp24 != 0U) {
    return (-22);
  } else {

  }
  }
  if (len <= 7UL) {
    return (-22);
  } else {

  }
  {
  __cil_tmp25 = sk->__sk_common.skc_state;
  __cil_tmp26 = (unsigned char )__cil_tmp25;
  __cil_tmp27 = (unsigned int )__cil_tmp26;
  if (__cil_tmp27 != 2U) {
    return (-77);
  } else {

  }
  }
  {
  lock_sock(sk);
  __cil_tmp28 = (unsigned int )len;
  skb = _l2_alloc_skb(__cil_tmp28, 208U);
  }
  {
  __cil_tmp29 = (struct sk_buff *)0;
  __cil_tmp30 = (unsigned long )__cil_tmp29;
  __cil_tmp31 = (unsigned long )skb;
  if (__cil_tmp31 == __cil_tmp30) {
    goto done;
  } else {

  }
  }
  {
  __cil_tmp32 = (unsigned int )len;
  tmp = skb_put(skb, __cil_tmp32);
  __cil_tmp33 = msg->msg_iov;
  __cil_tmp34 = (int )len;
  tmp___0 = memcpy_fromiovec(tmp, __cil_tmp33, __cil_tmp34);
  }
  if (tmp___0 != 0) {
    err = -14;
    goto done;
  } else {

  }
  __len = 8UL;
  if (__len > 63UL) {
    {
    __cil_tmp35 = & skb->cb;
    __cil_tmp36 = (void *)__cil_tmp35;
    __cil_tmp37 = skb->data;
    __cil_tmp38 = (void const *)__cil_tmp37;
    __ret = __memcpy(__cil_tmp36, __cil_tmp38, __len);
    }
  } else {
    {
    __cil_tmp39 = & skb->cb;
    __cil_tmp40 = (void *)__cil_tmp39;
    __cil_tmp41 = skb->data;
    __cil_tmp42 = (void const *)__cil_tmp41;
    __ret = __builtin_memcpy(__cil_tmp40, __cil_tmp42, __len);
    }
  }
  {
  skb_pull(skb, 8U);
  }
  {
  __cil_tmp43 = msg->msg_namelen;
  __cil_tmp44 = (unsigned int )__cil_tmp43;
  if (__cil_tmp44 > 5U) {
    __cil_tmp45 = msg->msg_name;
    maddr = (struct sockaddr_mISDN *)__cil_tmp45;
    __cil_tmp46 = & skb->cb;
    __cil_tmp47 = (struct mISDNhead *)__cil_tmp46;
    __cil_tmp48 = maddr->channel;
    __cil_tmp47->id = (unsigned int )__cil_tmp48;
  } else {
    {
    __cil_tmp49 = sk->sk_protocol;
    __cil_tmp50 = (unsigned int )__cil_tmp49;
    if (__cil_tmp50 == 16U) {
      __cil_tmp51 = & skb->cb;
      __cil_tmp52 = (struct mISDNhead *)__cil_tmp51;
      __cil_tmp53 = (struct mISDN_sock *)sk;
      __cil_tmp52->id = __cil_tmp53->ch.nr;
    } else {
      {
      __cil_tmp54 = sk->sk_protocol;
      __cil_tmp55 = (unsigned int )__cil_tmp54;
      if (__cil_tmp55 == 17U) {
        __cil_tmp56 = & skb->cb;
        __cil_tmp57 = (struct mISDNhead *)__cil_tmp56;
        __cil_tmp58 = (struct mISDN_sock *)sk;
        __cil_tmp57->id = __cil_tmp58->ch.nr;
      } else {

      }
      }
    }
    }
  }
  }
  {
  __cil_tmp59 = *debug___0;
  __cil_tmp60 = __cil_tmp59 & 4U;
  if (__cil_tmp60 != 0U) {
    {
    __cil_tmp61 = & skb->cb;
    __cil_tmp62 = (struct mISDNhead *)__cil_tmp61;
    __cil_tmp63 = __cil_tmp62->id;
    printk("<7>%s: ID:%x\n", "mISDN_sock_sendmsg", __cil_tmp63);
    }
  } else {

  }
  }
  err = -19;
  {
  __cil_tmp64 = (struct mISDNchannel *)0;
  __cil_tmp65 = (unsigned long )__cil_tmp64;
  __cil_tmp66 = (struct mISDN_sock *)sk;
  __cil_tmp67 = __cil_tmp66->ch.peer;
  __cil_tmp68 = (unsigned long )__cil_tmp67;
  if (__cil_tmp68 == __cil_tmp65) {
    goto done;
  } else {

  }
  }
  {
  __cil_tmp69 = (struct mISDN_sock *)sk;
  __cil_tmp70 = __cil_tmp69->ch.recv;
  __cil_tmp71 = (struct mISDN_sock *)sk;
  __cil_tmp72 = __cil_tmp71->ch.peer;
  err = (*__cil_tmp70)(__cil_tmp72, skb);
  }
  if (err != 0) {
    goto done;
  } else {
    skb = (struct sk_buff *)0;
    err = (int )len;
  }
  done: ;
  {
  __cil_tmp73 = (struct sk_buff *)0;
  __cil_tmp74 = (unsigned long )__cil_tmp73;
  __cil_tmp75 = (unsigned long )skb;
  if (__cil_tmp75 != __cil_tmp74) {
    {
    kfree_skb(skb);
    }
  } else {

  }
  }
  {
  release_sock(sk);
  }
  return (err);
}
}
static int data_sock_release(struct socket *sock )
{ struct sock *sk ;
  u_int __cil_tmp3 ;
  unsigned int __cil_tmp4 ;
  struct sock *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  unsigned char __cil_tmp8 ;
  int __cil_tmp9 ;
  unsigned char __cil_tmp10 ;
  int __cil_tmp11 ;
  unsigned char __cil_tmp12 ;
  int __cil_tmp13 ;
  unsigned char __cil_tmp14 ;
  int __cil_tmp15 ;
  unsigned char __cil_tmp16 ;
  int __cil_tmp17 ;
  unsigned char __cil_tmp18 ;
  int __cil_tmp19 ;
  unsigned char __cil_tmp20 ;
  int __cil_tmp21 ;
  unsigned char __cil_tmp22 ;
  int __cil_tmp23 ;
  unsigned char __cil_tmp24 ;
  int __cil_tmp25 ;
  unsigned char __cil_tmp26 ;
  int __cil_tmp27 ;
  unsigned char __cil_tmp28 ;
  int __cil_tmp29 ;
  unsigned char __cil_tmp30 ;
  int __cil_tmp31 ;
  unsigned char volatile __cil_tmp32 ;
  unsigned char __cil_tmp33 ;
  unsigned int __cil_tmp34 ;
  struct mISDN_sock *__cil_tmp35 ;
  struct mISDNchannel *__cil_tmp36 ;
  struct mISDN_sock *__cil_tmp37 ;
  struct mISDNchannel *__cil_tmp38 ;
  struct sk_buff_head *__cil_tmp39 ;

  {
  sk = sock->sk;
  {
  __cil_tmp3 = *debug___0;
  __cil_tmp4 = __cil_tmp3 & 4U;
  if (__cil_tmp4 != 0U) {
    {
    printk("<7>%s(%p) sk=%p\n", "data_sock_release", sock, sk);
    }
  } else {

  }
  }
  {
  __cil_tmp5 = (struct sock *)0;
  __cil_tmp6 = (unsigned long )__cil_tmp5;
  __cil_tmp7 = (unsigned long )sk;
  if (__cil_tmp7 == __cil_tmp6) {
    return (0);
  } else {

  }
  }
  {
  __cil_tmp8 = sk->sk_protocol;
  __cil_tmp9 = (int )__cil_tmp8;
  if (__cil_tmp9 == 1) {
    goto case_1;
  } else {
    {
    __cil_tmp10 = sk->sk_protocol;
    __cil_tmp11 = (int )__cil_tmp10;
    if (__cil_tmp11 == 2) {
      goto case_2;
    } else {
      {
      __cil_tmp12 = sk->sk_protocol;
      __cil_tmp13 = (int )__cil_tmp12;
      if (__cil_tmp13 == 3) {
        goto case_3;
      } else {
        {
        __cil_tmp14 = sk->sk_protocol;
        __cil_tmp15 = (int )__cil_tmp14;
        if (__cil_tmp15 == 4) {
          goto case_4;
        } else {
          {
          __cil_tmp16 = sk->sk_protocol;
          __cil_tmp17 = (int )__cil_tmp16;
          if (__cil_tmp17 == 16) {
            goto case_16;
          } else {
            {
            __cil_tmp18 = sk->sk_protocol;
            __cil_tmp19 = (int )__cil_tmp18;
            if (__cil_tmp19 == 17) {
              goto case_17;
            } else {
              {
              __cil_tmp20 = sk->sk_protocol;
              __cil_tmp21 = (int )__cil_tmp20;
              if (__cil_tmp21 == 33) {
                goto case_33;
              } else {
                {
                __cil_tmp22 = sk->sk_protocol;
                __cil_tmp23 = (int )__cil_tmp22;
                if (__cil_tmp23 == 34) {
                  goto case_34;
                } else {
                  {
                  __cil_tmp24 = sk->sk_protocol;
                  __cil_tmp25 = (int )__cil_tmp24;
                  if (__cil_tmp25 == 35) {
                    goto case_35;
                  } else {
                    {
                    __cil_tmp26 = sk->sk_protocol;
                    __cil_tmp27 = (int )__cil_tmp26;
                    if (__cil_tmp27 == 36) {
                      goto case_36;
                    } else {
                      {
                      __cil_tmp28 = sk->sk_protocol;
                      __cil_tmp29 = (int )__cil_tmp28;
                      if (__cil_tmp29 == 37) {
                        goto case_37;
                      } else {
                        {
                        __cil_tmp30 = sk->sk_protocol;
                        __cil_tmp31 = (int )__cil_tmp30;
                        if (__cil_tmp31 == 38) {
                          goto case_38;
                        } else
                        if (0) {
                          case_1: ;
                          case_2: ;
                          case_3: ;
                          case_4: ;
                          {
                          __cil_tmp32 = sk->__sk_common.skc_state;
                          __cil_tmp33 = (unsigned char )__cil_tmp32;
                          __cil_tmp34 = (unsigned int )__cil_tmp33;
                          if (__cil_tmp34 == 2U) {
                            {
                            __cil_tmp35 = (struct mISDN_sock *)sk;
                            __cil_tmp36 = & __cil_tmp35->ch;
                            delete_channel(__cil_tmp36);
                            }
                          } else {
                            {
                            mISDN_sock_unlink(& data_sockets, sk);
                            }
                          }
                          }
                          goto ldv_38449;
                          case_16: ;
                          case_17: ;
                          case_33: ;
                          case_34: ;
                          case_35: ;
                          case_36: ;
                          case_37: ;
                          case_38:
                          {
                          __cil_tmp37 = (struct mISDN_sock *)sk;
                          __cil_tmp38 = & __cil_tmp37->ch;
                          delete_channel(__cil_tmp38);
                          mISDN_sock_unlink(& data_sockets, sk);
                          }
                          goto ldv_38449;
                        } else {

                        }
                        }
                      }
                      }
                    }
                    }
                  }
                  }
                }
                }
              }
              }
            }
            }
          }
          }
        }
        }
      }
      }
    }
    }
  }
  }
  ldv_38449:
  {
  lock_sock(sk);
  sock_orphan(sk);
  __cil_tmp39 = & sk->sk_receive_queue;
  skb_queue_purge(__cil_tmp39);
  release_sock(sk);
  sock_put(sk);
  }
  return (0);
}
}
static int data_sock_ioctl_bound(struct sock *sk , unsigned int cmd , void *p )
{ struct mISDN_ctrl_req cq ;
  int err ;
  int val[2U] ;
  struct mISDNchannel *bchan ;
  struct mISDNchannel *next ;
  unsigned long tmp ;
  struct list_head const *__mptr ;
  struct list_head const *__mptr___0 ;
  struct list_head const *__mptr___1 ;
  int tmp___0 ;
  int __ret_gu ;
  unsigned long __val_gu ;
  int __ret_gu___0 ;
  unsigned long __val_gu___0 ;
  struct mISDNdevice *__cil_tmp18 ;
  unsigned long __cil_tmp19 ;
  struct mISDN_sock *__cil_tmp20 ;
  struct mISDNdevice *__cil_tmp21 ;
  unsigned long __cil_tmp22 ;
  int __cil_tmp23 ;
  int __cil_tmp24 ;
  int __cil_tmp25 ;
  void *__cil_tmp26 ;
  void const *__cil_tmp27 ;
  unsigned char __cil_tmp28 ;
  int __cil_tmp29 ;
  int __cil_tmp30 ;
  struct mISDN_sock *__cil_tmp31 ;
  struct mISDNdevice *__cil_tmp32 ;
  struct list_head *__cil_tmp33 ;
  struct list_head *__cil_tmp34 ;
  u_int __cil_tmp35 ;
  u_int __cil_tmp36 ;
  ctrl_func_t *__cil_tmp37 ;
  void *__cil_tmp38 ;
  struct list_head *__cil_tmp39 ;
  struct mISDN_sock *__cil_tmp40 ;
  struct mISDNdevice *__cil_tmp41 ;
  struct list_head *__cil_tmp42 ;
  unsigned long __cil_tmp43 ;
  struct list_head *__cil_tmp44 ;
  unsigned long __cil_tmp45 ;
  struct mISDN_sock *__cil_tmp46 ;
  struct mISDNdevice *__cil_tmp47 ;
  ctrl_func_t *__cil_tmp48 ;
  struct mISDN_sock *__cil_tmp49 ;
  struct mISDNdevice *__cil_tmp50 ;
  struct mISDNchannel *__cil_tmp51 ;
  void *__cil_tmp52 ;
  void const *__cil_tmp53 ;
  unsigned char __cil_tmp54 ;
  unsigned int __cil_tmp55 ;
  struct mISDN_sock *__cil_tmp56 ;
  struct mISDNdevice *__cil_tmp57 ;
  struct mISDNchannel *__cil_tmp58 ;
  ctrl_func_t *__cil_tmp59 ;
  struct mISDN_sock *__cil_tmp60 ;
  struct mISDNdevice *__cil_tmp61 ;
  struct mISDNchannel *__cil_tmp62 ;
  void *__cil_tmp63 ;
  unsigned char __cil_tmp64 ;
  unsigned int __cil_tmp65 ;
  unsigned char __cil_tmp66 ;
  unsigned int __cil_tmp67 ;
  struct mISDN_sock *__cil_tmp68 ;
  struct mISDNdevice *__cil_tmp69 ;
  struct mISDNchannel *__cil_tmp70 ;
  ctrl_func_t *__cil_tmp71 ;
  struct mISDN_sock *__cil_tmp72 ;
  struct mISDNdevice *__cil_tmp73 ;
  struct mISDNchannel *__cil_tmp74 ;
  void *__cil_tmp75 ;

  {
  {
  err = -22;
  lock_sock(sk);
  }
  {
  __cil_tmp18 = (struct mISDNdevice *)0;
  __cil_tmp19 = (unsigned long )__cil_tmp18;
  __cil_tmp20 = (struct mISDN_sock *)sk;
  __cil_tmp21 = __cil_tmp20->dev;
  __cil_tmp22 = (unsigned long )__cil_tmp21;
  if (__cil_tmp22 == __cil_tmp19) {
    err = -19;
    goto done;
  } else {

  }
  }
  {
  __cil_tmp23 = (int )cmd;
  if (__cil_tmp23 == -2147202747) {
    goto case_neg_2147202747;
  } else {
    {
    __cil_tmp24 = (int )cmd;
    if (__cil_tmp24 == -2147202746) {
      goto case_neg_2147202746;
    } else {
      {
      __cil_tmp25 = (int )cmd;
      if (__cil_tmp25 == -2147202744) {
        goto case_neg_2147202744;
      } else {
        goto switch_default___1;
        if (0) {
          case_neg_2147202747:
          {
          __cil_tmp26 = (void *)(& cq);
          __cil_tmp27 = (void const *)p;
          tmp = copy_from_user(__cil_tmp26, __cil_tmp27, 16UL);
          }
          if (tmp != 0UL) {
            err = -14;
            goto ldv_38470;
          } else {

          }
          {
          __cil_tmp28 = sk->sk_protocol;
          __cil_tmp29 = (int )__cil_tmp28;
          __cil_tmp30 = __cil_tmp29 & -32;
          if (__cil_tmp30 == 32) {
            __cil_tmp31 = (struct mISDN_sock *)sk;
            __cil_tmp32 = __cil_tmp31->dev;
            __cil_tmp33 = __cil_tmp32->bchannels.next;
            __mptr = (struct list_head const *)__cil_tmp33;
            bchan = (struct mISDNchannel *)__mptr;
            __cil_tmp34 = bchan->list.next;
            __mptr___0 = (struct list_head const *)__cil_tmp34;
            next = (struct mISDNchannel *)__mptr___0;
            goto ldv_38479;
            ldv_38478: ;
            {
            __cil_tmp35 = (u_int )cq.channel;
            __cil_tmp36 = bchan->nr;
            if (__cil_tmp36 == __cil_tmp35) {
              {
              __cil_tmp37 = bchan->ctrl;
              __cil_tmp38 = (void *)(& cq);
              err = (*__cil_tmp37)(bchan, 768U, __cil_tmp38);
              }
              goto ldv_38477;
            } else {

            }
            }
            bchan = next;
            __cil_tmp39 = next->list.next;
            __mptr___1 = (struct list_head const *)__cil_tmp39;
            next = (struct mISDNchannel *)__mptr___1;
            ldv_38479: ;
            {
            __cil_tmp40 = (struct mISDN_sock *)sk;
            __cil_tmp41 = __cil_tmp40->dev;
            __cil_tmp42 = & __cil_tmp41->bchannels;
            __cil_tmp43 = (unsigned long )__cil_tmp42;
            __cil_tmp44 = & bchan->list;
            __cil_tmp45 = (unsigned long )__cil_tmp44;
            if (__cil_tmp45 != __cil_tmp43) {
              goto ldv_38478;
            } else {
              goto ldv_38477;
            }
            }
            ldv_38477: ;
          } else {
            {
            __cil_tmp46 = (struct mISDN_sock *)sk;
            __cil_tmp47 = __cil_tmp46->dev;
            __cil_tmp48 = __cil_tmp47->D.ctrl;
            __cil_tmp49 = (struct mISDN_sock *)sk;
            __cil_tmp50 = __cil_tmp49->dev;
            __cil_tmp51 = & __cil_tmp50->D;
            __cil_tmp52 = (void *)(& cq);
            err = (*__cil_tmp48)(__cil_tmp51, 768U, __cil_tmp52);
            }
          }
          }
          if (err != 0) {
            goto ldv_38470;
          } else {

          }
          {
          __cil_tmp53 = (void const *)(& cq);
          tmp___0 = copy_to_user(p, __cil_tmp53, 16U);
          }
          if (tmp___0 != 0) {
            err = -14;
          } else {

          }
          goto ldv_38470;
          case_neg_2147202746: ;
          {
          __cil_tmp54 = sk->sk_protocol;
          __cil_tmp55 = (unsigned int )__cil_tmp54;
          if (__cil_tmp55 != 17U) {
            err = -22;
            goto ldv_38470;
          } else {

          }
          }
          {
          val[0] = (int )cmd;
          might_fault();
          }
          if (1) {
            goto case_4;
          } else {
            goto switch_default;
            if (0) {
              __asm__ volatile ("call __get_user_1": "=a" (__ret_gu), "=d" (__val_gu): "0" ((int *)p));
              goto ldv_38484;
              __asm__ volatile ("call __get_user_2": "=a" (__ret_gu), "=d" (__val_gu): "0" ((int *)p));
              goto ldv_38484;
              case_4:
              __asm__ volatile ("call __get_user_4": "=a" (__ret_gu), "=d" (__val_gu): "0" ((int *)p));
              goto ldv_38484;
              __asm__ volatile ("call __get_user_8": "=a" (__ret_gu), "=d" (__val_gu): "0" ((int *)p));
              goto ldv_38484;
              switch_default:
              __asm__ volatile ("call __get_user_X": "=a" (__ret_gu), "=d" (__val_gu): "0" ((int *)p));
              goto ldv_38484;
            } else {

            }
          }
          ldv_38484:
          val[1] = (int )__val_gu;
          if (__ret_gu != 0) {
            err = -14;
            goto ldv_38470;
          } else {

          }
          {
          __cil_tmp56 = (struct mISDN_sock *)sk;
          __cil_tmp57 = __cil_tmp56->dev;
          __cil_tmp58 = __cil_tmp57->teimgr;
          __cil_tmp59 = __cil_tmp58->ctrl;
          __cil_tmp60 = (struct mISDN_sock *)sk;
          __cil_tmp61 = __cil_tmp60->dev;
          __cil_tmp62 = __cil_tmp61->teimgr;
          __cil_tmp63 = (void *)(& val);
          err = (*__cil_tmp59)(__cil_tmp62, 768U, __cil_tmp63);
          }
          goto ldv_38470;
          case_neg_2147202744: ;
          {
          __cil_tmp64 = sk->sk_protocol;
          __cil_tmp65 = (unsigned int )__cil_tmp64;
          if (__cil_tmp65 != 17U) {
            {
            __cil_tmp66 = sk->sk_protocol;
            __cil_tmp67 = (unsigned int )__cil_tmp66;
            if (__cil_tmp67 != 16U) {
              err = -22;
              goto ldv_38470;
            } else {

            }
            }
          } else {

          }
          }
          {
          val[0] = (int )cmd;
          might_fault();
          }
          if (1) {
            goto case_4___0;
          } else {
            goto switch_default___0;
            if (0) {
              __asm__ volatile ("call __get_user_1": "=a" (__ret_gu___0), "=d" (__val_gu___0): "0" ((int *)p));
              goto ldv_38494;
              __asm__ volatile ("call __get_user_2": "=a" (__ret_gu___0), "=d" (__val_gu___0): "0" ((int *)p));
              goto ldv_38494;
              case_4___0:
              __asm__ volatile ("call __get_user_4": "=a" (__ret_gu___0), "=d" (__val_gu___0): "0" ((int *)p));
              goto ldv_38494;
              __asm__ volatile ("call __get_user_8": "=a" (__ret_gu___0), "=d" (__val_gu___0): "0" ((int *)p));
              goto ldv_38494;
              switch_default___0:
              __asm__ volatile ("call __get_user_X": "=a" (__ret_gu___0), "=d" (__val_gu___0): "0" ((int *)p));
              goto ldv_38494;
            } else {

            }
          }
          ldv_38494:
          val[1] = (int )__val_gu___0;
          if (__ret_gu___0 != 0) {
            err = -14;
            goto ldv_38470;
          } else {

          }
          {
          __cil_tmp68 = (struct mISDN_sock *)sk;
          __cil_tmp69 = __cil_tmp68->dev;
          __cil_tmp70 = __cil_tmp69->teimgr;
          __cil_tmp71 = __cil_tmp70->ctrl;
          __cil_tmp72 = (struct mISDN_sock *)sk;
          __cil_tmp73 = __cil_tmp72->dev;
          __cil_tmp74 = __cil_tmp73->teimgr;
          __cil_tmp75 = (void *)(& val);
          err = (*__cil_tmp71)(__cil_tmp74, 768U, __cil_tmp75);
          }
          goto ldv_38470;
          switch_default___1:
          err = -22;
          goto ldv_38470;
        } else {

        }
      }
      }
    }
    }
  }
  }
  ldv_38470: ;
  done:
  {
  release_sock(sk);
  }
  return (err);
}
}
static int data_sock_ioctl(struct socket *sock , unsigned int cmd , unsigned long arg )
{ int err ;
  int id ;
  struct sock *sk ;
  struct mISDNdevice *dev ;
  struct mISDNversion ver ;
  int tmp ;
  int __ret_pu ;
  int __pu_val ;
  int __ret_gu ;
  unsigned long __val_gu ;
  struct mISDN_devinfo di ;
  u_int tmp___0 ;
  size_t __len ;
  void *__ret ;
  char const *tmp___1 ;
  int tmp___2 ;
  int __cil_tmp20 ;
  int __cil_tmp21 ;
  int __cil_tmp22 ;
  void *__cil_tmp23 ;
  void const *__cil_tmp24 ;
  u_int __cil_tmp25 ;
  struct mISDNdevice *__cil_tmp26 ;
  unsigned long __cil_tmp27 ;
  unsigned long __cil_tmp28 ;
  void *__cil_tmp29 ;
  u_int __cil_tmp30 ;
  u_char (*__cil_tmp31)[16U] ;
  void *__cil_tmp32 ;
  u_char (*__cil_tmp33)[16U] ;
  void const *__cil_tmp34 ;
  u_char (*__cil_tmp35)[16U] ;
  void *__cil_tmp36 ;
  u_char (*__cil_tmp37)[16U] ;
  void const *__cil_tmp38 ;
  struct device *__cil_tmp39 ;
  struct device const *__cil_tmp40 ;
  char (*__cil_tmp41)[20U] ;
  char *__cil_tmp42 ;
  void *__cil_tmp43 ;
  void const *__cil_tmp44 ;
  unsigned char volatile __cil_tmp45 ;
  unsigned char __cil_tmp46 ;
  unsigned int __cil_tmp47 ;
  void *__cil_tmp48 ;

  {
  err = 0;
  sk = sock->sk;
  {
  __cil_tmp20 = (int )cmd;
  if (__cil_tmp20 == -2147202750) {
    goto case_neg_2147202750;
  } else {
    {
    __cil_tmp21 = (int )cmd;
    if (__cil_tmp21 == -2147202749) {
      goto case_neg_2147202749;
    } else {
      {
      __cil_tmp22 = (int )cmd;
      if (__cil_tmp22 == -2147202748) {
        goto case_neg_2147202748;
      } else {
        goto switch_default___1;
        if (0) {
          case_neg_2147202750:
          {
          ver.major = (unsigned char)1;
          ver.minor = (unsigned char)1;
          ver.release = (unsigned short)21;
          __cil_tmp23 = (void *)arg;
          __cil_tmp24 = (void const *)(& ver);
          tmp = copy_to_user(__cil_tmp23, __cil_tmp24, 4U);
          }
          if (tmp != 0) {
            err = -14;
          } else {

          }
          goto ldv_38512;
          case_neg_2147202749:
          {
          id = get_mdevice_count();
          might_fault();
          __pu_val = id;
          }
          if (1) {
            goto case_4;
          } else {
            goto switch_default;
            if (0) {
              __asm__ volatile ("call __put_user_1": "=a" (__ret_pu): "0" (__pu_val),
                                   "c" ((int *)arg): "ebx");
              goto ldv_38517;
              __asm__ volatile ("call __put_user_2": "=a" (__ret_pu): "0" (__pu_val),
                                   "c" ((int *)arg): "ebx");
              goto ldv_38517;
              case_4:
              __asm__ volatile ("call __put_user_4": "=a" (__ret_pu): "0" (__pu_val),
                                   "c" ((int *)arg): "ebx");
              goto ldv_38517;
              __asm__ volatile ("call __put_user_8": "=a" (__ret_pu): "0" (__pu_val),
                                   "c" ((int *)arg): "ebx");
              goto ldv_38517;
              switch_default:
              __asm__ volatile ("call __put_user_X": "=a" (__ret_pu): "0" (__pu_val),
                                   "c" ((int *)arg): "ebx");
              goto ldv_38517;
            } else {

            }
          }
          ldv_38517: ;
          if (__ret_pu != 0) {
            err = -14;
          } else {

          }
          goto ldv_38512;
          case_neg_2147202748:
          {
          might_fault();
          }
          if (1) {
            goto case_4___0;
          } else {
            goto switch_default___0;
            if (0) {
              __asm__ volatile ("call __get_user_1": "=a" (__ret_gu), "=d" (__val_gu): "0" ((int *)arg));
              goto ldv_38527;
              __asm__ volatile ("call __get_user_2": "=a" (__ret_gu), "=d" (__val_gu): "0" ((int *)arg));
              goto ldv_38527;
              case_4___0:
              __asm__ volatile ("call __get_user_4": "=a" (__ret_gu), "=d" (__val_gu): "0" ((int *)arg));
              goto ldv_38527;
              __asm__ volatile ("call __get_user_8": "=a" (__ret_gu), "=d" (__val_gu): "0" ((int *)arg));
              goto ldv_38527;
              switch_default___0:
              __asm__ volatile ("call __get_user_X": "=a" (__ret_gu), "=d" (__val_gu): "0" ((int *)arg));
              goto ldv_38527;
            } else {

            }
          }
          ldv_38527:
          id = (int )__val_gu;
          if (__ret_gu != 0) {
            err = -14;
            goto ldv_38512;
          } else {

          }
          {
          __cil_tmp25 = (u_int )id;
          dev = get_mdevice(__cil_tmp25);
          }
          {
          __cil_tmp26 = (struct mISDNdevice *)0;
          __cil_tmp27 = (unsigned long )__cil_tmp26;
          __cil_tmp28 = (unsigned long )dev;
          if (__cil_tmp28 != __cil_tmp27) {
            {
            __cil_tmp29 = (void *)(& di);
            memset(__cil_tmp29, 0, 56UL);
            di.id = dev->id;
            di.Dprotocols = dev->Dprotocols;
            tmp___0 = get_all_Bprotocols();
            __cil_tmp30 = dev->Bprotocols;
            di.Bprotocols = __cil_tmp30 | tmp___0;
            di.protocol = dev->D.protocol;
            __len = 16UL;
            }
            if (__len > 63UL) {
              {
              __cil_tmp31 = & di.channelmap;
              __cil_tmp32 = (void *)__cil_tmp31;
              __cil_tmp33 = & dev->channelmap;
              __cil_tmp34 = (void const *)__cil_tmp33;
              __ret = __memcpy(__cil_tmp32, __cil_tmp34, __len);
              }
            } else {
              {
              __cil_tmp35 = & di.channelmap;
              __cil_tmp36 = (void *)__cil_tmp35;
              __cil_tmp37 = & dev->channelmap;
              __cil_tmp38 = (void const *)__cil_tmp37;
              __ret = __builtin_memcpy(__cil_tmp36, __cil_tmp38, __len);
              }
            }
            {
            di.nrbchan = dev->nrbchan;
            __cil_tmp39 = & dev->dev;
            __cil_tmp40 = (struct device const *)__cil_tmp39;
            tmp___1 = dev_name(__cil_tmp40);
            __cil_tmp41 = & di.name;
            __cil_tmp42 = (char *)__cil_tmp41;
            strcpy(__cil_tmp42, tmp___1);
            __cil_tmp43 = (void *)arg;
            __cil_tmp44 = (void const *)(& di);
            tmp___2 = copy_to_user(__cil_tmp43, __cil_tmp44, 56U);
            }
            if (tmp___2 != 0) {
              err = -14;
            } else {

            }
          } else {
            err = -19;
          }
          }
          goto ldv_38512;
          switch_default___1: ;
          {
          __cil_tmp45 = sk->__sk_common.skc_state;
          __cil_tmp46 = (unsigned char )__cil_tmp45;
          __cil_tmp47 = (unsigned int )__cil_tmp46;
          if (__cil_tmp47 == 2U) {
            {
            __cil_tmp48 = (void *)arg;
            err = data_sock_ioctl_bound(sk, cmd, __cil_tmp48);
            }
          } else {
            err = -107;
          }
          }
        } else {

        }
      }
      }
    }
    }
  }
  }
  ldv_38512: ;
  return (err);
}
}
static int data_sock_setsockopt(struct socket *sock , int level , int optname , char *optval ,
                                unsigned int len )
{ struct sock *sk ;
  int err ;
  int opt ;
  int __ret_gu ;
  unsigned long __val_gu ;
  u_int __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  struct mISDN_sock *__cil_tmp13 ;
  struct mISDN_sock *__cil_tmp14 ;
  u_int __cil_tmp15 ;
  struct mISDN_sock *__cil_tmp16 ;
  struct mISDN_sock *__cil_tmp17 ;
  u_int __cil_tmp18 ;

  {
  sk = sock->sk;
  err = 0;
  opt = 0;
  {
  __cil_tmp11 = *debug___0;
  __cil_tmp12 = __cil_tmp11 & 4U;
  if (__cil_tmp12 != 0U) {
    {
    printk("<7>%s(%p, %d, %x, %p, %d)\n", "data_sock_setsockopt", sock, level, optname,
           optval, len);
    }
  } else {

  }
  }
  {
  lock_sock(sk);
  }
  if (optname == 1) {
    goto case_1;
  } else {
    goto switch_default___0;
    if (0) {
      case_1:
      {
      might_fault();
      }
      if (1) {
        goto case_4;
      } else {
        goto switch_default;
        if (0) {
          __asm__ volatile ("call __get_user_1": "=a" (__ret_gu), "=d" (__val_gu): "0" ((int *)optval));
          goto ldv_38553;
          __asm__ volatile ("call __get_user_2": "=a" (__ret_gu), "=d" (__val_gu): "0" ((int *)optval));
          goto ldv_38553;
          case_4:
          __asm__ volatile ("call __get_user_4": "=a" (__ret_gu), "=d" (__val_gu): "0" ((int *)optval));
          goto ldv_38553;
          __asm__ volatile ("call __get_user_8": "=a" (__ret_gu), "=d" (__val_gu): "0" ((int *)optval));
          goto ldv_38553;
          switch_default:
          __asm__ volatile ("call __get_user_X": "=a" (__ret_gu), "=d" (__val_gu): "0" ((int *)optval));
          goto ldv_38553;
        } else {

        }
      }
      ldv_38553:
      opt = (int )__val_gu;
      if (__ret_gu != 0) {
        err = -14;
        goto ldv_38559;
      } else {

      }
      if (opt != 0) {
        __cil_tmp13 = (struct mISDN_sock *)sk;
        __cil_tmp14 = (struct mISDN_sock *)sk;
        __cil_tmp15 = __cil_tmp14->cmask;
        __cil_tmp13->cmask = __cil_tmp15 | 1U;
      } else {
        __cil_tmp16 = (struct mISDN_sock *)sk;
        __cil_tmp17 = (struct mISDN_sock *)sk;
        __cil_tmp18 = __cil_tmp17->cmask;
        __cil_tmp16->cmask = __cil_tmp18 & 4294967294U;
      }
      goto ldv_38559;
      switch_default___0:
      err = -92;
      goto ldv_38559;
    } else {

    }
  }
  ldv_38559:
  {
  release_sock(sk);
  }
  return (err);
}
}
static int data_sock_getsockopt(struct socket *sock , int level , int optname , char *optval ,
                                int *optlen )
{ struct sock *sk ;
  int len ;
  int opt ;
  int __ret_gu ;
  unsigned long __val_gu ;
  int __ret_pu ;
  char __pu_val ;
  struct mISDN_sock *__cil_tmp13 ;
  u_int __cil_tmp14 ;
  int __cil_tmp15 ;

  {
  {
  sk = sock->sk;
  might_fault();
  }
  if (1) {
    goto case_4;
  } else {
    goto switch_default;
    if (0) {
      __asm__ volatile ("call __get_user_1": "=a" (__ret_gu), "=d" (__val_gu): "0" (optlen));
      goto ldv_38574;
      __asm__ volatile ("call __get_user_2": "=a" (__ret_gu), "=d" (__val_gu): "0" (optlen));
      goto ldv_38574;
      case_4:
      __asm__ volatile ("call __get_user_4": "=a" (__ret_gu), "=d" (__val_gu): "0" (optlen));
      goto ldv_38574;
      __asm__ volatile ("call __get_user_8": "=a" (__ret_gu), "=d" (__val_gu): "0" (optlen));
      goto ldv_38574;
      switch_default:
      __asm__ volatile ("call __get_user_X": "=a" (__ret_gu), "=d" (__val_gu): "0" (optlen));
      goto ldv_38574;
    } else {

    }
  }
  ldv_38574:
  len = (int )__val_gu;
  if (__ret_gu != 0) {
    return (-14);
  } else {

  }
  if (len != 1) {
    return (-22);
  } else {

  }
  if (optname == 1) {
    goto case_1___0;
  } else {
    goto switch_default___1;
    if (0) {
      case_1___0: ;
      {
      __cil_tmp13 = (struct mISDN_sock *)sk;
      __cil_tmp14 = __cil_tmp13->cmask;
      __cil_tmp15 = (int )__cil_tmp14;
      if (__cil_tmp15 & 1) {
        opt = 1;
      } else {
        opt = 0;
      }
      }
      {
      might_fault();
      __pu_val = (char )opt;
      }
      if (1) {
        goto case_1___1;
      } else {
        goto switch_default___0;
        if (0) {
          case_1___1:
          __asm__ volatile ("call __put_user_1": "=a" (__ret_pu): "0" (__pu_val),
                               "c" (optval): "ebx");
          goto ldv_38584;
          __asm__ volatile ("call __put_user_2": "=a" (__ret_pu): "0" (__pu_val),
                               "c" (optval): "ebx");
          goto ldv_38584;
          __asm__ volatile ("call __put_user_4": "=a" (__ret_pu): "0" (__pu_val),
                               "c" (optval): "ebx");
          goto ldv_38584;
          __asm__ volatile ("call __put_user_8": "=a" (__ret_pu): "0" (__pu_val),
                               "c" (optval): "ebx");
          goto ldv_38584;
          switch_default___0:
          __asm__ volatile ("call __put_user_X": "=a" (__ret_pu): "0" (__pu_val),
                               "c" (optval): "ebx");
          goto ldv_38584;
        } else {

        }
      }
      ldv_38584: ;
      if (__ret_pu != 0) {
        return (-14);
      } else {

      }
      goto ldv_38590;
      switch_default___1: ;
      return (-92);
    } else {

    }
  }
  ldv_38590: ;
  return (0);
}
}
static int data_sock_bind(struct socket *sock , struct sockaddr *addr , int addr_len )
{ struct sockaddr_mISDN *maddr ;
  struct sock *sk ;
  struct hlist_node *node ;
  struct sock *csk ;
  int err ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  struct hlist_node const *__mptr ;
  u_int __cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  struct sockaddr_mISDN *__cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  unsigned long __cil_tmp17 ;
  sa_family_t __cil_tmp18 ;
  unsigned int __cil_tmp19 ;
  struct mISDNdevice *__cil_tmp20 ;
  unsigned long __cil_tmp21 ;
  struct mISDN_sock *__cil_tmp22 ;
  struct mISDNdevice *__cil_tmp23 ;
  unsigned long __cil_tmp24 ;
  struct mISDN_sock *__cil_tmp25 ;
  unsigned char __cil_tmp26 ;
  u_int __cil_tmp27 ;
  struct mISDNdevice *__cil_tmp28 ;
  unsigned long __cil_tmp29 ;
  struct mISDN_sock *__cil_tmp30 ;
  struct mISDNdevice *__cil_tmp31 ;
  unsigned long __cil_tmp32 ;
  unsigned char __cil_tmp33 ;
  unsigned int __cil_tmp34 ;
  rwlock_t *__cil_tmp35 ;
  unsigned long __cil_tmp36 ;
  unsigned long __cil_tmp37 ;
  struct mISDN_sock *__cil_tmp38 ;
  struct mISDNdevice *__cil_tmp39 ;
  unsigned long __cil_tmp40 ;
  struct mISDN_sock *__cil_tmp41 ;
  struct mISDNdevice *__cil_tmp42 ;
  unsigned long __cil_tmp43 ;
  unsigned char __cil_tmp44 ;
  unsigned int __cil_tmp45 ;
  unsigned char __cil_tmp46 ;
  unsigned int __cil_tmp47 ;
  unsigned char __cil_tmp48 ;
  unsigned int __cil_tmp49 ;
  unsigned char __cil_tmp50 ;
  unsigned int __cil_tmp51 ;
  unsigned char __cil_tmp52 ;
  unsigned int __cil_tmp53 ;
  unsigned char __cil_tmp54 ;
  unsigned int __cil_tmp55 ;
  unsigned char __cil_tmp56 ;
  unsigned int __cil_tmp57 ;
  unsigned char __cil_tmp58 ;
  unsigned int __cil_tmp59 ;
  unsigned char __cil_tmp60 ;
  unsigned int __cil_tmp61 ;
  _Bool __cil_tmp62 ;
  int __cil_tmp63 ;
  rwlock_t *__cil_tmp64 ;
  struct hlist_node *__cil_tmp65 ;
  unsigned long __cil_tmp66 ;
  unsigned long __cil_tmp67 ;
  struct sock *__cil_tmp68 ;
  rwlock_t *__cil_tmp69 ;
  struct mISDN_sock *__cil_tmp70 ;
  struct mISDN_sock *__cil_tmp71 ;
  unsigned char __cil_tmp72 ;
  int __cil_tmp73 ;
  unsigned char __cil_tmp74 ;
  int __cil_tmp75 ;
  unsigned char __cil_tmp76 ;
  int __cil_tmp77 ;
  unsigned char __cil_tmp78 ;
  int __cil_tmp79 ;
  unsigned char __cil_tmp80 ;
  int __cil_tmp81 ;
  unsigned char __cil_tmp82 ;
  int __cil_tmp83 ;
  unsigned char __cil_tmp84 ;
  int __cil_tmp85 ;
  unsigned char __cil_tmp86 ;
  int __cil_tmp87 ;
  unsigned char __cil_tmp88 ;
  int __cil_tmp89 ;
  unsigned char __cil_tmp90 ;
  int __cil_tmp91 ;
  unsigned char __cil_tmp92 ;
  int __cil_tmp93 ;
  unsigned char __cil_tmp94 ;
  int __cil_tmp95 ;
  struct mISDN_sock *__cil_tmp96 ;
  struct mISDNdevice *__cil_tmp97 ;
  struct mISDN_sock *__cil_tmp98 ;
  struct mISDNchannel *__cil_tmp99 ;
  unsigned char __cil_tmp100 ;
  u_int __cil_tmp101 ;
  struct mISDN_sock *__cil_tmp102 ;
  struct mISDNdevice *__cil_tmp103 ;
  struct mISDN_sock *__cil_tmp104 ;
  struct mISDNchannel *__cil_tmp105 ;
  unsigned char __cil_tmp106 ;
  u_int __cil_tmp107 ;
  struct mISDN_sock *__cil_tmp108 ;
  struct mISDNdevice *__cil_tmp109 ;
  struct mISDN_sock *__cil_tmp110 ;
  struct mISDNchannel *__cil_tmp111 ;
  unsigned char __cil_tmp112 ;
  u_int __cil_tmp113 ;
  struct mISDN_sock *__cil_tmp114 ;
  unsigned char __cil_tmp115 ;

  {
  maddr = (struct sockaddr_mISDN *)addr;
  sk = sock->sk;
  err = 0;
  {
  __cil_tmp13 = *debug___0;
  __cil_tmp14 = __cil_tmp13 & 4U;
  if (__cil_tmp14 != 0U) {
    {
    printk("<7>%s(%p) sk=%p\n", "data_sock_bind", sock, sk);
    }
  } else {

  }
  }
  if (addr_len != 6) {
    return (-22);
  } else {

  }
  {
  __cil_tmp15 = (struct sockaddr_mISDN *)0;
  __cil_tmp16 = (unsigned long )__cil_tmp15;
  __cil_tmp17 = (unsigned long )maddr;
  if (__cil_tmp17 == __cil_tmp16) {
    return (-22);
  } else {
    {
    __cil_tmp18 = maddr->family;
    __cil_tmp19 = (unsigned int )__cil_tmp18;
    if (__cil_tmp19 != 34U) {
      return (-22);
    } else {

    }
    }
  }
  }
  {
  lock_sock(sk);
  }
  {
  __cil_tmp20 = (struct mISDNdevice *)0;
  __cil_tmp21 = (unsigned long )__cil_tmp20;
  __cil_tmp22 = (struct mISDN_sock *)sk;
  __cil_tmp23 = __cil_tmp22->dev;
  __cil_tmp24 = (unsigned long )__cil_tmp23;
  if (__cil_tmp24 != __cil_tmp21) {
    err = -114;
    goto done;
  } else {

  }
  }
  {
  __cil_tmp25 = (struct mISDN_sock *)sk;
  __cil_tmp26 = maddr->dev;
  __cil_tmp27 = (u_int )__cil_tmp26;
  __cil_tmp25->dev = get_mdevice(__cil_tmp27);
  }
  {
  __cil_tmp28 = (struct mISDNdevice *)0;
  __cil_tmp29 = (unsigned long )__cil_tmp28;
  __cil_tmp30 = (struct mISDN_sock *)sk;
  __cil_tmp31 = __cil_tmp30->dev;
  __cil_tmp32 = (unsigned long )__cil_tmp31;
  if (__cil_tmp32 == __cil_tmp29) {
    err = -19;
    goto done;
  } else {

  }
  }
  {
  __cil_tmp33 = sk->sk_protocol;
  __cil_tmp34 = (unsigned int )__cil_tmp33;
  if (__cil_tmp34 <= 31U) {
    {
    __cil_tmp35 = & data_sockets.lock;
    _raw_read_lock_bh(__cil_tmp35);
    node = data_sockets.head.first;
    }
    goto ldv_38609;
    ldv_38608: ;
    {
    __cil_tmp36 = (unsigned long )csk;
    __cil_tmp37 = (unsigned long )sk;
    if (__cil_tmp37 == __cil_tmp36) {
      goto ldv_38607;
    } else {

    }
    }
    {
    __cil_tmp38 = (struct mISDN_sock *)sk;
    __cil_tmp39 = __cil_tmp38->dev;
    __cil_tmp40 = (unsigned long )__cil_tmp39;
    __cil_tmp41 = (struct mISDN_sock *)csk;
    __cil_tmp42 = __cil_tmp41->dev;
    __cil_tmp43 = (unsigned long )__cil_tmp42;
    if (__cil_tmp43 != __cil_tmp40) {
      goto ldv_38607;
    } else {

    }
    }
    {
    __cil_tmp44 = csk->sk_protocol;
    __cil_tmp45 = (unsigned int )__cil_tmp44;
    if (__cil_tmp45 > 31U) {
      goto ldv_38607;
    } else {

    }
    }
    {
    __cil_tmp46 = csk->sk_protocol;
    __cil_tmp47 = (unsigned int )__cil_tmp46;
    if (__cil_tmp47 == 1U) {
      tmp = 1;
    } else {
      {
      __cil_tmp48 = csk->sk_protocol;
      __cil_tmp49 = (unsigned int )__cil_tmp48;
      if (__cil_tmp49 == 3U) {
        tmp = 1;
      } else {
        {
        __cil_tmp50 = csk->sk_protocol;
        __cil_tmp51 = (unsigned int )__cil_tmp50;
        if (__cil_tmp51 == 5U) {
          tmp = 1;
        } else {
          {
          __cil_tmp52 = csk->sk_protocol;
          __cil_tmp53 = (unsigned int )__cil_tmp52;
          if (__cil_tmp53 == 16U) {
            tmp = 1;
          } else {
            tmp = 0;
          }
          }
        }
        }
      }
      }
    }
    }
    if ((_Bool )tmp) {
      tmp___0 = 0;
    } else {
      tmp___0 = 1;
    }
    {
    __cil_tmp54 = sk->sk_protocol;
    __cil_tmp55 = (unsigned int )__cil_tmp54;
    if (__cil_tmp55 == 1U) {
      tmp___1 = 1;
    } else {
      {
      __cil_tmp56 = sk->sk_protocol;
      __cil_tmp57 = (unsigned int )__cil_tmp56;
      if (__cil_tmp57 == 3U) {
        tmp___1 = 1;
      } else {
        {
        __cil_tmp58 = sk->sk_protocol;
        __cil_tmp59 = (unsigned int )__cil_tmp58;
        if (__cil_tmp59 == 5U) {
          tmp___1 = 1;
        } else {
          {
          __cil_tmp60 = sk->sk_protocol;
          __cil_tmp61 = (unsigned int )__cil_tmp60;
          if (__cil_tmp61 == 16U) {
            tmp___1 = 1;
          } else {
            tmp___1 = 0;
          }
          }
        }
        }
      }
      }
    }
    }
    {
    __cil_tmp62 = (_Bool )tmp___1;
    __cil_tmp63 = (int )__cil_tmp62;
    if (tmp___0 ^ __cil_tmp63) {
      goto ldv_38607;
    } else {

    }
    }
    {
    __cil_tmp64 = & data_sockets.lock;
    _raw_read_unlock_bh(__cil_tmp64);
    err = -16;
    }
    goto done;
    ldv_38607:
    node = node->next;
    ldv_38609: ;
    {
    __cil_tmp65 = (struct hlist_node *)0;
    __cil_tmp66 = (unsigned long )__cil_tmp65;
    __cil_tmp67 = (unsigned long )node;
    if (__cil_tmp67 != __cil_tmp66) {
      __mptr = (struct hlist_node const *)node;
      __cil_tmp68 = (struct sock *)__mptr;
      csk = __cil_tmp68 + 1152921504606846920UL;
      goto ldv_38608;
    } else {
      goto ldv_38610;
    }
    }
    ldv_38610:
    {
    __cil_tmp69 = & data_sockets.lock;
    _raw_read_unlock_bh(__cil_tmp69);
    }
  } else {

  }
  }
  __cil_tmp70 = (struct mISDN_sock *)sk;
  __cil_tmp70->ch.send = & mISDN_send;
  __cil_tmp71 = (struct mISDN_sock *)sk;
  __cil_tmp71->ch.ctrl = & mISDN_ctrl;
  {
  __cil_tmp72 = sk->sk_protocol;
  __cil_tmp73 = (int )__cil_tmp72;
  if (__cil_tmp73 == 1) {
    goto case_1;
  } else {
    {
    __cil_tmp74 = sk->sk_protocol;
    __cil_tmp75 = (int )__cil_tmp74;
    if (__cil_tmp75 == 2) {
      goto case_2;
    } else {
      {
      __cil_tmp76 = sk->sk_protocol;
      __cil_tmp77 = (int )__cil_tmp76;
      if (__cil_tmp77 == 3) {
        goto case_3;
      } else {
        {
        __cil_tmp78 = sk->sk_protocol;
        __cil_tmp79 = (int )__cil_tmp78;
        if (__cil_tmp79 == 4) {
          goto case_4;
        } else {
          {
          __cil_tmp80 = sk->sk_protocol;
          __cil_tmp81 = (int )__cil_tmp80;
          if (__cil_tmp81 == 16) {
            goto case_16;
          } else {
            {
            __cil_tmp82 = sk->sk_protocol;
            __cil_tmp83 = (int )__cil_tmp82;
            if (__cil_tmp83 == 17) {
              goto case_17;
            } else {
              {
              __cil_tmp84 = sk->sk_protocol;
              __cil_tmp85 = (int )__cil_tmp84;
              if (__cil_tmp85 == 33) {
                goto case_33;
              } else {
                {
                __cil_tmp86 = sk->sk_protocol;
                __cil_tmp87 = (int )__cil_tmp86;
                if (__cil_tmp87 == 34) {
                  goto case_34;
                } else {
                  {
                  __cil_tmp88 = sk->sk_protocol;
                  __cil_tmp89 = (int )__cil_tmp88;
                  if (__cil_tmp89 == 35) {
                    goto case_35;
                  } else {
                    {
                    __cil_tmp90 = sk->sk_protocol;
                    __cil_tmp91 = (int )__cil_tmp90;
                    if (__cil_tmp91 == 36) {
                      goto case_36;
                    } else {
                      {
                      __cil_tmp92 = sk->sk_protocol;
                      __cil_tmp93 = (int )__cil_tmp92;
                      if (__cil_tmp93 == 37) {
                        goto case_37;
                      } else {
                        {
                        __cil_tmp94 = sk->sk_protocol;
                        __cil_tmp95 = (int )__cil_tmp94;
                        if (__cil_tmp95 == 38) {
                          goto case_38;
                        } else {
                          goto switch_default;
                          if (0) {
                            case_1: ;
                            case_2: ;
                            case_3: ;
                            case_4:
                            {
                            mISDN_sock_unlink(& data_sockets, sk);
                            __cil_tmp96 = (struct mISDN_sock *)sk;
                            __cil_tmp97 = __cil_tmp96->dev;
                            __cil_tmp98 = (struct mISDN_sock *)sk;
                            __cil_tmp99 = & __cil_tmp98->ch;
                            __cil_tmp100 = sk->sk_protocol;
                            __cil_tmp101 = (u_int )__cil_tmp100;
                            err = connect_layer1(__cil_tmp97, __cil_tmp99, __cil_tmp101,
                                                 maddr);
                            }
                            if (err != 0) {
                              {
                              mISDN_sock_link(& data_sockets, sk);
                              }
                            } else {

                            }
                            goto ldv_38615;
                            case_16: ;
                            case_17:
                            {
                            __cil_tmp102 = (struct mISDN_sock *)sk;
                            __cil_tmp103 = __cil_tmp102->dev;
                            __cil_tmp104 = (struct mISDN_sock *)sk;
                            __cil_tmp105 = & __cil_tmp104->ch;
                            __cil_tmp106 = sk->sk_protocol;
                            __cil_tmp107 = (u_int )__cil_tmp106;
                            err = create_l2entity(__cil_tmp103, __cil_tmp105, __cil_tmp107,
                                                  maddr);
                            }
                            goto ldv_38615;
                            case_33: ;
                            case_34: ;
                            case_35: ;
                            case_36: ;
                            case_37: ;
                            case_38:
                            {
                            __cil_tmp108 = (struct mISDN_sock *)sk;
                            __cil_tmp109 = __cil_tmp108->dev;
                            __cil_tmp110 = (struct mISDN_sock *)sk;
                            __cil_tmp111 = & __cil_tmp110->ch;
                            __cil_tmp112 = sk->sk_protocol;
                            __cil_tmp113 = (u_int )__cil_tmp112;
                            err = connect_Bstack(__cil_tmp109, __cil_tmp111, __cil_tmp113,
                                                 maddr);
                            }
                            goto ldv_38615;
                            switch_default:
                            err = -93;
                          } else {

                          }
                        }
                        }
                      }
                      }
                    }
                    }
                  }
                  }
                }
                }
              }
              }
            }
            }
          }
          }
        }
        }
      }
      }
    }
    }
  }
  }
  ldv_38615: ;
  if (err != 0) {
    goto done;
  } else {

  }
  sk->__sk_common.skc_state = (unsigned char volatile )2U;
  __cil_tmp114 = (struct mISDN_sock *)sk;
  __cil_tmp115 = sk->sk_protocol;
  __cil_tmp114->ch.protocol = (u_int )__cil_tmp115;
  done:
  {
  release_sock(sk);
  }
  return (err);
}
}
static int data_sock_getname(struct socket *sock , struct sockaddr *addr , int *addr_len ,
                             int peer )
{ struct sockaddr_mISDN *maddr ;
  struct sock *sk ;
  struct mISDNdevice *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  struct mISDN_sock *__cil_tmp9 ;
  struct mISDNdevice *__cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  struct mISDN_sock *__cil_tmp12 ;
  struct mISDNdevice *__cil_tmp13 ;
  u_int __cil_tmp14 ;
  struct mISDN_sock *__cil_tmp15 ;
  u_int __cil_tmp16 ;
  struct mISDN_sock *__cil_tmp17 ;
  u_int __cil_tmp18 ;
  struct mISDN_sock *__cil_tmp19 ;
  u_int __cil_tmp20 ;
  u_int __cil_tmp21 ;

  {
  maddr = (struct sockaddr_mISDN *)addr;
  sk = sock->sk;
  {
  __cil_tmp7 = (struct mISDNdevice *)0;
  __cil_tmp8 = (unsigned long )__cil_tmp7;
  __cil_tmp9 = (struct mISDN_sock *)sk;
  __cil_tmp10 = __cil_tmp9->dev;
  __cil_tmp11 = (unsigned long )__cil_tmp10;
  if (__cil_tmp11 == __cil_tmp8) {
    return (-77);
  } else {

  }
  }
  {
  lock_sock(sk);
  *addr_len = 6;
  __cil_tmp12 = (struct mISDN_sock *)sk;
  __cil_tmp13 = __cil_tmp12->dev;
  __cil_tmp14 = __cil_tmp13->id;
  maddr->dev = (unsigned char )__cil_tmp14;
  __cil_tmp15 = (struct mISDN_sock *)sk;
  __cil_tmp16 = __cil_tmp15->ch.nr;
  maddr->channel = (unsigned char )__cil_tmp16;
  __cil_tmp17 = (struct mISDN_sock *)sk;
  __cil_tmp18 = __cil_tmp17->ch.addr;
  maddr->sapi = (unsigned char )__cil_tmp18;
  __cil_tmp19 = (struct mISDN_sock *)sk;
  __cil_tmp20 = __cil_tmp19->ch.addr;
  __cil_tmp21 = __cil_tmp20 >> 8;
  maddr->tei = (unsigned char )__cil_tmp21;
  release_sock(sk);
  }
  return (0);
}
}
static struct proto_ops const data_sock_ops =
     {34, & __this_module, & data_sock_release, & data_sock_bind, & sock_no_connect,
    & sock_no_socketpair, & sock_no_accept, & data_sock_getname, & datagram_poll,
    & data_sock_ioctl, (int (*)(struct socket * , unsigned int , unsigned long ))0,
    & sock_no_listen, & sock_no_shutdown, & data_sock_setsockopt, & data_sock_getsockopt,
    (int (*)(struct socket * , int , int , char * , unsigned int ))0, (int (*)(struct socket * ,
                                                                                  int ,
                                                                                  int ,
                                                                                  char * ,
                                                                                  int * ))0,
    & mISDN_sock_sendmsg, & mISDN_sock_recvmsg, & sock_no_mmap, (ssize_t (*)(struct socket * ,
                                                                             struct page * ,
                                                                             int ,
                                                                             size_t ,
                                                                             int ))0,
    (ssize_t (*)(struct socket * , loff_t * , struct pipe_inode_info * , size_t ,
                 unsigned int ))0};
static int data_sock_create(struct net *net , struct socket *sock , int protocol )
{ struct sock *sk ;
  short __cil_tmp5 ;
  int __cil_tmp6 ;
  struct sock *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  enum sock_flags __cil_tmp10 ;

  {
  {
  __cil_tmp5 = sock->type;
  __cil_tmp6 = (int )__cil_tmp5;
  if (__cil_tmp6 != 2) {
    return (-94);
  } else {

  }
  }
  {
  sk = sk_alloc(net, 34, 208U, & mISDN_proto);
  }
  {
  __cil_tmp7 = (struct sock *)0;
  __cil_tmp8 = (unsigned long )__cil_tmp7;
  __cil_tmp9 = (unsigned long )sk;
  if (__cil_tmp9 == __cil_tmp8) {
    return (-12);
  } else {

  }
  }
  {
  sock_init_data(sock, sk);
  sock->ops = & data_sock_ops;
  sock->state = (socket_state )1;
  __cil_tmp10 = (enum sock_flags )8;
  sock_reset_flag(sk, __cil_tmp10);
  sk->sk_protocol = (unsigned char )protocol;
  sk->__sk_common.skc_state = (unsigned char volatile )1U;
  mISDN_sock_link(& data_sockets, sk);
  }
  return (0);
}
}
static int base_sock_release(struct socket *sock )
{ struct sock *sk ;
  struct sock *__cil_tmp3 ;
  unsigned long __cil_tmp4 ;
  unsigned long __cil_tmp5 ;

  {
  {
  sk = sock->sk;
  printk("<7>%s(%p) sk=%p\n", "base_sock_release", sock, sk);
  }
  {
  __cil_tmp3 = (struct sock *)0;
  __cil_tmp4 = (unsigned long )__cil_tmp3;
  __cil_tmp5 = (unsigned long )sk;
  if (__cil_tmp5 == __cil_tmp4) {
    return (0);
  } else {

  }
  }
  {
  mISDN_sock_unlink(& base_sockets, sk);
  sock_orphan(sk);
  sock_put(sk);
  }
  return (0);
}
}
static int base_sock_ioctl(struct socket *sock , unsigned int cmd , unsigned long arg )
{ int err ;
  int id ;
  struct mISDNdevice *dev ;
  struct mISDNversion ver ;
  int tmp ;
  int __ret_pu ;
  int __pu_val ;
  int __ret_gu ;
  unsigned long __val_gu ;
  struct mISDN_devinfo di ;
  u_int tmp___0 ;
  size_t __len ;
  void *__ret ;
  char const *tmp___1 ;
  int tmp___2 ;
  struct mISDN_devrename dn ;
  unsigned long tmp___3 ;
  int __cil_tmp21 ;
  int __cil_tmp22 ;
  int __cil_tmp23 ;
  int __cil_tmp24 ;
  void *__cil_tmp25 ;
  void const *__cil_tmp26 ;
  u_int __cil_tmp27 ;
  struct mISDNdevice *__cil_tmp28 ;
  unsigned long __cil_tmp29 ;
  unsigned long __cil_tmp30 ;
  void *__cil_tmp31 ;
  u_int __cil_tmp32 ;
  u_char (*__cil_tmp33)[16U] ;
  void *__cil_tmp34 ;
  u_char (*__cil_tmp35)[16U] ;
  void const *__cil_tmp36 ;
  u_char (*__cil_tmp37)[16U] ;
  void *__cil_tmp38 ;
  u_char (*__cil_tmp39)[16U] ;
  void const *__cil_tmp40 ;
  struct device *__cil_tmp41 ;
  struct device const *__cil_tmp42 ;
  char (*__cil_tmp43)[20U] ;
  char *__cil_tmp44 ;
  void *__cil_tmp45 ;
  void const *__cil_tmp46 ;
  void *__cil_tmp47 ;
  void const *__cil_tmp48 ;
  struct mISDNdevice *__cil_tmp49 ;
  unsigned long __cil_tmp50 ;
  unsigned long __cil_tmp51 ;
  struct device *__cil_tmp52 ;
  char (*__cil_tmp53)[20U] ;
  char const *__cil_tmp54 ;

  {
  err = 0;
  {
  __cil_tmp21 = (int )cmd;
  if (__cil_tmp21 == -2147202750) {
    goto case_neg_2147202750;
  } else {
    {
    __cil_tmp22 = (int )cmd;
    if (__cil_tmp22 == -2147202749) {
      goto case_neg_2147202749;
    } else {
      {
      __cil_tmp23 = (int )cmd;
      if (__cil_tmp23 == -2147202748) {
        goto case_neg_2147202748;
      } else {
        {
        __cil_tmp24 = (int )cmd;
        if (__cil_tmp24 == -2145892025) {
          goto case_neg_2145892025;
        } else {
          goto switch_default___1;
          if (0) {
            case_neg_2147202750:
            {
            ver.major = (unsigned char)1;
            ver.minor = (unsigned char)1;
            ver.release = (unsigned short)21;
            __cil_tmp25 = (void *)arg;
            __cil_tmp26 = (void const *)(& ver);
            tmp = copy_to_user(__cil_tmp25, __cil_tmp26, 4U);
            }
            if (tmp != 0) {
              err = -14;
            } else {

            }
            goto ldv_38655;
            case_neg_2147202749:
            {
            id = get_mdevice_count();
            might_fault();
            __pu_val = id;
            }
            if (1) {
              goto case_4;
            } else {
              goto switch_default;
              if (0) {
                __asm__ volatile ("call __put_user_1": "=a" (__ret_pu): "0" (__pu_val),
                                     "c" ((int *)arg): "ebx");
                goto ldv_38660;
                __asm__ volatile ("call __put_user_2": "=a" (__ret_pu): "0" (__pu_val),
                                     "c" ((int *)arg): "ebx");
                goto ldv_38660;
                case_4:
                __asm__ volatile ("call __put_user_4": "=a" (__ret_pu): "0" (__pu_val),
                                     "c" ((int *)arg): "ebx");
                goto ldv_38660;
                __asm__ volatile ("call __put_user_8": "=a" (__ret_pu): "0" (__pu_val),
                                     "c" ((int *)arg): "ebx");
                goto ldv_38660;
                switch_default:
                __asm__ volatile ("call __put_user_X": "=a" (__ret_pu): "0" (__pu_val),
                                     "c" ((int *)arg): "ebx");
                goto ldv_38660;
              } else {

              }
            }
            ldv_38660: ;
            if (__ret_pu != 0) {
              err = -14;
            } else {

            }
            goto ldv_38655;
            case_neg_2147202748:
            {
            might_fault();
            }
            if (1) {
              goto case_4___0;
            } else {
              goto switch_default___0;
              if (0) {
                __asm__ volatile ("call __get_user_1": "=a" (__ret_gu), "=d" (__val_gu): "0" ((int *)arg));
                goto ldv_38670;
                __asm__ volatile ("call __get_user_2": "=a" (__ret_gu), "=d" (__val_gu): "0" ((int *)arg));
                goto ldv_38670;
                case_4___0:
                __asm__ volatile ("call __get_user_4": "=a" (__ret_gu), "=d" (__val_gu): "0" ((int *)arg));
                goto ldv_38670;
                __asm__ volatile ("call __get_user_8": "=a" (__ret_gu), "=d" (__val_gu): "0" ((int *)arg));
                goto ldv_38670;
                switch_default___0:
                __asm__ volatile ("call __get_user_X": "=a" (__ret_gu), "=d" (__val_gu): "0" ((int *)arg));
                goto ldv_38670;
              } else {

              }
            }
            ldv_38670:
            id = (int )__val_gu;
            if (__ret_gu != 0) {
              err = -14;
              goto ldv_38655;
            } else {

            }
            {
            __cil_tmp27 = (u_int )id;
            dev = get_mdevice(__cil_tmp27);
            }
            {
            __cil_tmp28 = (struct mISDNdevice *)0;
            __cil_tmp29 = (unsigned long )__cil_tmp28;
            __cil_tmp30 = (unsigned long )dev;
            if (__cil_tmp30 != __cil_tmp29) {
              {
              __cil_tmp31 = (void *)(& di);
              memset(__cil_tmp31, 0, 56UL);
              di.id = dev->id;
              di.Dprotocols = dev->Dprotocols;
              tmp___0 = get_all_Bprotocols();
              __cil_tmp32 = dev->Bprotocols;
              di.Bprotocols = __cil_tmp32 | tmp___0;
              di.protocol = dev->D.protocol;
              __len = 16UL;
              }
              if (__len > 63UL) {
                {
                __cil_tmp33 = & di.channelmap;
                __cil_tmp34 = (void *)__cil_tmp33;
                __cil_tmp35 = & dev->channelmap;
                __cil_tmp36 = (void const *)__cil_tmp35;
                __ret = __memcpy(__cil_tmp34, __cil_tmp36, __len);
                }
              } else {
                {
                __cil_tmp37 = & di.channelmap;
                __cil_tmp38 = (void *)__cil_tmp37;
                __cil_tmp39 = & dev->channelmap;
                __cil_tmp40 = (void const *)__cil_tmp39;
                __ret = __builtin_memcpy(__cil_tmp38, __cil_tmp40, __len);
                }
              }
              {
              di.nrbchan = dev->nrbchan;
              __cil_tmp41 = & dev->dev;
              __cil_tmp42 = (struct device const *)__cil_tmp41;
              tmp___1 = dev_name(__cil_tmp42);
              __cil_tmp43 = & di.name;
              __cil_tmp44 = (char *)__cil_tmp43;
              strcpy(__cil_tmp44, tmp___1);
              __cil_tmp45 = (void *)arg;
              __cil_tmp46 = (void const *)(& di);
              tmp___2 = copy_to_user(__cil_tmp45, __cil_tmp46, 56U);
              }
              if (tmp___2 != 0) {
                err = -14;
              } else {

              }
            } else {
              err = -19;
            }
            }
            goto ldv_38655;
            case_neg_2145892025:
            {
            __cil_tmp47 = (void *)(& dn);
            __cil_tmp48 = (void const *)arg;
            tmp___3 = copy_from_user(__cil_tmp47, __cil_tmp48, 24UL);
            }
            if (tmp___3 != 0UL) {
              err = -14;
              goto ldv_38655;
            } else {

            }
            {
            dev = get_mdevice(dn.id);
            }
            {
            __cil_tmp49 = (struct mISDNdevice *)0;
            __cil_tmp50 = (unsigned long )__cil_tmp49;
            __cil_tmp51 = (unsigned long )dev;
            if (__cil_tmp51 != __cil_tmp50) {
              {
              __cil_tmp52 = & dev->dev;
              __cil_tmp53 = & dn.name;
              __cil_tmp54 = (char const *)__cil_tmp53;
              err = device_rename(__cil_tmp52, __cil_tmp54);
              }
            } else {
              err = -19;
            }
            }
            goto ldv_38655;
            switch_default___1:
            err = -22;
          } else {

          }
        }
        }
      }
      }
    }
    }
  }
  }
  ldv_38655: ;
  return (err);
}
}
static int base_sock_bind(struct socket *sock , struct sockaddr *addr , int addr_len )
{ struct sockaddr_mISDN *maddr ;
  struct sock *sk ;
  int err ;
  struct sockaddr_mISDN *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  sa_family_t __cil_tmp10 ;
  unsigned int __cil_tmp11 ;
  struct mISDNdevice *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  struct mISDN_sock *__cil_tmp14 ;
  struct mISDNdevice *__cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  struct mISDN_sock *__cil_tmp17 ;
  unsigned char __cil_tmp18 ;
  u_int __cil_tmp19 ;
  struct mISDNdevice *__cil_tmp20 ;
  unsigned long __cil_tmp21 ;
  struct mISDN_sock *__cil_tmp22 ;
  struct mISDNdevice *__cil_tmp23 ;
  unsigned long __cil_tmp24 ;

  {
  maddr = (struct sockaddr_mISDN *)addr;
  sk = sock->sk;
  err = 0;
  {
  __cil_tmp7 = (struct sockaddr_mISDN *)0;
  __cil_tmp8 = (unsigned long )__cil_tmp7;
  __cil_tmp9 = (unsigned long )maddr;
  if (__cil_tmp9 == __cil_tmp8) {
    return (-22);
  } else {
    {
    __cil_tmp10 = maddr->family;
    __cil_tmp11 = (unsigned int )__cil_tmp10;
    if (__cil_tmp11 != 34U) {
      return (-22);
    } else {

    }
    }
  }
  }
  {
  lock_sock(sk);
  }
  {
  __cil_tmp12 = (struct mISDNdevice *)0;
  __cil_tmp13 = (unsigned long )__cil_tmp12;
  __cil_tmp14 = (struct mISDN_sock *)sk;
  __cil_tmp15 = __cil_tmp14->dev;
  __cil_tmp16 = (unsigned long )__cil_tmp15;
  if (__cil_tmp16 != __cil_tmp13) {
    err = -114;
    goto done;
  } else {

  }
  }
  {
  __cil_tmp17 = (struct mISDN_sock *)sk;
  __cil_tmp18 = maddr->dev;
  __cil_tmp19 = (u_int )__cil_tmp18;
  __cil_tmp17->dev = get_mdevice(__cil_tmp19);
  }
  {
  __cil_tmp20 = (struct mISDNdevice *)0;
  __cil_tmp21 = (unsigned long )__cil_tmp20;
  __cil_tmp22 = (struct mISDN_sock *)sk;
  __cil_tmp23 = __cil_tmp22->dev;
  __cil_tmp24 = (unsigned long )__cil_tmp23;
  if (__cil_tmp24 == __cil_tmp21) {
    err = -19;
    goto done;
  } else {

  }
  }
  sk->__sk_common.skc_state = (unsigned char volatile )2U;
  done:
  {
  release_sock(sk);
  }
  return (err);
}
}
static struct proto_ops const base_sock_ops =
     {34, & __this_module, & base_sock_release, & base_sock_bind, & sock_no_connect,
    & sock_no_socketpair, & sock_no_accept, & sock_no_getname, & sock_no_poll, & base_sock_ioctl,
    (int (*)(struct socket * , unsigned int , unsigned long ))0, & sock_no_listen,
    & sock_no_shutdown, & sock_no_setsockopt, & sock_no_getsockopt, (int (*)(struct socket * ,
                                                                             int ,
                                                                             int ,
                                                                             char * ,
                                                                             unsigned int ))0,
    (int (*)(struct socket * , int , int , char * , int * ))0, & sock_no_sendmsg,
    & sock_no_recvmsg, & sock_no_mmap, (ssize_t (*)(struct socket * , struct page * ,
                                                    int , size_t , int ))0, (ssize_t (*)(struct socket * ,
                                                                                            loff_t * ,
                                                                                            struct pipe_inode_info * ,
                                                                                            size_t ,
                                                                                            unsigned int ))0};
static int base_sock_create(struct net *net , struct socket *sock , int protocol )
{ struct sock *sk ;
  short __cil_tmp5 ;
  int __cil_tmp6 ;
  struct sock *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  enum sock_flags __cil_tmp10 ;

  {
  {
  __cil_tmp5 = sock->type;
  __cil_tmp6 = (int )__cil_tmp5;
  if (__cil_tmp6 != 3) {
    return (-94);
  } else {

  }
  }
  {
  sk = sk_alloc(net, 34, 208U, & mISDN_proto);
  }
  {
  __cil_tmp7 = (struct sock *)0;
  __cil_tmp8 = (unsigned long )__cil_tmp7;
  __cil_tmp9 = (unsigned long )sk;
  if (__cil_tmp9 == __cil_tmp8) {
    return (-12);
  } else {

  }
  }
  {
  sock_init_data(sock, sk);
  sock->ops = & base_sock_ops;
  sock->state = (socket_state )1;
  __cil_tmp10 = (enum sock_flags )8;
  sock_reset_flag(sk, __cil_tmp10);
  sk->sk_protocol = (unsigned char )protocol;
  sk->__sk_common.skc_state = (unsigned char volatile )1U;
  mISDN_sock_link(& base_sockets, sk);
  }
  return (0);
}
}
static int mISDN_sock_create(struct net *net , struct socket *sock , int proto , int kern )
{ int err ;

  {
  err = -93;
  if (proto == 0) {
    goto case_0;
  } else
  if (proto == 1) {
    goto case_1;
  } else
  if (proto == 2) {
    goto case_2;
  } else
  if (proto == 3) {
    goto case_3;
  } else
  if (proto == 4) {
    goto case_4;
  } else
  if (proto == 16) {
    goto case_16;
  } else
  if (proto == 17) {
    goto case_17;
  } else
  if (proto == 33) {
    goto case_33;
  } else
  if (proto == 34) {
    goto case_34;
  } else
  if (proto == 35) {
    goto case_35;
  } else
  if (proto == 36) {
    goto case_36;
  } else
  if (proto == 37) {
    goto case_37;
  } else
  if (proto == 38) {
    goto case_38;
  } else {
    goto switch_default;
    if (0) {
      case_0:
      {
      err = base_sock_create(net, sock, proto);
      }
      goto ldv_38707;
      case_1: ;
      case_2: ;
      case_3: ;
      case_4: ;
      case_16: ;
      case_17: ;
      case_33: ;
      case_34: ;
      case_35: ;
      case_36: ;
      case_37: ;
      case_38:
      {
      err = data_sock_create(net, sock, proto);
      }
      goto ldv_38707;
      switch_default: ;
      return (err);
    } else {

    }
  }
  ldv_38707: ;
  return (err);
}
}
static struct net_proto_family const mISDN_sock_family_ops = {34, & mISDN_sock_create, & __this_module};
int misdn_sock_init(u_int *deb )
{ int err ;

  {
  {
  debug___0 = deb;
  err = sock_register(& mISDN_sock_family_ops);
  }
  if (err != 0) {
    {
    printk("<3>%s: error(%d)\n", "misdn_sock_init", err);
    }
  } else {

  }
  return (err);
}
}
void misdn_sock_cleanup(void)
{

  {
  {
  sock_unregister(34);
  }
  return;
}
}
extern char *strncpy(char * , char const * , __kernel_size_t ) ;
extern unsigned long _raw_read_lock_irqsave(rwlock_t * ) ;
extern void _raw_read_unlock_irqrestore(rwlock_t * , unsigned long ) ;
extern void do_gettimeofday(struct timeval * ) ;
struct mISDNclock *mISDN_register_clock(char *name , int pri , clockctl_func_t *ctl ,
                                        void *priv ) ;
void mISDN_unregister_clock(struct mISDNclock *iclock ) ;
void mISDN_clock_update(struct mISDNclock *iclock , int samples , struct timeval *tv ) ;
unsigned short mISDN_clock_get(void) ;
static u_int *debug___1 ;
static struct list_head iclock_list = {& iclock_list, & iclock_list};
static rwlock_t iclock_lock = {{16777216U}, 3736018669U, 4294967295U, (void *)1152921504606846975UL, {(struct lock_class_key *)0,
                                                                           {(struct lock_class *)0,
                                                                            (struct lock_class *)0},
                                                                           "iclock_lock",
                                                                           0, 0UL}};
static u16 iclock_count ;
static struct timeval iclock_tv ;
static int iclock_tv_valid ;
static struct mISDNclock *iclock_current ;
void mISDN_init_clock(u_int *dp )
{

  {
  {
  debug___1 = dp;
  do_gettimeofday(& iclock_tv);
  }
  return;
}
}
static void select_iclock(void)
{ struct mISDNclock *iclock ;
  struct mISDNclock *bestclock ;
  struct mISDNclock *lastclock ;
  int pri ;
  struct list_head const *__mptr ;
  struct list_head const *__mptr___0 ;
  int __cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  struct list_head *__cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  struct list_head *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  struct mISDNclock *__cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  unsigned long __cil_tmp17 ;
  unsigned long __cil_tmp18 ;
  u_int __cil_tmp19 ;
  unsigned int __cil_tmp20 ;
  char (*__cil_tmp21)[64U] ;
  char *__cil_tmp22 ;
  clockctl_func_t *__cil_tmp23 ;
  void *__cil_tmp24 ;
  struct mISDNclock *__cil_tmp25 ;
  unsigned long __cil_tmp26 ;
  unsigned long __cil_tmp27 ;
  unsigned long __cil_tmp28 ;
  unsigned long __cil_tmp29 ;
  u_int __cil_tmp30 ;
  unsigned int __cil_tmp31 ;
  char (*__cil_tmp32)[64U] ;
  char *__cil_tmp33 ;
  clockctl_func_t *__cil_tmp34 ;
  void *__cil_tmp35 ;
  unsigned long __cil_tmp36 ;
  unsigned long __cil_tmp37 ;

  {
  bestclock = (struct mISDNclock *)0;
  lastclock = (struct mISDNclock *)0;
  pri = -128;
  __mptr = (struct list_head const *)iclock_list.next;
  iclock = (struct mISDNclock *)__mptr;
  goto ldv_38387;
  ldv_38386: ;
  {
  __cil_tmp7 = iclock->pri;
  if (__cil_tmp7 > pri) {
    pri = iclock->pri;
    bestclock = iclock;
  } else {

  }
  }
  {
  __cil_tmp8 = (unsigned long )iclock;
  __cil_tmp9 = (unsigned long )iclock_current;
  if (__cil_tmp9 == __cil_tmp8) {
    lastclock = iclock;
  } else {

  }
  }
  __cil_tmp10 = iclock->list.next;
  __mptr___0 = (struct list_head const *)__cil_tmp10;
  iclock = (struct mISDNclock *)__mptr___0;
  ldv_38387: ;
  {
  __cil_tmp11 = (unsigned long )(& iclock_list);
  __cil_tmp12 = & iclock->list;
  __cil_tmp13 = (unsigned long )__cil_tmp12;
  if (__cil_tmp13 != __cil_tmp11) {
    goto ldv_38386;
  } else {
    goto ldv_38388;
  }
  }
  ldv_38388: ;
  {
  __cil_tmp14 = (struct mISDNclock *)0;
  __cil_tmp15 = (unsigned long )__cil_tmp14;
  __cil_tmp16 = (unsigned long )lastclock;
  if (__cil_tmp16 != __cil_tmp15) {
    {
    __cil_tmp17 = (unsigned long )lastclock;
    __cil_tmp18 = (unsigned long )bestclock;
    if (__cil_tmp18 != __cil_tmp17) {
      {
      __cil_tmp19 = *debug___1;
      __cil_tmp20 = __cil_tmp19 & 33554432U;
      if (__cil_tmp20 != 0U) {
        {
        __cil_tmp21 = & lastclock->name;
        __cil_tmp22 = (char *)__cil_tmp21;
        printk("<7>Old clock source \'%s\' disable.\n", __cil_tmp22);
        }
      } else {

      }
      }
      {
      __cil_tmp23 = lastclock->ctl;
      __cil_tmp24 = lastclock->priv;
      (*__cil_tmp23)(__cil_tmp24, 0);
      }
    } else {

    }
    }
  } else {

  }
  }
  {
  __cil_tmp25 = (struct mISDNclock *)0;
  __cil_tmp26 = (unsigned long )__cil_tmp25;
  __cil_tmp27 = (unsigned long )bestclock;
  if (__cil_tmp27 != __cil_tmp26) {
    {
    __cil_tmp28 = (unsigned long )iclock_current;
    __cil_tmp29 = (unsigned long )bestclock;
    if (__cil_tmp29 != __cil_tmp28) {
      {
      __cil_tmp30 = *debug___1;
      __cil_tmp31 = __cil_tmp30 & 33554432U;
      if (__cil_tmp31 != 0U) {
        {
        __cil_tmp32 = & bestclock->name;
        __cil_tmp33 = (char *)__cil_tmp32;
        printk("<7>New clock source \'%s\' enable.\n", __cil_tmp33);
        }
      } else {

      }
      }
      {
      __cil_tmp34 = bestclock->ctl;
      __cil_tmp35 = bestclock->priv;
      (*__cil_tmp34)(__cil_tmp35, 1);
      }
    } else {

    }
    }
  } else {

  }
  }
  {
  __cil_tmp36 = (unsigned long )iclock_current;
  __cil_tmp37 = (unsigned long )bestclock;
  if (__cil_tmp37 != __cil_tmp36) {
    iclock_tv_valid = 0;
  } else {

  }
  }
  iclock_current = bestclock;
  return;
}
}
struct mISDNclock *mISDN_register_clock(char *name , int pri , clockctl_func_t *ctl ,
                                        void *priv )
{ u_long flags ;
  struct mISDNclock *iclock ;
  void *tmp ;
  u_int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  struct mISDNclock *__cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  unsigned long __cil_tmp12 ;
  char (*__cil_tmp13)[64U] ;
  char *__cil_tmp14 ;
  char const *__cil_tmp15 ;
  struct list_head *__cil_tmp16 ;

  {
  {
  __cil_tmp8 = *debug___1;
  __cil_tmp9 = __cil_tmp8 & 33554687U;
  if (__cil_tmp9 != 0U) {
    {
    printk("<7>%s: %s %d\n", "mISDN_register_clock", name, pri);
    }
  } else {

  }
  }
  {
  tmp = kzalloc(104UL, 32U);
  iclock = (struct mISDNclock *)tmp;
  }
  {
  __cil_tmp10 = (struct mISDNclock *)0;
  __cil_tmp11 = (unsigned long )__cil_tmp10;
  __cil_tmp12 = (unsigned long )iclock;
  if (__cil_tmp12 == __cil_tmp11) {
    {
    printk("<3>%s: No memory for clock entry.\n", "mISDN_register_clock");
    }
    return ((struct mISDNclock *)0);
  } else {

  }
  }
  {
  __cil_tmp13 = & iclock->name;
  __cil_tmp14 = (char *)__cil_tmp13;
  __cil_tmp15 = (char const *)name;
  strncpy(__cil_tmp14, __cil_tmp15, 63UL);
  iclock->pri = pri;
  iclock->priv = priv;
  iclock->ctl = ctl;
  flags = _raw_write_lock_irqsave(& iclock_lock);
  __cil_tmp16 = & iclock->list;
  list_add_tail(__cil_tmp16, & iclock_list);
  select_iclock();
  _raw_write_unlock_irqrestore(& iclock_lock, flags);
  }
  return (iclock);
}
}
void mISDN_unregister_clock(struct mISDNclock *iclock )
{ u_long flags ;
  u_int __cil_tmp3 ;
  unsigned int __cil_tmp4 ;
  char (*__cil_tmp5)[64U] ;
  char *__cil_tmp6 ;
  int __cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  u_int __cil_tmp10 ;
  unsigned int __cil_tmp11 ;
  char (*__cil_tmp12)[64U] ;
  char *__cil_tmp13 ;
  clockctl_func_t *__cil_tmp14 ;
  void *__cil_tmp15 ;
  struct list_head *__cil_tmp16 ;

  {
  {
  __cil_tmp3 = *debug___1;
  __cil_tmp4 = __cil_tmp3 & 33554687U;
  if (__cil_tmp4 != 0U) {
    {
    __cil_tmp5 = & iclock->name;
    __cil_tmp6 = (char *)__cil_tmp5;
    __cil_tmp7 = iclock->pri;
    printk("<7>%s: %s %d\n", "mISDN_unregister_clock", __cil_tmp6, __cil_tmp7);
    }
  } else {

  }
  }
  {
  flags = _raw_write_lock_irqsave(& iclock_lock);
  }
  {
  __cil_tmp8 = (unsigned long )iclock;
  __cil_tmp9 = (unsigned long )iclock_current;
  if (__cil_tmp9 == __cil_tmp8) {
    {
    __cil_tmp10 = *debug___1;
    __cil_tmp11 = __cil_tmp10 & 33554432U;
    if (__cil_tmp11 != 0U) {
      {
      __cil_tmp12 = & iclock->name;
      __cil_tmp13 = (char *)__cil_tmp12;
      printk("<7>Current clock source \'%s\' unregisters.\n", __cil_tmp13);
      }
    } else {

    }
    }
    {
    __cil_tmp14 = iclock->ctl;
    __cil_tmp15 = iclock->priv;
    (*__cil_tmp14)(__cil_tmp15, 0);
    }
  } else {

  }
  }
  {
  __cil_tmp16 = & iclock->list;
  list_del(__cil_tmp16);
  select_iclock();
  _raw_write_unlock_irqrestore(& iclock_lock, flags);
  }
  return;
}
}
void mISDN_clock_update(struct mISDNclock *iclock , int samples , struct timeval *tv )
{ u_long flags ;
  struct timeval tv_now ;
  time_t elapsed_sec ;
  int elapsed_8000th ;
  char *tmp ;
  char *tmp___0 ;
  unsigned long __cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  struct mISDNclock *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  char (*__cil_tmp15)[64U] ;
  char (*__cil_tmp16)[64U] ;
  char *__cil_tmp17 ;
  clockctl_func_t *__cil_tmp18 ;
  void *__cil_tmp19 ;
  int __cil_tmp20 ;
  u16 __cil_tmp21 ;
  int __cil_tmp22 ;
  int __cil_tmp23 ;
  struct timeval *__cil_tmp24 ;
  unsigned long __cil_tmp25 ;
  unsigned long __cil_tmp26 ;
  struct timeval *__cil_tmp27 ;
  unsigned long __cil_tmp28 ;
  unsigned long __cil_tmp29 ;
  __kernel_suseconds_t __cil_tmp30 ;
  unsigned int __cil_tmp31 ;
  __kernel_suseconds_t __cil_tmp32 ;
  unsigned int __cil_tmp33 ;
  unsigned int __cil_tmp34 ;
  unsigned int __cil_tmp35 ;
  u16 __cil_tmp36 ;
  unsigned int __cil_tmp37 ;
  u16 __cil_tmp38 ;
  unsigned int __cil_tmp39 ;
  unsigned int __cil_tmp40 ;
  unsigned int __cil_tmp41 ;
  unsigned int __cil_tmp42 ;
  u_int __cil_tmp43 ;
  unsigned int __cil_tmp44 ;
  struct mISDNclock *__cil_tmp45 ;
  unsigned long __cil_tmp46 ;
  unsigned long __cil_tmp47 ;
  char (*__cil_tmp48)[64U] ;

  {
  {
  flags = _raw_write_lock_irqsave(& iclock_lock);
  }
  {
  __cil_tmp10 = (unsigned long )iclock;
  __cil_tmp11 = (unsigned long )iclock_current;
  if (__cil_tmp11 != __cil_tmp10) {
    {
    __cil_tmp12 = (struct mISDNclock *)0;
    __cil_tmp13 = (unsigned long )__cil_tmp12;
    __cil_tmp14 = (unsigned long )iclock_current;
    if (__cil_tmp14 != __cil_tmp13) {
      __cil_tmp15 = & iclock_current->name;
      tmp = (char *)__cil_tmp15;
    } else {
      tmp = (char *)"nothing";
    }
    }
    {
    __cil_tmp16 = & iclock->name;
    __cil_tmp17 = (char *)__cil_tmp16;
    printk("<3>%s: \'%s\' sends us clock updates, but we do listen to \'%s\'. This is a bug!\n",
           "mISDN_clock_update", __cil_tmp17, tmp);
    __cil_tmp18 = iclock->ctl;
    __cil_tmp19 = iclock->priv;
    (*__cil_tmp18)(__cil_tmp19, 0);
    _raw_write_unlock_irqrestore(& iclock_lock, flags);
    }
    return;
  } else {

  }
  }
  if (iclock_tv_valid != 0) {
    __cil_tmp20 = (int )iclock_count;
    __cil_tmp21 = (u16 )samples;
    __cil_tmp22 = (int )__cil_tmp21;
    __cil_tmp23 = __cil_tmp22 + __cil_tmp20;
    iclock_count = (u16 )__cil_tmp23;
    {
    __cil_tmp24 = (struct timeval *)0;
    __cil_tmp25 = (unsigned long )__cil_tmp24;
    __cil_tmp26 = (unsigned long )tv;
    if (__cil_tmp26 != __cil_tmp25) {
      iclock_tv.tv_sec = tv->tv_sec;
      iclock_tv.tv_usec = tv->tv_usec;
    } else {
      {
      do_gettimeofday(& iclock_tv);
      }
    }
    }
  } else {
    {
    __cil_tmp27 = (struct timeval *)0;
    __cil_tmp28 = (unsigned long )__cil_tmp27;
    __cil_tmp29 = (unsigned long )tv;
    if (__cil_tmp29 != __cil_tmp28) {
      tv_now.tv_sec = tv->tv_sec;
      tv_now.tv_usec = tv->tv_usec;
    } else {
      {
      do_gettimeofday(& tv_now);
      }
    }
    }
    elapsed_sec = tv_now.tv_sec - iclock_tv.tv_sec;
    __cil_tmp30 = iclock_tv.tv_usec / 125L;
    __cil_tmp31 = (unsigned int )__cil_tmp30;
    __cil_tmp32 = tv_now.tv_usec / 125L;
    __cil_tmp33 = (unsigned int )__cil_tmp32;
    __cil_tmp34 = __cil_tmp33 - __cil_tmp31;
    elapsed_8000th = (int )__cil_tmp34;
    if (elapsed_8000th < 0) {
      elapsed_sec = elapsed_sec + -1L;
      elapsed_8000th = elapsed_8000th + 8000;
    } else {

    }
    __cil_tmp35 = (unsigned int )iclock_count;
    __cil_tmp36 = (u16 )elapsed_8000th;
    __cil_tmp37 = (unsigned int )__cil_tmp36;
    __cil_tmp38 = (u16 )elapsed_sec;
    __cil_tmp39 = (unsigned int )__cil_tmp38;
    __cil_tmp40 = __cil_tmp39 * 8000U;
    __cil_tmp41 = __cil_tmp40 + __cil_tmp37;
    __cil_tmp42 = __cil_tmp41 + __cil_tmp35;
    iclock_count = (u16 )__cil_tmp42;
    iclock_tv.tv_sec = tv_now.tv_sec;
    iclock_tv.tv_usec = tv_now.tv_usec;
    iclock_tv_valid = 1;
    {
    __cil_tmp43 = *debug___1;
    __cil_tmp44 = __cil_tmp43 & 33554432U;
    if (__cil_tmp44 != 0U) {
      {
      __cil_tmp45 = (struct mISDNclock *)0;
      __cil_tmp46 = (unsigned long )__cil_tmp45;
      __cil_tmp47 = (unsigned long )iclock_current;
      if (__cil_tmp47 != __cil_tmp46) {
        __cil_tmp48 = & iclock_current->name;
        tmp___0 = (char *)__cil_tmp48;
      } else {
        tmp___0 = (char *)"nothing";
      }
      }
      {
      printk("Received first clock from source \'%s\'.\n", tmp___0);
      }
    } else {

    }
    }
  }
  {
  _raw_write_unlock_irqrestore(& iclock_lock, flags);
  }
  return;
}
}
unsigned short mISDN_clock_get(void)
{ u_long flags ;
  struct timeval tv_now ;
  time_t elapsed_sec ;
  int elapsed_8000th ;
  u16 count ;
  __kernel_suseconds_t __cil_tmp6 ;
  unsigned int __cil_tmp7 ;
  __kernel_suseconds_t __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  u16 __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  u16 __cil_tmp14 ;
  unsigned int __cil_tmp15 ;
  unsigned int __cil_tmp16 ;
  unsigned int __cil_tmp17 ;
  unsigned int __cil_tmp18 ;

  {
  {
  flags = _raw_read_lock_irqsave(& iclock_lock);
  do_gettimeofday(& tv_now);
  elapsed_sec = tv_now.tv_sec - iclock_tv.tv_sec;
  __cil_tmp6 = iclock_tv.tv_usec / 125L;
  __cil_tmp7 = (unsigned int )__cil_tmp6;
  __cil_tmp8 = tv_now.tv_usec / 125L;
  __cil_tmp9 = (unsigned int )__cil_tmp8;
  __cil_tmp10 = __cil_tmp9 - __cil_tmp7;
  elapsed_8000th = (int )__cil_tmp10;
  }
  if (elapsed_8000th < 0) {
    elapsed_sec = elapsed_sec + -1L;
    elapsed_8000th = elapsed_8000th + 8000;
  } else {

  }
  {
  __cil_tmp11 = (u16 )elapsed_8000th;
  __cil_tmp12 = (unsigned int )__cil_tmp11;
  __cil_tmp13 = (unsigned int )iclock_count;
  __cil_tmp14 = (u16 )elapsed_sec;
  __cil_tmp15 = (unsigned int )__cil_tmp14;
  __cil_tmp16 = __cil_tmp15 * 8000U;
  __cil_tmp17 = __cil_tmp16 + __cil_tmp13;
  __cil_tmp18 = __cil_tmp17 + __cil_tmp12;
  count = (u16 )__cil_tmp18;
  _raw_read_unlock_irqrestore(& iclock_lock, flags);
  }
  return (count);
}
}
__inline static void INIT_LIST_HEAD(struct list_head *list )
{

  {
  list->next = list;
  list->prev = list;
  return;
}
}
__inline static int constant_test_bit(unsigned int nr , unsigned long const volatile *addr )
{ int __cil_tmp3 ;
  int __cil_tmp4 ;
  unsigned int __cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  unsigned long const volatile *__cil_tmp7 ;
  unsigned long volatile __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  int __cil_tmp11 ;

  {
  {
  __cil_tmp3 = (int )nr;
  __cil_tmp4 = __cil_tmp3 & 63;
  __cil_tmp5 = nr / 64U;
  __cil_tmp6 = (unsigned long )__cil_tmp5;
  __cil_tmp7 = addr + __cil_tmp6;
  __cil_tmp8 = *__cil_tmp7;
  __cil_tmp9 = (unsigned long )__cil_tmp8;
  __cil_tmp10 = __cil_tmp9 >> __cil_tmp4;
  __cil_tmp11 = (int )__cil_tmp10;
  return (__cil_tmp11 & 1);
  }
}
}
extern void lockdep_init_map(struct lockdep_map * , char const * , struct lock_class_key * ,
                             int ) ;
extern void __raw_spin_lock_init(raw_spinlock_t * , char const * , struct lock_class_key * ) ;
__inline static raw_spinlock_t *spinlock_check(spinlock_t *lock )
{

  {
  return (& lock->ldv_6060.rlock);
}
}
extern void __init_work(struct work_struct * , int ) ;
extern int schedule_work(struct work_struct * ) ;
extern bool flush_work_sync(struct work_struct * ) ;
extern void consume_skb(struct sk_buff * ) ;
__inline static void __skb_queue_head_init(struct sk_buff_head *list )
{ struct sk_buff *tmp ;

  {
  tmp = (struct sk_buff *)list;
  list->next = tmp;
  list->prev = tmp;
  list->qlen = 0U;
  return;
}
}
__inline static void skb_queue_head_init(struct sk_buff_head *list )
{ struct lock_class_key __key ;
  spinlock_t *__cil_tmp3 ;
  struct raw_spinlock *__cil_tmp4 ;

  {
  {
  __cil_tmp3 = & list->lock;
  spinlock_check(__cil_tmp3);
  __cil_tmp4 = & list->lock.ldv_6060.rlock;
  __raw_spin_lock_init(__cil_tmp4, "&(&list->lock)->rlock", & __key);
  __skb_queue_head_init(list);
  }
  return;
}
}
extern void skb_queue_tail(struct sk_buff_head * , struct sk_buff * ) ;
extern struct sk_buff *skb_dequeue(struct sk_buff_head * ) ;
__inline static struct sk_buff *mI_alloc_skb(unsigned int len , gfp_t gfp_mask )
{ struct sk_buff *skb ;
  long tmp ;
  unsigned int __cil_tmp5 ;
  struct sk_buff *__cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  int __cil_tmp9 ;
  long __cil_tmp10 ;

  {
  {
  __cil_tmp5 = len + 8U;
  skb = alloc_skb(__cil_tmp5, gfp_mask);
  __cil_tmp6 = (struct sk_buff *)0;
  __cil_tmp7 = (unsigned long )__cil_tmp6;
  __cil_tmp8 = (unsigned long )skb;
  __cil_tmp9 = __cil_tmp8 != __cil_tmp7;
  __cil_tmp10 = (long )__cil_tmp9;
  tmp = __builtin_expect(__cil_tmp10, 1L);
  }
  if (tmp != 0L) {
    {
    skb_reserve(skb, 8);
    }
  } else {

  }
  return (skb);
}
}
__inline static struct sk_buff *_alloc_mISDN_skb(u_int prim , u_int id , u_int len ,
                                                 void *dp , gfp_t gfp_mask )
{ struct sk_buff *skb ;
  struct sk_buff *tmp ;
  struct mISDNhead *hh ;
  size_t __len ;
  void *__ret ;
  unsigned char *tmp___1 ;
  struct sk_buff *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  void *__cil_tmp15 ;
  void const *__cil_tmp16 ;
  char (*__cil_tmp17)[48U] ;

  {
  {
  tmp = mI_alloc_skb(len, gfp_mask);
  skb = tmp;
  }
  {
  __cil_tmp12 = (struct sk_buff *)0;
  __cil_tmp13 = (unsigned long )__cil_tmp12;
  __cil_tmp14 = (unsigned long )skb;
  if (__cil_tmp14 == __cil_tmp13) {
    return ((struct sk_buff *)0);
  } else {

  }
  }
  if (len != 0U) {
    {
    __len = (size_t )len;
    tmp___1 = skb_put(skb, len);
    __cil_tmp15 = (void *)tmp___1;
    __cil_tmp16 = (void const *)dp;
    __ret = __builtin_memcpy(__cil_tmp15, __cil_tmp16, __len);
    }
  } else {

  }
  __cil_tmp17 = & skb->cb;
  hh = (struct mISDNhead *)__cil_tmp17;
  hh->prim = prim;
  hh->id = id;
  return (skb);
}
}
__inline static void _queue_data(struct mISDNchannel *ch , u_int prim , u_int id ,
                                 u_int len , void *dp , gfp_t gfp_mask )
{ struct sk_buff *skb ;
  int tmp ;
  struct mISDNchannel *__cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  struct mISDNchannel *__cil_tmp11 ;
  unsigned long __cil_tmp12 ;
  struct sk_buff *__cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  send_func_t *__cil_tmp16 ;
  struct mISDNchannel *__cil_tmp17 ;

  {
  {
  __cil_tmp9 = (struct mISDNchannel *)0;
  __cil_tmp10 = (unsigned long )__cil_tmp9;
  __cil_tmp11 = ch->peer;
  __cil_tmp12 = (unsigned long )__cil_tmp11;
  if (__cil_tmp12 == __cil_tmp10) {
    return;
  } else {

  }
  }
  {
  skb = _alloc_mISDN_skb(prim, id, len, dp, gfp_mask);
  }
  {
  __cil_tmp13 = (struct sk_buff *)0;
  __cil_tmp14 = (unsigned long )__cil_tmp13;
  __cil_tmp15 = (unsigned long )skb;
  if (__cil_tmp15 == __cil_tmp14) {
    return;
  } else {

  }
  }
  {
  __cil_tmp16 = ch->recv;
  __cil_tmp17 = ch->peer;
  tmp = (*__cil_tmp16)(__cil_tmp17, skb);
  }
  if (tmp != 0) {
    {
    consume_skb(skb);
    }
  } else {

  }
  return;
}
}
int mISDN_initdchannel(struct dchannel *ch , int maxlen , void *phf ) ;
int mISDN_initbchannel(struct bchannel *ch , int maxlen ) ;
int mISDN_freedchannel(struct dchannel *ch ) ;
void mISDN_clear_bchannel(struct bchannel *ch ) ;
int mISDN_freebchannel(struct bchannel *ch ) ;
void queue_ch_frame(struct mISDNchannel *ch , u_int pr , int id , struct sk_buff *skb ) ;
int dchannel_senddata(struct dchannel *ch , struct sk_buff *skb ) ;
int bchannel_senddata(struct bchannel *ch , struct sk_buff *skb ) ;
void recv_Dchannel(struct dchannel *dch ) ;
void recv_Echannel(struct dchannel *ech , struct dchannel *dch ) ;
void recv_Bchannel(struct bchannel *bch , unsigned int id ) ;
void recv_Dchannel_skb(struct dchannel *dch , struct sk_buff *skb ) ;
void recv_Bchannel_skb(struct bchannel *bch , struct sk_buff *skb ) ;
void confirm_Bsend(struct bchannel *bch ) ;
int get_next_bframe(struct bchannel *bch ) ;
int get_next_dframe(struct dchannel *dch ) ;
static void dchannel_bh(struct work_struct *ws )
{ struct dchannel *dch ;
  struct work_struct const *__mptr ;
  struct sk_buff *skb ;
  int err ;
  long tmp ;
  int tmp___0 ;
  int tmp___1 ;
  struct dchannel *__cil_tmp9 ;
  u_long *__cil_tmp10 ;
  unsigned long volatile *__cil_tmp11 ;
  struct mISDNchannel *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  struct mISDNchannel *__cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  int __cil_tmp16 ;
  long __cil_tmp17 ;
  send_func_t *__cil_tmp18 ;
  struct mISDNchannel *__cil_tmp19 ;
  struct sk_buff_head *__cil_tmp20 ;
  struct sk_buff *__cil_tmp21 ;
  unsigned long __cil_tmp22 ;
  unsigned long __cil_tmp23 ;
  u_long *__cil_tmp24 ;
  unsigned long volatile *__cil_tmp25 ;
  void (*__cil_tmp26)(struct dchannel * ) ;
  unsigned long __cil_tmp27 ;
  void (*__cil_tmp28)(struct dchannel * ) ;
  unsigned long __cil_tmp29 ;
  void (*__cil_tmp30)(struct dchannel * ) ;

  {
  {
  __mptr = (struct work_struct const *)ws;
  __cil_tmp9 = (struct dchannel *)__mptr;
  dch = __cil_tmp9 + 1152921504606845720UL;
  __cil_tmp10 = & dch->Flags;
  __cil_tmp11 = (unsigned long volatile *)__cil_tmp10;
  tmp___0 = test_and_clear_bit(30, __cil_tmp11);
  }
  if (tmp___0 != 0) {
    goto ldv_38407;
    ldv_38406:
    {
    __cil_tmp12 = (struct mISDNchannel *)0;
    __cil_tmp13 = (unsigned long )__cil_tmp12;
    __cil_tmp14 = dch->dev.D.peer;
    __cil_tmp15 = (unsigned long )__cil_tmp14;
    __cil_tmp16 = __cil_tmp15 != __cil_tmp13;
    __cil_tmp17 = (long )__cil_tmp16;
    tmp = __builtin_expect(__cil_tmp17, 1L);
    }
    if (tmp != 0L) {
      {
      __cil_tmp18 = dch->dev.D.recv;
      __cil_tmp19 = dch->dev.D.peer;
      err = (*__cil_tmp18)(__cil_tmp19, skb);
      }
      if (err != 0) {
        {
        consume_skb(skb);
        }
      } else {

      }
    } else {
      {
      consume_skb(skb);
      }
    }
    ldv_38407:
    {
    __cil_tmp20 = & dch->rqueue;
    skb = skb_dequeue(__cil_tmp20);
    }
    {
    __cil_tmp21 = (struct sk_buff *)0;
    __cil_tmp22 = (unsigned long )__cil_tmp21;
    __cil_tmp23 = (unsigned long )skb;
    if (__cil_tmp23 != __cil_tmp22) {
      goto ldv_38406;
    } else {
      goto ldv_38408;
    }
    }
    ldv_38408: ;
  } else {

  }
  {
  __cil_tmp24 = & dch->Flags;
  __cil_tmp25 = (unsigned long volatile *)__cil_tmp24;
  tmp___1 = test_and_clear_bit(31, __cil_tmp25);
  }
  if (tmp___1 != 0) {
    {
    __cil_tmp26 = (void (*)(struct dchannel * ))0;
    __cil_tmp27 = (unsigned long )__cil_tmp26;
    __cil_tmp28 = dch->phfunc;
    __cil_tmp29 = (unsigned long )__cil_tmp28;
    if (__cil_tmp29 != __cil_tmp27) {
      {
      __cil_tmp30 = dch->phfunc;
      (*__cil_tmp30)(dch);
      }
    } else {

    }
    }
  } else {

  }
  return;
}
}
static void bchannel_bh(struct work_struct *ws )
{ struct bchannel *bch ;
  struct work_struct const *__mptr ;
  struct sk_buff *skb ;
  int err ;
  long tmp ;
  int tmp___0 ;
  struct bchannel *__cil_tmp8 ;
  u_long *__cil_tmp9 ;
  unsigned long volatile *__cil_tmp10 ;
  int __cil_tmp11 ;
  struct mISDNchannel *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  struct mISDNchannel *__cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  int __cil_tmp16 ;
  long __cil_tmp17 ;
  send_func_t *__cil_tmp18 ;
  struct mISDNchannel *__cil_tmp19 ;
  struct sk_buff_head *__cil_tmp20 ;
  struct sk_buff *__cil_tmp21 ;
  unsigned long __cil_tmp22 ;
  unsigned long __cil_tmp23 ;

  {
  {
  __mptr = (struct work_struct const *)ws;
  __cil_tmp8 = (struct bchannel *)__mptr;
  bch = __cil_tmp8 + 1152921504606846880UL;
  __cil_tmp9 = & bch->Flags;
  __cil_tmp10 = (unsigned long volatile *)__cil_tmp9;
  tmp___0 = test_and_clear_bit(30, __cil_tmp10);
  }
  if (tmp___0 != 0) {
    goto ldv_38418;
    ldv_38417:
    {
    __cil_tmp11 = bch->rcount;
    bch->rcount = __cil_tmp11 - 1;
    __cil_tmp12 = (struct mISDNchannel *)0;
    __cil_tmp13 = (unsigned long )__cil_tmp12;
    __cil_tmp14 = bch->ch.peer;
    __cil_tmp15 = (unsigned long )__cil_tmp14;
    __cil_tmp16 = __cil_tmp15 != __cil_tmp13;
    __cil_tmp17 = (long )__cil_tmp16;
    tmp = __builtin_expect(__cil_tmp17, 1L);
    }
    if (tmp != 0L) {
      {
      __cil_tmp18 = bch->ch.recv;
      __cil_tmp19 = bch->ch.peer;
      err = (*__cil_tmp18)(__cil_tmp19, skb);
      }
      if (err != 0) {
        {
        consume_skb(skb);
        }
      } else {

      }
    } else {
      {
      consume_skb(skb);
      }
    }
    ldv_38418:
    {
    __cil_tmp20 = & bch->rqueue;
    skb = skb_dequeue(__cil_tmp20);
    }
    {
    __cil_tmp21 = (struct sk_buff *)0;
    __cil_tmp22 = (unsigned long )__cil_tmp21;
    __cil_tmp23 = (unsigned long )skb;
    if (__cil_tmp23 != __cil_tmp22) {
      goto ldv_38417;
    } else {
      goto ldv_38419;
    }
    }
    ldv_38419: ;
  } else {

  }
  return;
}
}
int mISDN_initdchannel(struct dchannel *ch , int maxlen , void *phf )
{ struct lock_class_key __key ;
  atomic_long_t __constr_expr_0 ;
  u_long *__cil_tmp6 ;
  unsigned long volatile *__cil_tmp7 ;
  struct sk_buff_head *__cil_tmp8 ;
  struct sk_buff_head *__cil_tmp9 ;
  struct list_head *__cil_tmp10 ;
  struct work_struct *__cil_tmp11 ;
  struct lockdep_map *__cil_tmp12 ;
  struct list_head *__cil_tmp13 ;

  {
  {
  __cil_tmp6 = & ch->Flags;
  __cil_tmp7 = (unsigned long volatile *)__cil_tmp6;
  test_and_set_bit(13, __cil_tmp7);
  ch->maxlen = maxlen;
  ch->hw = (void *)0;
  ch->rx_skb = (struct sk_buff *)0;
  ch->tx_skb = (struct sk_buff *)0;
  ch->tx_idx = 0;
  ch->phfunc = (void (*)(struct dchannel * ))phf;
  __cil_tmp8 = & ch->squeue;
  skb_queue_head_init(__cil_tmp8);
  __cil_tmp9 = & ch->rqueue;
  skb_queue_head_init(__cil_tmp9);
  __cil_tmp10 = & ch->dev.bchannels;
  INIT_LIST_HEAD(__cil_tmp10);
  __cil_tmp11 = & ch->workq;
  __init_work(__cil_tmp11, 0);
  __constr_expr_0.counter = 2097664L;
  ch->workq.data = __constr_expr_0;
  __cil_tmp12 = & ch->workq.lockdep_map;
  lockdep_init_map(__cil_tmp12, "(&ch->workq)", & __key, 0);
  __cil_tmp13 = & ch->workq.entry;
  INIT_LIST_HEAD(__cil_tmp13);
  ch->workq.func = & dchannel_bh;
  }
  return (0);
}
}
int mISDN_initbchannel(struct bchannel *ch , int maxlen )
{ struct lock_class_key __key ;
  atomic_long_t __constr_expr_0 ;
  struct sk_buff_head *__cil_tmp5 ;
  struct work_struct *__cil_tmp6 ;
  struct lockdep_map *__cil_tmp7 ;
  struct list_head *__cil_tmp8 ;

  {
  {
  ch->Flags = 0UL;
  ch->maxlen = maxlen;
  ch->hw = (void *)0;
  ch->rx_skb = (struct sk_buff *)0;
  ch->tx_skb = (struct sk_buff *)0;
  ch->tx_idx = 0;
  __cil_tmp5 = & ch->rqueue;
  skb_queue_head_init(__cil_tmp5);
  ch->rcount = 0;
  ch->next_skb = (struct sk_buff *)0;
  __cil_tmp6 = & ch->workq;
  __init_work(__cil_tmp6, 0);
  __constr_expr_0.counter = 2097664L;
  ch->workq.data = __constr_expr_0;
  __cil_tmp7 = & ch->workq.lockdep_map;
  lockdep_init_map(__cil_tmp7, "(&ch->workq)", & __key, 0);
  __cil_tmp8 = & ch->workq.entry;
  INIT_LIST_HEAD(__cil_tmp8);
  ch->workq.func = & bchannel_bh;
  }
  return (0);
}
}
int mISDN_freedchannel(struct dchannel *ch )
{ struct sk_buff *__cil_tmp2 ;
  unsigned long __cil_tmp3 ;
  struct sk_buff *__cil_tmp4 ;
  unsigned long __cil_tmp5 ;
  struct sk_buff *__cil_tmp6 ;
  struct sk_buff *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  struct sk_buff *__cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  struct sk_buff *__cil_tmp11 ;
  struct sk_buff_head *__cil_tmp12 ;
  struct sk_buff_head *__cil_tmp13 ;
  struct work_struct *__cil_tmp14 ;

  {
  {
  __cil_tmp2 = (struct sk_buff *)0;
  __cil_tmp3 = (unsigned long )__cil_tmp2;
  __cil_tmp4 = ch->tx_skb;
  __cil_tmp5 = (unsigned long )__cil_tmp4;
  if (__cil_tmp5 != __cil_tmp3) {
    {
    __cil_tmp6 = ch->tx_skb;
    consume_skb(__cil_tmp6);
    ch->tx_skb = (struct sk_buff *)0;
    }
  } else {

  }
  }
  {
  __cil_tmp7 = (struct sk_buff *)0;
  __cil_tmp8 = (unsigned long )__cil_tmp7;
  __cil_tmp9 = ch->rx_skb;
  __cil_tmp10 = (unsigned long )__cil_tmp9;
  if (__cil_tmp10 != __cil_tmp8) {
    {
    __cil_tmp11 = ch->rx_skb;
    consume_skb(__cil_tmp11);
    ch->rx_skb = (struct sk_buff *)0;
    }
  } else {

  }
  }
  {
  __cil_tmp12 = & ch->squeue;
  skb_queue_purge(__cil_tmp12);
  __cil_tmp13 = & ch->rqueue;
  skb_queue_purge(__cil_tmp13);
  __cil_tmp14 = & ch->workq;
  flush_work_sync(__cil_tmp14);
  }
  return (0);
}
}
void mISDN_clear_bchannel(struct bchannel *ch )
{ struct sk_buff *__cil_tmp2 ;
  unsigned long __cil_tmp3 ;
  struct sk_buff *__cil_tmp4 ;
  unsigned long __cil_tmp5 ;
  struct sk_buff *__cil_tmp6 ;
  struct sk_buff *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  struct sk_buff *__cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  struct sk_buff *__cil_tmp11 ;
  struct sk_buff *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  struct sk_buff *__cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  struct sk_buff *__cil_tmp16 ;
  u_long *__cil_tmp17 ;
  unsigned long volatile *__cil_tmp18 ;
  u_long *__cil_tmp19 ;
  unsigned long volatile *__cil_tmp20 ;
  u_long *__cil_tmp21 ;
  unsigned long volatile *__cil_tmp22 ;

  {
  {
  __cil_tmp2 = (struct sk_buff *)0;
  __cil_tmp3 = (unsigned long )__cil_tmp2;
  __cil_tmp4 = ch->tx_skb;
  __cil_tmp5 = (unsigned long )__cil_tmp4;
  if (__cil_tmp5 != __cil_tmp3) {
    {
    __cil_tmp6 = ch->tx_skb;
    consume_skb(__cil_tmp6);
    ch->tx_skb = (struct sk_buff *)0;
    }
  } else {

  }
  }
  ch->tx_idx = 0;
  {
  __cil_tmp7 = (struct sk_buff *)0;
  __cil_tmp8 = (unsigned long )__cil_tmp7;
  __cil_tmp9 = ch->rx_skb;
  __cil_tmp10 = (unsigned long )__cil_tmp9;
  if (__cil_tmp10 != __cil_tmp8) {
    {
    __cil_tmp11 = ch->rx_skb;
    consume_skb(__cil_tmp11);
    ch->rx_skb = (struct sk_buff *)0;
    }
  } else {

  }
  }
  {
  __cil_tmp12 = (struct sk_buff *)0;
  __cil_tmp13 = (unsigned long )__cil_tmp12;
  __cil_tmp14 = ch->next_skb;
  __cil_tmp15 = (unsigned long )__cil_tmp14;
  if (__cil_tmp15 != __cil_tmp13) {
    {
    __cil_tmp16 = ch->next_skb;
    consume_skb(__cil_tmp16);
    ch->next_skb = (struct sk_buff *)0;
    }
  } else {

  }
  }
  {
  __cil_tmp17 = & ch->Flags;
  __cil_tmp18 = (unsigned long volatile *)__cil_tmp17;
  test_and_clear_bit(0, __cil_tmp18);
  __cil_tmp19 = & ch->Flags;
  __cil_tmp20 = (unsigned long volatile *)__cil_tmp19;
  test_and_clear_bit(1, __cil_tmp20);
  __cil_tmp21 = & ch->Flags;
  __cil_tmp22 = (unsigned long volatile *)__cil_tmp21;
  test_and_clear_bit(6, __cil_tmp22);
  }
  return;
}
}
int mISDN_freebchannel(struct bchannel *ch )
{ struct sk_buff_head *__cil_tmp2 ;
  struct work_struct *__cil_tmp3 ;

  {
  {
  mISDN_clear_bchannel(ch);
  __cil_tmp2 = & ch->rqueue;
  skb_queue_purge(__cil_tmp2);
  ch->rcount = 0;
  __cil_tmp3 = & ch->workq;
  flush_work_sync(__cil_tmp3);
  }
  return (0);
}
}
__inline static u_int get_sapi_tei(u_char *p )
{ u_int sapi ;
  u_int tei ;
  u_char __cil_tmp4 ;
  int __cil_tmp5 ;
  int __cil_tmp6 ;
  u_char *__cil_tmp7 ;
  u_char __cil_tmp8 ;
  int __cil_tmp9 ;
  int __cil_tmp10 ;
  u_int __cil_tmp11 ;

  {
  __cil_tmp4 = *p;
  __cil_tmp5 = (int )__cil_tmp4;
  __cil_tmp6 = __cil_tmp5 >> 2;
  sapi = (u_int )__cil_tmp6;
  __cil_tmp7 = p + 1UL;
  __cil_tmp8 = *__cil_tmp7;
  __cil_tmp9 = (int )__cil_tmp8;
  __cil_tmp10 = __cil_tmp9 >> 1;
  tei = (u_int )__cil_tmp10;
  {
  __cil_tmp11 = tei << 8;
  return (__cil_tmp11 | sapi);
  }
}
}
void recv_Dchannel(struct dchannel *dch )
{ struct mISDNhead *hh ;
  struct sk_buff *__cil_tmp3 ;
  unsigned int __cil_tmp4 ;
  struct sk_buff *__cil_tmp5 ;
  struct sk_buff *__cil_tmp6 ;
  char (*__cil_tmp7)[48U] ;
  struct sk_buff *__cil_tmp8 ;
  unsigned char *__cil_tmp9 ;
  struct sk_buff_head *__cil_tmp10 ;
  struct sk_buff *__cil_tmp11 ;
  u_long *__cil_tmp12 ;
  unsigned long volatile *__cil_tmp13 ;
  struct work_struct *__cil_tmp14 ;

  {
  {
  __cil_tmp3 = dch->rx_skb;
  __cil_tmp4 = __cil_tmp3->len;
  if (__cil_tmp4 <= 1U) {
    {
    __cil_tmp5 = dch->rx_skb;
    consume_skb(__cil_tmp5);
    dch->rx_skb = (struct sk_buff *)0;
    }
    return;
  } else {

  }
  }
  {
  __cil_tmp6 = dch->rx_skb;
  __cil_tmp7 = & __cil_tmp6->cb;
  hh = (struct mISDNhead *)__cil_tmp7;
  hh->prim = 8194U;
  __cil_tmp8 = dch->rx_skb;
  __cil_tmp9 = __cil_tmp8->data;
  hh->id = get_sapi_tei(__cil_tmp9);
  __cil_tmp10 = & dch->rqueue;
  __cil_tmp11 = dch->rx_skb;
  skb_queue_tail(__cil_tmp10, __cil_tmp11);
  dch->rx_skb = (struct sk_buff *)0;
  __cil_tmp12 = & dch->Flags;
  __cil_tmp13 = (unsigned long volatile *)__cil_tmp12;
  test_and_set_bit(30, __cil_tmp13);
  __cil_tmp14 = & dch->workq;
  schedule_work(__cil_tmp14);
  }
  return;
}
}
void recv_Echannel(struct dchannel *ech , struct dchannel *dch )
{ struct mISDNhead *hh ;
  struct sk_buff *__cil_tmp4 ;
  unsigned int __cil_tmp5 ;
  struct sk_buff *__cil_tmp6 ;
  struct sk_buff *__cil_tmp7 ;
  char (*__cil_tmp8)[48U] ;
  struct sk_buff *__cil_tmp9 ;
  unsigned char *__cil_tmp10 ;
  struct sk_buff_head *__cil_tmp11 ;
  struct sk_buff *__cil_tmp12 ;
  u_long *__cil_tmp13 ;
  unsigned long volatile *__cil_tmp14 ;
  struct work_struct *__cil_tmp15 ;

  {
  {
  __cil_tmp4 = ech->rx_skb;
  __cil_tmp5 = __cil_tmp4->len;
  if (__cil_tmp5 <= 1U) {
    {
    __cil_tmp6 = ech->rx_skb;
    consume_skb(__cil_tmp6);
    ech->rx_skb = (struct sk_buff *)0;
    }
    return;
  } else {

  }
  }
  {
  __cil_tmp7 = ech->rx_skb;
  __cil_tmp8 = & __cil_tmp7->cb;
  hh = (struct mISDNhead *)__cil_tmp8;
  hh->prim = 12290U;
  __cil_tmp9 = ech->rx_skb;
  __cil_tmp10 = __cil_tmp9->data;
  hh->id = get_sapi_tei(__cil_tmp10);
  __cil_tmp11 = & dch->rqueue;
  __cil_tmp12 = ech->rx_skb;
  skb_queue_tail(__cil_tmp11, __cil_tmp12);
  ech->rx_skb = (struct sk_buff *)0;
  __cil_tmp13 = & dch->Flags;
  __cil_tmp14 = (unsigned long volatile *)__cil_tmp13;
  test_and_set_bit(30, __cil_tmp14);
  __cil_tmp15 = & dch->workq;
  schedule_work(__cil_tmp15);
  }
  return;
}
}
void recv_Bchannel(struct bchannel *bch , unsigned int id )
{ struct mISDNhead *hh ;
  struct sk_buff *__cil_tmp4 ;
  char (*__cil_tmp5)[48U] ;
  int __cil_tmp6 ;
  struct sk_buff_head *__cil_tmp7 ;
  int __cil_tmp8 ;
  struct sk_buff_head *__cil_tmp9 ;
  struct sk_buff *__cil_tmp10 ;
  u_long *__cil_tmp11 ;
  unsigned long volatile *__cil_tmp12 ;
  struct work_struct *__cil_tmp13 ;

  {
  __cil_tmp4 = bch->rx_skb;
  __cil_tmp5 = & __cil_tmp4->cb;
  hh = (struct mISDNhead *)__cil_tmp5;
  hh->prim = 8194U;
  hh->id = id;
  {
  __cil_tmp6 = bch->rcount;
  if (__cil_tmp6 > 63) {
    {
    printk("<4>B-channel %p receive queue overflow, flushing!\n", bch);
    __cil_tmp7 = & bch->rqueue;
    skb_queue_purge(__cil_tmp7);
    bch->rcount = 0;
    }
    return;
  } else {

  }
  }
  {
  __cil_tmp8 = bch->rcount;
  bch->rcount = __cil_tmp8 + 1;
  __cil_tmp9 = & bch->rqueue;
  __cil_tmp10 = bch->rx_skb;
  skb_queue_tail(__cil_tmp9, __cil_tmp10);
  bch->rx_skb = (struct sk_buff *)0;
  __cil_tmp11 = & bch->Flags;
  __cil_tmp12 = (unsigned long volatile *)__cil_tmp11;
  test_and_set_bit(30, __cil_tmp12);
  __cil_tmp13 = & bch->workq;
  schedule_work(__cil_tmp13);
  }
  return;
}
}
void recv_Dchannel_skb(struct dchannel *dch , struct sk_buff *skb )
{ struct sk_buff_head *__cil_tmp3 ;
  u_long *__cil_tmp4 ;
  unsigned long volatile *__cil_tmp5 ;
  struct work_struct *__cil_tmp6 ;

  {
  {
  __cil_tmp3 = & dch->rqueue;
  skb_queue_tail(__cil_tmp3, skb);
  __cil_tmp4 = & dch->Flags;
  __cil_tmp5 = (unsigned long volatile *)__cil_tmp4;
  test_and_set_bit(30, __cil_tmp5);
  __cil_tmp6 = & dch->workq;
  schedule_work(__cil_tmp6);
  }
  return;
}
}
void recv_Bchannel_skb(struct bchannel *bch , struct sk_buff *skb )
{ int __cil_tmp3 ;
  struct sk_buff_head *__cil_tmp4 ;
  int __cil_tmp5 ;
  struct sk_buff_head *__cil_tmp6 ;
  u_long *__cil_tmp7 ;
  unsigned long volatile *__cil_tmp8 ;
  struct work_struct *__cil_tmp9 ;

  {
  {
  __cil_tmp3 = bch->rcount;
  if (__cil_tmp3 > 63) {
    {
    printk("<4>B-channel %p receive queue overflow, flushing!\n", bch);
    __cil_tmp4 = & bch->rqueue;
    skb_queue_purge(__cil_tmp4);
    bch->rcount = 0;
    }
  } else {

  }
  }
  {
  __cil_tmp5 = bch->rcount;
  bch->rcount = __cil_tmp5 + 1;
  __cil_tmp6 = & bch->rqueue;
  skb_queue_tail(__cil_tmp6, skb);
  __cil_tmp7 = & bch->Flags;
  __cil_tmp8 = (unsigned long volatile *)__cil_tmp7;
  test_and_set_bit(30, __cil_tmp8);
  __cil_tmp9 = & bch->workq;
  schedule_work(__cil_tmp9);
  }
  return;
}
}
static void confirm_Dsend(struct dchannel *dch )
{ struct sk_buff *skb ;
  struct sk_buff *__cil_tmp3 ;
  char (*__cil_tmp4)[48U] ;
  struct mISDNhead *__cil_tmp5 ;
  unsigned int __cil_tmp6 ;
  void *__cil_tmp7 ;
  struct sk_buff *__cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  struct sk_buff *__cil_tmp11 ;
  char (*__cil_tmp12)[48U] ;
  struct mISDNhead *__cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  struct sk_buff_head *__cil_tmp15 ;
  u_long *__cil_tmp16 ;
  unsigned long volatile *__cil_tmp17 ;
  struct work_struct *__cil_tmp18 ;

  {
  {
  __cil_tmp3 = dch->tx_skb;
  __cil_tmp4 = & __cil_tmp3->cb;
  __cil_tmp5 = (struct mISDNhead *)__cil_tmp4;
  __cil_tmp6 = __cil_tmp5->id;
  __cil_tmp7 = (void *)0;
  skb = _alloc_mISDN_skb(24578U, __cil_tmp6, 0U, __cil_tmp7, 32U);
  }
  {
  __cil_tmp8 = (struct sk_buff *)0;
  __cil_tmp9 = (unsigned long )__cil_tmp8;
  __cil_tmp10 = (unsigned long )skb;
  if (__cil_tmp10 == __cil_tmp9) {
    {
    __cil_tmp11 = dch->tx_skb;
    __cil_tmp12 = & __cil_tmp11->cb;
    __cil_tmp13 = (struct mISDNhead *)__cil_tmp12;
    __cil_tmp14 = __cil_tmp13->id;
    printk("<3>%s: no skb id %x\n", "confirm_Dsend", __cil_tmp14);
    }
    return;
  } else {

  }
  }
  {
  __cil_tmp15 = & dch->rqueue;
  skb_queue_tail(__cil_tmp15, skb);
  __cil_tmp16 = & dch->Flags;
  __cil_tmp17 = (unsigned long volatile *)__cil_tmp16;
  test_and_set_bit(30, __cil_tmp17);
  __cil_tmp18 = & dch->workq;
  schedule_work(__cil_tmp18);
  }
  return;
}
}
int get_next_dframe(struct dchannel *dch )
{ struct sk_buff_head *__cil_tmp2 ;
  struct sk_buff *__cil_tmp3 ;
  unsigned long __cil_tmp4 ;
  struct sk_buff *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  u_long *__cil_tmp7 ;
  unsigned long volatile *__cil_tmp8 ;

  {
  {
  dch->tx_idx = 0;
  __cil_tmp2 = & dch->squeue;
  dch->tx_skb = skb_dequeue(__cil_tmp2);
  }
  {
  __cil_tmp3 = (struct sk_buff *)0;
  __cil_tmp4 = (unsigned long )__cil_tmp3;
  __cil_tmp5 = dch->tx_skb;
  __cil_tmp6 = (unsigned long )__cil_tmp5;
  if (__cil_tmp6 != __cil_tmp4) {
    {
    confirm_Dsend(dch);
    }
    return (1);
  } else {

  }
  }
  {
  dch->tx_skb = (struct sk_buff *)0;
  __cil_tmp7 = & dch->Flags;
  __cil_tmp8 = (unsigned long volatile *)__cil_tmp7;
  test_and_clear_bit(0, __cil_tmp8);
  }
  return (0);
}
}
void confirm_Bsend(struct bchannel *bch )
{ struct sk_buff *skb ;
  int __cil_tmp3 ;
  struct sk_buff_head *__cil_tmp4 ;
  struct sk_buff *__cil_tmp5 ;
  char (*__cil_tmp6)[48U] ;
  struct mISDNhead *__cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  void *__cil_tmp9 ;
  struct sk_buff *__cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  unsigned long __cil_tmp12 ;
  struct sk_buff *__cil_tmp13 ;
  char (*__cil_tmp14)[48U] ;
  struct mISDNhead *__cil_tmp15 ;
  unsigned int __cil_tmp16 ;
  int __cil_tmp17 ;
  struct sk_buff_head *__cil_tmp18 ;
  u_long *__cil_tmp19 ;
  unsigned long volatile *__cil_tmp20 ;
  struct work_struct *__cil_tmp21 ;

  {
  {
  __cil_tmp3 = bch->rcount;
  if (__cil_tmp3 > 63) {
    {
    printk("<4>B-channel %p receive queue overflow, flushing!\n", bch);
    __cil_tmp4 = & bch->rqueue;
    skb_queue_purge(__cil_tmp4);
    bch->rcount = 0;
    }
  } else {

  }
  }
  {
  __cil_tmp5 = bch->tx_skb;
  __cil_tmp6 = & __cil_tmp5->cb;
  __cil_tmp7 = (struct mISDNhead *)__cil_tmp6;
  __cil_tmp8 = __cil_tmp7->id;
  __cil_tmp9 = (void *)0;
  skb = _alloc_mISDN_skb(24578U, __cil_tmp8, 0U, __cil_tmp9, 32U);
  }
  {
  __cil_tmp10 = (struct sk_buff *)0;
  __cil_tmp11 = (unsigned long )__cil_tmp10;
  __cil_tmp12 = (unsigned long )skb;
  if (__cil_tmp12 == __cil_tmp11) {
    {
    __cil_tmp13 = bch->tx_skb;
    __cil_tmp14 = & __cil_tmp13->cb;
    __cil_tmp15 = (struct mISDNhead *)__cil_tmp14;
    __cil_tmp16 = __cil_tmp15->id;
    printk("<3>%s: no skb id %x\n", "confirm_Bsend", __cil_tmp16);
    }
    return;
  } else {

  }
  }
  {
  __cil_tmp17 = bch->rcount;
  bch->rcount = __cil_tmp17 + 1;
  __cil_tmp18 = & bch->rqueue;
  skb_queue_tail(__cil_tmp18, skb);
  __cil_tmp19 = & bch->Flags;
  __cil_tmp20 = (unsigned long volatile *)__cil_tmp19;
  test_and_set_bit(30, __cil_tmp20);
  __cil_tmp21 = & bch->workq;
  schedule_work(__cil_tmp21);
  }
  return;
}
}
int get_next_bframe(struct bchannel *bch )
{ int tmp ;
  int tmp___0 ;
  u_long *__cil_tmp4 ;
  unsigned long const volatile *__cil_tmp5 ;
  struct sk_buff *__cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  struct sk_buff *__cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  u_long *__cil_tmp10 ;
  unsigned long volatile *__cil_tmp11 ;
  u_long *__cil_tmp12 ;
  unsigned long const volatile *__cil_tmp13 ;
  u_long *__cil_tmp14 ;
  unsigned long volatile *__cil_tmp15 ;
  u_long *__cil_tmp16 ;
  unsigned long volatile *__cil_tmp17 ;

  {
  {
  bch->tx_idx = 0;
  __cil_tmp4 = & bch->Flags;
  __cil_tmp5 = (unsigned long const volatile *)__cil_tmp4;
  tmp___0 = constant_test_bit(1U, __cil_tmp5);
  }
  if (tmp___0 != 0) {
    bch->tx_skb = bch->next_skb;
    {
    __cil_tmp6 = (struct sk_buff *)0;
    __cil_tmp7 = (unsigned long )__cil_tmp6;
    __cil_tmp8 = bch->tx_skb;
    __cil_tmp9 = (unsigned long )__cil_tmp8;
    if (__cil_tmp9 != __cil_tmp7) {
      {
      bch->next_skb = (struct sk_buff *)0;
      __cil_tmp10 = & bch->Flags;
      __cil_tmp11 = (unsigned long volatile *)__cil_tmp10;
      test_and_clear_bit(1, __cil_tmp11);
      __cil_tmp12 = & bch->Flags;
      __cil_tmp13 = (unsigned long const volatile *)__cil_tmp12;
      tmp = constant_test_bit(12U, __cil_tmp13);
      }
      if (tmp == 0) {
        {
        confirm_Bsend(bch);
        }
      } else {

      }
      return (1);
    } else {
      {
      __cil_tmp14 = & bch->Flags;
      __cil_tmp15 = (unsigned long volatile *)__cil_tmp14;
      test_and_clear_bit(1, __cil_tmp15);
      printk("<4>B TX_NEXT without skb\n");
      }
    }
    }
  } else {

  }
  {
  bch->tx_skb = (struct sk_buff *)0;
  __cil_tmp16 = & bch->Flags;
  __cil_tmp17 = (unsigned long volatile *)__cil_tmp16;
  test_and_clear_bit(0, __cil_tmp17);
  }
  return (0);
}
}
void queue_ch_frame(struct mISDNchannel *ch , u_int pr , int id , struct sk_buff *skb )
{ struct mISDNhead *hh ;
  int tmp ;
  struct sk_buff *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  u_int __cil_tmp10 ;
  void *__cil_tmp11 ;
  struct mISDNchannel *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  struct mISDNchannel *__cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  char (*__cil_tmp16)[48U] ;
  send_func_t *__cil_tmp17 ;
  struct mISDNchannel *__cil_tmp18 ;

  {
  {
  __cil_tmp7 = (struct sk_buff *)0;
  __cil_tmp8 = (unsigned long )__cil_tmp7;
  __cil_tmp9 = (unsigned long )skb;
  if (__cil_tmp9 == __cil_tmp8) {
    {
    __cil_tmp10 = (u_int )id;
    __cil_tmp11 = (void *)0;
    _queue_data(ch, pr, __cil_tmp10, 0U, __cil_tmp11, 32U);
    }
  } else {
    {
    __cil_tmp12 = (struct mISDNchannel *)0;
    __cil_tmp13 = (unsigned long )__cil_tmp12;
    __cil_tmp14 = ch->peer;
    __cil_tmp15 = (unsigned long )__cil_tmp14;
    if (__cil_tmp15 != __cil_tmp13) {
      {
      __cil_tmp16 = & skb->cb;
      hh = (struct mISDNhead *)__cil_tmp16;
      hh->prim = pr;
      hh->id = (unsigned int )id;
      __cil_tmp17 = ch->recv;
      __cil_tmp18 = ch->peer;
      tmp = (*__cil_tmp17)(__cil_tmp18, skb);
      }
      if (tmp == 0) {
        return;
      } else {

      }
    } else {

    }
    }
    {
    consume_skb(skb);
    }
  }
  }
  return;
}
}
int dchannel_senddata(struct dchannel *ch , struct sk_buff *skb )
{ int tmp ;
  unsigned int __cil_tmp4 ;
  int __cil_tmp5 ;
  unsigned int __cil_tmp6 ;
  unsigned int __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  int __cil_tmp9 ;
  u_long *__cil_tmp10 ;
  unsigned long volatile *__cil_tmp11 ;
  struct sk_buff_head *__cil_tmp12 ;

  {
  {
  __cil_tmp4 = skb->len;
  if (__cil_tmp4 == 0U) {
    {
    printk("<4>%s: skb too small\n", "dchannel_senddata");
    }
    return (-22);
  } else {

  }
  }
  {
  __cil_tmp5 = ch->maxlen;
  __cil_tmp6 = (unsigned int )__cil_tmp5;
  __cil_tmp7 = skb->len;
  if (__cil_tmp7 > __cil_tmp6) {
    {
    __cil_tmp8 = skb->len;
    __cil_tmp9 = ch->maxlen;
    printk("<4>%s: skb too large(%d/%d)\n", "dchannel_senddata", __cil_tmp8, __cil_tmp9);
    }
    return (-22);
  } else {

  }
  }
  {
  __cil_tmp10 = & ch->Flags;
  __cil_tmp11 = (unsigned long volatile *)__cil_tmp10;
  tmp = test_and_set_bit(0, __cil_tmp11);
  }
  if (tmp != 0) {
    {
    __cil_tmp12 = & ch->squeue;
    skb_queue_tail(__cil_tmp12, skb);
    }
    return (0);
  } else {
    ch->tx_skb = skb;
    ch->tx_idx = 0;
    return (1);
  }
}
}
int bchannel_senddata(struct bchannel *ch , struct sk_buff *skb )
{ int tmp ;
  unsigned int __cil_tmp4 ;
  int __cil_tmp5 ;
  unsigned int __cil_tmp6 ;
  unsigned int __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  int __cil_tmp9 ;
  struct sk_buff *__cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  struct sk_buff *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  struct sk_buff *__cil_tmp15 ;
  unsigned int __cil_tmp16 ;
  u_long *__cil_tmp17 ;
  unsigned long volatile *__cil_tmp18 ;
  u_long *__cil_tmp19 ;
  unsigned long volatile *__cil_tmp20 ;

  {
  {
  __cil_tmp4 = skb->len;
  if (__cil_tmp4 == 0U) {
    {
    printk("<4>%s: skb too small\n", "bchannel_senddata");
    }
    return (-22);
  } else {

  }
  }
  {
  __cil_tmp5 = ch->maxlen;
  __cil_tmp6 = (unsigned int )__cil_tmp5;
  __cil_tmp7 = skb->len;
  if (__cil_tmp7 > __cil_tmp6) {
    {
    __cil_tmp8 = skb->len;
    __cil_tmp9 = ch->maxlen;
    printk("<4>%s: skb too large(%d/%d)\n", "bchannel_senddata", __cil_tmp8, __cil_tmp9);
    }
    return (-22);
  } else {

  }
  }
  {
  __cil_tmp10 = (struct sk_buff *)0;
  __cil_tmp11 = (unsigned long )__cil_tmp10;
  __cil_tmp12 = ch->next_skb;
  __cil_tmp13 = (unsigned long )__cil_tmp12;
  if (__cil_tmp13 != __cil_tmp11) {
    {
    __cil_tmp14 = skb->len;
    __cil_tmp15 = ch->next_skb;
    __cil_tmp16 = __cil_tmp15->len;
    printk("<4>%s: next_skb exist ERROR (skb->len=%d next_skb->len=%d)\n", "bchannel_senddata",
           __cil_tmp14, __cil_tmp16);
    }
    return (-16);
  } else {

  }
  }
  {
  __cil_tmp17 = & ch->Flags;
  __cil_tmp18 = (unsigned long volatile *)__cil_tmp17;
  tmp = test_and_set_bit(0, __cil_tmp18);
  }
  if (tmp != 0) {
    {
    __cil_tmp19 = & ch->Flags;
    __cil_tmp20 = (unsigned long volatile *)__cil_tmp19;
    test_and_set_bit(1, __cil_tmp20);
    ch->next_skb = skb;
    }
    return (0);
  } else {
    ch->tx_skb = skb;
    ch->tx_idx = 0;
    return (1);
  }
}
}
__inline static int list_is_last(struct list_head const *list , struct list_head const *head )
{ unsigned long __cil_tmp3 ;
  struct list_head *__cil_tmp4 ;
  struct list_head const *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;

  {
  {
  __cil_tmp3 = (unsigned long )head;
  __cil_tmp4 = list->next;
  __cil_tmp5 = (struct list_head const *)__cil_tmp4;
  __cil_tmp6 = (unsigned long )__cil_tmp5;
  return (__cil_tmp6 == __cil_tmp3);
  }
}
}
__inline static int list_empty(struct list_head const *head )
{ unsigned long __cil_tmp2 ;
  struct list_head *__cil_tmp3 ;
  struct list_head const *__cil_tmp4 ;
  unsigned long __cil_tmp5 ;

  {
  {
  __cil_tmp2 = (unsigned long )head;
  __cil_tmp3 = head->next;
  __cil_tmp4 = (struct list_head const *)__cil_tmp3;
  __cil_tmp5 = (unsigned long )__cil_tmp4;
  return (__cil_tmp5 == __cil_tmp2);
  }
}
}
__inline static int hlist_empty(struct hlist_head const *h )
{ struct hlist_node *__cil_tmp2 ;
  unsigned long __cil_tmp3 ;
  struct hlist_node *__cil_tmp4 ;
  unsigned long __cil_tmp5 ;

  {
  {
  __cil_tmp2 = (struct hlist_node * const )0;
  __cil_tmp3 = (unsigned long )__cil_tmp2;
  __cil_tmp4 = h->first;
  __cil_tmp5 = (unsigned long )__cil_tmp4;
  return (__cil_tmp5 == __cil_tmp3);
  }
}
}
__inline static int variable_test_bit(int nr , unsigned long const volatile *addr )
{ int oldbit ;
  unsigned long *__cil_tmp4 ;

  {
  __cil_tmp4 = (unsigned long *)addr;
  __asm__ volatile ("bt %2,%1\n\tsbb %0,%0": "=r" (oldbit): "m" (*__cil_tmp4),
                       "Ir" (nr));
  return (oldbit);
}
}
extern void __bad_percpu_size(void) ;
extern struct task_struct *current_task ;
__inline static struct task_struct *get_current(void)
{ struct task_struct *pfo_ret__ ;

  {
  if (1) {
    goto case_8;
  } else {
    goto switch_default;
    if (0) {
      __asm__ ("movb %%gs:%P1,%0": "=q" (pfo_ret__): "p" (& current_task));
      goto ldv_2386;
      __asm__ ("movw %%gs:%P1,%0": "=r" (pfo_ret__): "p" (& current_task));
      goto ldv_2386;
      __asm__ ("movl %%gs:%P1,%0": "=r" (pfo_ret__): "p" (& current_task));
      goto ldv_2386;
      case_8:
      __asm__ ("movq %%gs:%P1,%0": "=r" (pfo_ret__): "p" (& current_task));
      goto ldv_2386;
      switch_default:
      {
      __bad_percpu_size();
      }
    } else {

    }
  }
  ldv_2386: ;
  return (pfo_ret__);
}
}
__inline static long PTR_ERR(void const *ptr )
{

  {
  return ((long )ptr);
}
}
__inline static long IS_ERR(void const *ptr )
{ long tmp ;
  unsigned long __cil_tmp3 ;
  int __cil_tmp4 ;
  long __cil_tmp5 ;

  {
  {
  __cil_tmp3 = (unsigned long )ptr;
  __cil_tmp4 = __cil_tmp3 > 1152921504606842880UL;
  __cil_tmp5 = (long )__cil_tmp4;
  tmp = __builtin_expect(__cil_tmp5, 0L);
  }
  return (tmp);
}
}
__inline static int test_ti_thread_flag(struct thread_info *ti , int flag )
{ int tmp ;
  __u32 *__cil_tmp4 ;
  unsigned long const volatile *__cil_tmp5 ;

  {
  {
  __cil_tmp4 = & ti->flags;
  __cil_tmp5 = (unsigned long const volatile *)__cil_tmp4;
  tmp = variable_test_bit(flag, __cil_tmp5);
  }
  return (tmp);
}
}
extern void __rwlock_init(rwlock_t * , char const * , struct lock_class_key * ) ;
extern void __init_waitqueue_head(wait_queue_head_t * , struct lock_class_key * ) ;
extern void __wake_up(wait_queue_head_t * , unsigned int , int , void * ) ;
extern void prepare_to_wait(wait_queue_head_t * , wait_queue_t * , int ) ;
extern void finish_wait(wait_queue_head_t * , wait_queue_t * ) ;
extern int autoremove_wake_function(wait_queue_t * , unsigned int , int , void * ) ;
extern void __mutex_init(struct mutex * , char const * , struct lock_class_key * ) ;
extern void mutex_lock_nested(struct mutex * , unsigned int ) ;
extern void mutex_unlock(struct mutex * ) ;
__inline static void init_completion(struct completion *x )
{ struct lock_class_key __key ;
  wait_queue_head_t *__cil_tmp3 ;

  {
  {
  x->done = 0U;
  __cil_tmp3 = & x->wait;
  __init_waitqueue_head(__cil_tmp3, & __key);
  }
  return;
}
}
extern void wait_for_completion(struct completion * ) ;
extern void complete(struct completion * ) ;
extern struct sk_buff *skb_copy(struct sk_buff const * , gfp_t ) ;
__inline static int skb_queue_empty(struct sk_buff_head const *list )
{ struct sk_buff *__cil_tmp2 ;
  unsigned long __cil_tmp3 ;
  struct sk_buff *__cil_tmp4 ;
  struct sk_buff *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;

  {
  {
  __cil_tmp2 = (struct sk_buff *)list;
  __cil_tmp3 = (unsigned long )__cil_tmp2;
  __cil_tmp4 = list->next;
  __cil_tmp5 = (struct sk_buff *)__cil_tmp4;
  __cil_tmp6 = (unsigned long )__cil_tmp5;
  return (__cil_tmp6 == __cil_tmp3);
  }
}
}
__inline static void sigfillset(sigset_t *set )
{ void *__cil_tmp2 ;

  {
  if (1) {
    goto case_1;
  } else {
    goto switch_default;
    if (0) {
      switch_default:
      {
      __cil_tmp2 = (void *)set;
      memset(__cil_tmp2, -1, 8UL);
      }
      goto ldv_24894;
      set->sig[1] = 1152921504606846975UL;
      case_1:
      set->sig[0] = 1152921504606846975UL;
      goto ldv_24894;
    } else {

    }
  }
  ldv_24894: ;
  return;
}
}
extern void schedule(void) ;
extern int wake_up_process(struct task_struct * ) ;
__inline static int test_tsk_thread_flag(struct task_struct *tsk , int flag )
{ int tmp ;
  void *__cil_tmp4 ;
  struct thread_info *__cil_tmp5 ;

  {
  {
  __cil_tmp4 = tsk->stack;
  __cil_tmp5 = (struct thread_info *)__cil_tmp4;
  tmp = test_ti_thread_flag(__cil_tmp5, flag);
  }
  return (tmp);
}
}
__inline static int signal_pending(struct task_struct *p )
{ int tmp ;
  long tmp___0 ;
  int __cil_tmp4 ;
  long __cil_tmp5 ;

  {
  {
  tmp = test_tsk_thread_flag(p, 2);
  __cil_tmp4 = tmp != 0;
  __cil_tmp5 = (long )__cil_tmp4;
  tmp___0 = __builtin_expect(__cil_tmp5, 0L);
  }
  return ((int )tmp___0);
}
}
void set_channel_address(struct mISDNchannel *ch , u_int sapi , u_int tei ) ;
extern struct task_struct *kthread_create_on_node(int (*)(void * ) , void * , int ,
                                                  char const * , ...) ;
int create_teimanager(struct mISDNdevice *dev ) ;
void delete_teimanager(struct mISDNchannel *ch ) ;
void add_layer2(struct mISDNchannel *ch , struct mISDNstack *st ) ;
void __add_layer2(struct mISDNchannel *ch , struct mISDNstack *st ) ;
static u_int *debug___2 ;
__inline static void _queue_message(struct mISDNstack *st , struct sk_buff *skb )
{ struct mISDNhead *hh ;
  int tmp ;
  long tmp___0 ;
  char (*__cil_tmp6)[48U] ;
  u_int __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  struct sk_buff_head *__cil_tmp11 ;
  u_long *__cil_tmp12 ;
  unsigned long const volatile *__cil_tmp13 ;
  int __cil_tmp14 ;
  long __cil_tmp15 ;
  u_long *__cil_tmp16 ;
  unsigned long volatile *__cil_tmp17 ;
  wait_queue_head_t *__cil_tmp18 ;
  void *__cil_tmp19 ;

  {
  __cil_tmp6 = & skb->cb;
  hh = (struct mISDNhead *)__cil_tmp6;
  {
  __cil_tmp7 = *debug___2;
  __cil_tmp8 = __cil_tmp7 & 64U;
  if (__cil_tmp8 != 0U) {
    {
    __cil_tmp9 = hh->prim;
    __cil_tmp10 = hh->id;
    printk("<7>%s prim(%x) id(%x) %p\n", "_queue_message", __cil_tmp9, __cil_tmp10,
           skb);
    }
  } else {

  }
  }
  {
  __cil_tmp11 = & st->msgq;
  skb_queue_tail(__cil_tmp11, skb);
  __cil_tmp12 = & st->status;
  __cil_tmp13 = (unsigned long const volatile *)__cil_tmp12;
  tmp = constant_test_bit(16U, __cil_tmp13);
  __cil_tmp14 = tmp == 0;
  __cil_tmp15 = (long )__cil_tmp14;
  tmp___0 = __builtin_expect(__cil_tmp15, 1L);
  }
  if (tmp___0 != 0L) {
    {
    __cil_tmp16 = & st->status;
    __cil_tmp17 = (unsigned long volatile *)__cil_tmp16;
    test_and_set_bit(0, __cil_tmp17);
    __cil_tmp18 = & st->workq;
    __cil_tmp19 = (void *)0;
    __wake_up(__cil_tmp18, 1U, 1, __cil_tmp19);
    }
  } else {

  }
  return;
}
}
static int mISDN_queue_message(struct mISDNchannel *ch , struct sk_buff *skb )
{ struct mISDNstack *__cil_tmp3 ;

  {
  {
  __cil_tmp3 = ch->st;
  _queue_message(__cil_tmp3, skb);
  }
  return (0);
}
}
static struct mISDNchannel *get_channel4id(struct mISDNstack *st , u_int id )
{ struct mISDNchannel *ch ;
  struct list_head const *__mptr ;
  struct list_head const *__mptr___0 ;
  struct mutex *__cil_tmp6 ;
  struct list_head *__cil_tmp7 ;
  u_int __cil_tmp8 ;
  struct list_head *__cil_tmp9 ;
  struct list_head *__cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  struct list_head *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  struct mutex *__cil_tmp14 ;

  {
  {
  __cil_tmp6 = & st->lmutex;
  mutex_lock_nested(__cil_tmp6, 0U);
  __cil_tmp7 = st->layer2.next;
  __mptr = (struct list_head const *)__cil_tmp7;
  ch = (struct mISDNchannel *)__mptr;
  }
  goto ldv_38432;
  ldv_38431: ;
  {
  __cil_tmp8 = ch->nr;
  if (__cil_tmp8 == id) {
    goto unlock;
  } else {

  }
  }
  __cil_tmp9 = ch->list.next;
  __mptr___0 = (struct list_head const *)__cil_tmp9;
  ch = (struct mISDNchannel *)__mptr___0;
  ldv_38432: ;
  {
  __cil_tmp10 = & st->layer2;
  __cil_tmp11 = (unsigned long )__cil_tmp10;
  __cil_tmp12 = & ch->list;
  __cil_tmp13 = (unsigned long )__cil_tmp12;
  if (__cil_tmp13 != __cil_tmp11) {
    goto ldv_38431;
  } else {
    goto ldv_38433;
  }
  }
  ldv_38433:
  ch = (struct mISDNchannel *)0;
  unlock:
  {
  __cil_tmp14 = & st->lmutex;
  mutex_unlock(__cil_tmp14);
  }
  return (ch);
}
}
static void send_socklist(struct mISDN_sock_list *sl , struct sk_buff *skb )
{ struct hlist_node *node ;
  struct sock *sk ;
  struct sk_buff *cskb ;
  int tmp ;
  struct hlist_node const *__mptr ;
  rwlock_t *__cil_tmp8 ;
  unsigned char volatile __cil_tmp9 ;
  unsigned char __cil_tmp10 ;
  unsigned int __cil_tmp11 ;
  struct sk_buff *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  struct sk_buff const *__cil_tmp15 ;
  struct sk_buff *__cil_tmp16 ;
  unsigned long __cil_tmp17 ;
  unsigned long __cil_tmp18 ;
  struct hlist_node *__cil_tmp19 ;
  unsigned long __cil_tmp20 ;
  unsigned long __cil_tmp21 ;
  struct sock *__cil_tmp22 ;
  rwlock_t *__cil_tmp23 ;
  struct sk_buff *__cil_tmp24 ;
  unsigned long __cil_tmp25 ;
  unsigned long __cil_tmp26 ;

  {
  {
  cskb = (struct sk_buff *)0;
  __cil_tmp8 = & sl->lock;
  _raw_read_lock(__cil_tmp8);
  node = sl->head.first;
  }
  goto ldv_38448;
  ldv_38447: ;
  {
  __cil_tmp9 = sk->__sk_common.skc_state;
  __cil_tmp10 = (unsigned char )__cil_tmp9;
  __cil_tmp11 = (unsigned int )__cil_tmp10;
  if (__cil_tmp11 != 2U) {
    goto ldv_38444;
  } else {

  }
  }
  {
  __cil_tmp12 = (struct sk_buff *)0;
  __cil_tmp13 = (unsigned long )__cil_tmp12;
  __cil_tmp14 = (unsigned long )cskb;
  if (__cil_tmp14 == __cil_tmp13) {
    {
    __cil_tmp15 = (struct sk_buff const *)skb;
    cskb = skb_copy(__cil_tmp15, 208U);
    }
  } else {

  }
  }
  {
  __cil_tmp16 = (struct sk_buff *)0;
  __cil_tmp17 = (unsigned long )__cil_tmp16;
  __cil_tmp18 = (unsigned long )cskb;
  if (__cil_tmp18 == __cil_tmp17) {
    {
    printk("<4>%s no skb\n", "send_socklist");
    }
    goto ldv_38446;
  } else {

  }
  }
  {
  tmp = sock_queue_rcv_skb(sk, cskb);
  }
  if (tmp == 0) {
    cskb = (struct sk_buff *)0;
  } else {

  }
  ldv_38444:
  node = node->next;
  ldv_38448: ;
  {
  __cil_tmp19 = (struct hlist_node *)0;
  __cil_tmp20 = (unsigned long )__cil_tmp19;
  __cil_tmp21 = (unsigned long )node;
  if (__cil_tmp21 != __cil_tmp20) {
    __mptr = (struct hlist_node const *)node;
    __cil_tmp22 = (struct sock *)__mptr;
    sk = __cil_tmp22 + 1152921504606846920UL;
    goto ldv_38447;
  } else {
    goto ldv_38446;
  }
  }
  ldv_38446:
  {
  __cil_tmp23 = & sl->lock;
  _raw_read_unlock(__cil_tmp23);
  }
  {
  __cil_tmp24 = (struct sk_buff *)0;
  __cil_tmp25 = (unsigned long )__cil_tmp24;
  __cil_tmp26 = (unsigned long )cskb;
  if (__cil_tmp26 != __cil_tmp25) {
    {
    consume_skb(cskb);
    }
  } else {

  }
  }
  return;
}
}
static void send_layer2(struct mISDNstack *st , struct sk_buff *skb )
{ struct sk_buff *cskb ;
  struct mISDNhead *hh ;
  struct mISDNchannel *ch ;
  int ret ;
  struct list_head const *__mptr ;
  int tmp ;
  struct list_head const *__mptr___0 ;
  struct list_head const *__mptr___1 ;
  struct list_head const *__mptr___2 ;
  char (*__cil_tmp12)[48U] ;
  struct mISDNstack *__cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  struct mutex *__cil_tmp16 ;
  unsigned int __cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  struct list_head *__cil_tmp19 ;
  struct list_head *__cil_tmp20 ;
  struct list_head const *__cil_tmp21 ;
  struct list_head *__cil_tmp22 ;
  struct list_head const *__cil_tmp23 ;
  struct sk_buff const *__cil_tmp24 ;
  struct sk_buff *__cil_tmp25 ;
  unsigned long __cil_tmp26 ;
  unsigned long __cil_tmp27 ;
  send_func_t *__cil_tmp28 ;
  u_int __cil_tmp29 ;
  unsigned int __cil_tmp30 ;
  u_int __cil_tmp31 ;
  unsigned int __cil_tmp32 ;
  u_int __cil_tmp33 ;
  u_int __cil_tmp34 ;
  u_int __cil_tmp35 ;
  struct list_head *__cil_tmp36 ;
  struct list_head *__cil_tmp37 ;
  unsigned long __cil_tmp38 ;
  struct list_head *__cil_tmp39 ;
  unsigned long __cil_tmp40 ;
  struct list_head *__cil_tmp41 ;
  u_int __cil_tmp42 ;
  unsigned int __cil_tmp43 ;
  unsigned int __cil_tmp44 ;
  send_func_t *__cil_tmp45 ;
  struct list_head *__cil_tmp46 ;
  struct list_head *__cil_tmp47 ;
  unsigned long __cil_tmp48 ;
  struct list_head *__cil_tmp49 ;
  unsigned long __cil_tmp50 ;
  struct mISDNdevice *__cil_tmp51 ;
  struct mISDNchannel *__cil_tmp52 ;
  ctrl_func_t *__cil_tmp53 ;
  struct mISDNdevice *__cil_tmp54 ;
  struct mISDNchannel *__cil_tmp55 ;
  void *__cil_tmp56 ;
  u_int __cil_tmp57 ;
  unsigned int __cil_tmp58 ;
  u_int __cil_tmp59 ;
  unsigned int __cil_tmp60 ;
  u_int __cil_tmp61 ;
  struct mutex *__cil_tmp62 ;
  struct sk_buff *__cil_tmp63 ;
  unsigned long __cil_tmp64 ;
  unsigned long __cil_tmp65 ;

  {
  __cil_tmp12 = & skb->cb;
  hh = (struct mISDNhead *)__cil_tmp12;
  {
  __cil_tmp13 = (struct mISDNstack *)0;
  __cil_tmp14 = (unsigned long )__cil_tmp13;
  __cil_tmp15 = (unsigned long )st;
  if (__cil_tmp15 == __cil_tmp14) {
    return;
  } else {

  }
  }
  {
  __cil_tmp16 = & st->lmutex;
  mutex_lock_nested(__cil_tmp16, 0U);
  }
  {
  __cil_tmp17 = hh->id;
  __cil_tmp18 = __cil_tmp17 & 65535U;
  if (__cil_tmp18 == 65535U) {
    __cil_tmp19 = st->layer2.next;
    __mptr = (struct list_head const *)__cil_tmp19;
    ch = (struct mISDNchannel *)__mptr;
    goto ldv_38464;
    ldv_38463:
    {
    __cil_tmp20 = & ch->list;
    __cil_tmp21 = (struct list_head const *)__cil_tmp20;
    __cil_tmp22 = & st->layer2;
    __cil_tmp23 = (struct list_head const *)__cil_tmp22;
    tmp = list_is_last(__cil_tmp21, __cil_tmp23);
    }
    if (tmp != 0) {
      cskb = skb;
      skb = (struct sk_buff *)0;
    } else {
      {
      __cil_tmp24 = (struct sk_buff const *)skb;
      cskb = skb_copy(__cil_tmp24, 208U);
      }
    }
    {
    __cil_tmp25 = (struct sk_buff *)0;
    __cil_tmp26 = (unsigned long )__cil_tmp25;
    __cil_tmp27 = (unsigned long )cskb;
    if (__cil_tmp27 != __cil_tmp26) {
      {
      __cil_tmp28 = ch->send;
      ret = (*__cil_tmp28)(ch, cskb);
      }
      if (ret != 0) {
        {
        __cil_tmp29 = *debug___2;
        __cil_tmp30 = __cil_tmp29 & 16U;
        if (__cil_tmp30 != 0U) {
          {
          __cil_tmp31 = ch->nr;
          __cil_tmp32 = hh->prim;
          __cil_tmp33 = ch->addr;
          printk("<7>%s ch%d prim(%x) addr(%x) err %d\n", "send_layer2", __cil_tmp31,
                 __cil_tmp32, __cil_tmp33, ret);
          }
        } else {

        }
        }
        {
        consume_skb(cskb);
        }
      } else {

      }
    } else {
      {
      __cil_tmp34 = ch->nr;
      __cil_tmp35 = ch->addr;
      printk("<4>%s ch%d addr %x no mem\n", "send_layer2", __cil_tmp34, __cil_tmp35);
      }
      goto out;
    }
    }
    __cil_tmp36 = ch->list.next;
    __mptr___0 = (struct list_head const *)__cil_tmp36;
    ch = (struct mISDNchannel *)__mptr___0;
    ldv_38464: ;
    {
    __cil_tmp37 = & st->layer2;
    __cil_tmp38 = (unsigned long )__cil_tmp37;
    __cil_tmp39 = & ch->list;
    __cil_tmp40 = (unsigned long )__cil_tmp39;
    if (__cil_tmp40 != __cil_tmp38) {
      goto ldv_38463;
    } else {
      goto ldv_38465;
    }
    }
    ldv_38465: ;
  } else {
    __cil_tmp41 = st->layer2.next;
    __mptr___1 = (struct list_head const *)__cil_tmp41;
    ch = (struct mISDNchannel *)__mptr___1;
    goto ldv_38471;
    ldv_38470: ;
    {
    __cil_tmp42 = ch->addr;
    __cil_tmp43 = hh->id;
    __cil_tmp44 = __cil_tmp43 & 65535U;
    if (__cil_tmp44 == __cil_tmp42) {
      {
      __cil_tmp45 = ch->send;
      ret = (*__cil_tmp45)(ch, skb);
      }
      if (ret == 0) {
        skb = (struct sk_buff *)0;
      } else {

      }
      goto out;
    } else {

    }
    }
    __cil_tmp46 = ch->list.next;
    __mptr___2 = (struct list_head const *)__cil_tmp46;
    ch = (struct mISDNchannel *)__mptr___2;
    ldv_38471: ;
    {
    __cil_tmp47 = & st->layer2;
    __cil_tmp48 = (unsigned long )__cil_tmp47;
    __cil_tmp49 = & ch->list;
    __cil_tmp50 = (unsigned long )__cil_tmp49;
    if (__cil_tmp50 != __cil_tmp48) {
      goto ldv_38470;
    } else {
      goto ldv_38472;
    }
    }
    ldv_38472:
    {
    __cil_tmp51 = st->dev;
    __cil_tmp52 = __cil_tmp51->teimgr;
    __cil_tmp53 = __cil_tmp52->ctrl;
    __cil_tmp54 = st->dev;
    __cil_tmp55 = __cil_tmp54->teimgr;
    __cil_tmp56 = (void *)skb;
    ret = (*__cil_tmp53)(__cil_tmp55, 1024U, __cil_tmp56);
    }
    if (ret == 0) {
      skb = (struct sk_buff *)0;
    } else {
      {
      __cil_tmp57 = *debug___2;
      __cil_tmp58 = __cil_tmp57 & 16U;
      if (__cil_tmp58 != 0U) {
        {
        __cil_tmp59 = ch->nr;
        __cil_tmp60 = hh->prim;
        __cil_tmp61 = ch->addr;
        printk("<7>%s ch%d mgr prim(%x) addr(%x) err %d\n", "send_layer2", __cil_tmp59,
               __cil_tmp60, __cil_tmp61, ret);
        }
      } else {

      }
      }
    }
  }
  }
  out:
  {
  __cil_tmp62 = & st->lmutex;
  mutex_unlock(__cil_tmp62);
  }
  {
  __cil_tmp63 = (struct sk_buff *)0;
  __cil_tmp64 = (unsigned long )__cil_tmp63;
  __cil_tmp65 = (unsigned long )skb;
  if (__cil_tmp65 != __cil_tmp64) {
    {
    consume_skb(skb);
    }
  } else {

  }
  }
  return;
}
}
__inline static int send_msg_to_layer(struct mISDNstack *st , struct sk_buff *skb )
{ struct mISDNhead *hh ;
  struct mISDNchannel *ch ;
  int lm ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  char const *tmp___3 ;
  int __ret_warn_on ;
  long tmp___4 ;
  int tmp___5 ;
  char const *tmp___6 ;
  char const *tmp___7 ;
  char (*__cil_tmp16)[48U] ;
  unsigned int __cil_tmp17 ;
  int __cil_tmp18 ;
  u_int __cil_tmp19 ;
  unsigned int __cil_tmp20 ;
  unsigned int __cil_tmp21 ;
  unsigned int __cil_tmp22 ;
  struct hlist_head *__cil_tmp23 ;
  struct hlist_head const *__cil_tmp24 ;
  struct mISDN_sock_list *__cil_tmp25 ;
  struct mISDNchannel *__cil_tmp26 ;
  send_func_t *__cil_tmp27 ;
  struct mISDNchannel *__cil_tmp28 ;
  struct hlist_head *__cil_tmp29 ;
  struct hlist_head const *__cil_tmp30 ;
  struct mISDN_sock_list *__cil_tmp31 ;
  unsigned int __cil_tmp32 ;
  struct mISDNchannel *__cil_tmp33 ;
  unsigned long __cil_tmp34 ;
  unsigned long __cil_tmp35 ;
  send_func_t *__cil_tmp36 ;
  struct mISDNdevice *__cil_tmp37 ;
  struct device *__cil_tmp38 ;
  struct device const *__cil_tmp39 ;
  unsigned int __cil_tmp40 ;
  unsigned int __cil_tmp41 ;
  int __cil_tmp42 ;
  long __cil_tmp43 ;
  int __cil_tmp44 ;
  int __cil_tmp45 ;
  int __cil_tmp46 ;
  long __cil_tmp47 ;
  unsigned int __cil_tmp48 ;
  struct mISDNchannel *__cil_tmp49 ;
  unsigned long __cil_tmp50 ;
  unsigned long __cil_tmp51 ;
  send_func_t *__cil_tmp52 ;
  struct mISDNdevice *__cil_tmp53 ;
  struct device *__cil_tmp54 ;
  struct device const *__cil_tmp55 ;
  unsigned int __cil_tmp56 ;
  unsigned int __cil_tmp57 ;
  struct mISDNdevice *__cil_tmp58 ;
  struct device *__cil_tmp59 ;
  struct device const *__cil_tmp60 ;
  unsigned int __cil_tmp61 ;

  {
  __cil_tmp16 = & skb->cb;
  hh = (struct mISDNhead *)__cil_tmp16;
  __cil_tmp17 = hh->prim;
  __cil_tmp18 = (int )__cil_tmp17;
  lm = __cil_tmp18 & 255;
  {
  __cil_tmp19 = *debug___2;
  __cil_tmp20 = __cil_tmp19 & 64U;
  if (__cil_tmp20 != 0U) {
    {
    __cil_tmp21 = hh->prim;
    __cil_tmp22 = hh->id;
    printk("<7>%s prim(%x) id(%x) %p\n", "send_msg_to_layer", __cil_tmp21, __cil_tmp22,
           skb);
    }
  } else {

  }
  }
  if (lm == 1) {
    {
    __cil_tmp23 = & st->l1sock.head;
    __cil_tmp24 = (struct hlist_head const *)__cil_tmp23;
    tmp = hlist_empty(__cil_tmp24);
    }
    if (tmp == 0) {
      {
      __net_timestamp(skb);
      __cil_tmp25 = & st->l1sock;
      send_socklist(__cil_tmp25, skb);
      }
    } else {

    }
    {
    __cil_tmp26 = st->layer1;
    __cil_tmp27 = __cil_tmp26->send;
    __cil_tmp28 = st->layer1;
    tmp___0 = (*__cil_tmp27)(__cil_tmp28, skb);
    }
    return (tmp___0);
  } else
  if (lm == 2) {
    {
    __cil_tmp29 = & st->l1sock.head;
    __cil_tmp30 = (struct hlist_head const *)__cil_tmp29;
    tmp___1 = hlist_empty(__cil_tmp30);
    }
    if (tmp___1 == 0) {
      {
      __cil_tmp31 = & st->l1sock;
      send_socklist(__cil_tmp31, skb);
      }
    } else {

    }
    {
    send_layer2(st, skb);
    }
    return (0);
  } else
  if (lm == 4) {
    {
    __cil_tmp32 = hh->id;
    ch = get_channel4id(st, __cil_tmp32);
    }
    {
    __cil_tmp33 = (struct mISDNchannel *)0;
    __cil_tmp34 = (unsigned long )__cil_tmp33;
    __cil_tmp35 = (unsigned long )ch;
    if (__cil_tmp35 != __cil_tmp34) {
      {
      __cil_tmp36 = ch->send;
      tmp___2 = (*__cil_tmp36)(ch, skb);
      }
      return (tmp___2);
    } else {
      {
      __cil_tmp37 = st->dev;
      __cil_tmp38 = & __cil_tmp37->dev;
      __cil_tmp39 = (struct device const *)__cil_tmp38;
      tmp___3 = dev_name(__cil_tmp39);
      __cil_tmp40 = hh->prim;
      __cil_tmp41 = hh->id;
      printk("<4>%s: dev(%s) prim(%x) id(%x) no channel\n", "send_msg_to_layer", tmp___3,
             __cil_tmp40, __cil_tmp41);
      }
    }
    }
  } else
  if (lm == 8) {
    {
    __ret_warn_on = lm == 8;
    __cil_tmp42 = __ret_warn_on != 0;
    __cil_tmp43 = (long )__cil_tmp42;
    tmp___4 = __builtin_expect(__cil_tmp43, 0L);
    }
    if (tmp___4 != 0L) {
      {
      __cil_tmp44 = (int const )186;
      __cil_tmp45 = (int )__cil_tmp44;
      warn_slowpath_null("/anthill/stuff/tacas-comp/work/current--X--drivers/isdn/mISDN/mISDN_core.ko--X--bulklinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/30/dscv_tempdir/dscv/ri/08_1/drivers/isdn/mISDN/stack.c.p",
                         __cil_tmp45);
      }
    } else {

    }
    {
    __cil_tmp46 = __ret_warn_on != 0;
    __cil_tmp47 = (long )__cil_tmp46;
    __builtin_expect(__cil_tmp47, 0L);
    __cil_tmp48 = hh->id;
    ch = get_channel4id(st, __cil_tmp48);
    }
    {
    __cil_tmp49 = (struct mISDNchannel *)0;
    __cil_tmp50 = (unsigned long )__cil_tmp49;
    __cil_tmp51 = (unsigned long )ch;
    if (__cil_tmp51 != __cil_tmp50) {
      {
      __cil_tmp52 = ch->send;
      tmp___5 = (*__cil_tmp52)(ch, skb);
      }
      return (tmp___5);
    } else {
      {
      __cil_tmp53 = st->dev;
      __cil_tmp54 = & __cil_tmp53->dev;
      __cil_tmp55 = (struct device const *)__cil_tmp54;
      tmp___6 = dev_name(__cil_tmp55);
      __cil_tmp56 = hh->prim;
      __cil_tmp57 = hh->id;
      printk("<4>%s: dev(%s) prim(%x) id(%x) no channel\n", "send_msg_to_layer", tmp___6,
             __cil_tmp56, __cil_tmp57);
      }
    }
    }
  } else {
    {
    __cil_tmp58 = st->dev;
    __cil_tmp59 = & __cil_tmp58->dev;
    __cil_tmp60 = (struct device const *)__cil_tmp59;
    tmp___7 = dev_name(__cil_tmp60);
    __cil_tmp61 = hh->prim;
    printk("<4>%s: dev(%s) prim %x not delivered\n", "send_msg_to_layer", tmp___7,
           __cil_tmp61);
    }
  }
  return (-3);
}
}
static void do_clear_stack(struct mISDNstack *st )
{

  {
  return;
}
}
static int mISDNStackd(void *data )
{ struct mISDNstack *st ;
  int err ;
  struct task_struct *tmp ;
  char const *tmp___0 ;
  struct sk_buff *skb ;
  int tmp___1 ;
  long tmp___2 ;
  char const *tmp___3 ;
  long tmp___4 ;
  int tmp___5 ;
  long tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int __ret ;
  wait_queue_t __wait ;
  struct task_struct *tmp___12 ;
  struct task_struct *tmp___13 ;
  int tmp___14 ;
  char const *tmp___15 ;
  int tmp___16 ;
  sigset_t *__cil_tmp25 ;
  u_int __cil_tmp26 ;
  unsigned int __cil_tmp27 ;
  struct mISDNdevice *__cil_tmp28 ;
  struct device *__cil_tmp29 ;
  struct device const *__cil_tmp30 ;
  struct completion *__cil_tmp31 ;
  unsigned long __cil_tmp32 ;
  struct completion *__cil_tmp33 ;
  unsigned long __cil_tmp34 ;
  struct completion *__cil_tmp35 ;
  u_long *__cil_tmp36 ;
  unsigned long const volatile *__cil_tmp37 ;
  int __cil_tmp38 ;
  long __cil_tmp39 ;
  u_long *__cil_tmp40 ;
  unsigned long volatile *__cil_tmp41 ;
  u_long *__cil_tmp42 ;
  unsigned long volatile *__cil_tmp43 ;
  u_long *__cil_tmp44 ;
  unsigned long volatile *__cil_tmp45 ;
  struct sk_buff_head *__cil_tmp46 ;
  struct sk_buff *__cil_tmp47 ;
  unsigned long __cil_tmp48 ;
  unsigned long __cil_tmp49 ;
  u_long *__cil_tmp50 ;
  unsigned long volatile *__cil_tmp51 ;
  struct sk_buff_head *__cil_tmp52 ;
  struct sk_buff *__cil_tmp53 ;
  unsigned long __cil_tmp54 ;
  unsigned long __cil_tmp55 ;
  u_long *__cil_tmp56 ;
  unsigned long volatile *__cil_tmp57 ;
  int __cil_tmp58 ;
  long __cil_tmp59 ;
  u_int __cil_tmp60 ;
  unsigned int __cil_tmp61 ;
  struct mISDNdevice *__cil_tmp62 ;
  struct device *__cil_tmp63 ;
  struct device const *__cil_tmp64 ;
  char (*__cil_tmp65)[48U] ;
  struct mISDNhead *__cil_tmp66 ;
  unsigned int __cil_tmp67 ;
  char (*__cil_tmp68)[48U] ;
  struct mISDNhead *__cil_tmp69 ;
  unsigned int __cil_tmp70 ;
  u_long *__cil_tmp71 ;
  unsigned long const volatile *__cil_tmp72 ;
  int __cil_tmp73 ;
  long __cil_tmp74 ;
  u_long *__cil_tmp75 ;
  unsigned long volatile *__cil_tmp76 ;
  u_long *__cil_tmp77 ;
  unsigned long volatile *__cil_tmp78 ;
  u_long *__cil_tmp79 ;
  unsigned long const volatile *__cil_tmp80 ;
  u_long *__cil_tmp81 ;
  unsigned long const volatile *__cil_tmp82 ;
  u_long *__cil_tmp83 ;
  unsigned long volatile *__cil_tmp84 ;
  u_long *__cil_tmp85 ;
  unsigned long volatile *__cil_tmp86 ;
  u_long *__cil_tmp87 ;
  unsigned long volatile *__cil_tmp88 ;
  u_long *__cil_tmp89 ;
  unsigned long volatile *__cil_tmp90 ;
  u_long *__cil_tmp91 ;
  unsigned long volatile *__cil_tmp92 ;
  u_long *__cil_tmp93 ;
  unsigned long volatile *__cil_tmp94 ;
  u_long *__cil_tmp95 ;
  unsigned long volatile *__cil_tmp96 ;
  struct sk_buff_head *__cil_tmp97 ;
  struct sk_buff_head const *__cil_tmp98 ;
  u_long *__cil_tmp99 ;
  unsigned long volatile *__cil_tmp100 ;
  u_long *__cil_tmp101 ;
  unsigned long const volatile *__cil_tmp102 ;
  struct completion *__cil_tmp103 ;
  unsigned long __cil_tmp104 ;
  struct completion *__cil_tmp105 ;
  unsigned long __cil_tmp106 ;
  struct completion *__cil_tmp107 ;
  u_long *__cil_tmp108 ;
  unsigned long volatile *__cil_tmp109 ;
  u_long __cil_tmp110 ;
  unsigned long __cil_tmp111 ;
  wait_queue_head_t *__cil_tmp112 ;
  u_long __cil_tmp113 ;
  unsigned long __cil_tmp114 ;
  wait_queue_head_t *__cil_tmp115 ;
  u_int __cil_tmp116 ;
  unsigned int __cil_tmp117 ;
  struct mISDNdevice *__cil_tmp118 ;
  struct device *__cil_tmp119 ;
  struct device const *__cil_tmp120 ;
  u_long __cil_tmp121 ;
  u_long *__cil_tmp122 ;
  unsigned long volatile *__cil_tmp123 ;
  u_long *__cil_tmp124 ;
  unsigned long volatile *__cil_tmp125 ;
  u_long *__cil_tmp126 ;
  unsigned long const volatile *__cil_tmp127 ;
  u_long *__cil_tmp128 ;
  unsigned long volatile *__cil_tmp129 ;
  u_long *__cil_tmp130 ;
  unsigned long volatile *__cil_tmp131 ;
  u_long *__cil_tmp132 ;
  unsigned long volatile *__cil_tmp133 ;
  u_long *__cil_tmp134 ;
  unsigned long volatile *__cil_tmp135 ;
  u_long *__cil_tmp136 ;
  unsigned long volatile *__cil_tmp137 ;
  struct sk_buff_head *__cil_tmp138 ;
  struct completion *__cil_tmp139 ;
  unsigned long __cil_tmp140 ;
  struct completion *__cil_tmp141 ;
  unsigned long __cil_tmp142 ;
  struct completion *__cil_tmp143 ;

  {
  {
  st = (struct mISDNstack *)data;
  err = 0;
  tmp = get_current();
  __cil_tmp25 = & tmp->blocked;
  sigfillset(__cil_tmp25);
  }
  {
  __cil_tmp26 = *debug___2;
  __cil_tmp27 = __cil_tmp26 & 32U;
  if (__cil_tmp27 != 0U) {
    {
    __cil_tmp28 = st->dev;
    __cil_tmp29 = & __cil_tmp28->dev;
    __cil_tmp30 = (struct device const *)__cil_tmp29;
    tmp___0 = dev_name(__cil_tmp30);
    printk("<7>mISDNStackd %s started\n", tmp___0);
    }
  } else {

  }
  }
  {
  __cil_tmp31 = (struct completion *)0;
  __cil_tmp32 = (unsigned long )__cil_tmp31;
  __cil_tmp33 = st->notify;
  __cil_tmp34 = (unsigned long )__cil_tmp33;
  if (__cil_tmp34 != __cil_tmp32) {
    {
    __cil_tmp35 = st->notify;
    complete(__cil_tmp35);
    st->notify = (struct completion *)0;
    }
  } else {

  }
  }
  ldv_38503:
  {
  __cil_tmp36 = & st->status;
  __cil_tmp37 = (unsigned long const volatile *)__cil_tmp36;
  tmp___1 = constant_test_bit(16U, __cil_tmp37);
  __cil_tmp38 = tmp___1 != 0;
  __cil_tmp39 = (long )__cil_tmp38;
  tmp___2 = __builtin_expect(__cil_tmp39, 0L);
  }
  if (tmp___2 != 0L) {
    {
    __cil_tmp40 = & st->status;
    __cil_tmp41 = (unsigned long volatile *)__cil_tmp40;
    test_and_clear_bit(0, __cil_tmp41);
    __cil_tmp42 = & st->status;
    __cil_tmp43 = (unsigned long volatile *)__cil_tmp42;
    test_and_clear_bit(30, __cil_tmp43);
    }
  } else {
    {
    __cil_tmp44 = & st->status;
    __cil_tmp45 = (unsigned long volatile *)__cil_tmp44;
    test_and_set_bit(30, __cil_tmp45);
    }
  }
  goto ldv_38492;
  ldv_38495:
  {
  __cil_tmp46 = & st->msgq;
  skb = skb_dequeue(__cil_tmp46);
  }
  {
  __cil_tmp47 = (struct sk_buff *)0;
  __cil_tmp48 = (unsigned long )__cil_tmp47;
  __cil_tmp49 = (unsigned long )skb;
  if (__cil_tmp49 == __cil_tmp48) {
    {
    __cil_tmp50 = & st->status;
    __cil_tmp51 = (unsigned long volatile *)__cil_tmp50;
    test_and_clear_bit(0, __cil_tmp51);
    __cil_tmp52 = & st->msgq;
    skb = skb_dequeue(__cil_tmp52);
    }
    {
    __cil_tmp53 = (struct sk_buff *)0;
    __cil_tmp54 = (unsigned long )__cil_tmp53;
    __cil_tmp55 = (unsigned long )skb;
    if (__cil_tmp55 == __cil_tmp54) {
      goto ldv_38492;
    } else {

    }
    }
    {
    __cil_tmp56 = & st->status;
    __cil_tmp57 = (unsigned long volatile *)__cil_tmp56;
    test_and_set_bit(0, __cil_tmp57);
    }
  } else {

  }
  }
  {
  err = send_msg_to_layer(st, skb);
  __cil_tmp58 = err != 0;
  __cil_tmp59 = (long )__cil_tmp58;
  tmp___4 = __builtin_expect(__cil_tmp59, 0L);
  }
  if (tmp___4 != 0L) {
    {
    __cil_tmp60 = *debug___2;
    __cil_tmp61 = __cil_tmp60 & 16U;
    if (__cil_tmp61 != 0U) {
      {
      __cil_tmp62 = st->dev;
      __cil_tmp63 = & __cil_tmp62->dev;
      __cil_tmp64 = (struct device const *)__cil_tmp63;
      tmp___3 = dev_name(__cil_tmp64);
      __cil_tmp65 = & skb->cb;
      __cil_tmp66 = (struct mISDNhead *)__cil_tmp65;
      __cil_tmp67 = __cil_tmp66->prim;
      __cil_tmp68 = & skb->cb;
      __cil_tmp69 = (struct mISDNhead *)__cil_tmp68;
      __cil_tmp70 = __cil_tmp69->id;
      printk("<7>%s: %s prim(%x) id(%x) send call(%d)\n", "mISDNStackd", tmp___3,
             __cil_tmp67, __cil_tmp70, err);
      }
    } else {

    }
    }
    {
    consume_skb(skb);
    }
    goto ldv_38492;
  } else {

  }
  {
  __cil_tmp71 = & st->status;
  __cil_tmp72 = (unsigned long const volatile *)__cil_tmp71;
  tmp___5 = constant_test_bit(16U, __cil_tmp72);
  __cil_tmp73 = tmp___5 != 0;
  __cil_tmp74 = (long )__cil_tmp73;
  tmp___6 = __builtin_expect(__cil_tmp74, 0L);
  }
  if (tmp___6 != 0L) {
    {
    __cil_tmp75 = & st->status;
    __cil_tmp76 = (unsigned long volatile *)__cil_tmp75;
    test_and_clear_bit(0, __cil_tmp76);
    __cil_tmp77 = & st->status;
    __cil_tmp78 = (unsigned long volatile *)__cil_tmp77;
    test_and_clear_bit(30, __cil_tmp78);
    }
    goto ldv_38494;
  } else {

  }
  ldv_38492:
  {
  __cil_tmp79 = & st->status;
  __cil_tmp80 = (unsigned long const volatile *)__cil_tmp79;
  tmp___7 = constant_test_bit(0U, __cil_tmp80);
  }
  if (tmp___7 != 0) {
    goto ldv_38495;
  } else {
    goto ldv_38494;
  }
  ldv_38494:
  {
  __cil_tmp81 = & st->status;
  __cil_tmp82 = (unsigned long const volatile *)__cil_tmp81;
  tmp___8 = constant_test_bit(2U, __cil_tmp82);
  }
  if (tmp___8 != 0) {
    {
    __cil_tmp83 = & st->status;
    __cil_tmp84 = (unsigned long volatile *)__cil_tmp83;
    test_and_set_bit(16, __cil_tmp84);
    __cil_tmp85 = & st->status;
    __cil_tmp86 = (unsigned long volatile *)__cil_tmp85;
    test_and_clear_bit(30, __cil_tmp86);
    do_clear_stack(st);
    __cil_tmp87 = & st->status;
    __cil_tmp88 = (unsigned long volatile *)__cil_tmp87;
    test_and_clear_bit(2, __cil_tmp88);
    __cil_tmp89 = & st->status;
    __cil_tmp90 = (unsigned long volatile *)__cil_tmp89;
    test_and_set_bit(3, __cil_tmp90);
    }
  } else {

  }
  {
  __cil_tmp91 = & st->status;
  __cil_tmp92 = (unsigned long volatile *)__cil_tmp91;
  tmp___10 = test_and_clear_bit(3, __cil_tmp92);
  }
  if (tmp___10 != 0) {
    {
    __cil_tmp93 = & st->status;
    __cil_tmp94 = (unsigned long volatile *)__cil_tmp93;
    test_and_clear_bit(16, __cil_tmp94);
    __cil_tmp95 = & st->status;
    __cil_tmp96 = (unsigned long volatile *)__cil_tmp95;
    test_and_set_bit(30, __cil_tmp96);
    __cil_tmp97 = & st->msgq;
    __cil_tmp98 = (struct sk_buff_head const *)__cil_tmp97;
    tmp___9 = skb_queue_empty(__cil_tmp98);
    }
    if (tmp___9 == 0) {
      {
      __cil_tmp99 = & st->status;
      __cil_tmp100 = (unsigned long volatile *)__cil_tmp99;
      test_and_set_bit(0, __cil_tmp100);
      }
    } else {

    }
  } else {

  }
  {
  __cil_tmp101 = & st->status;
  __cil_tmp102 = (unsigned long const volatile *)__cil_tmp101;
  tmp___11 = constant_test_bit(15U, __cil_tmp102);
  }
  if (tmp___11 != 0) {
    goto ldv_38496;
  } else {

  }
  {
  __cil_tmp103 = (struct completion *)0;
  __cil_tmp104 = (unsigned long )__cil_tmp103;
  __cil_tmp105 = st->notify;
  __cil_tmp106 = (unsigned long )__cil_tmp105;
  if (__cil_tmp106 != __cil_tmp104) {
    {
    __cil_tmp107 = st->notify;
    complete(__cil_tmp107);
    st->notify = (struct completion *)0;
    }
  } else {

  }
  }
  {
  __cil_tmp108 = & st->status;
  __cil_tmp109 = (unsigned long volatile *)__cil_tmp108;
  test_and_clear_bit(29, __cil_tmp109);
  __ret = 0;
  }
  {
  __cil_tmp110 = st->status;
  __cil_tmp111 = __cil_tmp110 & 65535UL;
  if (__cil_tmp111 == 0UL) {
    {
    tmp___12 = get_current();
    __wait.flags = 0U;
    __wait.private = (void *)tmp___12;
    __wait.func = & autoremove_wake_function;
    __wait.task_list.next = & __wait.task_list;
    __wait.task_list.prev = & __wait.task_list;
    }
    ldv_38501:
    {
    __cil_tmp112 = & st->workq;
    prepare_to_wait(__cil_tmp112, & __wait, 1);
    }
    {
    __cil_tmp113 = st->status;
    __cil_tmp114 = __cil_tmp113 & 65535UL;
    if (__cil_tmp114 != 0UL) {
      goto ldv_38499;
    } else {

    }
    }
    {
    tmp___13 = get_current();
    tmp___14 = signal_pending(tmp___13);
    }
    if (tmp___14 == 0) {
      {
      schedule();
      }
      goto ldv_38500;
    } else {

    }
    __ret = -512;
    goto ldv_38499;
    ldv_38500: ;
    goto ldv_38501;
    ldv_38499:
    {
    __cil_tmp115 = & st->workq;
    finish_wait(__cil_tmp115, & __wait);
    }
  } else {

  }
  }
  {
  __cil_tmp116 = *debug___2;
  __cil_tmp117 = __cil_tmp116 & 32U;
  if (__cil_tmp117 != 0U) {
    {
    __cil_tmp118 = st->dev;
    __cil_tmp119 = & __cil_tmp118->dev;
    __cil_tmp120 = (struct device const *)__cil_tmp119;
    tmp___15 = dev_name(__cil_tmp120);
    __cil_tmp121 = st->status;
    printk("<7>%s: %s wake status %08lx\n", "mISDNStackd", tmp___15, __cil_tmp121);
    }
  } else {

  }
  }
  {
  __cil_tmp122 = & st->status;
  __cil_tmp123 = (unsigned long volatile *)__cil_tmp122;
  test_and_set_bit(29, __cil_tmp123);
  __cil_tmp124 = & st->status;
  __cil_tmp125 = (unsigned long volatile *)__cil_tmp124;
  test_and_clear_bit(4, __cil_tmp125);
  __cil_tmp126 = & st->status;
  __cil_tmp127 = (unsigned long const volatile *)__cil_tmp126;
  tmp___16 = constant_test_bit(16U, __cil_tmp127);
  }
  if (tmp___16 != 0) {
    {
    __cil_tmp128 = & st->status;
    __cil_tmp129 = (unsigned long volatile *)__cil_tmp128;
    test_and_clear_bit(30, __cil_tmp129);
    }
  } else {

  }
  goto ldv_38503;
  ldv_38496:
  {
  __cil_tmp130 = & st->status;
  __cil_tmp131 = (unsigned long volatile *)__cil_tmp130;
  test_and_set_bit(31, __cil_tmp131);
  __cil_tmp132 = & st->status;
  __cil_tmp133 = (unsigned long volatile *)__cil_tmp132;
  test_and_clear_bit(30, __cil_tmp133);
  __cil_tmp134 = & st->status;
  __cil_tmp135 = (unsigned long volatile *)__cil_tmp134;
  test_and_clear_bit(29, __cil_tmp135);
  __cil_tmp136 = & st->status;
  __cil_tmp137 = (unsigned long volatile *)__cil_tmp136;
  test_and_clear_bit(15, __cil_tmp137);
  __cil_tmp138 = & st->msgq;
  skb_queue_purge(__cil_tmp138);
  st->thread = (struct task_struct *)0;
  }
  {
  __cil_tmp139 = (struct completion *)0;
  __cil_tmp140 = (unsigned long )__cil_tmp139;
  __cil_tmp141 = st->notify;
  __cil_tmp142 = (unsigned long )__cil_tmp141;
  if (__cil_tmp142 != __cil_tmp140) {
    {
    __cil_tmp143 = st->notify;
    complete(__cil_tmp143);
    st->notify = (struct completion *)0;
    }
  } else {

  }
  }
  return (0);
}
}
static int l1_receive(struct mISDNchannel *ch , struct sk_buff *skb )
{ struct mISDNstack *__cil_tmp3 ;
  unsigned long __cil_tmp4 ;
  struct mISDNstack *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  struct mISDNstack *__cil_tmp7 ;

  {
  {
  __cil_tmp3 = (struct mISDNstack *)0;
  __cil_tmp4 = (unsigned long )__cil_tmp3;
  __cil_tmp5 = ch->st;
  __cil_tmp6 = (unsigned long )__cil_tmp5;
  if (__cil_tmp6 == __cil_tmp4) {
    return (-19);
  } else {

  }
  }
  {
  __net_timestamp(skb);
  __cil_tmp7 = ch->st;
  _queue_message(__cil_tmp7, skb);
  }
  return (0);
}
}
void set_channel_address(struct mISDNchannel *ch , u_int sapi , u_int tei )
{ u_int __cil_tmp4 ;

  {
  __cil_tmp4 = tei << 8;
  ch->addr = __cil_tmp4 | sapi;
  return;
}
}
void __add_layer2(struct mISDNchannel *ch , struct mISDNstack *st )
{ struct list_head *__cil_tmp3 ;
  struct list_head *__cil_tmp4 ;

  {
  {
  __cil_tmp3 = & ch->list;
  __cil_tmp4 = & st->layer2;
  list_add_tail(__cil_tmp3, __cil_tmp4);
  }
  return;
}
}
void add_layer2(struct mISDNchannel *ch , struct mISDNstack *st )
{ struct mutex *__cil_tmp3 ;
  struct mutex *__cil_tmp4 ;

  {
  {
  __cil_tmp3 = & st->lmutex;
  mutex_lock_nested(__cil_tmp3, 0U);
  __add_layer2(ch, st);
  __cil_tmp4 = & st->lmutex;
  mutex_unlock(__cil_tmp4);
  }
  return;
}
}
static int st_own_ctrl(struct mISDNchannel *ch , u_int cmd , void *arg )
{ int tmp ;
  struct mISDNstack *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  struct mISDNstack *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  struct mISDNchannel *__cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  struct mISDNstack *__cil_tmp11 ;
  struct mISDNchannel *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  struct mISDNstack *__cil_tmp14 ;
  struct mISDNchannel *__cil_tmp15 ;
  ctrl_func_t *__cil_tmp16 ;
  struct mISDNstack *__cil_tmp17 ;
  struct mISDNchannel *__cil_tmp18 ;

  {
  {
  __cil_tmp5 = (struct mISDNstack *)0;
  __cil_tmp6 = (unsigned long )__cil_tmp5;
  __cil_tmp7 = ch->st;
  __cil_tmp8 = (unsigned long )__cil_tmp7;
  if (__cil_tmp8 == __cil_tmp6) {
    return (-22);
  } else {
    {
    __cil_tmp9 = (struct mISDNchannel *)0;
    __cil_tmp10 = (unsigned long )__cil_tmp9;
    __cil_tmp11 = ch->st;
    __cil_tmp12 = __cil_tmp11->layer1;
    __cil_tmp13 = (unsigned long )__cil_tmp12;
    if (__cil_tmp13 == __cil_tmp10) {
      return (-22);
    } else {

    }
    }
  }
  }
  {
  __cil_tmp14 = ch->st;
  __cil_tmp15 = __cil_tmp14->layer1;
  __cil_tmp16 = __cil_tmp15->ctrl;
  __cil_tmp17 = ch->st;
  __cil_tmp18 = __cil_tmp17->layer1;
  tmp = (*__cil_tmp16)(__cil_tmp18, cmd, arg);
  }
  return (tmp);
}
}
int create_stack(struct mISDNdevice *dev )
{ struct mISDNstack *newst ;
  int err ;
  struct completion done ;
  void *tmp ;
  struct lock_class_key __key ;
  struct lock_class_key __key___0 ;
  struct lock_class_key __key___1 ;
  char const *tmp___0 ;
  struct task_struct *__k ;
  char const *tmp___1 ;
  struct task_struct *tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;
  char const *tmp___5 ;
  long tmp___6 ;
  struct mISDNstack *__cil_tmp17 ;
  unsigned long __cil_tmp18 ;
  unsigned long __cil_tmp19 ;
  struct list_head *__cil_tmp20 ;
  rwlock_t *__cil_tmp21 ;
  wait_queue_head_t *__cil_tmp22 ;
  struct sk_buff_head *__cil_tmp23 ;
  struct mutex *__cil_tmp24 ;
  void const *__cil_tmp25 ;
  struct mISDNchannel *__cil_tmp26 ;
  struct mISDNchannel *__cil_tmp27 ;
  struct mISDNchannel *__cil_tmp28 ;
  u_int __cil_tmp29 ;
  unsigned int __cil_tmp30 ;
  struct mISDNdevice *__cil_tmp31 ;
  struct device *__cil_tmp32 ;
  struct device const *__cil_tmp33 ;
  struct mISDNdevice *__cil_tmp34 ;
  struct device *__cil_tmp35 ;
  struct device const *__cil_tmp36 ;
  void *__cil_tmp37 ;
  void const *__cil_tmp38 ;
  struct task_struct *__cil_tmp39 ;
  void const *__cil_tmp40 ;
  struct task_struct *__cil_tmp41 ;
  void const *__cil_tmp42 ;
  struct mISDNdevice *__cil_tmp43 ;
  struct device *__cil_tmp44 ;
  struct device const *__cil_tmp45 ;
  struct mISDNchannel *__cil_tmp46 ;
  void const *__cil_tmp47 ;

  {
  {
  init_completion(& done);
  done = done;
  tmp = kzalloc(568UL, 208U);
  newst = (struct mISDNstack *)tmp;
  }
  {
  __cil_tmp17 = (struct mISDNstack *)0;
  __cil_tmp18 = (unsigned long )__cil_tmp17;
  __cil_tmp19 = (unsigned long )newst;
  if (__cil_tmp19 == __cil_tmp18) {
    {
    printk("<3>kmalloc mISDN_stack failed\n");
    }
    return (-12);
  } else {

  }
  }
  {
  newst->dev = dev;
  __cil_tmp20 = & newst->layer2;
  INIT_LIST_HEAD(__cil_tmp20);
  newst->l1sock.head.first = (struct hlist_node *)0;
  __cil_tmp21 = & newst->l1sock.lock;
  __rwlock_init(__cil_tmp21, "&newst->l1sock.lock", & __key);
  __cil_tmp22 = & newst->workq;
  __init_waitqueue_head(__cil_tmp22, & __key___0);
  __cil_tmp23 = & newst->msgq;
  skb_queue_head_init(__cil_tmp23);
  __cil_tmp24 = & newst->lmutex;
  __mutex_init(__cil_tmp24, "&newst->lmutex", & __key___1);
  dev->D.st = newst;
  err = create_teimanager(dev);
  }
  if (err != 0) {
    {
    printk("<3>kmalloc teimanager failed\n");
    __cil_tmp25 = (void const *)newst;
    kfree(__cil_tmp25);
    }
    return (err);
  } else {

  }
  __cil_tmp26 = dev->teimgr;
  __cil_tmp26->peer = & newst->own;
  __cil_tmp27 = dev->teimgr;
  __cil_tmp27->recv = & mISDN_queue_message;
  __cil_tmp28 = dev->teimgr;
  __cil_tmp28->st = newst;
  newst->layer1 = & dev->D;
  dev->D.recv = & l1_receive;
  dev->D.peer = & newst->own;
  newst->own.st = newst;
  newst->own.ctrl = & st_own_ctrl;
  newst->own.send = & mISDN_queue_message;
  newst->own.recv = & mISDN_queue_message;
  {
  __cil_tmp29 = *debug___2;
  __cil_tmp30 = __cil_tmp29 & 2U;
  if (__cil_tmp30 != 0U) {
    {
    __cil_tmp31 = newst->dev;
    __cil_tmp32 = & __cil_tmp31->dev;
    __cil_tmp33 = (struct device const *)__cil_tmp32;
    tmp___0 = dev_name(__cil_tmp33);
    printk("<7>%s: st(%s)\n", "create_stack", tmp___0);
    }
  } else {

  }
  }
  {
  newst->notify = & done;
  __cil_tmp34 = newst->dev;
  __cil_tmp35 = & __cil_tmp34->dev;
  __cil_tmp36 = (struct device const *)__cil_tmp35;
  tmp___1 = dev_name(__cil_tmp36);
  __cil_tmp37 = (void *)newst;
  tmp___2 = kthread_create_on_node(& mISDNStackd, __cil_tmp37, -1, "mISDN_%s", tmp___1);
  __k = tmp___2;
  __cil_tmp38 = (void const *)__k;
  tmp___3 = IS_ERR(__cil_tmp38);
  }
  if (tmp___3 == 0L) {
    {
    wake_up_process(__k);
    }
  } else {

  }
  {
  newst->thread = __k;
  __cil_tmp39 = newst->thread;
  __cil_tmp40 = (void const *)__cil_tmp39;
  tmp___6 = IS_ERR(__cil_tmp40);
  }
  if (tmp___6 != 0L) {
    {
    __cil_tmp41 = newst->thread;
    __cil_tmp42 = (void const *)__cil_tmp41;
    tmp___4 = PTR_ERR(__cil_tmp42);
    err = (int )tmp___4;
    __cil_tmp43 = newst->dev;
    __cil_tmp44 = & __cil_tmp43->dev;
    __cil_tmp45 = (struct device const *)__cil_tmp44;
    tmp___5 = dev_name(__cil_tmp45);
    printk("<3>mISDN:cannot create kernel thread for %s (%d)\n", tmp___5, err);
    __cil_tmp46 = dev->teimgr;
    delete_teimanager(__cil_tmp46);
    __cil_tmp47 = (void const *)newst;
    kfree(__cil_tmp47);
    }
  } else {
    {
    wait_for_completion(& done);
    }
  }
  return (err);
}
}
int connect_layer1(struct mISDNdevice *dev , struct mISDNchannel *ch , u_int protocol ,
                   struct sockaddr_mISDN *adr )
{ struct mISDN_sock *msk ;
  struct mISDNchannel const *__mptr ;
  struct channel_req rq ;
  int err ;
  char const *tmp ;
  struct mISDN_sock *__cil_tmp10 ;
  u_int __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  struct device *__cil_tmp13 ;
  struct device const *__cil_tmp14 ;
  unsigned char __cil_tmp15 ;
  int __cil_tmp16 ;
  unsigned char __cil_tmp17 ;
  int __cil_tmp18 ;
  unsigned char __cil_tmp19 ;
  int __cil_tmp20 ;
  unsigned char __cil_tmp21 ;
  int __cil_tmp22 ;
  int __cil_tmp23 ;
  int __cil_tmp24 ;
  int __cil_tmp25 ;
  int __cil_tmp26 ;
  struct mISDNstack *__cil_tmp27 ;
  ctrl_func_t *__cil_tmp28 ;
  struct mISDNchannel *__cil_tmp29 ;
  void *__cil_tmp30 ;
  u_int __cil_tmp31 ;
  struct mISDNstack *__cil_tmp32 ;
  rwlock_t *__cil_tmp33 ;
  struct sock *__cil_tmp34 ;
  struct mISDNstack *__cil_tmp35 ;
  struct hlist_head *__cil_tmp36 ;
  struct mISDNstack *__cil_tmp37 ;
  rwlock_t *__cil_tmp38 ;

  {
  __mptr = (struct mISDNchannel const *)ch;
  __cil_tmp10 = (struct mISDN_sock *)__mptr;
  msk = __cil_tmp10 + 1152921504606845704UL;
  {
  __cil_tmp11 = *debug___2;
  __cil_tmp12 = __cil_tmp11 & 2U;
  if (__cil_tmp12 != 0U) {
    {
    __cil_tmp13 = & dev->dev;
    __cil_tmp14 = (struct device const *)__cil_tmp13;
    tmp = dev_name(__cil_tmp14);
    __cil_tmp15 = adr->dev;
    __cil_tmp16 = (int )__cil_tmp15;
    __cil_tmp17 = adr->channel;
    __cil_tmp18 = (int )__cil_tmp17;
    __cil_tmp19 = adr->sapi;
    __cil_tmp20 = (int )__cil_tmp19;
    __cil_tmp21 = adr->tei;
    __cil_tmp22 = (int )__cil_tmp21;
    printk("<7>%s: %s proto(%x) adr(%d %d %d %d)\n", "connect_layer1", tmp, protocol,
           __cil_tmp16, __cil_tmp18, __cil_tmp20, __cil_tmp22);
    }
  } else {

  }
  }
  {
  __cil_tmp23 = (int )protocol;
  if (__cil_tmp23 == 2) {
    goto case_2;
  } else {
    {
    __cil_tmp24 = (int )protocol;
    if (__cil_tmp24 == 4) {
      goto case_4;
    } else {
      {
      __cil_tmp25 = (int )protocol;
      if (__cil_tmp25 == 1) {
        goto case_1;
      } else {
        {
        __cil_tmp26 = (int )protocol;
        if (__cil_tmp26 == 3) {
          goto case_3;
        } else {
          goto switch_default;
          if (0) {
            case_2: ;
            case_4: ;
            case_1: ;
            case_3:
            {
            ch->recv = & mISDN_queue_message;
            __cil_tmp27 = dev->D.st;
            ch->peer = & __cil_tmp27->own;
            ch->st = dev->D.st;
            rq.protocol = protocol;
            rq.adr.channel = adr->channel;
            __cil_tmp28 = dev->D.ctrl;
            __cil_tmp29 = & dev->D;
            __cil_tmp30 = (void *)(& rq);
            err = (*__cil_tmp28)(__cil_tmp29, 256U, __cil_tmp30);
            __cil_tmp31 = dev->id;
            printk("<7>%s: ret %d (dev %d)\n", "connect_layer1", err, __cil_tmp31);
            }
            if (err != 0) {
              return (err);
            } else {

            }
            {
            __cil_tmp32 = dev->D.st;
            __cil_tmp33 = & __cil_tmp32->l1sock.lock;
            _raw_write_lock_bh(__cil_tmp33);
            __cil_tmp34 = & msk->sk;
            __cil_tmp35 = dev->D.st;
            __cil_tmp36 = & __cil_tmp35->l1sock.head;
            sk_add_node(__cil_tmp34, __cil_tmp36);
            __cil_tmp37 = dev->D.st;
            __cil_tmp38 = & __cil_tmp37->l1sock.lock;
            _raw_write_unlock_bh(__cil_tmp38);
            }
            goto ldv_38555;
            switch_default: ;
            return (-92);
          } else {

          }
        }
        }
      }
      }
    }
    }
  }
  }
  ldv_38555: ;
  return (0);
}
}
int connect_Bstack(struct mISDNdevice *dev , struct mISDNchannel *ch , u_int protocol ,
                   struct sockaddr_mISDN *adr )
{ struct channel_req rq ;
  struct channel_req rq2 ;
  int pmask ;
  int err ;
  struct Bprotocol *bp ;
  char const *tmp ;
  u_int __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  struct device *__cil_tmp13 ;
  struct device const *__cil_tmp14 ;
  unsigned char __cil_tmp15 ;
  int __cil_tmp16 ;
  unsigned char __cil_tmp17 ;
  int __cil_tmp18 ;
  unsigned char __cil_tmp19 ;
  int __cil_tmp20 ;
  unsigned char __cil_tmp21 ;
  int __cil_tmp22 ;
  int __cil_tmp23 ;
  int __cil_tmp24 ;
  u_int __cil_tmp25 ;
  u_int __cil_tmp26 ;
  unsigned int __cil_tmp27 ;
  ctrl_func_t *__cil_tmp28 ;
  struct mISDNchannel *__cil_tmp29 ;
  void *__cil_tmp30 ;
  u_int __cil_tmp31 ;
  struct Bprotocol *__cil_tmp32 ;
  unsigned long __cil_tmp33 ;
  unsigned long __cil_tmp34 ;
  create_func_t *__cil_tmp35 ;
  ctrl_func_t *__cil_tmp36 ;
  struct mISDNchannel *__cil_tmp37 ;
  void *__cil_tmp38 ;
  ctrl_func_t *__cil_tmp39 ;
  void *__cil_tmp40 ;

  {
  {
  __cil_tmp11 = *debug___2;
  __cil_tmp12 = __cil_tmp11 & 2U;
  if (__cil_tmp12 != 0U) {
    {
    __cil_tmp13 = & dev->dev;
    __cil_tmp14 = (struct device const *)__cil_tmp13;
    tmp = dev_name(__cil_tmp14);
    __cil_tmp15 = adr->dev;
    __cil_tmp16 = (int )__cil_tmp15;
    __cil_tmp17 = adr->channel;
    __cil_tmp18 = (int )__cil_tmp17;
    __cil_tmp19 = adr->sapi;
    __cil_tmp20 = (int )__cil_tmp19;
    __cil_tmp21 = adr->tei;
    __cil_tmp22 = (int )__cil_tmp21;
    printk("<7>%s: %s proto(%x) adr(%d %d %d %d)\n", "connect_Bstack", tmp, protocol,
           __cil_tmp16, __cil_tmp18, __cil_tmp20, __cil_tmp22);
    }
  } else {

  }
  }
  ch->st = dev->D.st;
  __cil_tmp23 = (int )protocol;
  __cil_tmp24 = __cil_tmp23 & 31;
  pmask = 1 << __cil_tmp24;
  {
  __cil_tmp25 = (u_int )pmask;
  __cil_tmp26 = dev->Bprotocols;
  __cil_tmp27 = __cil_tmp26 & __cil_tmp25;
  if (__cil_tmp27 != 0U) {
    {
    rq.protocol = protocol;
    rq.adr = *adr;
    __cil_tmp28 = dev->D.ctrl;
    __cil_tmp29 = & dev->D;
    __cil_tmp30 = (void *)(& rq);
    err = (*__cil_tmp28)(__cil_tmp29, 256U, __cil_tmp30);
    }
    if (err != 0) {
      return (err);
    } else {

    }
    ch->recv = (rq.ch)->send;
    ch->peer = rq.ch;
    (rq.ch)->recv = ch->send;
    (rq.ch)->peer = ch;
    (rq.ch)->st = dev->D.st;
  } else {
    {
    __cil_tmp31 = (u_int )pmask;
    bp = get_Bprotocol4mask(__cil_tmp31);
    }
    {
    __cil_tmp32 = (struct Bprotocol *)0;
    __cil_tmp33 = (unsigned long )__cil_tmp32;
    __cil_tmp34 = (unsigned long )bp;
    if (__cil_tmp34 == __cil_tmp33) {
      return (-92);
    } else {

    }
    }
    {
    rq2.protocol = protocol;
    rq2.adr = *adr;
    rq2.ch = ch;
    __cil_tmp35 = bp->create;
    err = (*__cil_tmp35)(& rq2);
    }
    if (err != 0) {
      return (err);
    } else {

    }
    {
    ch->recv = (rq2.ch)->send;
    ch->peer = rq2.ch;
    (rq2.ch)->st = dev->D.st;
    rq.protocol = rq2.protocol;
    rq.adr = *adr;
    __cil_tmp36 = dev->D.ctrl;
    __cil_tmp37 = & dev->D;
    __cil_tmp38 = (void *)(& rq);
    err = (*__cil_tmp36)(__cil_tmp37, 256U, __cil_tmp38);
    }
    if (err != 0) {
      {
      __cil_tmp39 = (rq2.ch)->ctrl;
      __cil_tmp40 = (void *)0;
      (*__cil_tmp39)(rq2.ch, 512U, __cil_tmp40);
      }
      return (err);
    } else {

    }
    (rq2.ch)->recv = (rq.ch)->send;
    (rq2.ch)->peer = rq.ch;
    (rq.ch)->recv = (rq2.ch)->send;
    (rq.ch)->peer = rq2.ch;
    (rq.ch)->st = dev->D.st;
  }
  }
  ch->protocol = protocol;
  ch->nr = (rq.ch)->nr;
  return (0);
}
}
int create_l2entity(struct mISDNdevice *dev , struct mISDNchannel *ch , u_int protocol ,
                    struct sockaddr_mISDN *adr )
{ struct channel_req rq ;
  int err ;
  char const *tmp ;
  u_int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  struct device *__cil_tmp10 ;
  struct device const *__cil_tmp11 ;
  unsigned char __cil_tmp12 ;
  int __cil_tmp13 ;
  unsigned char __cil_tmp14 ;
  int __cil_tmp15 ;
  unsigned char __cil_tmp16 ;
  int __cil_tmp17 ;
  unsigned char __cil_tmp18 ;
  int __cil_tmp19 ;
  u_int __cil_tmp20 ;
  unsigned int __cil_tmp21 ;
  int __cil_tmp22 ;
  int __cil_tmp23 ;
  u_int __cil_tmp24 ;
  unsigned int __cil_tmp25 ;
  struct mISDNstack *__cil_tmp26 ;
  ctrl_func_t *__cil_tmp27 ;
  struct mISDNchannel *__cil_tmp28 ;
  void *__cil_tmp29 ;
  struct mISDNchannel *__cil_tmp30 ;
  ctrl_func_t *__cil_tmp31 ;
  struct mISDNchannel *__cil_tmp32 ;
  void *__cil_tmp33 ;
  struct mISDNchannel *__cil_tmp34 ;
  unsigned long __cil_tmp35 ;
  unsigned long __cil_tmp36 ;
  struct mISDNstack *__cil_tmp37 ;
  struct mISDNstack *__cil_tmp38 ;
  ctrl_func_t *__cil_tmp39 ;
  void *__cil_tmp40 ;

  {
  {
  __cil_tmp8 = *debug___2;
  __cil_tmp9 = __cil_tmp8 & 2U;
  if (__cil_tmp9 != 0U) {
    {
    __cil_tmp10 = & dev->dev;
    __cil_tmp11 = (struct device const *)__cil_tmp10;
    tmp = dev_name(__cil_tmp11);
    __cil_tmp12 = adr->dev;
    __cil_tmp13 = (int )__cil_tmp12;
    __cil_tmp14 = adr->channel;
    __cil_tmp15 = (int )__cil_tmp14;
    __cil_tmp16 = adr->sapi;
    __cil_tmp17 = (int )__cil_tmp16;
    __cil_tmp18 = adr->tei;
    __cil_tmp19 = (int )__cil_tmp18;
    printk("<7>%s: %s proto(%x) adr(%d %d %d %d)\n", "create_l2entity", tmp, protocol,
           __cil_tmp13, __cil_tmp15, __cil_tmp17, __cil_tmp19);
    }
  } else {

  }
  }
  rq.protocol = 1U;
  {
  __cil_tmp20 = dev->Dprotocols;
  __cil_tmp21 = __cil_tmp20 & 8U;
  if (__cil_tmp21 != 0U) {
    rq.protocol = 3U;
  } else {

  }
  }
  {
  __cil_tmp22 = (int )protocol;
  if (__cil_tmp22 == 17) {
    goto case_17;
  } else {
    {
    __cil_tmp23 = (int )protocol;
    if (__cil_tmp23 == 16) {
      goto case_16;
    } else {
      goto switch_default;
      if (0) {
        case_17:
        rq.protocol = 2U;
        {
        __cil_tmp24 = dev->Dprotocols;
        __cil_tmp25 = __cil_tmp24 & 16U;
        if (__cil_tmp25 != 0U) {
          rq.protocol = 4U;
        } else {

        }
        }
        case_16:
        {
        ch->recv = & mISDN_queue_message;
        __cil_tmp26 = dev->D.st;
        ch->peer = & __cil_tmp26->own;
        ch->st = dev->D.st;
        rq.adr.channel = (unsigned char)0;
        __cil_tmp27 = dev->D.ctrl;
        __cil_tmp28 = & dev->D;
        __cil_tmp29 = (void *)(& rq);
        err = (*__cil_tmp27)(__cil_tmp28, 256U, __cil_tmp29);
        printk("<7>%s: ret 1 %d\n", "create_l2entity", err);
        }
        if (err != 0) {
          goto ldv_38580;
        } else {

        }
        {
        rq.protocol = protocol;
        rq.adr = *adr;
        rq.ch = ch;
        __cil_tmp30 = dev->teimgr;
        __cil_tmp31 = __cil_tmp30->ctrl;
        __cil_tmp32 = dev->teimgr;
        __cil_tmp33 = (void *)(& rq);
        err = (*__cil_tmp31)(__cil_tmp32, 256U, __cil_tmp33);
        printk("<7>%s: ret 2 %d\n", "create_l2entity", err);
        }
        if (err == 0) {
          if (protocol == 17U) {
            {
            __cil_tmp34 = (struct mISDNchannel *)0;
            __cil_tmp35 = (unsigned long )__cil_tmp34;
            __cil_tmp36 = (unsigned long )rq.ch;
            if (__cil_tmp36 == __cil_tmp35) {
              goto ldv_38580;
            } else {

            }
            }
          } else {

          }
          {
          __cil_tmp37 = dev->D.st;
          add_layer2(rq.ch, __cil_tmp37);
          (rq.ch)->recv = & mISDN_queue_message;
          __cil_tmp38 = dev->D.st;
          (rq.ch)->peer = & __cil_tmp38->own;
          __cil_tmp39 = (rq.ch)->ctrl;
          __cil_tmp40 = (void *)0;
          (*__cil_tmp39)(rq.ch, 256U, __cil_tmp40);
          }
        } else {

        }
        goto ldv_38580;
        switch_default:
        err = -93;
      } else {

      }
    }
    }
  }
  }
  ldv_38580: ;
  return (err);
}
}
void delete_channel(struct mISDNchannel *ch )
{ struct mISDN_sock *msk ;
  struct mISDNchannel const *__mptr ;
  struct mISDNchannel *pch ;
  char const *tmp ;
  struct mISDN_sock *__cil_tmp6 ;
  struct mISDNstack *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  struct mISDNstack *__cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  u_int __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  struct mISDNstack *__cil_tmp13 ;
  struct mISDNdevice *__cil_tmp14 ;
  struct device *__cil_tmp15 ;
  struct device const *__cil_tmp16 ;
  u_int __cil_tmp17 ;
  u_int __cil_tmp18 ;
  struct mISDNchannel *__cil_tmp19 ;
  unsigned long __cil_tmp20 ;
  struct mISDNchannel *__cil_tmp21 ;
  unsigned long __cil_tmp22 ;
  struct mISDNchannel *__cil_tmp23 ;
  ctrl_func_t *__cil_tmp24 ;
  struct mISDNchannel *__cil_tmp25 ;
  void *__cil_tmp26 ;
  u_int __cil_tmp27 ;
  int __cil_tmp28 ;
  u_int __cil_tmp29 ;
  int __cil_tmp30 ;
  u_int __cil_tmp31 ;
  int __cil_tmp32 ;
  u_int __cil_tmp33 ;
  int __cil_tmp34 ;
  u_int __cil_tmp35 ;
  int __cil_tmp36 ;
  u_int __cil_tmp37 ;
  int __cil_tmp38 ;
  struct mISDNstack *__cil_tmp39 ;
  rwlock_t *__cil_tmp40 ;
  struct sock *__cil_tmp41 ;
  struct mISDNstack *__cil_tmp42 ;
  rwlock_t *__cil_tmp43 ;
  struct mISDNstack *__cil_tmp44 ;
  struct mISDNdevice *__cil_tmp45 ;
  ctrl_func_t *__cil_tmp46 ;
  struct mISDNstack *__cil_tmp47 ;
  struct mISDNdevice *__cil_tmp48 ;
  struct mISDNchannel *__cil_tmp49 ;
  void *__cil_tmp50 ;
  struct mISDNstack *__cil_tmp51 ;
  u_int __cil_tmp52 ;
  struct mISDNchannel *__cil_tmp53 ;
  unsigned long __cil_tmp54 ;
  unsigned long __cil_tmp55 ;
  struct mISDNstack *__cil_tmp56 ;
  struct mutex *__cil_tmp57 ;
  struct list_head *__cil_tmp58 ;
  struct mISDNstack *__cil_tmp59 ;
  struct mutex *__cil_tmp60 ;
  ctrl_func_t *__cil_tmp61 ;
  void *__cil_tmp62 ;
  struct mISDNstack *__cil_tmp63 ;
  struct mISDNdevice *__cil_tmp64 ;
  ctrl_func_t *__cil_tmp65 ;
  void *__cil_tmp66 ;
  struct mISDNstack *__cil_tmp67 ;
  struct mISDNdevice *__cil_tmp68 ;
  struct mISDNchannel *__cil_tmp69 ;
  unsigned long __cil_tmp70 ;
  unsigned long __cil_tmp71 ;
  ctrl_func_t *__cil_tmp72 ;
  void *__cil_tmp73 ;

  {
  __mptr = (struct mISDNchannel const *)ch;
  __cil_tmp6 = (struct mISDN_sock *)__mptr;
  msk = __cil_tmp6 + 1152921504606845704UL;
  {
  __cil_tmp7 = (struct mISDNstack *)0;
  __cil_tmp8 = (unsigned long )__cil_tmp7;
  __cil_tmp9 = ch->st;
  __cil_tmp10 = (unsigned long )__cil_tmp9;
  if (__cil_tmp10 == __cil_tmp8) {
    {
    printk("<4>%s: no stack\n", "delete_channel");
    }
    return;
  } else {

  }
  }
  {
  __cil_tmp11 = *debug___2;
  __cil_tmp12 = __cil_tmp11 & 2U;
  if (__cil_tmp12 != 0U) {
    {
    __cil_tmp13 = ch->st;
    __cil_tmp14 = __cil_tmp13->dev;
    __cil_tmp15 = & __cil_tmp14->dev;
    __cil_tmp16 = (struct device const *)__cil_tmp15;
    tmp = dev_name(__cil_tmp16);
    __cil_tmp17 = ch->protocol;
    printk("<7>%s: st(%s) protocol(%x)\n", "delete_channel", tmp, __cil_tmp17);
    }
  } else {

  }
  }
  {
  __cil_tmp18 = ch->protocol;
  if (__cil_tmp18 > 31U) {
    {
    __cil_tmp19 = (struct mISDNchannel *)0;
    __cil_tmp20 = (unsigned long )__cil_tmp19;
    __cil_tmp21 = ch->peer;
    __cil_tmp22 = (unsigned long )__cil_tmp21;
    if (__cil_tmp22 != __cil_tmp20) {
      {
      __cil_tmp23 = ch->peer;
      __cil_tmp24 = __cil_tmp23->ctrl;
      __cil_tmp25 = ch->peer;
      __cil_tmp26 = (void *)0;
      (*__cil_tmp24)(__cil_tmp25, 512U, __cil_tmp26);
      ch->peer = (struct mISDNchannel *)0;
      }
    } else {

    }
    }
    return;
  } else {

  }
  }
  {
  __cil_tmp27 = ch->protocol;
  __cil_tmp28 = (int )__cil_tmp27;
  if (__cil_tmp28 == 2) {
    goto case_2;
  } else {
    {
    __cil_tmp29 = ch->protocol;
    __cil_tmp30 = (int )__cil_tmp29;
    if (__cil_tmp30 == 1) {
      goto case_1;
    } else {
      {
      __cil_tmp31 = ch->protocol;
      __cil_tmp32 = (int )__cil_tmp31;
      if (__cil_tmp32 == 4) {
        goto case_4;
      } else {
        {
        __cil_tmp33 = ch->protocol;
        __cil_tmp34 = (int )__cil_tmp33;
        if (__cil_tmp34 == 3) {
          goto case_3;
        } else {
          {
          __cil_tmp35 = ch->protocol;
          __cil_tmp36 = (int )__cil_tmp35;
          if (__cil_tmp36 == 16) {
            goto case_16;
          } else {
            {
            __cil_tmp37 = ch->protocol;
            __cil_tmp38 = (int )__cil_tmp37;
            if (__cil_tmp38 == 17) {
              goto case_17;
            } else {
              goto switch_default;
              if (0) {
                case_2: ;
                case_1: ;
                case_4: ;
                case_3:
                {
                __cil_tmp39 = ch->st;
                __cil_tmp40 = & __cil_tmp39->l1sock.lock;
                _raw_write_lock_bh(__cil_tmp40);
                __cil_tmp41 = & msk->sk;
                sk_del_node_init(__cil_tmp41);
                __cil_tmp42 = ch->st;
                __cil_tmp43 = & __cil_tmp42->l1sock.lock;
                _raw_write_unlock_bh(__cil_tmp43);
                __cil_tmp44 = ch->st;
                __cil_tmp45 = __cil_tmp44->dev;
                __cil_tmp46 = __cil_tmp45->D.ctrl;
                __cil_tmp47 = ch->st;
                __cil_tmp48 = __cil_tmp47->dev;
                __cil_tmp49 = & __cil_tmp48->D;
                __cil_tmp50 = (void *)0;
                (*__cil_tmp46)(__cil_tmp49, 512U, __cil_tmp50);
                }
                goto ldv_38594;
                case_16:
                {
                __cil_tmp51 = ch->st;
                __cil_tmp52 = ch->nr;
                pch = get_channel4id(__cil_tmp51, __cil_tmp52);
                }
                {
                __cil_tmp53 = (struct mISDNchannel *)0;
                __cil_tmp54 = (unsigned long )__cil_tmp53;
                __cil_tmp55 = (unsigned long )pch;
                if (__cil_tmp55 != __cil_tmp54) {
                  {
                  __cil_tmp56 = ch->st;
                  __cil_tmp57 = & __cil_tmp56->lmutex;
                  mutex_lock_nested(__cil_tmp57, 0U);
                  __cil_tmp58 = & pch->list;
                  list_del(__cil_tmp58);
                  __cil_tmp59 = ch->st;
                  __cil_tmp60 = & __cil_tmp59->lmutex;
                  mutex_unlock(__cil_tmp60);
                  __cil_tmp61 = pch->ctrl;
                  __cil_tmp62 = (void *)0;
                  (*__cil_tmp61)(pch, 512U, __cil_tmp62);
                  __cil_tmp63 = ch->st;
                  __cil_tmp64 = __cil_tmp63->dev;
                  pch = __cil_tmp64->teimgr;
                  __cil_tmp65 = pch->ctrl;
                  __cil_tmp66 = (void *)0;
                  (*__cil_tmp65)(pch, 512U, __cil_tmp66);
                  }
                } else {
                  {
                  printk("<4>%s: no l2 channel\n", "delete_channel");
                  }
                }
                }
                goto ldv_38594;
                case_17:
                __cil_tmp67 = ch->st;
                __cil_tmp68 = __cil_tmp67->dev;
                pch = __cil_tmp68->teimgr;
                {
                __cil_tmp69 = (struct mISDNchannel *)0;
                __cil_tmp70 = (unsigned long )__cil_tmp69;
                __cil_tmp71 = (unsigned long )pch;
                if (__cil_tmp71 != __cil_tmp70) {
                  {
                  __cil_tmp72 = pch->ctrl;
                  __cil_tmp73 = (void *)0;
                  (*__cil_tmp72)(pch, 512U, __cil_tmp73);
                  }
                } else {
                  {
                  printk("<4>%s: no l2 channel\n", "delete_channel");
                  }
                }
                }
                goto ldv_38594;
                switch_default: ;
                goto ldv_38594;
              } else {

              }
            }
            }
          }
          }
        }
        }
      }
      }
    }
    }
  }
  }
  ldv_38594: ;
  return;
}
}
void delete_stack(struct mISDNdevice *dev )
{ struct mISDNstack *st ;
  struct completion done ;
  char const *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  u_int __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  struct mISDNdevice *__cil_tmp9 ;
  struct device *__cil_tmp10 ;
  struct device const *__cil_tmp11 ;
  struct mISDNchannel *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  struct mISDNchannel *__cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  struct mISDNchannel *__cil_tmp16 ;
  struct task_struct *__cil_tmp17 ;
  unsigned long __cil_tmp18 ;
  struct task_struct *__cil_tmp19 ;
  unsigned long __cil_tmp20 ;
  struct completion *__cil_tmp21 ;
  unsigned long __cil_tmp22 ;
  struct completion *__cil_tmp23 ;
  unsigned long __cil_tmp24 ;
  struct completion *__cil_tmp25 ;
  u_long *__cil_tmp26 ;
  unsigned long volatile *__cil_tmp27 ;
  u_long *__cil_tmp28 ;
  unsigned long volatile *__cil_tmp29 ;
  wait_queue_head_t *__cil_tmp30 ;
  void *__cil_tmp31 ;
  struct list_head *__cil_tmp32 ;
  struct list_head const *__cil_tmp33 ;
  struct hlist_head *__cil_tmp34 ;
  struct hlist_head const *__cil_tmp35 ;
  void const *__cil_tmp36 ;

  {
  {
  st = dev->D.st;
  init_completion(& done);
  done = done;
  }
  {
  __cil_tmp7 = *debug___2;
  __cil_tmp8 = __cil_tmp7 & 2U;
  if (__cil_tmp8 != 0U) {
    {
    __cil_tmp9 = st->dev;
    __cil_tmp10 = & __cil_tmp9->dev;
    __cil_tmp11 = (struct device const *)__cil_tmp10;
    tmp = dev_name(__cil_tmp11);
    printk("<7>%s: st(%s)\n", "delete_stack", tmp);
    }
  } else {

  }
  }
  {
  __cil_tmp12 = (struct mISDNchannel *)0;
  __cil_tmp13 = (unsigned long )__cil_tmp12;
  __cil_tmp14 = dev->teimgr;
  __cil_tmp15 = (unsigned long )__cil_tmp14;
  if (__cil_tmp15 != __cil_tmp13) {
    {
    __cil_tmp16 = dev->teimgr;
    delete_teimanager(__cil_tmp16);
    }
  } else {

  }
  }
  {
  __cil_tmp17 = (struct task_struct *)0;
  __cil_tmp18 = (unsigned long )__cil_tmp17;
  __cil_tmp19 = st->thread;
  __cil_tmp20 = (unsigned long )__cil_tmp19;
  if (__cil_tmp20 != __cil_tmp18) {
    {
    __cil_tmp21 = (struct completion *)0;
    __cil_tmp22 = (unsigned long )__cil_tmp21;
    __cil_tmp23 = st->notify;
    __cil_tmp24 = (unsigned long )__cil_tmp23;
    if (__cil_tmp24 != __cil_tmp22) {
      {
      printk("<4>%s: notifier in use\n", "delete_stack");
      __cil_tmp25 = st->notify;
      complete(__cil_tmp25);
      }
    } else {

    }
    }
    {
    st->notify = & done;
    __cil_tmp26 = & st->status;
    __cil_tmp27 = (unsigned long volatile *)__cil_tmp26;
    test_and_set_bit(15, __cil_tmp27);
    __cil_tmp28 = & st->status;
    __cil_tmp29 = (unsigned long volatile *)__cil_tmp28;
    test_and_set_bit(4, __cil_tmp29);
    __cil_tmp30 = & st->workq;
    __cil_tmp31 = (void *)0;
    __wake_up(__cil_tmp30, 1U, 1, __cil_tmp31);
    wait_for_completion(& done);
    }
  } else {

  }
  }
  {
  __cil_tmp32 = & st->layer2;
  __cil_tmp33 = (struct list_head const *)__cil_tmp32;
  tmp___0 = list_empty(__cil_tmp33);
  }
  if (tmp___0 == 0) {
    {
    printk("<4>%s: layer2 list not empty\n", "delete_stack");
    }
  } else {

  }
  {
  __cil_tmp34 = & st->l1sock.head;
  __cil_tmp35 = (struct hlist_head const *)__cil_tmp34;
  tmp___1 = hlist_empty(__cil_tmp35);
  }
  if (tmp___1 == 0) {
    {
    printk("<4>%s: layer1 list not empty\n", "delete_stack");
    }
  } else {

  }
  {
  __cil_tmp36 = (void const *)st;
  kfree(__cil_tmp36);
  }
  return;
}
}
void mISDN_initstack(u_int *dp )
{

  {
  debug___2 = dp;
  return;
}
}
__inline static void ldv___module_get_2(struct module *module ) ;
void ldv_module_put_1(struct module *ldv_func_arg1 ) ;
int create_l1(struct dchannel *dch , dchannel_l1callback *dcb ) ;
int l1_event(struct layer1 *l1 , u_int event ) ;
static u_int *debug___3 ;
static struct Fsm l1fsm_s = {(FSMFNPTR (**)(struct FsmInst * , int , void * ))0, 0, 0, (char **)0, (char **)0};
static char *strL1SState[7U] = { (char *)"ST_L1_F2", (char *)"ST_L1_F3", (char *)"ST_L1_F4", (char *)"ST_L1_F5",
        (char *)"ST_L1_F6", (char *)"ST_L1_F7", (char *)"ST_L1_F8"};
static char *strL1Event[12U] =
  { (char *)"EV_PH_ACTIVATE", (char *)"EV_PH_DEACTIVATE", (char *)"EV_RESET_IND", (char *)"EV_DEACT_CNF",
        (char *)"EV_DEACT_IND", (char *)"EV_POWER_UP", (char *)"EV_ANYSIG_IND", (char *)"EV_INFO2_IND",
        (char *)"EV_INFO4_IND", (char *)"EV_TIMER_DEACT", (char *)"EV_TIMER_ACT", (char *)"EV_TIMER3"};
static void l1m_debug(struct FsmInst *fi , char *fmt , ...)
{ struct layer1 *l1 ;
  struct va_format vaf ;
  va_list va ;
  char const *tmp ;
  void *__cil_tmp7 ;
  __builtin_va_list __cil_tmp8 ;
  struct dchannel *__cil_tmp9 ;
  struct device *__cil_tmp10 ;
  struct device const *__cil_tmp11 ;
  __builtin_va_list __cil_tmp12 ;

  {
  {
  __cil_tmp7 = fi->userdata;
  l1 = (struct layer1 *)__cil_tmp7;
  vaf.fmt = (char const *)fmt;
  vaf.va = & va;
  __cil_tmp9 = l1->dch;
  __cil_tmp10 = & __cil_tmp9->dev.dev;
  __cil_tmp11 = (struct device const *)__cil_tmp10;
  tmp = dev_name(__cil_tmp11);
  printk("<7>%s: %pV\n", tmp, & vaf);

  }
  return;
}
}
static void l1_reset(struct FsmInst *fi , int event , void *arg )
{

  {
  {
  mISDN_FsmChangeState(fi, 1);
  }
  return;
}
}
static void l1_deact_cnf(struct FsmInst *fi , int event , void *arg )
{ struct layer1 *l1 ;
  int tmp ;
  void *__cil_tmp6 ;
  u_long *__cil_tmp7 ;
  unsigned long const volatile *__cil_tmp8 ;
  dchannel_l1callback *__cil_tmp9 ;
  struct dchannel *__cil_tmp10 ;

  {
  {
  __cil_tmp6 = fi->userdata;
  l1 = (struct layer1 *)__cil_tmp6;
  mISDN_FsmChangeState(fi, 1);
  __cil_tmp7 = & l1->Flags;
  __cil_tmp8 = (unsigned long const volatile *)__cil_tmp7;
  tmp = constant_test_bit(1U, __cil_tmp8);
  }
  if (tmp != 0) {
    {
    __cil_tmp9 = l1->dcb;
    __cil_tmp10 = l1->dch;
    (*__cil_tmp9)(__cil_tmp10, 35586U);
    }
  } else {

  }
  return;
}
}
static void l1_deact_req_s(struct FsmInst *fi , int event , void *arg )
{ struct layer1 *l1 ;
  void *__cil_tmp5 ;
  struct FsmTimer *__cil_tmp6 ;
  void *__cil_tmp7 ;
  u_long *__cil_tmp8 ;
  unsigned long volatile *__cil_tmp9 ;

  {
  {
  __cil_tmp5 = fi->userdata;
  l1 = (struct layer1 *)__cil_tmp5;
  mISDN_FsmChangeState(fi, 1);
  __cil_tmp6 = & l1->timer;
  __cil_tmp7 = (void *)0;
  mISDN_FsmRestartTimer(__cil_tmp6, 550, 9, __cil_tmp7, 2);
  __cil_tmp8 = & l1->Flags;
  __cil_tmp9 = (unsigned long volatile *)__cil_tmp8;
  test_and_set_bit(3, __cil_tmp9);
  }
  return;
}
}
static void l1_power_up_s(struct FsmInst *fi , int event , void *arg )
{ struct layer1 *l1 ;
  int tmp ;
  void *__cil_tmp6 ;
  u_long *__cil_tmp7 ;
  unsigned long const volatile *__cil_tmp8 ;
  dchannel_l1callback *__cil_tmp9 ;
  struct dchannel *__cil_tmp10 ;

  {
  {
  __cil_tmp6 = fi->userdata;
  l1 = (struct layer1 *)__cil_tmp6;
  __cil_tmp7 = & l1->Flags;
  __cil_tmp8 = (unsigned long const volatile *)__cil_tmp7;
  tmp = constant_test_bit(1U, __cil_tmp8);
  }
  if (tmp != 0) {
    {
    mISDN_FsmChangeState(fi, 2);
    __cil_tmp9 = l1->dcb;
    __cil_tmp10 = l1->dch;
    (*__cil_tmp9)(__cil_tmp10, 33538U);
    }
  } else {
    {
    mISDN_FsmChangeState(fi, 1);
    }
  }
  return;
}
}
static void l1_go_F5(struct FsmInst *fi , int event , void *arg )
{

  {
  {
  mISDN_FsmChangeState(fi, 3);
  }
  return;
}
}
static void l1_go_F8(struct FsmInst *fi , int event , void *arg )
{

  {
  {
  mISDN_FsmChangeState(fi, 6);
  }
  return;
}
}
static void l1_info2_ind(struct FsmInst *fi , int event , void *arg )
{ struct layer1 *l1 ;
  void *__cil_tmp5 ;
  dchannel_l1callback *__cil_tmp6 ;
  struct dchannel *__cil_tmp7 ;

  {
  {
  __cil_tmp5 = fi->userdata;
  l1 = (struct layer1 *)__cil_tmp5;
  mISDN_FsmChangeState(fi, 4);
  __cil_tmp6 = l1->dcb;
  __cil_tmp7 = l1->dch;
  (*__cil_tmp6)(__cil_tmp7, 33538U);
  }
  return;
}
}
static void l1_info4_ind(struct FsmInst *fi , int event , void *arg )
{ struct layer1 *l1 ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  void *__cil_tmp8 ;
  dchannel_l1callback *__cil_tmp9 ;
  struct dchannel *__cil_tmp10 ;
  u_long *__cil_tmp11 ;
  unsigned long volatile *__cil_tmp12 ;
  struct FsmTimer *__cil_tmp13 ;
  u_long *__cil_tmp14 ;
  unsigned long const volatile *__cil_tmp15 ;
  u_long *__cil_tmp16 ;
  unsigned long volatile *__cil_tmp17 ;
  struct FsmTimer *__cil_tmp18 ;
  struct FsmTimer *__cil_tmp19 ;
  void *__cil_tmp20 ;
  u_long *__cil_tmp21 ;
  unsigned long volatile *__cil_tmp22 ;

  {
  {
  __cil_tmp8 = fi->userdata;
  l1 = (struct layer1 *)__cil_tmp8;
  mISDN_FsmChangeState(fi, 5);
  __cil_tmp9 = l1->dcb;
  __cil_tmp10 = l1->dch;
  (*__cil_tmp9)(__cil_tmp10, 33538U);
  __cil_tmp11 = & l1->Flags;
  __cil_tmp12 = (unsigned long volatile *)__cil_tmp11;
  tmp = test_and_clear_bit(3, __cil_tmp12);
  }
  if (tmp != 0) {
    {
    __cil_tmp13 = & l1->timer;
    mISDN_FsmDelTimer(__cil_tmp13, 4);
    }
  } else {

  }
  {
  __cil_tmp14 = & l1->Flags;
  __cil_tmp15 = (unsigned long const volatile *)__cil_tmp14;
  tmp___1 = constant_test_bit(2U, __cil_tmp15);
  }
  if (tmp___1 == 0) {
    {
    __cil_tmp16 = & l1->Flags;
    __cil_tmp17 = (unsigned long volatile *)__cil_tmp16;
    tmp___0 = test_and_clear_bit(5, __cil_tmp17);
    }
    if (tmp___0 != 0) {
      {
      __cil_tmp18 = & l1->timer;
      mISDN_FsmDelTimer(__cil_tmp18, 3);
      }
    } else {

    }
    {
    __cil_tmp19 = & l1->timer;
    __cil_tmp20 = (void *)0;
    mISDN_FsmRestartTimer(__cil_tmp19, 110, 10, __cil_tmp20, 2);
    __cil_tmp21 = & l1->Flags;
    __cil_tmp22 = (unsigned long volatile *)__cil_tmp21;
    test_and_set_bit(4, __cil_tmp22);
    }
  } else {

  }
  return;
}
}
static void l1_timer3(struct FsmInst *fi , int event , void *arg )
{ struct layer1 *l1 ;
  int tmp ;
  int tmp___0 ;
  void *__cil_tmp7 ;
  u_long *__cil_tmp8 ;
  unsigned long volatile *__cil_tmp9 ;
  u_long *__cil_tmp10 ;
  unsigned long volatile *__cil_tmp11 ;
  u_long *__cil_tmp12 ;
  unsigned long volatile *__cil_tmp13 ;
  dchannel_l1callback *__cil_tmp14 ;
  struct dchannel *__cil_tmp15 ;
  dchannel_l1callback *__cil_tmp16 ;
  struct dchannel *__cil_tmp17 ;
  int __cil_tmp18 ;
  dchannel_l1callback *__cil_tmp19 ;
  struct dchannel *__cil_tmp20 ;

  {
  {
  __cil_tmp7 = fi->userdata;
  l1 = (struct layer1 *)__cil_tmp7;
  __cil_tmp8 = & l1->Flags;
  __cil_tmp9 = (unsigned long volatile *)__cil_tmp8;
  test_and_clear_bit(5, __cil_tmp9);
  __cil_tmp10 = & l1->Flags;
  __cil_tmp11 = (unsigned long volatile *)__cil_tmp10;
  tmp___0 = test_and_clear_bit(1, __cil_tmp11);
  }
  if (tmp___0 != 0) {
    {
    __cil_tmp12 = & l1->Flags;
    __cil_tmp13 = (unsigned long volatile *)__cil_tmp12;
    tmp = test_and_clear_bit(8, __cil_tmp13);
    }
    if (tmp != 0) {
      {
      __cil_tmp14 = l1->dcb;
      __cil_tmp15 = l1->dch;
      (*__cil_tmp14)(__cil_tmp15, 36610U);
      }
    } else {

    }
    {
    __cil_tmp16 = l1->dcb;
    __cil_tmp17 = l1->dch;
    (*__cil_tmp16)(__cil_tmp17, 514U);
    }
  } else {

  }
  {
  __cil_tmp18 = l1->l1m.state;
  if (__cil_tmp18 != 4) {
    {
    mISDN_FsmChangeState(fi, 1);
    __cil_tmp19 = l1->dcb;
    __cil_tmp20 = l1->dch;
    (*__cil_tmp19)(__cil_tmp20, 35586U);
    }
  } else {

  }
  }
  return;
}
}
static void l1_timer_act(struct FsmInst *fi , int event , void *arg )
{ struct layer1 *l1 ;
  void *__cil_tmp5 ;
  u_long *__cil_tmp6 ;
  unsigned long volatile *__cil_tmp7 ;
  u_long *__cil_tmp8 ;
  unsigned long volatile *__cil_tmp9 ;
  dchannel_l1callback *__cil_tmp10 ;
  struct dchannel *__cil_tmp11 ;

  {
  {
  __cil_tmp5 = fi->userdata;
  l1 = (struct layer1 *)__cil_tmp5;
  __cil_tmp6 = & l1->Flags;
  __cil_tmp7 = (unsigned long volatile *)__cil_tmp6;
  test_and_clear_bit(4, __cil_tmp7);
  __cil_tmp8 = & l1->Flags;
  __cil_tmp9 = (unsigned long volatile *)__cil_tmp8;
  test_and_set_bit(2, __cil_tmp9);
  __cil_tmp10 = l1->dcb;
  __cil_tmp11 = l1->dch;
  (*__cil_tmp10)(__cil_tmp11, 258U);
  }
  return;
}
}
static void l1_timer_deact(struct FsmInst *fi , int event , void *arg )
{ struct layer1 *l1 ;
  int tmp ;
  void *__cil_tmp6 ;
  u_long *__cil_tmp7 ;
  unsigned long volatile *__cil_tmp8 ;
  u_long *__cil_tmp9 ;
  unsigned long volatile *__cil_tmp10 ;
  u_long *__cil_tmp11 ;
  unsigned long volatile *__cil_tmp12 ;
  dchannel_l1callback *__cil_tmp13 ;
  struct dchannel *__cil_tmp14 ;
  dchannel_l1callback *__cil_tmp15 ;
  struct dchannel *__cil_tmp16 ;
  dchannel_l1callback *__cil_tmp17 ;
  struct dchannel *__cil_tmp18 ;

  {
  {
  __cil_tmp6 = fi->userdata;
  l1 = (struct layer1 *)__cil_tmp6;
  __cil_tmp7 = & l1->Flags;
  __cil_tmp8 = (unsigned long volatile *)__cil_tmp7;
  test_and_clear_bit(3, __cil_tmp8);
  __cil_tmp9 = & l1->Flags;
  __cil_tmp10 = (unsigned long volatile *)__cil_tmp9;
  test_and_clear_bit(2, __cil_tmp10);
  __cil_tmp11 = & l1->Flags;
  __cil_tmp12 = (unsigned long volatile *)__cil_tmp11;
  tmp = test_and_clear_bit(8, __cil_tmp12);
  }
  if (tmp != 0) {
    {
    __cil_tmp13 = l1->dcb;
    __cil_tmp14 = l1->dch;
    (*__cil_tmp13)(__cil_tmp14, 36610U);
    }
  } else {

  }
  {
  __cil_tmp15 = l1->dcb;
  __cil_tmp16 = l1->dch;
  (*__cil_tmp15)(__cil_tmp16, 514U);
  __cil_tmp17 = l1->dcb;
  __cil_tmp18 = l1->dch;
  (*__cil_tmp17)(__cil_tmp18, 35842U);
  }
  return;
}
}
static void l1_activate_s(struct FsmInst *fi , int event , void *arg )
{ struct layer1 *l1 ;
  void *__cil_tmp5 ;
  struct FsmTimer *__cil_tmp6 ;
  void *__cil_tmp7 ;
  u_long *__cil_tmp8 ;
  unsigned long volatile *__cil_tmp9 ;
  dchannel_l1callback *__cil_tmp10 ;
  struct dchannel *__cil_tmp11 ;

  {
  {
  __cil_tmp5 = fi->userdata;
  l1 = (struct layer1 *)__cil_tmp5;
  __cil_tmp6 = & l1->timer;
  __cil_tmp7 = (void *)0;
  mISDN_FsmRestartTimer(__cil_tmp6, 7000, 11, __cil_tmp7, 2);
  __cil_tmp8 = & l1->Flags;
  __cil_tmp9 = (unsigned long volatile *)__cil_tmp8;
  test_and_set_bit(5, __cil_tmp9);
  __cil_tmp10 = l1->dcb;
  __cil_tmp11 = l1->dch;
  (*__cil_tmp10)(__cil_tmp11, 35330U);
  }
  return;
}
}
static void l1_activate_no(struct FsmInst *fi , int event , void *arg )
{ struct layer1 *l1 ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  void *__cil_tmp8 ;
  u_long *__cil_tmp9 ;
  unsigned long const volatile *__cil_tmp10 ;
  u_long *__cil_tmp11 ;
  unsigned long const volatile *__cil_tmp12 ;
  u_long *__cil_tmp13 ;
  unsigned long volatile *__cil_tmp14 ;
  u_long *__cil_tmp15 ;
  unsigned long volatile *__cil_tmp16 ;
  dchannel_l1callback *__cil_tmp17 ;
  struct dchannel *__cil_tmp18 ;
  dchannel_l1callback *__cil_tmp19 ;
  struct dchannel *__cil_tmp20 ;

  {
  {
  __cil_tmp8 = fi->userdata;
  l1 = (struct layer1 *)__cil_tmp8;
  __cil_tmp9 = & l1->Flags;
  __cil_tmp10 = (unsigned long const volatile *)__cil_tmp9;
  tmp___0 = constant_test_bit(3U, __cil_tmp10);
  }
  if (tmp___0 == 0) {
    {
    __cil_tmp11 = & l1->Flags;
    __cil_tmp12 = (unsigned long const volatile *)__cil_tmp11;
    tmp___1 = constant_test_bit(5U, __cil_tmp12);
    }
    if (tmp___1 == 0) {
      {
      __cil_tmp13 = & l1->Flags;
      __cil_tmp14 = (unsigned long volatile *)__cil_tmp13;
      test_and_clear_bit(1, __cil_tmp14);
      __cil_tmp15 = & l1->Flags;
      __cil_tmp16 = (unsigned long volatile *)__cil_tmp15;
      tmp = test_and_clear_bit(8, __cil_tmp16);
      }
      if (tmp != 0) {
        {
        __cil_tmp17 = l1->dcb;
        __cil_tmp18 = l1->dch;
        (*__cil_tmp17)(__cil_tmp18, 36610U);
        }
      } else {

      }
      {
      __cil_tmp19 = l1->dcb;
      __cil_tmp20 = l1->dch;
      (*__cil_tmp19)(__cil_tmp20, 514U);
      }
    } else {

    }
  } else {

  }
  return;
}
}
static struct FsmNode L1SFnList[44U] =
  { {1, 0, & l1_activate_s},
        {4, 0, & l1_activate_no},
        {6, 0, & l1_activate_no},
        {1, 2, & l1_reset},
        {2, 2, & l1_reset},
        {3, 2, & l1_reset},
        {4, 2, & l1_reset},
        {5, 2, & l1_reset},
        {6, 2, & l1_reset},
        {1, 3, & l1_deact_cnf},
        {2, 3, & l1_deact_cnf},
        {3, 3, & l1_deact_cnf},
        {4, 3, & l1_deact_cnf},
        {5, 3, & l1_deact_cnf},
        {6, 3, & l1_deact_cnf},
        {4, 4, & l1_deact_req_s},
        {5, 4, & l1_deact_req_s},
        {6, 4, & l1_deact_req_s},
        {1, 5, & l1_power_up_s},
        {2, 6, & l1_go_F5},
        {4, 6, & l1_go_F8},
        {5, 6, & l1_go_F8},
        {1, 7, & l1_info2_ind},
        {2, 7, & l1_info2_ind},
        {3, 7, & l1_info2_ind},
        {5, 7, & l1_info2_ind},
        {6, 7, & l1_info2_ind},
        {1, 8, & l1_info4_ind},
        {2, 8, & l1_info4_ind},
        {3, 8, & l1_info4_ind},
        {4, 8, & l1_info4_ind},
        {6, 8, & l1_info4_ind},
        {1, 11, & l1_timer3},
        {2, 11, & l1_timer3},
        {3, 11, & l1_timer3},
        {4, 11, & l1_timer3},
        {6, 11, & l1_timer3},
        {5, 10, & l1_timer_act},
        {1, 9, & l1_timer_deact},
        {2, 9, & l1_timer_deact},
        {3, 9, & l1_timer_deact},
        {4, 9, & l1_timer_deact},
        {5, 9, & l1_timer_deact},
        {6, 9, & l1_timer_deact}};
static void release_l1(struct layer1 *l1 )
{ struct FsmTimer *__cil_tmp2 ;
  struct dchannel *__cil_tmp3 ;
  unsigned long __cil_tmp4 ;
  struct dchannel *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  struct dchannel *__cil_tmp7 ;
  void const *__cil_tmp8 ;

  {
  {
  __cil_tmp2 = & l1->timer;
  mISDN_FsmDelTimer(__cil_tmp2, 0);
  }
  {
  __cil_tmp3 = (struct dchannel *)0;
  __cil_tmp4 = (unsigned long )__cil_tmp3;
  __cil_tmp5 = l1->dch;
  __cil_tmp6 = (unsigned long )__cil_tmp5;
  if (__cil_tmp6 != __cil_tmp4) {
    __cil_tmp7 = l1->dch;
    __cil_tmp7->l1 = (void *)0;
  } else {

  }
  }
  {
  ldv_module_put_1(& __this_module);
  __cil_tmp8 = (void const *)l1;
  kfree(__cil_tmp8);
  }
  return;
}
}
int l1_event(struct layer1 *l1 , u_int event )
{ int err ;
  int tmp ;
  struct layer1 *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  int __cil_tmp8 ;
  int __cil_tmp9 ;
  int __cil_tmp10 ;
  int __cil_tmp11 ;
  int __cil_tmp12 ;
  int __cil_tmp13 ;
  int __cil_tmp14 ;
  int __cil_tmp15 ;
  int __cil_tmp16 ;
  int __cil_tmp17 ;
  int __cil_tmp18 ;
  struct FsmInst *__cil_tmp19 ;
  void *__cil_tmp20 ;
  struct FsmInst *__cil_tmp21 ;
  void *__cil_tmp22 ;
  struct FsmInst *__cil_tmp23 ;
  void *__cil_tmp24 ;
  struct FsmInst *__cil_tmp25 ;
  void *__cil_tmp26 ;
  struct FsmInst *__cil_tmp27 ;
  void *__cil_tmp28 ;
  struct FsmInst *__cil_tmp29 ;
  void *__cil_tmp30 ;
  struct FsmInst *__cil_tmp31 ;
  void *__cil_tmp32 ;
  struct FsmInst *__cil_tmp33 ;
  void *__cil_tmp34 ;
  struct FsmInst *__cil_tmp35 ;
  void *__cil_tmp36 ;
  u_long *__cil_tmp37 ;
  unsigned long const volatile *__cil_tmp38 ;
  dchannel_l1callback *__cil_tmp39 ;
  struct dchannel *__cil_tmp40 ;
  u_long *__cil_tmp41 ;
  unsigned long volatile *__cil_tmp42 ;
  struct FsmInst *__cil_tmp43 ;
  void *__cil_tmp44 ;
  u_int __cil_tmp45 ;
  unsigned int __cil_tmp46 ;

  {
  err = 0;
  {
  __cil_tmp5 = (struct layer1 *)0;
  __cil_tmp6 = (unsigned long )__cil_tmp5;
  __cil_tmp7 = (unsigned long )l1;
  if (__cil_tmp7 == __cil_tmp6) {
    return (-22);
  } else {

  }
  }
  {
  __cil_tmp8 = (int )event;
  if (__cil_tmp8 == 36866) {
    goto case_36866;
  } else {
    {
    __cil_tmp9 = (int )event;
    if (__cil_tmp9 == 37378) {
      goto case_37378;
    } else {
      {
      __cil_tmp10 = (int )event;
      if (__cil_tmp10 == 37122) {
        goto case_37122;
      } else {
        {
        __cil_tmp11 = (int )event;
        if (__cil_tmp11 == 37890) {
          goto case_37890;
        } else {
          {
          __cil_tmp12 = (int )event;
          if (__cil_tmp12 == 34818) {
            goto case_34818;
          } else {
            {
            __cil_tmp13 = (int )event;
            if (__cil_tmp13 == 34562) {
              goto case_34562;
            } else {
              {
              __cil_tmp14 = (int )event;
              if (__cil_tmp14 == 33282) {
                goto case_33282;
              } else {
                {
                __cil_tmp15 = (int )event;
                if (__cil_tmp15 == 34050) {
                  goto case_34050;
                } else {
                  {
                  __cil_tmp16 = (int )event;
                  if (__cil_tmp16 == 34306) {
                    goto case_34306;
                  } else {
                    {
                    __cil_tmp17 = (int )event;
                    if (__cil_tmp17 == 257) {
                      goto case_257;
                    } else {
                      {
                      __cil_tmp18 = (int )event;
                      if (__cil_tmp18 == 512) {
                        goto case_512;
                      } else {
                        goto switch_default;
                        if (0) {
                          case_36866:
                          {
                          __cil_tmp19 = & l1->l1m;
                          __cil_tmp20 = (void *)0;
                          mISDN_FsmEvent(__cil_tmp19, 2, __cil_tmp20);
                          }
                          goto ldv_38653;
                          case_37378:
                          {
                          __cil_tmp21 = & l1->l1m;
                          __cil_tmp22 = (void *)0;
                          mISDN_FsmEvent(__cil_tmp21, 4, __cil_tmp22);
                          }
                          goto ldv_38653;
                          case_37122:
                          {
                          __cil_tmp23 = & l1->l1m;
                          __cil_tmp24 = (void *)0;
                          mISDN_FsmEvent(__cil_tmp23, 5, __cil_tmp24);
                          }
                          goto ldv_38653;
                          case_37890:
                          {
                          __cil_tmp25 = & l1->l1m;
                          __cil_tmp26 = (void *)0;
                          mISDN_FsmEvent(__cil_tmp25, 3, __cil_tmp26);
                          }
                          goto ldv_38653;
                          case_34818:
                          {
                          __cil_tmp27 = & l1->l1m;
                          __cil_tmp28 = (void *)0;
                          mISDN_FsmEvent(__cil_tmp27, 6, __cil_tmp28);
                          }
                          goto ldv_38653;
                          case_34562:
                          {
                          __cil_tmp29 = & l1->l1m;
                          __cil_tmp30 = (void *)0;
                          mISDN_FsmEvent(__cil_tmp29, 6, __cil_tmp30);
                          }
                          goto ldv_38653;
                          case_33282:
                          {
                          __cil_tmp31 = & l1->l1m;
                          __cil_tmp32 = (void *)0;
                          mISDN_FsmEvent(__cil_tmp31, 7, __cil_tmp32);
                          }
                          goto ldv_38653;
                          case_34050:
                          {
                          __cil_tmp33 = & l1->l1m;
                          __cil_tmp34 = (void *)0;
                          mISDN_FsmEvent(__cil_tmp33, 8, __cil_tmp34);
                          }
                          goto ldv_38653;
                          case_34306:
                          {
                          __cil_tmp35 = & l1->l1m;
                          __cil_tmp36 = (void *)0;
                          mISDN_FsmEvent(__cil_tmp35, 8, __cil_tmp36);
                          }
                          goto ldv_38653;
                          case_257:
                          {
                          __cil_tmp37 = & l1->Flags;
                          __cil_tmp38 = (unsigned long const volatile *)__cil_tmp37;
                          tmp = constant_test_bit(2U, __cil_tmp38);
                          }
                          if (tmp != 0) {
                            {
                            __cil_tmp39 = l1->dcb;
                            __cil_tmp40 = l1->dch;
                            (*__cil_tmp39)(__cil_tmp40, 258U);
                            }
                          } else {
                            {
                            __cil_tmp41 = & l1->Flags;
                            __cil_tmp42 = (unsigned long volatile *)__cil_tmp41;
                            test_and_set_bit(1, __cil_tmp42);
                            __cil_tmp43 = & l1->l1m;
                            __cil_tmp44 = (void *)0;
                            mISDN_FsmEvent(__cil_tmp43, 0, __cil_tmp44);
                            }
                          }
                          goto ldv_38653;
                          case_512:
                          {
                          release_l1(l1);
                          }
                          goto ldv_38653;
                          switch_default: ;
                          {
                          __cil_tmp45 = *debug___3;
                          __cil_tmp46 = __cil_tmp45 & 65280U;
                          if (__cil_tmp46 != 0U) {
                            {
                            printk("<7>%s %x unhandled\n", "l1_event", event);
                            }
                          } else {

                          }
                          }
                          err = -22;
                        } else {

                        }
                      }
                      }
                    }
                    }
                  }
                  }
                }
                }
              }
              }
            }
            }
          }
          }
        }
        }
      }
      }
    }
    }
  }
  }
  ldv_38653: ;
  return (err);
}
}
int create_l1(struct dchannel *dch , dchannel_l1callback *dcb )
{ struct layer1 *nl1 ;
  void *tmp ;
  struct layer1 *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  u_int __cil_tmp8 ;
  int __cil_tmp9 ;
  struct FsmInst *__cil_tmp10 ;
  struct FsmTimer *__cil_tmp11 ;

  {
  {
  tmp = kzalloc(224UL, 32U);
  nl1 = (struct layer1 *)tmp;
  }
  {
  __cil_tmp5 = (struct layer1 *)0;
  __cil_tmp6 = (unsigned long )__cil_tmp5;
  __cil_tmp7 = (unsigned long )nl1;
  if (__cil_tmp7 == __cil_tmp6) {
    {
    printk("<3>kmalloc struct layer1 failed\n");
    }
    return (-12);
  } else {

  }
  }
  {
  nl1->l1m.fsm = & l1fsm_s;
  nl1->l1m.state = 1;
  nl1->Flags = 0UL;
  __cil_tmp8 = *debug___3;
  __cil_tmp9 = (int )__cil_tmp8;
  nl1->l1m.debug = __cil_tmp9 & 512;
  nl1->l1m.userdata = (void *)nl1;
  nl1->l1m.userint = 0;
  nl1->l1m.printdebug = & l1m_debug;
  nl1->dch = dch;
  nl1->dcb = dcb;
  __cil_tmp10 = & nl1->l1m;
  __cil_tmp11 = & nl1->timer;
  mISDN_FsmInitTimer(__cil_tmp10, __cil_tmp11);
  ldv___module_get_2(& __this_module);
  dch->l1 = (void *)nl1;
  }
  return (0);
}
}
int l1_init(u_int *deb )
{ struct FsmNode *__cil_tmp2 ;

  {
  {
  debug___3 = deb;
  l1fsm_s.state_count = 7;
  l1fsm_s.event_count = 12;
  l1fsm_s.strEvent = (char **)(& strL1Event);
  l1fsm_s.strState = (char **)(& strL1SState);
  __cil_tmp2 = (struct FsmNode *)(& L1SFnList);
  mISDN_FsmNew(& l1fsm_s, __cil_tmp2, 44);
  }
  return (0);
}
}
void l1_cleanup(void)
{

  {
  {
  mISDN_FsmFree(& l1fsm_s);
  }
  return;
}
}
void ldv_module_put_1(struct module *ldv_func_arg1 )
{

  {
  {
  ldv_module_put(ldv_func_arg1);
  }
  return;
}
}
__inline static void ldv___module_get_2(struct module *module )
{

  {
  {
  ldv_module_get(module);
  }
  return;
}
}
extern struct sk_buff *skb_clone(struct sk_buff * , gfp_t ) ;
__inline static __u32 skb_queue_len(struct sk_buff_head const *list_ )
{ __u32 __cil_tmp2 ;

  {
  {
  __cil_tmp2 = list_->qlen;
  return ((__u32 )__cil_tmp2);
  }
}
}
__inline static unsigned int skb_headroom(struct sk_buff const *skb )
{ unsigned char *__cil_tmp2 ;
  long __cil_tmp3 ;
  unsigned int __cil_tmp4 ;
  unsigned char *__cil_tmp5 ;
  long __cil_tmp6 ;
  unsigned int __cil_tmp7 ;

  {
  {
  __cil_tmp2 = skb->head;
  __cil_tmp3 = (long )__cil_tmp2;
  __cil_tmp4 = (unsigned int )__cil_tmp3;
  __cil_tmp5 = skb->data;
  __cil_tmp6 = (long )__cil_tmp5;
  __cil_tmp7 = (unsigned int )__cil_tmp6;
  return (__cil_tmp7 - __cil_tmp4);
  }
}
}
extern void skb_trim(struct sk_buff * , unsigned int ) ;
struct layer2 *create_l2(struct mISDNchannel *ch , u_int protocol , u_long options ,
                         int tei , int sapi ) ;
int tei_l2(struct layer2 *l2 , u_int cmd , u_long arg ) ;
int l2_tei(struct layer2 *l2 , u_int cmd , u_long arg ) ;
void TEIrelease(struct layer2 *l2 ) ;
int TEIInit(u_int *deb ) ;
void TEIFree(void) ;
static u_int *debug___4 ;
static struct Fsm l2fsm = {(FSMFNPTR (**)(struct FsmInst * , int , void * ))0, 0, 0, (char **)0, (char **)0};
static char *strL2State[8U] =
  { (char *)"ST_L2_1", (char *)"ST_L2_2", (char *)"ST_L2_3", (char *)"ST_L2_4",
        (char *)"ST_L2_5", (char *)"ST_L2_6", (char *)"ST_L2_7", (char *)"ST_L2_8"};
static char *strL2Event[22U] =
  { (char *)"EV_L2_UI", (char *)"EV_L2_SABME", (char *)"EV_L2_DISC", (char *)"EV_L2_DM",
        (char *)"EV_L2_UA", (char *)"EV_L2_FRMR", (char *)"EV_L2_SUPER", (char *)"EV_L2_I",
        (char *)"EV_L2_DL_DATA", (char *)"EV_L2_ACK_PULL", (char *)"EV_L2_DL_UNITDATA", (char *)"EV_L2_DL_ESTABLISH_REQ",
        (char *)"EV_L2_DL_RELEASE_REQ", (char *)"EV_L2_MDL_ASSIGN", (char *)"EV_L2_MDL_REMOVE", (char *)"EV_L2_MDL_ERROR",
        (char *)"EV_L1_DEACTIVATE", (char *)"EV_L2_T200", (char *)"EV_L2_T203", (char *)"EV_L2_SET_OWN_BUSY",
        (char *)"EV_L2_CLEAR_OWN_BUSY", (char *)"EV_L2_FRAME_ERROR"};
static void l2m_debug(struct FsmInst *fi , char *fmt , ...)
{ struct layer2 *l2 ;
  struct va_format vaf ;
  va_list va ;
  void *__cil_tmp6 ;
  u_int __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  __builtin_va_list __cil_tmp9 ;
  signed char __cil_tmp10 ;
  int __cil_tmp11 ;
  signed char __cil_tmp12 ;
  int __cil_tmp13 ;
  __builtin_va_list __cil_tmp14 ;

  {
  __cil_tmp6 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp6;
  {
  __cil_tmp7 = *debug___4;
  __cil_tmp8 = __cil_tmp7 & 131072U;
  if (__cil_tmp8 == 0U) {
    return;
  } else {

  }
  }
  {
  vaf.fmt = (char const *)fmt;
  vaf.va = & va;
  __cil_tmp10 = l2->sapi;
  __cil_tmp11 = (int )__cil_tmp10;
  __cil_tmp12 = l2->tei;
  __cil_tmp13 = (int )__cil_tmp12;
  printk("<7>l2 (sapi %d tei %d): %pV\n", __cil_tmp11, __cil_tmp13, & vaf);

  }
  return;
}
}
__inline u_int l2headersize(struct layer2 *l2 , int ui )
{ int tmp___0 ;
  int tmp___1 ;
  int tmp___3 ;
  int tmp___4 ;
  u_long *__cil_tmp7 ;
  unsigned long const volatile *__cil_tmp8 ;
  u_long *__cil_tmp9 ;
  unsigned long const volatile *__cil_tmp10 ;
  int __cil_tmp11 ;

  {
  {
  __cil_tmp7 = & l2->flag;
  __cil_tmp8 = (unsigned long const volatile *)__cil_tmp7;
  tmp___1 = constant_test_bit(3U, __cil_tmp8);
  }
  if (tmp___1 != 0) {
    if (ui == 0) {
      tmp___0 = 2;
    } else {
      tmp___0 = 1;
    }
  } else {
    tmp___0 = 1;
  }
  {
  __cil_tmp9 = & l2->flag;
  __cil_tmp10 = (unsigned long const volatile *)__cil_tmp9;
  tmp___4 = constant_test_bit(1U, __cil_tmp10);
  }
  if (tmp___4 != 0) {
    tmp___3 = 2;
  } else {
    tmp___3 = 1;
  }
  {
  __cil_tmp11 = tmp___0 + tmp___3;
  return ((u_int )__cil_tmp11);
  }
}
}
__inline u_int l2addrsize(struct layer2 *l2 )
{ unsigned int tmp___0 ;
  int tmp___1 ;
  u_long *__cil_tmp4 ;
  unsigned long const volatile *__cil_tmp5 ;

  {
  {
  __cil_tmp4 = & l2->flag;
  __cil_tmp5 = (unsigned long const volatile *)__cil_tmp4;
  tmp___1 = constant_test_bit(1U, __cil_tmp5);
  }
  if (tmp___1 != 0) {
    tmp___0 = 2U;
  } else {
    tmp___0 = 1U;
  }
  return (tmp___0);
}
}
static u_int l2_newid(struct layer2 *l2 )
{ u_int id ;
  u_int tmp ;
  u_int __cil_tmp4 ;
  signed char __cil_tmp5 ;
  int __cil_tmp6 ;
  int __cil_tmp7 ;
  u_int __cil_tmp8 ;
  signed char __cil_tmp9 ;
  u_int __cil_tmp10 ;

  {
  tmp = l2->next_id;
  __cil_tmp4 = l2->next_id;
  l2->next_id = __cil_tmp4 + 1U;
  id = tmp;
  if (id == 32767U) {
    l2->next_id = 1U;
  } else {

  }
  id = id << 16;
  __cil_tmp5 = l2->tei;
  __cil_tmp6 = (int )__cil_tmp5;
  __cil_tmp7 = __cil_tmp6 << 8;
  __cil_tmp8 = (u_int )__cil_tmp7;
  id = __cil_tmp8 | id;
  __cil_tmp9 = l2->sapi;
  __cil_tmp10 = (u_int )__cil_tmp9;
  id = __cil_tmp10 | id;
  return (id);
}
}
static void l2up(struct layer2 *l2 , u_int prim , struct sk_buff *skb )
{ int err ;
  struct mISDNchannel *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  struct mISDNchannel *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  char (*__cil_tmp9)[48U] ;
  struct mISDNhead *__cil_tmp10 ;
  char (*__cil_tmp11)[48U] ;
  struct mISDNhead *__cil_tmp12 ;
  u_int __cil_tmp13 ;
  u_int __cil_tmp14 ;
  u_int __cil_tmp15 ;
  struct mISDNchannel *__cil_tmp16 ;
  send_func_t *__cil_tmp17 ;
  struct mISDNchannel *__cil_tmp18 ;

  {
  {
  __cil_tmp5 = (struct mISDNchannel *)0;
  __cil_tmp6 = (unsigned long )__cil_tmp5;
  __cil_tmp7 = l2->up;
  __cil_tmp8 = (unsigned long )__cil_tmp7;
  if (__cil_tmp8 == __cil_tmp6) {
    return;
  } else {

  }
  }
  {
  __cil_tmp9 = & skb->cb;
  __cil_tmp10 = (struct mISDNhead *)__cil_tmp9;
  __cil_tmp10->prim = prim;
  __cil_tmp11 = & skb->cb;
  __cil_tmp12 = (struct mISDNhead *)__cil_tmp11;
  __cil_tmp13 = l2->ch.addr;
  __cil_tmp14 = l2->ch.nr;
  __cil_tmp15 = __cil_tmp14 << 16;
  __cil_tmp12->id = __cil_tmp15 | __cil_tmp13;
  __cil_tmp16 = l2->up;
  __cil_tmp17 = __cil_tmp16->send;
  __cil_tmp18 = l2->up;
  err = (*__cil_tmp17)(__cil_tmp18, skb);
  }
  if (err != 0) {
    {
    printk("<4>%s: err=%d\n", "l2up", err);
    consume_skb(skb);
    }
  } else {

  }
  return;
}
}
static void l2up_create(struct layer2 *l2 , u_int prim , int len , void *arg )
{ struct sk_buff *skb ;
  struct mISDNhead *hh ;
  int err ;
  size_t __len ;
  void *__ret ;
  unsigned char *tmp___0 ;
  struct mISDNchannel *__cil_tmp11 ;
  unsigned long __cil_tmp12 ;
  struct mISDNchannel *__cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  unsigned int __cil_tmp15 ;
  struct sk_buff *__cil_tmp16 ;
  unsigned long __cil_tmp17 ;
  unsigned long __cil_tmp18 ;
  char (*__cil_tmp19)[48U] ;
  u_int __cil_tmp20 ;
  u_int __cil_tmp21 ;
  u_int __cil_tmp22 ;
  unsigned int __cil_tmp23 ;
  void *__cil_tmp24 ;
  void const *__cil_tmp25 ;
  struct mISDNchannel *__cil_tmp26 ;
  send_func_t *__cil_tmp27 ;
  struct mISDNchannel *__cil_tmp28 ;

  {
  {
  __cil_tmp11 = (struct mISDNchannel *)0;
  __cil_tmp12 = (unsigned long )__cil_tmp11;
  __cil_tmp13 = l2->up;
  __cil_tmp14 = (unsigned long )__cil_tmp13;
  if (__cil_tmp14 == __cil_tmp12) {
    return;
  } else {

  }
  }
  {
  __cil_tmp15 = (unsigned int )len;
  skb = mI_alloc_skb(__cil_tmp15, 32U);
  }
  {
  __cil_tmp16 = (struct sk_buff *)0;
  __cil_tmp17 = (unsigned long )__cil_tmp16;
  __cil_tmp18 = (unsigned long )skb;
  if (__cil_tmp18 == __cil_tmp17) {
    return;
  } else {

  }
  }
  __cil_tmp19 = & skb->cb;
  hh = (struct mISDNhead *)__cil_tmp19;
  hh->prim = prim;
  __cil_tmp20 = l2->ch.addr;
  __cil_tmp21 = l2->ch.nr;
  __cil_tmp22 = __cil_tmp21 << 16;
  hh->id = __cil_tmp22 | __cil_tmp20;
  if (len != 0) {
    {
    __len = (size_t )len;
    __cil_tmp23 = (unsigned int )len;
    tmp___0 = skb_put(skb, __cil_tmp23);
    __cil_tmp24 = (void *)tmp___0;
    __cil_tmp25 = (void const *)arg;
    __ret = __builtin_memcpy(__cil_tmp24, __cil_tmp25, __len);
    }
  } else {

  }
  {
  __cil_tmp26 = l2->up;
  __cil_tmp27 = __cil_tmp26->send;
  __cil_tmp28 = l2->up;
  err = (*__cil_tmp27)(__cil_tmp28, skb);
  }
  if (err != 0) {
    {
    printk("<4>%s: err=%d\n", "l2up_create", err);
    consume_skb(skb);
    }
  } else {

  }
  return;
}
}
static int l2down_skb(struct layer2 *l2 , struct sk_buff *skb )
{ int ret ;
  send_func_t *__cil_tmp4 ;
  struct mISDNchannel *__cil_tmp5 ;
  u_int __cil_tmp6 ;
  unsigned int __cil_tmp7 ;

  {
  {
  __cil_tmp4 = l2->ch.recv;
  __cil_tmp5 = l2->ch.peer;
  ret = (*__cil_tmp4)(__cil_tmp5, skb);
  }
  if (ret != 0) {
    {
    __cil_tmp6 = *debug___4;
    __cil_tmp7 = __cil_tmp6 & 524288U;
    if (__cil_tmp7 != 0U) {
      {
      printk("<7>l2down_skb: ret(%d)\n", ret);
      }
    } else {

    }
    }
  } else {

  }
  return (ret);
}
}
static int l2down_raw(struct layer2 *l2 , struct sk_buff *skb )
{ struct mISDNhead *hh ;
  int tmp ;
  int tmp___0 ;
  char (*__cil_tmp6)[48U] ;
  unsigned int __cil_tmp7 ;
  u_long *__cil_tmp8 ;
  unsigned long volatile *__cil_tmp9 ;
  struct sk_buff_head *__cil_tmp10 ;
  char (*__cil_tmp11)[48U] ;
  struct mISDNhead *__cil_tmp12 ;

  {
  __cil_tmp6 = & skb->cb;
  hh = (struct mISDNhead *)__cil_tmp6;
  {
  __cil_tmp7 = hh->prim;
  if (__cil_tmp7 == 8193U) {
    {
    __cil_tmp8 = & l2->flag;
    __cil_tmp9 = (unsigned long volatile *)__cil_tmp8;
    tmp = test_and_set_bit(17, __cil_tmp9);
    }
    if (tmp != 0) {
      {
      __cil_tmp10 = & l2->down_queue;
      skb_queue_tail(__cil_tmp10, skb);
      }
      return (0);
    } else {

    }
    __cil_tmp11 = & skb->cb;
    __cil_tmp12 = (struct mISDNhead *)__cil_tmp11;
    l2->down_id = __cil_tmp12->id;
  } else {

  }
  }
  {
  tmp___0 = l2down_skb(l2, skb);
  }
  return (tmp___0);
}
}
static int l2down(struct layer2 *l2 , u_int prim , u_int id , struct sk_buff *skb )
{ struct mISDNhead *hh ;
  int tmp ;
  char (*__cil_tmp7)[48U] ;

  {
  {
  __cil_tmp7 = & skb->cb;
  hh = (struct mISDNhead *)__cil_tmp7;
  hh->prim = prim;
  hh->id = id;
  tmp = l2down_raw(l2, skb);
  }
  return (tmp);
}
}
static int l2down_create(struct layer2 *l2 , u_int prim , u_int id , int len , void *arg )
{ struct sk_buff *skb ;
  int err ;
  struct mISDNhead *hh ;
  size_t __len ;
  void *__ret ;
  unsigned char *tmp___0 ;
  unsigned int __cil_tmp12 ;
  struct sk_buff *__cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  char (*__cil_tmp16)[48U] ;
  unsigned int __cil_tmp17 ;
  void *__cil_tmp18 ;
  void const *__cil_tmp19 ;

  {
  {
  __cil_tmp12 = (unsigned int )len;
  skb = mI_alloc_skb(__cil_tmp12, 32U);
  }
  {
  __cil_tmp13 = (struct sk_buff *)0;
  __cil_tmp14 = (unsigned long )__cil_tmp13;
  __cil_tmp15 = (unsigned long )skb;
  if (__cil_tmp15 == __cil_tmp14) {
    return (-12);
  } else {

  }
  }
  __cil_tmp16 = & skb->cb;
  hh = (struct mISDNhead *)__cil_tmp16;
  hh->prim = prim;
  hh->id = id;
  if (len != 0) {
    {
    __len = (size_t )len;
    __cil_tmp17 = (unsigned int )len;
    tmp___0 = skb_put(skb, __cil_tmp17);
    __cil_tmp18 = (void *)tmp___0;
    __cil_tmp19 = (void const *)arg;
    __ret = __builtin_memcpy(__cil_tmp18, __cil_tmp19, __len);
    }
  } else {

  }
  {
  err = l2down_raw(l2, skb);
  }
  if (err != 0) {
    {
    consume_skb(skb);
    }
  } else {

  }
  return (err);
}
}
static int ph_data_confirm(struct layer2 *l2 , struct mISDNhead *hh , struct sk_buff *skb )
{ struct sk_buff *nskb ;
  int ret ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  u_long *__cil_tmp10 ;
  unsigned long const volatile *__cil_tmp11 ;
  u_int __cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  struct sk_buff_head *__cil_tmp14 ;
  struct sk_buff *__cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  unsigned long __cil_tmp17 ;
  char (*__cil_tmp18)[48U] ;
  struct mISDNhead *__cil_tmp19 ;
  u_int __cil_tmp20 ;
  u_long *__cil_tmp21 ;
  unsigned long volatile *__cil_tmp22 ;
  struct FsmInst *__cil_tmp23 ;
  void *__cil_tmp24 ;
  u_long *__cil_tmp25 ;
  unsigned long volatile *__cil_tmp26 ;
  struct sk_buff_head *__cil_tmp27 ;
  struct sk_buff *__cil_tmp28 ;
  unsigned long __cil_tmp29 ;
  unsigned long __cil_tmp30 ;
  char (*__cil_tmp31)[48U] ;
  struct mISDNhead *__cil_tmp32 ;
  u_long *__cil_tmp33 ;
  unsigned long volatile *__cil_tmp34 ;
  u_long *__cil_tmp35 ;
  unsigned long volatile *__cil_tmp36 ;

  {
  {
  nskb = skb;
  ret = -11;
  __cil_tmp10 = & l2->flag;
  __cil_tmp11 = (unsigned long const volatile *)__cil_tmp10;
  tmp___0 = constant_test_bit(17U, __cil_tmp11);
  }
  if (tmp___0 != 0) {
    {
    __cil_tmp12 = l2->down_id;
    __cil_tmp13 = hh->id;
    if (__cil_tmp13 == __cil_tmp12) {
      {
      __cil_tmp14 = & l2->down_queue;
      nskb = skb_dequeue(__cil_tmp14);
      }
      {
      __cil_tmp15 = (struct sk_buff *)0;
      __cil_tmp16 = (unsigned long )__cil_tmp15;
      __cil_tmp17 = (unsigned long )nskb;
      if (__cil_tmp17 != __cil_tmp16) {
        {
        __cil_tmp18 = & nskb->cb;
        __cil_tmp19 = (struct mISDNhead *)__cil_tmp18;
        l2->down_id = __cil_tmp19->id;
        tmp = l2down_skb(l2, nskb);
        }
        if (tmp != 0) {
          {
          consume_skb(nskb);
          l2->down_id = 65534U;
          }
        } else {

        }
      } else {
        l2->down_id = 65534U;
      }
      }
      if (ret != 0) {
        {
        consume_skb(skb);
        ret = 0;
        }
      } else {

      }
      {
      __cil_tmp20 = l2->down_id;
      if (__cil_tmp20 == 65534U) {
        {
        __cil_tmp21 = & l2->flag;
        __cil_tmp22 = (unsigned long volatile *)__cil_tmp21;
        test_and_clear_bit(17, __cil_tmp22);
        __cil_tmp23 = & l2->l2m;
        __cil_tmp24 = (void *)0;
        mISDN_FsmEvent(__cil_tmp23, 9, __cil_tmp24);
        }
      } else {

      }
      }
    } else {

    }
    }
  } else {

  }
  {
  __cil_tmp25 = & l2->flag;
  __cil_tmp26 = (unsigned long volatile *)__cil_tmp25;
  tmp___2 = test_and_set_bit(17, __cil_tmp26);
  }
  if (tmp___2 == 0) {
    {
    __cil_tmp27 = & l2->down_queue;
    nskb = skb_dequeue(__cil_tmp27);
    }
    {
    __cil_tmp28 = (struct sk_buff *)0;
    __cil_tmp29 = (unsigned long )__cil_tmp28;
    __cil_tmp30 = (unsigned long )nskb;
    if (__cil_tmp30 != __cil_tmp29) {
      {
      __cil_tmp31 = & nskb->cb;
      __cil_tmp32 = (struct mISDNhead *)__cil_tmp31;
      l2->down_id = __cil_tmp32->id;
      tmp___1 = l2down_skb(l2, nskb);
      }
      if (tmp___1 != 0) {
        {
        consume_skb(nskb);
        l2->down_id = 65534U;
        __cil_tmp33 = & l2->flag;
        __cil_tmp34 = (unsigned long volatile *)__cil_tmp33;
        test_and_clear_bit(17, __cil_tmp34);
        }
      } else {

      }
    } else {
      {
      __cil_tmp35 = & l2->flag;
      __cil_tmp36 = (unsigned long volatile *)__cil_tmp35;
      test_and_clear_bit(17, __cil_tmp36);
      }
    }
    }
  } else {

  }
  return (ret);
}
}
static int l2mgr(struct layer2 *l2 , u_int prim , void *arg )
{ long c ;
  int tmp ;
  int tmp___0 ;
  int __cil_tmp7 ;
  char __cil_tmp8 ;
  int __cil_tmp9 ;
  u_long *__cil_tmp10 ;
  unsigned long const volatile *__cil_tmp11 ;
  u_long *__cil_tmp12 ;
  unsigned long const volatile *__cil_tmp13 ;
  int __cil_tmp14 ;
  int __cil_tmp15 ;
  int __cil_tmp16 ;
  int __cil_tmp17 ;
  unsigned long __cil_tmp18 ;

  {
  {
  c = (long )arg;
  __cil_tmp7 = l2->id;
  __cil_tmp8 = (char )c;
  __cil_tmp9 = (int )__cil_tmp8;
  printk("<4>l2mgr: addr:%x prim %x %c\n", __cil_tmp7, prim, __cil_tmp9);
  __cil_tmp10 = & l2->flag;
  __cil_tmp11 = (unsigned long const volatile *)__cil_tmp10;
  tmp = constant_test_bit(1U, __cil_tmp11);
  }
  if (tmp != 0) {
    {
    __cil_tmp12 = & l2->flag;
    __cil_tmp13 = (unsigned long const volatile *)__cil_tmp12;
    tmp___0 = constant_test_bit(15U, __cil_tmp13);
    }
    if (tmp___0 == 0) {
      {
      __cil_tmp14 = (int )c;
      if (__cil_tmp14 == 67) {
        goto case_67;
      } else {
        {
        __cil_tmp15 = (int )c;
        if (__cil_tmp15 == 68) {
          goto case_68;
        } else {
          {
          __cil_tmp16 = (int )c;
          if (__cil_tmp16 == 71) {
            goto case_71;
          } else {
            {
            __cil_tmp17 = (int )c;
            if (__cil_tmp17 == 72) {
              goto case_72;
            } else
            if (0) {
              case_67: ;
              case_68: ;
              case_71: ;
              case_72:
              {
              __cil_tmp18 = (unsigned long )arg;
              l2_tei(l2, prim, __cil_tmp18);
              }
              goto ldv_38621;
            } else {

            }
            }
          }
          }
        }
        }
      }
      }
      ldv_38621: ;
    } else {

    }
  } else {

  }
  return (0);
}
}
static void set_peer_busy(struct layer2 *l2 )
{ __u32 tmp ;
  __u32 tmp___0 ;
  u_long *__cil_tmp4 ;
  unsigned long volatile *__cil_tmp5 ;
  struct sk_buff_head *__cil_tmp6 ;
  struct sk_buff_head const *__cil_tmp7 ;
  u_long *__cil_tmp8 ;
  unsigned long volatile *__cil_tmp9 ;
  struct sk_buff_head *__cil_tmp10 ;
  struct sk_buff_head const *__cil_tmp11 ;
  u_long *__cil_tmp12 ;
  unsigned long volatile *__cil_tmp13 ;

  {
  {
  __cil_tmp4 = & l2->flag;
  __cil_tmp5 = (unsigned long volatile *)__cil_tmp4;
  test_and_set_bit(10, __cil_tmp5);
  __cil_tmp6 = & l2->i_queue;
  __cil_tmp7 = (struct sk_buff_head const *)__cil_tmp6;
  tmp = skb_queue_len(__cil_tmp7);
  }
  if (tmp != 0U) {
    {
    __cil_tmp8 = & l2->flag;
    __cil_tmp9 = (unsigned long volatile *)__cil_tmp8;
    test_and_set_bit(16, __cil_tmp9);
    }
  } else {
    {
    __cil_tmp10 = & l2->ui_queue;
    __cil_tmp11 = (struct sk_buff_head const *)__cil_tmp10;
    tmp___0 = skb_queue_len(__cil_tmp11);
    }
    if (tmp___0 != 0U) {
      {
      __cil_tmp12 = & l2->flag;
      __cil_tmp13 = (unsigned long volatile *)__cil_tmp12;
      test_and_set_bit(16, __cil_tmp13);
      }
    } else {

    }
  }
  return;
}
}
static void clear_peer_busy(struct layer2 *l2 )
{ int tmp ;
  u_long *__cil_tmp3 ;
  unsigned long volatile *__cil_tmp4 ;
  u_long *__cil_tmp5 ;
  unsigned long volatile *__cil_tmp6 ;

  {
  {
  __cil_tmp3 = & l2->flag;
  __cil_tmp4 = (unsigned long volatile *)__cil_tmp3;
  tmp = test_and_clear_bit(10, __cil_tmp4);
  }
  if (tmp != 0) {
    {
    __cil_tmp5 = & l2->flag;
    __cil_tmp6 = (unsigned long volatile *)__cil_tmp5;
    test_and_clear_bit(16, __cil_tmp6);
    }
  } else {

  }
  return;
}
}
static void InitWin(struct layer2 *l2 )
{ int i ;

  {
  i = 0;
  goto ldv_38633;
  ldv_38632:
  l2->windowar[i] = (struct sk_buff *)0;
  i = i + 1;
  ldv_38633: ;
  if (i <= 7) {
    goto ldv_38632;
  } else {
    goto ldv_38634;
  }
  ldv_38634: ;
  return;
}
}
static int freewin(struct layer2 *l2 )
{ int i ;
  int cnt ;
  struct sk_buff *__cil_tmp4 ;
  unsigned long __cil_tmp5 ;
  struct sk_buff *__cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  struct sk_buff *__cil_tmp8 ;

  {
  cnt = 0;
  i = 0;
  goto ldv_38641;
  ldv_38640: ;
  {
  __cil_tmp4 = (struct sk_buff *)0;
  __cil_tmp5 = (unsigned long )__cil_tmp4;
  __cil_tmp6 = l2->windowar[i];
  __cil_tmp7 = (unsigned long )__cil_tmp6;
  if (__cil_tmp7 != __cil_tmp5) {
    {
    cnt = cnt + 1;
    __cil_tmp8 = l2->windowar[i];
    consume_skb(__cil_tmp8);
    l2->windowar[i] = (struct sk_buff *)0;
    }
  } else {

  }
  }
  i = i + 1;
  ldv_38641: ;
  if (i <= 7) {
    goto ldv_38640;
  } else {
    goto ldv_38642;
  }
  ldv_38642: ;
  return (cnt);
}
}
static void ReleaseWin(struct layer2 *l2 )
{ int cnt ;
  int tmp ;

  {
  {
  tmp = freewin(l2);
  cnt = tmp;
  }
  if (cnt != 0) {
    {
    printk("<4>isdnl2 freed %d skbuffs in release\n", cnt);
    }
  } else {

  }
  return;
}
}
__inline unsigned int cansend(struct layer2 *l2 )
{ unsigned int p1 ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  u_long *__cil_tmp6 ;
  unsigned long const volatile *__cil_tmp7 ;
  u_int __cil_tmp8 ;
  u_int __cil_tmp9 ;
  u_int __cil_tmp10 ;
  u_int __cil_tmp11 ;
  u_int __cil_tmp12 ;
  u_int __cil_tmp13 ;
  u_int __cil_tmp14 ;
  u_long *__cil_tmp15 ;
  unsigned long const volatile *__cil_tmp16 ;

  {
  {
  __cil_tmp6 = & l2->flag;
  __cil_tmp7 = (unsigned long const volatile *)__cil_tmp6;
  tmp = constant_test_bit(3U, __cil_tmp7);
  }
  if (tmp != 0) {
    __cil_tmp8 = l2->va;
    __cil_tmp9 = l2->vs;
    __cil_tmp10 = __cil_tmp9 - __cil_tmp8;
    p1 = __cil_tmp10 & 127U;
  } else {
    __cil_tmp11 = l2->va;
    __cil_tmp12 = l2->vs;
    __cil_tmp13 = __cil_tmp12 - __cil_tmp11;
    p1 = __cil_tmp13 & 7U;
  }
  {
  __cil_tmp14 = l2->window;
  if (__cil_tmp14 > p1) {
    {
    __cil_tmp15 = & l2->flag;
    __cil_tmp16 = (unsigned long const volatile *)__cil_tmp15;
    tmp___0 = constant_test_bit(10U, __cil_tmp16);
    }
    if (tmp___0 == 0) {
      tmp___1 = 1;
    } else {
      tmp___1 = 0;
    }
  } else {
    tmp___1 = 0;
  }
  }
  return ((unsigned int )tmp___1);
}
}
__inline void clear_exception(struct layer2 *l2 )
{ u_long *__cil_tmp2 ;
  unsigned long volatile *__cil_tmp3 ;
  u_long *__cil_tmp4 ;
  unsigned long volatile *__cil_tmp5 ;
  u_long *__cil_tmp6 ;
  unsigned long volatile *__cil_tmp7 ;

  {
  {
  __cil_tmp2 = & l2->flag;
  __cil_tmp3 = (unsigned long volatile *)__cil_tmp2;
  test_and_clear_bit(7, __cil_tmp3);
  __cil_tmp4 = & l2->flag;
  __cil_tmp5 = (unsigned long volatile *)__cil_tmp4;
  test_and_clear_bit(8, __cil_tmp5);
  __cil_tmp6 = & l2->flag;
  __cil_tmp7 = (unsigned long volatile *)__cil_tmp6;
  test_and_clear_bit(9, __cil_tmp7);
  clear_peer_busy(l2);
  }
  return;
}
}
static int sethdraddr(struct layer2 *l2 , u_char *header , int rsp )
{ u_char *ptr ;
  int crbit ;
  int tmp ;
  u_char *tmp___0 ;
  int tmp___1 ;
  u_char *tmp___2 ;
  int tmp___3 ;
  u_char *tmp___4 ;
  u_char *tmp___5 ;
  int tmp___6 ;
  u_long *__cil_tmp14 ;
  unsigned long const volatile *__cil_tmp15 ;
  u_long *__cil_tmp16 ;
  unsigned long const volatile *__cil_tmp17 ;
  signed char __cil_tmp18 ;
  int __cil_tmp19 ;
  int __cil_tmp20 ;
  signed char __cil_tmp21 ;
  int __cil_tmp22 ;
  int __cil_tmp23 ;
  signed char __cil_tmp24 ;
  int __cil_tmp25 ;
  int __cil_tmp26 ;
  signed char __cil_tmp27 ;
  int __cil_tmp28 ;
  int __cil_tmp29 ;
  u_long *__cil_tmp30 ;
  unsigned long const volatile *__cil_tmp31 ;

  {
  {
  ptr = header;
  crbit = rsp;
  __cil_tmp14 = & l2->flag;
  __cil_tmp15 = (unsigned long const volatile *)__cil_tmp14;
  tmp___6 = constant_test_bit(1U, __cil_tmp15);
  }
  if (tmp___6 != 0) {
    {
    __cil_tmp16 = & l2->flag;
    __cil_tmp17 = (unsigned long const volatile *)__cil_tmp16;
    tmp = constant_test_bit(18U, __cil_tmp17);
    }
    if (tmp != 0) {
      crbit = crbit == 0;
    } else {

    }
    tmp___0 = ptr;
    ptr = ptr + 1;
    if (crbit != 0) {
      tmp___1 = 2;
    } else {
      tmp___1 = 0;
    }
    __cil_tmp18 = l2->sapi;
    __cil_tmp19 = (int )__cil_tmp18;
    __cil_tmp20 = __cil_tmp19 << 2;
    __cil_tmp21 = (signed char )__cil_tmp20;
    __cil_tmp22 = (int )__cil_tmp21;
    __cil_tmp23 = __cil_tmp22 | tmp___1;
    *tmp___0 = (u_char )__cil_tmp23;
    tmp___2 = ptr;
    ptr = ptr + 1;
    __cil_tmp24 = l2->tei;
    __cil_tmp25 = (int )__cil_tmp24;
    __cil_tmp26 = __cil_tmp25 << 1;
    __cil_tmp27 = (signed char )__cil_tmp26;
    __cil_tmp28 = (int )__cil_tmp27;
    __cil_tmp29 = __cil_tmp28 | 1;
    *tmp___2 = (u_char )__cil_tmp29;
    return (2);
  } else {
    {
    __cil_tmp30 = & l2->flag;
    __cil_tmp31 = (unsigned long const volatile *)__cil_tmp30;
    tmp___3 = constant_test_bit(2U, __cil_tmp31);
    }
    if (tmp___3 != 0) {
      crbit = crbit == 0;
    } else {

    }
    if (crbit != 0) {
      tmp___4 = ptr;
      ptr = ptr + 1;
      *tmp___4 = l2->addr.B;
    } else {
      tmp___5 = ptr;
      ptr = ptr + 1;
      *tmp___5 = l2->addr.A;
    }
    return (1);
  }
}
}
__inline static void enqueue_super(struct layer2 *l2 , struct sk_buff *skb )
{ u_int tmp ;
  int tmp___0 ;

  {
  {
  tmp = l2_newid(l2);
  tmp___0 = l2down(l2, 8193U, tmp, skb);
  }
  if (tmp___0 != 0) {
    {
    consume_skb(skb);
    }
  } else {

  }
  return;
}
}
__inline static void enqueue_ui(struct layer2 *l2 , struct sk_buff *skb )
{ u_int tmp ;
  int tmp___0 ;
  struct teimgr *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  struct teimgr *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;

  {
  {
  __cil_tmp5 = (struct teimgr *)0;
  __cil_tmp6 = (unsigned long )__cil_tmp5;
  __cil_tmp7 = l2->tm;
  __cil_tmp8 = (unsigned long )__cil_tmp7;
  if (__cil_tmp8 != __cil_tmp6) {
    {
    l2_tei(l2, 7684U, 0UL);
    }
  } else {

  }
  }
  {
  tmp = l2_newid(l2);
  tmp___0 = l2down(l2, 8193U, tmp, skb);
  }
  if (tmp___0 != 0) {
    {
    consume_skb(skb);
    }
  } else {

  }
  return;
}
}
__inline int IsUI(u_char *data )
{ u_char __cil_tmp2 ;
  int __cil_tmp3 ;
  int __cil_tmp4 ;

  {
  {
  __cil_tmp2 = *data;
  __cil_tmp3 = (int )__cil_tmp2;
  __cil_tmp4 = __cil_tmp3 & 239;
  return (__cil_tmp4 == 3);
  }
}
}
__inline int IsUA(u_char *data )
{ u_char __cil_tmp2 ;
  int __cil_tmp3 ;
  int __cil_tmp4 ;

  {
  {
  __cil_tmp2 = *data;
  __cil_tmp3 = (int )__cil_tmp2;
  __cil_tmp4 = __cil_tmp3 & 239;
  return (__cil_tmp4 == 99);
  }
}
}
__inline int IsDM(u_char *data )
{ u_char __cil_tmp2 ;
  int __cil_tmp3 ;
  int __cil_tmp4 ;

  {
  {
  __cil_tmp2 = *data;
  __cil_tmp3 = (int )__cil_tmp2;
  __cil_tmp4 = __cil_tmp3 & 239;
  return (__cil_tmp4 == 15);
  }
}
}
__inline int IsDISC(u_char *data )
{ u_char __cil_tmp2 ;
  int __cil_tmp3 ;
  int __cil_tmp4 ;

  {
  {
  __cil_tmp2 = *data;
  __cil_tmp3 = (int )__cil_tmp2;
  __cil_tmp4 = __cil_tmp3 & 239;
  return (__cil_tmp4 == 67);
  }
}
}
__inline int IsRR(u_char *data , struct layer2 *l2 )
{ int tmp ;
  u_long *__cil_tmp4 ;
  unsigned long const volatile *__cil_tmp5 ;
  u_char __cil_tmp6 ;
  unsigned int __cil_tmp7 ;
  u_char __cil_tmp8 ;
  int __cil_tmp9 ;
  int __cil_tmp10 ;

  {
  {
  __cil_tmp4 = & l2->flag;
  __cil_tmp5 = (unsigned long const volatile *)__cil_tmp4;
  tmp = constant_test_bit(3U, __cil_tmp5);
  }
  if (tmp != 0) {
    {
    __cil_tmp6 = *data;
    __cil_tmp7 = (unsigned int )__cil_tmp6;
    return (__cil_tmp7 == 1U);
    }
  } else {
    {
    __cil_tmp8 = *data;
    __cil_tmp9 = (int )__cil_tmp8;
    __cil_tmp10 = __cil_tmp9 & 15;
    return (__cil_tmp10 == 1);
    }
  }
}
}
__inline int IsSFrame(u_char *data , struct layer2 *l2 )
{ register u_char d ;
  int tmp ;
  int tmp___0 ;
  u_long *__cil_tmp6 ;
  unsigned long const volatile *__cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  int __cil_tmp10 ;
  int __cil_tmp11 ;
  int __cil_tmp12 ;
  int __cil_tmp13 ;

  {
  {
  d = *data;
  __cil_tmp6 = & l2->flag;
  __cil_tmp7 = (unsigned long const volatile *)__cil_tmp6;
  tmp = constant_test_bit(3U, __cil_tmp7);
  }
  if (tmp == 0) {
    __cil_tmp8 = (unsigned int )d;
    __cil_tmp9 = __cil_tmp8 & 15U;
    d = (u_char )__cil_tmp9;
  } else {

  }
  {
  __cil_tmp10 = (int )d;
  __cil_tmp11 = __cil_tmp10 & 243;
  if (__cil_tmp11 == 1) {
    {
    __cil_tmp12 = (int )d;
    __cil_tmp13 = __cil_tmp12 & 12;
    if (__cil_tmp13 != 12) {
      tmp___0 = 1;
    } else {
      tmp___0 = 0;
    }
    }
  } else {
    tmp___0 = 0;
  }
  }
  return (tmp___0);
}
}
__inline int IsSABME(u_char *data , struct layer2 *l2 )
{ u_char d ;
  int tmp___0 ;
  int tmp___1 ;
  u_char __cil_tmp6 ;
  unsigned int __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  u_long *__cil_tmp9 ;
  unsigned long const volatile *__cil_tmp10 ;
  unsigned int __cil_tmp11 ;
  unsigned int __cil_tmp12 ;

  {
  {
  __cil_tmp6 = *data;
  __cil_tmp7 = (unsigned int )__cil_tmp6;
  __cil_tmp8 = __cil_tmp7 & 239U;
  d = (u_char )__cil_tmp8;
  __cil_tmp9 = & l2->flag;
  __cil_tmp10 = (unsigned long const volatile *)__cil_tmp9;
  tmp___1 = constant_test_bit(3U, __cil_tmp10);
  }
  if (tmp___1 != 0) {
    __cil_tmp11 = (unsigned int )d;
    tmp___0 = __cil_tmp11 == 111U;
  } else {
    __cil_tmp12 = (unsigned int )d;
    tmp___0 = __cil_tmp12 == 47U;
  }
  return (tmp___0);
}
}
__inline int IsREJ(u_char *data , struct layer2 *l2 )
{ int tmp___0 ;
  int tmp___1 ;
  u_long *__cil_tmp5 ;
  unsigned long const volatile *__cil_tmp6 ;
  u_char __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  u_char __cil_tmp9 ;
  int __cil_tmp10 ;
  int __cil_tmp11 ;

  {
  {
  __cil_tmp5 = & l2->flag;
  __cil_tmp6 = (unsigned long const volatile *)__cil_tmp5;
  tmp___1 = constant_test_bit(3U, __cil_tmp6);
  }
  if (tmp___1 != 0) {
    __cil_tmp7 = *data;
    __cil_tmp8 = (unsigned int )__cil_tmp7;
    tmp___0 = __cil_tmp8 == 9U;
  } else {
    __cil_tmp9 = *data;
    __cil_tmp10 = (int )__cil_tmp9;
    __cil_tmp11 = __cil_tmp10 & 15;
    tmp___0 = __cil_tmp11 == 9;
  }
  return (tmp___0);
}
}
__inline int IsFRMR(u_char *data )
{ u_char __cil_tmp2 ;
  int __cil_tmp3 ;
  int __cil_tmp4 ;

  {
  {
  __cil_tmp2 = *data;
  __cil_tmp3 = (int )__cil_tmp2;
  __cil_tmp4 = __cil_tmp3 & 239;
  return (__cil_tmp4 == 135);
  }
}
}
__inline int IsRNR(u_char *data , struct layer2 *l2 )
{ int tmp___0 ;
  int tmp___1 ;
  u_long *__cil_tmp5 ;
  unsigned long const volatile *__cil_tmp6 ;
  u_char __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  u_char __cil_tmp9 ;
  int __cil_tmp10 ;
  int __cil_tmp11 ;

  {
  {
  __cil_tmp5 = & l2->flag;
  __cil_tmp6 = (unsigned long const volatile *)__cil_tmp5;
  tmp___1 = constant_test_bit(3U, __cil_tmp6);
  }
  if (tmp___1 != 0) {
    __cil_tmp7 = *data;
    __cil_tmp8 = (unsigned int )__cil_tmp7;
    tmp___0 = __cil_tmp8 == 5U;
  } else {
    __cil_tmp9 = *data;
    __cil_tmp10 = (int )__cil_tmp9;
    __cil_tmp11 = __cil_tmp10 & 15;
    tmp___0 = __cil_tmp11 == 5;
  }
  return (tmp___0);
}
}
static int iframe_error(struct layer2 *l2 , struct sk_buff *skb )
{ u_int i ;
  int rsp ;
  u_int tmp ;
  unsigned int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned char *__cil_tmp9 ;
  unsigned char __cil_tmp10 ;
  int __cil_tmp11 ;
  u_long *__cil_tmp12 ;
  unsigned long const volatile *__cil_tmp13 ;
  u_long *__cil_tmp14 ;
  unsigned long const volatile *__cil_tmp15 ;
  unsigned int __cil_tmp16 ;
  u_int __cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  unsigned int __cil_tmp19 ;

  {
  {
  __cil_tmp9 = skb->data;
  __cil_tmp10 = *__cil_tmp9;
  __cil_tmp11 = (int )__cil_tmp10;
  rsp = __cil_tmp11 & 2;
  tmp = l2addrsize(l2);
  __cil_tmp12 = & l2->flag;
  __cil_tmp13 = (unsigned long const volatile *)__cil_tmp12;
  tmp___2 = constant_test_bit(3U, __cil_tmp13);
  }
  if (tmp___2 != 0) {
    tmp___1 = 2U;
  } else {
    tmp___1 = 1U;
  }
  {
  i = tmp + tmp___1;
  __cil_tmp14 = & l2->flag;
  __cil_tmp15 = (unsigned long const volatile *)__cil_tmp14;
  tmp___3 = constant_test_bit(2U, __cil_tmp15);
  }
  if (tmp___3 != 0) {
    rsp = rsp == 0;
  } else {

  }
  if (rsp != 0) {
    return (76);
  } else {

  }
  {
  __cil_tmp16 = skb->len;
  if (__cil_tmp16 < i) {
    return (78);
  } else {

  }
  }
  {
  __cil_tmp17 = l2->maxlen;
  __cil_tmp18 = skb->len;
  __cil_tmp19 = __cil_tmp18 - i;
  if (__cil_tmp19 > __cil_tmp17) {
    return (79);
  } else {

  }
  }
  return (0);
}
}
static int super_error(struct layer2 *l2 , struct sk_buff *skb )
{ u_int tmp ;
  unsigned int tmp___1 ;
  int tmp___2 ;
  u_long *__cil_tmp6 ;
  unsigned long const volatile *__cil_tmp7 ;
  u_int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;

  {
  {
  tmp = l2addrsize(l2);
  __cil_tmp6 = & l2->flag;
  __cil_tmp7 = (unsigned long const volatile *)__cil_tmp6;
  tmp___2 = constant_test_bit(3U, __cil_tmp7);
  }
  if (tmp___2 != 0) {
    tmp___1 = 2U;
  } else {
    tmp___1 = 1U;
  }
  {
  __cil_tmp8 = tmp + tmp___1;
  __cil_tmp9 = skb->len;
  if (__cil_tmp9 != __cil_tmp8) {
    return (78);
  } else {

  }
  }
  return (0);
}
}
static int unnum_error(struct layer2 *l2 , struct sk_buff *skb , int wantrsp )
{ int rsp ;
  int tmp ;
  u_int tmp___0 ;
  unsigned char *__cil_tmp7 ;
  unsigned char __cil_tmp8 ;
  int __cil_tmp9 ;
  int __cil_tmp10 ;
  u_long *__cil_tmp11 ;
  unsigned long const volatile *__cil_tmp12 ;
  u_int __cil_tmp13 ;
  unsigned int __cil_tmp14 ;

  {
  {
  __cil_tmp7 = skb->data;
  __cil_tmp8 = *__cil_tmp7;
  __cil_tmp9 = (int )__cil_tmp8;
  __cil_tmp10 = __cil_tmp9 & 2;
  rsp = __cil_tmp10 >> 1;
  __cil_tmp11 = & l2->flag;
  __cil_tmp12 = (unsigned long const volatile *)__cil_tmp11;
  tmp = constant_test_bit(2U, __cil_tmp12);
  }
  if (tmp != 0) {
    rsp = rsp == 0;
  } else {

  }
  if (rsp != wantrsp) {
    return (76);
  } else {

  }
  {
  tmp___0 = l2addrsize(l2);
  }
  {
  __cil_tmp13 = tmp___0 + 1U;
  __cil_tmp14 = skb->len;
  if (__cil_tmp14 != __cil_tmp13) {
    return (78);
  } else {

  }
  }
  return (0);
}
}
static int UI_error(struct layer2 *l2 , struct sk_buff *skb )
{ int rsp ;
  int tmp ;
  u_int tmp___0 ;
  unsigned char *__cil_tmp6 ;
  unsigned char __cil_tmp7 ;
  int __cil_tmp8 ;
  u_long *__cil_tmp9 ;
  unsigned long const volatile *__cil_tmp10 ;
  u_int __cil_tmp11 ;
  u_int __cil_tmp12 ;
  u_int __cil_tmp13 ;
  unsigned int __cil_tmp14 ;

  {
  {
  __cil_tmp6 = skb->data;
  __cil_tmp7 = *__cil_tmp6;
  __cil_tmp8 = (int )__cil_tmp7;
  rsp = __cil_tmp8 & 2;
  __cil_tmp9 = & l2->flag;
  __cil_tmp10 = (unsigned long const volatile *)__cil_tmp9;
  tmp = constant_test_bit(2U, __cil_tmp10);
  }
  if (tmp != 0) {
    rsp = rsp == 0;
  } else {

  }
  if (rsp != 0) {
    return (76);
  } else {

  }
  {
  tmp___0 = l2addrsize(l2);
  }
  {
  __cil_tmp11 = l2->maxlen;
  __cil_tmp12 = __cil_tmp11 + tmp___0;
  __cil_tmp13 = __cil_tmp12 + 1U;
  __cil_tmp14 = skb->len;
  if (__cil_tmp14 > __cil_tmp13) {
    return (79);
  } else {

  }
  }
  return (0);
}
}
static int FRMR_error(struct layer2 *l2 , struct sk_buff *skb )
{ u_int headers ;
  u_int tmp ;
  u_char *datap ;
  int rsp ;
  int tmp___0 ;
  int tmp___1 ;
  unsigned long __cil_tmp9 ;
  unsigned char *__cil_tmp10 ;
  unsigned char *__cil_tmp11 ;
  unsigned char __cil_tmp12 ;
  int __cil_tmp13 ;
  u_long *__cil_tmp14 ;
  unsigned long const volatile *__cil_tmp15 ;
  u_long *__cil_tmp16 ;
  unsigned long const volatile *__cil_tmp17 ;
  u_int __cil_tmp18 ;
  unsigned int __cil_tmp19 ;
  u_int __cil_tmp20 ;
  unsigned int __cil_tmp21 ;
  struct FsmInst *__cil_tmp22 ;
  char *__cil_tmp23 ;
  u_char __cil_tmp24 ;
  int __cil_tmp25 ;
  u_char *__cil_tmp26 ;
  u_char __cil_tmp27 ;
  int __cil_tmp28 ;
  u_char *__cil_tmp29 ;
  u_char __cil_tmp30 ;
  int __cil_tmp31 ;
  u_char *__cil_tmp32 ;
  u_char __cil_tmp33 ;
  int __cil_tmp34 ;
  u_char *__cil_tmp35 ;
  u_char __cil_tmp36 ;
  int __cil_tmp37 ;
  u_int __cil_tmp38 ;
  unsigned int __cil_tmp39 ;
  u_int __cil_tmp40 ;
  unsigned int __cil_tmp41 ;
  struct FsmInst *__cil_tmp42 ;
  char *__cil_tmp43 ;
  u_char __cil_tmp44 ;
  int __cil_tmp45 ;
  u_char *__cil_tmp46 ;
  u_char __cil_tmp47 ;
  int __cil_tmp48 ;
  u_char *__cil_tmp49 ;
  u_char __cil_tmp50 ;
  int __cil_tmp51 ;

  {
  {
  tmp = l2addrsize(l2);
  headers = tmp + 1U;
  __cil_tmp9 = (unsigned long )headers;
  __cil_tmp10 = skb->data;
  datap = __cil_tmp10 + __cil_tmp9;
  __cil_tmp11 = skb->data;
  __cil_tmp12 = *__cil_tmp11;
  __cil_tmp13 = (int )__cil_tmp12;
  rsp = __cil_tmp13 & 2;
  __cil_tmp14 = & l2->flag;
  __cil_tmp15 = (unsigned long const volatile *)__cil_tmp14;
  tmp___0 = constant_test_bit(2U, __cil_tmp15);
  }
  if (tmp___0 != 0) {
    rsp = rsp == 0;
  } else {

  }
  if (rsp == 0) {
    return (76);
  } else {

  }
  {
  __cil_tmp16 = & l2->flag;
  __cil_tmp17 = (unsigned long const volatile *)__cil_tmp16;
  tmp___1 = constant_test_bit(3U, __cil_tmp17);
  }
  if (tmp___1 != 0) {
    {
    __cil_tmp18 = headers + 5U;
    __cil_tmp19 = skb->len;
    if (__cil_tmp19 < __cil_tmp18) {
      return (78);
    } else {
      {
      __cil_tmp20 = *debug___4;
      __cil_tmp21 = __cil_tmp20 & 16711680U;
      if (__cil_tmp21 != 0U) {
        {
        __cil_tmp22 = & l2->l2m;
        __cil_tmp23 = (char *)"FRMR information %2x %2x %2x %2x %2x";
        __cil_tmp24 = *datap;
        __cil_tmp25 = (int )__cil_tmp24;
        __cil_tmp26 = datap + 1UL;
        __cil_tmp27 = *__cil_tmp26;
        __cil_tmp28 = (int )__cil_tmp27;
        __cil_tmp29 = datap + 2UL;
        __cil_tmp30 = *__cil_tmp29;
        __cil_tmp31 = (int )__cil_tmp30;
        __cil_tmp32 = datap + 3UL;
        __cil_tmp33 = *__cil_tmp32;
        __cil_tmp34 = (int )__cil_tmp33;
        __cil_tmp35 = datap + 4UL;
        __cil_tmp36 = *__cil_tmp35;
        __cil_tmp37 = (int )__cil_tmp36;
        l2m_debug(__cil_tmp22, __cil_tmp23, __cil_tmp25, __cil_tmp28, __cil_tmp31,
                  __cil_tmp34, __cil_tmp37);
        }
      } else {
        {
        __cil_tmp38 = headers + 3U;
        __cil_tmp39 = skb->len;
        if (__cil_tmp39 < __cil_tmp38) {
          return (78);
        } else {
          {
          __cil_tmp40 = *debug___4;
          __cil_tmp41 = __cil_tmp40 & 16711680U;
          if (__cil_tmp41 != 0U) {
            {
            __cil_tmp42 = & l2->l2m;
            __cil_tmp43 = (char *)"FRMR information %2x %2x %2x";
            __cil_tmp44 = *datap;
            __cil_tmp45 = (int )__cil_tmp44;
            __cil_tmp46 = datap + 1UL;
            __cil_tmp47 = *__cil_tmp46;
            __cil_tmp48 = (int )__cil_tmp47;
            __cil_tmp49 = datap + 2UL;
            __cil_tmp50 = *__cil_tmp49;
            __cil_tmp51 = (int )__cil_tmp50;
            l2m_debug(__cil_tmp42, __cil_tmp43, __cil_tmp45, __cil_tmp48, __cil_tmp51);
            }
          } else {

          }
          }
        }
        }
      }
      }
    }
    }
  } else {

  }
  return (0);
}
}
static unsigned int legalnr(struct layer2 *l2 , unsigned int nr )
{ int tmp ;
  u_long *__cil_tmp4 ;
  unsigned long const volatile *__cil_tmp5 ;
  u_int __cil_tmp6 ;
  u_int __cil_tmp7 ;
  u_int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  u_int __cil_tmp10 ;
  unsigned int __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  int __cil_tmp13 ;
  u_int __cil_tmp14 ;
  u_int __cil_tmp15 ;
  u_int __cil_tmp16 ;
  unsigned int __cil_tmp17 ;
  u_int __cil_tmp18 ;
  unsigned int __cil_tmp19 ;
  unsigned int __cil_tmp20 ;
  int __cil_tmp21 ;

  {
  {
  __cil_tmp4 = & l2->flag;
  __cil_tmp5 = (unsigned long const volatile *)__cil_tmp4;
  tmp = constant_test_bit(3U, __cil_tmp5);
  }
  if (tmp != 0) {
    {
    __cil_tmp6 = l2->va;
    __cil_tmp7 = l2->vs;
    __cil_tmp8 = __cil_tmp7 - __cil_tmp6;
    __cil_tmp9 = __cil_tmp8 & 127U;
    __cil_tmp10 = l2->va;
    __cil_tmp11 = nr - __cil_tmp10;
    __cil_tmp12 = __cil_tmp11 & 127U;
    __cil_tmp13 = __cil_tmp12 <= __cil_tmp9;
    return ((unsigned int )__cil_tmp13);
    }
  } else {
    {
    __cil_tmp14 = l2->va;
    __cil_tmp15 = l2->vs;
    __cil_tmp16 = __cil_tmp15 - __cil_tmp14;
    __cil_tmp17 = __cil_tmp16 & 7U;
    __cil_tmp18 = l2->va;
    __cil_tmp19 = nr - __cil_tmp18;
    __cil_tmp20 = __cil_tmp19 & 7U;
    __cil_tmp21 = __cil_tmp20 <= __cil_tmp17;
    return ((unsigned int )__cil_tmp21);
    }
  }
}
}
static void setva(struct layer2 *l2 , unsigned int nr )
{ struct sk_buff *skb ;
  int tmp ;
  u_int __cil_tmp5 ;
  u_long *__cil_tmp6 ;
  unsigned long const volatile *__cil_tmp7 ;
  u_int __cil_tmp8 ;
  u_int __cil_tmp9 ;
  struct sk_buff *__cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  struct sk_buff *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  struct sk_buff *__cil_tmp14 ;
  struct sk_buff_head *__cil_tmp15 ;
  struct sk_buff *__cil_tmp16 ;
  u_int __cil_tmp17 ;
  u_int __cil_tmp18 ;
  u_int __cil_tmp19 ;
  u_int __cil_tmp20 ;
  struct sk_buff_head *__cil_tmp21 ;
  struct sk_buff_head *__cil_tmp22 ;
  struct sk_buff *__cil_tmp23 ;
  unsigned long __cil_tmp24 ;
  unsigned long __cil_tmp25 ;

  {
  goto ldv_38744;
  ldv_38743:
  {
  __cil_tmp5 = l2->va;
  l2->va = __cil_tmp5 + 1U;
  __cil_tmp6 = & l2->flag;
  __cil_tmp7 = (unsigned long const volatile *)__cil_tmp6;
  tmp = constant_test_bit(3U, __cil_tmp7);
  }
  if (tmp != 0) {
    __cil_tmp8 = l2->va;
    l2->va = __cil_tmp8 & 127U;
  } else {
    __cil_tmp9 = l2->va;
    l2->va = __cil_tmp9 & 7U;
  }
  {
  __cil_tmp10 = (struct sk_buff *)0;
  __cil_tmp11 = (unsigned long )__cil_tmp10;
  __cil_tmp12 = l2->windowar[l2->sow];
  __cil_tmp13 = (unsigned long )__cil_tmp12;
  if (__cil_tmp13 != __cil_tmp11) {
    {
    __cil_tmp14 = l2->windowar[l2->sow];
    skb_trim(__cil_tmp14, 0U);
    __cil_tmp15 = & l2->tmp_queue;
    __cil_tmp16 = l2->windowar[l2->sow];
    skb_queue_tail(__cil_tmp15, __cil_tmp16);
    l2->windowar[l2->sow] = (struct sk_buff *)0;
    }
  } else {

  }
  }
  __cil_tmp17 = l2->window;
  __cil_tmp18 = l2->sow;
  __cil_tmp19 = __cil_tmp18 + 1U;
  l2->sow = __cil_tmp19 % __cil_tmp17;
  ldv_38744: ;
  {
  __cil_tmp20 = l2->va;
  if (__cil_tmp20 != nr) {
    goto ldv_38743;
  } else {
    goto ldv_38745;
  }
  }
  ldv_38745:
  {
  __cil_tmp21 = & l2->tmp_queue;
  skb = skb_dequeue(__cil_tmp21);
  }
  goto ldv_38747;
  ldv_38746:
  {
  consume_skb(skb);
  __cil_tmp22 = & l2->tmp_queue;
  skb = skb_dequeue(__cil_tmp22);
  }
  ldv_38747: ;
  {
  __cil_tmp23 = (struct sk_buff *)0;
  __cil_tmp24 = (unsigned long )__cil_tmp23;
  __cil_tmp25 = (unsigned long )skb;
  if (__cil_tmp25 != __cil_tmp24) {
    goto ldv_38746;
  } else {
    goto ldv_38748;
  }
  }
  ldv_38748: ;
  return;
}
}
static void send_uframe(struct layer2 *l2 , struct sk_buff *skb , u_char cmd , u_char cr )
{ u_char tmp[4U] ;
  int i ;
  int tmp___0 ;
  size_t __len ;
  void *__ret ;
  unsigned char *tmp___2 ;
  u_char *__cil_tmp11 ;
  int __cil_tmp12 ;
  struct sk_buff *__cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  unsigned int __cil_tmp16 ;
  struct sk_buff *__cil_tmp17 ;
  unsigned long __cil_tmp18 ;
  unsigned long __cil_tmp19 ;
  unsigned int __cil_tmp20 ;
  void *__cil_tmp21 ;
  void const *__cil_tmp22 ;

  {
  {
  __cil_tmp11 = (u_char *)(& tmp);
  __cil_tmp12 = (int )cr;
  i = sethdraddr(l2, __cil_tmp11, __cil_tmp12);
  tmp___0 = i;
  i = i + 1;
  tmp[tmp___0] = cmd;
  }
  {
  __cil_tmp13 = (struct sk_buff *)0;
  __cil_tmp14 = (unsigned long )__cil_tmp13;
  __cil_tmp15 = (unsigned long )skb;
  if (__cil_tmp15 != __cil_tmp14) {
    {
    skb_trim(skb, 0U);
    }
  } else {
    {
    __cil_tmp16 = (unsigned int )i;
    skb = mI_alloc_skb(__cil_tmp16, 32U);
    }
    {
    __cil_tmp17 = (struct sk_buff *)0;
    __cil_tmp18 = (unsigned long )__cil_tmp17;
    __cil_tmp19 = (unsigned long )skb;
    if (__cil_tmp19 == __cil_tmp18) {
      {
      printk("<4>%s: can\'t alloc skbuff\n", "send_uframe");
      }
      return;
    } else {

    }
    }
  }
  }
  {
  __len = (size_t )i;
  __cil_tmp20 = (unsigned int )i;
  tmp___2 = skb_put(skb, __cil_tmp20);
  __cil_tmp21 = (void *)tmp___2;
  __cil_tmp22 = (void const *)(& tmp);
  __ret = __builtin_memcpy(__cil_tmp21, __cil_tmp22, __len);
  enqueue_super(l2, skb);
  }
  return;
}
}
__inline u_char get_PollFlag(struct layer2 *l2 , struct sk_buff *skb )
{ u_int tmp ;
  unsigned long __cil_tmp4 ;
  unsigned char *__cil_tmp5 ;
  unsigned char *__cil_tmp6 ;
  unsigned char __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;

  {
  {
  tmp = l2addrsize(l2);
  }
  {
  __cil_tmp4 = (unsigned long )tmp;
  __cil_tmp5 = skb->data;
  __cil_tmp6 = __cil_tmp5 + __cil_tmp4;
  __cil_tmp7 = *__cil_tmp6;
  __cil_tmp8 = (unsigned int )__cil_tmp7;
  __cil_tmp9 = __cil_tmp8 & 16U;
  return ((u_char )__cil_tmp9);
  }
}
}
__inline u_char get_PollFlagFree(struct layer2 *l2 , struct sk_buff *skb )
{ u_char PF ;

  {
  {
  PF = get_PollFlag(l2, skb);
  consume_skb(skb);
  }
  return (PF);
}
}
__inline void start_t200(struct layer2 *l2 , int i )
{ struct FsmTimer *__cil_tmp3 ;
  int __cil_tmp4 ;
  void *__cil_tmp5 ;
  u_long *__cil_tmp6 ;
  unsigned long volatile *__cil_tmp7 ;

  {
  {
  __cil_tmp3 = & l2->t200;
  __cil_tmp4 = l2->T200;
  __cil_tmp5 = (void *)0;
  mISDN_FsmAddTimer(__cil_tmp3, __cil_tmp4, 17, __cil_tmp5, i);
  __cil_tmp6 = & l2->flag;
  __cil_tmp7 = (unsigned long volatile *)__cil_tmp6;
  test_and_set_bit(6, __cil_tmp7);
  }
  return;
}
}
__inline void restart_t200(struct layer2 *l2 , int i )
{ struct FsmTimer *__cil_tmp3 ;
  int __cil_tmp4 ;
  void *__cil_tmp5 ;
  u_long *__cil_tmp6 ;
  unsigned long volatile *__cil_tmp7 ;

  {
  {
  __cil_tmp3 = & l2->t200;
  __cil_tmp4 = l2->T200;
  __cil_tmp5 = (void *)0;
  mISDN_FsmRestartTimer(__cil_tmp3, __cil_tmp4, 17, __cil_tmp5, i);
  __cil_tmp6 = & l2->flag;
  __cil_tmp7 = (unsigned long volatile *)__cil_tmp6;
  test_and_set_bit(6, __cil_tmp7);
  }
  return;
}
}
__inline void stop_t200(struct layer2 *l2 , int i )
{ int tmp ;
  u_long *__cil_tmp4 ;
  unsigned long volatile *__cil_tmp5 ;
  struct FsmTimer *__cil_tmp6 ;

  {
  {
  __cil_tmp4 = & l2->flag;
  __cil_tmp5 = (unsigned long volatile *)__cil_tmp4;
  tmp = test_and_clear_bit(6, __cil_tmp5);
  }
  if (tmp != 0) {
    {
    __cil_tmp6 = & l2->t200;
    mISDN_FsmDelTimer(__cil_tmp6, i);
    }
  } else {

  }
  return;
}
}
__inline void st5_dl_release_l2l3(struct layer2 *l2 )
{ int pr ;
  int tmp ;
  u_long *__cil_tmp4 ;
  unsigned long volatile *__cil_tmp5 ;
  u_int __cil_tmp6 ;
  void *__cil_tmp7 ;

  {
  {
  __cil_tmp4 = & l2->flag;
  __cil_tmp5 = (unsigned long volatile *)__cil_tmp4;
  tmp = test_and_clear_bit(4, __cil_tmp5);
  }
  if (tmp != 0) {
    pr = 20744;
  } else {
    pr = 4360;
  }
  {
  __cil_tmp6 = (u_int )pr;
  __cil_tmp7 = (void *)0;
  l2up_create(l2, __cil_tmp6, 0, __cil_tmp7);
  }
  return;
}
}
__inline void lapb_dl_release_l2l3(struct layer2 *l2 , int f )
{ u_int tmp ;
  int tmp___0 ;
  u_long *__cil_tmp5 ;
  unsigned long const volatile *__cil_tmp6 ;
  void *__cil_tmp7 ;
  u_int __cil_tmp8 ;
  void *__cil_tmp9 ;

  {
  {
  __cil_tmp5 = & l2->flag;
  __cil_tmp6 = (unsigned long const volatile *)__cil_tmp5;
  tmp___0 = constant_test_bit(0U, __cil_tmp6);
  }
  if (tmp___0 != 0) {
    {
    tmp = l2_newid(l2);
    __cil_tmp7 = (void *)0;
    l2down_create(l2, 513U, tmp, 0, __cil_tmp7);
    }
  } else {

  }
  {
  __cil_tmp8 = (u_int )f;
  __cil_tmp9 = (void *)0;
  l2up_create(l2, __cil_tmp8, 0, __cil_tmp9);
  }
  return;
}
}
static void establishlink(struct FsmInst *fi )
{ struct layer2 *l2 ;
  u_char cmd ;
  int tmp___0 ;
  void *__cil_tmp5 ;
  u_long *__cil_tmp6 ;
  unsigned long const volatile *__cil_tmp7 ;
  struct sk_buff *__cil_tmp8 ;
  int __cil_tmp9 ;
  u_char __cil_tmp10 ;
  u_char __cil_tmp11 ;
  struct FsmTimer *__cil_tmp12 ;
  u_long *__cil_tmp13 ;
  unsigned long volatile *__cil_tmp14 ;

  {
  {
  __cil_tmp5 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp5;
  clear_exception(l2);
  l2->rc = 0;
  __cil_tmp6 = & l2->flag;
  __cil_tmp7 = (unsigned long const volatile *)__cil_tmp6;
  tmp___0 = constant_test_bit(3U, __cil_tmp7);
  }
  if (tmp___0 != 0) {
    cmd = (u_char )127U;
  } else {
    cmd = (u_char )63U;
  }
  {
  __cil_tmp8 = (struct sk_buff *)0;
  __cil_tmp9 = (int )cmd;
  __cil_tmp10 = (u_char )__cil_tmp9;
  __cil_tmp11 = (u_char )0;
  send_uframe(l2, __cil_tmp8, __cil_tmp10, __cil_tmp11);
  __cil_tmp12 = & l2->t203;
  mISDN_FsmDelTimer(__cil_tmp12, 1);
  restart_t200(l2, 1);
  __cil_tmp13 = & l2->flag;
  __cil_tmp14 = (unsigned long volatile *)__cil_tmp13;
  test_and_clear_bit(4, __cil_tmp14);
  freewin(l2);
  mISDN_FsmChangeState(fi, 4);
  }
  return;
}
}
static void l2_mdl_error_ua(struct FsmInst *fi , int event , void *arg )
{ struct sk_buff *skb ;
  struct layer2 *l2 ;
  u_char tmp ;
  void *__cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  void *__cil_tmp9 ;
  void *__cil_tmp10 ;

  {
  {
  skb = (struct sk_buff *)arg;
  __cil_tmp7 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp7;
  tmp = get_PollFlagFree(l2, skb);
  }
  {
  __cil_tmp8 = (unsigned int )tmp;
  if (__cil_tmp8 != 0U) {
    {
    __cil_tmp9 = (void *)67;
    l2mgr(l2, 7940U, __cil_tmp9);
    }
  } else {
    {
    __cil_tmp10 = (void *)68;
    l2mgr(l2, 7940U, __cil_tmp10);
    }
  }
  }
  return;
}
}
static void l2_mdl_error_dm(struct FsmInst *fi , int event , void *arg )
{ struct sk_buff *skb ;
  struct layer2 *l2 ;
  u_char tmp ;
  void *__cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  void *__cil_tmp9 ;
  void *__cil_tmp10 ;
  u_long *__cil_tmp11 ;
  unsigned long volatile *__cil_tmp12 ;

  {
  {
  skb = (struct sk_buff *)arg;
  __cil_tmp7 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp7;
  tmp = get_PollFlagFree(l2, skb);
  }
  {
  __cil_tmp8 = (unsigned int )tmp;
  if (__cil_tmp8 != 0U) {
    {
    __cil_tmp9 = (void *)66;
    l2mgr(l2, 7940U, __cil_tmp9);
    }
  } else {
    {
    __cil_tmp10 = (void *)69;
    l2mgr(l2, 7940U, __cil_tmp10);
    establishlink(fi);
    __cil_tmp11 = & l2->flag;
    __cil_tmp12 = (unsigned long volatile *)__cil_tmp11;
    test_and_clear_bit(5, __cil_tmp12);
    }
  }
  }
  return;
}
}
static void l2_st8_mdl_error_dm(struct FsmInst *fi , int event , void *arg )
{ struct sk_buff *skb ;
  struct layer2 *l2 ;
  u_char tmp ;
  void *__cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  void *__cil_tmp9 ;
  void *__cil_tmp10 ;
  u_long *__cil_tmp11 ;
  unsigned long volatile *__cil_tmp12 ;

  {
  {
  skb = (struct sk_buff *)arg;
  __cil_tmp7 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp7;
  tmp = get_PollFlagFree(l2, skb);
  }
  {
  __cil_tmp8 = (unsigned int )tmp;
  if (__cil_tmp8 != 0U) {
    {
    __cil_tmp9 = (void *)66;
    l2mgr(l2, 7940U, __cil_tmp9);
    }
  } else {
    {
    __cil_tmp10 = (void *)69;
    l2mgr(l2, 7940U, __cil_tmp10);
    }
  }
  }
  {
  establishlink(fi);
  __cil_tmp11 = & l2->flag;
  __cil_tmp12 = (unsigned long volatile *)__cil_tmp11;
  test_and_clear_bit(5, __cil_tmp12);
  }
  return;
}
}
static void l2_go_st3(struct FsmInst *fi , int event , void *arg )
{ struct sk_buff *__cil_tmp4 ;

  {
  {
  __cil_tmp4 = (struct sk_buff *)arg;
  consume_skb(__cil_tmp4);
  mISDN_FsmChangeState(fi, 2);
  }
  return;
}
}
static void l2_mdl_assign(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  void *__cil_tmp5 ;
  struct sk_buff *__cil_tmp6 ;

  {
  {
  __cil_tmp5 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp5;
  mISDN_FsmChangeState(fi, 2);
  __cil_tmp6 = (struct sk_buff *)arg;
  consume_skb(__cil_tmp6);
  l2_tei(l2, 6404U, 0UL);
  }
  return;
}
}
static void l2_queue_ui_assign(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  void *__cil_tmp6 ;
  struct sk_buff_head *__cil_tmp7 ;

  {
  {
  __cil_tmp6 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp6;
  skb = (struct sk_buff *)arg;
  __cil_tmp7 = & l2->ui_queue;
  skb_queue_tail(__cil_tmp7, skb);
  mISDN_FsmChangeState(fi, 1);
  l2_tei(l2, 6404U, 0UL);
  }
  return;
}
}
static void l2_queue_ui(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  void *__cil_tmp6 ;
  struct sk_buff_head *__cil_tmp7 ;

  {
  {
  __cil_tmp6 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp6;
  skb = (struct sk_buff *)arg;
  __cil_tmp7 = & l2->ui_queue;
  skb_queue_tail(__cil_tmp7, skb);
  }
  return;
}
}
static void tx_ui(struct layer2 *l2 )
{ struct sk_buff *skb ;
  u_char header[4U] ;
  int i ;
  int tmp ;
  int tmp___0 ;
  size_t __len ;
  void *__ret ;
  unsigned char *tmp___2 ;
  u_char *__cil_tmp10 ;
  u_long *__cil_tmp11 ;
  unsigned long const volatile *__cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  void *__cil_tmp14 ;
  void const *__cil_tmp15 ;
  struct sk_buff_head *__cil_tmp16 ;
  struct sk_buff *__cil_tmp17 ;
  unsigned long __cil_tmp18 ;
  unsigned long __cil_tmp19 ;

  {
  {
  __cil_tmp10 = (u_char *)(& header);
  i = sethdraddr(l2, __cil_tmp10, 0);
  __cil_tmp11 = & l2->flag;
  __cil_tmp12 = (unsigned long const volatile *)__cil_tmp11;
  tmp = constant_test_bit(18U, __cil_tmp12);
  }
  if (tmp != 0) {
    header[1] = (u_char )255U;
  } else {

  }
  tmp___0 = i;
  i = i + 1;
  header[tmp___0] = (u_char )3U;
  goto ldv_38851;
  ldv_38850:
  {
  __len = (size_t )i;
  __cil_tmp13 = (unsigned int )i;
  tmp___2 = skb_push(skb, __cil_tmp13);
  __cil_tmp14 = (void *)tmp___2;
  __cil_tmp15 = (void const *)(& header);
  __ret = __builtin_memcpy(__cil_tmp14, __cil_tmp15, __len);
  enqueue_ui(l2, skb);
  }
  ldv_38851:
  {
  __cil_tmp16 = & l2->ui_queue;
  skb = skb_dequeue(__cil_tmp16);
  }
  {
  __cil_tmp17 = (struct sk_buff *)0;
  __cil_tmp18 = (unsigned long )__cil_tmp17;
  __cil_tmp19 = (unsigned long )skb;
  if (__cil_tmp19 != __cil_tmp18) {
    goto ldv_38850;
  } else {
    goto ldv_38852;
  }
  }
  ldv_38852: ;
  return;
}
}
static void l2_send_ui(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  void *__cil_tmp6 ;
  struct sk_buff_head *__cil_tmp7 ;

  {
  {
  __cil_tmp6 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp6;
  skb = (struct sk_buff *)arg;
  __cil_tmp7 = & l2->ui_queue;
  skb_queue_tail(__cil_tmp7, skb);
  tx_ui(l2);
  }
  return;
}
}
static void l2_got_ui(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  u_int tmp ;
  void *__cil_tmp7 ;
  struct teimgr *__cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  struct teimgr *__cil_tmp10 ;
  unsigned long __cil_tmp11 ;

  {
  {
  __cil_tmp7 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp7;
  skb = (struct sk_buff *)arg;
  tmp = l2headersize(l2, 1);
  skb_pull(skb, tmp);
  }
  {
  __cil_tmp8 = (struct teimgr *)0;
  __cil_tmp9 = (unsigned long )__cil_tmp8;
  __cil_tmp10 = l2->tm;
  __cil_tmp11 = (unsigned long )__cil_tmp10;
  if (__cil_tmp11 != __cil_tmp9) {
    {
    l2_tei(l2, 7684U, 0UL);
    }
  } else {

  }
  }
  {
  l2up(l2, 12552U, skb);
  }
  return;
}
}
static void l2_establish(struct FsmInst *fi , int event , void *arg )
{ struct sk_buff *skb ;
  struct layer2 *l2 ;
  void *__cil_tmp6 ;
  u_long *__cil_tmp7 ;
  unsigned long volatile *__cil_tmp8 ;

  {
  {
  skb = (struct sk_buff *)arg;
  __cil_tmp6 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp6;
  establishlink(fi);
  __cil_tmp7 = & l2->flag;
  __cil_tmp8 = (unsigned long volatile *)__cil_tmp7;
  test_and_set_bit(5, __cil_tmp8);
  consume_skb(skb);
  }
  return;
}
}
static void l2_discard_i_setl3(struct FsmInst *fi , int event , void *arg )
{ struct sk_buff *skb ;
  struct layer2 *l2 ;
  void *__cil_tmp6 ;
  struct sk_buff_head *__cil_tmp7 ;
  u_long *__cil_tmp8 ;
  unsigned long volatile *__cil_tmp9 ;
  u_long *__cil_tmp10 ;
  unsigned long volatile *__cil_tmp11 ;

  {
  {
  skb = (struct sk_buff *)arg;
  __cil_tmp6 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp6;
  __cil_tmp7 = & l2->i_queue;
  skb_queue_purge(__cil_tmp7);
  __cil_tmp8 = & l2->flag;
  __cil_tmp9 = (unsigned long volatile *)__cil_tmp8;
  test_and_set_bit(5, __cil_tmp9);
  __cil_tmp10 = & l2->flag;
  __cil_tmp11 = (unsigned long volatile *)__cil_tmp10;
  test_and_clear_bit(4, __cil_tmp11);
  consume_skb(skb);
  }
  return;
}
}
static void l2_l3_reestablish(struct FsmInst *fi , int event , void *arg )
{ struct sk_buff *skb ;
  struct layer2 *l2 ;
  void *__cil_tmp6 ;
  struct sk_buff_head *__cil_tmp7 ;
  u_long *__cil_tmp8 ;
  unsigned long volatile *__cil_tmp9 ;

  {
  {
  skb = (struct sk_buff *)arg;
  __cil_tmp6 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp6;
  __cil_tmp7 = & l2->i_queue;
  skb_queue_purge(__cil_tmp7);
  establishlink(fi);
  __cil_tmp8 = & l2->flag;
  __cil_tmp9 = (unsigned long volatile *)__cil_tmp8;
  test_and_set_bit(5, __cil_tmp9);
  consume_skb(skb);
  }
  return;
}
}
static void l2_release(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  void *__cil_tmp6 ;

  {
  {
  __cil_tmp6 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp6;
  skb = (struct sk_buff *)arg;
  skb_trim(skb, 0U);
  l2up(l2, 20744U, skb);
  }
  return;
}
}
static void l2_pend_rel(struct FsmInst *fi , int event , void *arg )
{ struct sk_buff *skb ;
  struct layer2 *l2 ;
  void *__cil_tmp6 ;
  u_long *__cil_tmp7 ;
  unsigned long volatile *__cil_tmp8 ;

  {
  {
  skb = (struct sk_buff *)arg;
  __cil_tmp6 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp6;
  __cil_tmp7 = & l2->flag;
  __cil_tmp8 = (unsigned long volatile *)__cil_tmp7;
  test_and_set_bit(4, __cil_tmp8);
  consume_skb(skb);
  }
  return;
}
}
static void l2_disconnect(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  void *__cil_tmp6 ;
  struct sk_buff_head *__cil_tmp7 ;
  struct sk_buff *__cil_tmp8 ;
  u_char __cil_tmp9 ;
  u_char __cil_tmp10 ;
  struct FsmTimer *__cil_tmp11 ;
  struct sk_buff *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  unsigned long __cil_tmp14 ;

  {
  {
  __cil_tmp6 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp6;
  skb = (struct sk_buff *)arg;
  __cil_tmp7 = & l2->i_queue;
  skb_queue_purge(__cil_tmp7);
  freewin(l2);
  mISDN_FsmChangeState(fi, 5);
  l2->rc = 0;
  __cil_tmp8 = (struct sk_buff *)0;
  __cil_tmp9 = (u_char )83;
  __cil_tmp10 = (u_char )0;
  send_uframe(l2, __cil_tmp8, __cil_tmp9, __cil_tmp10);
  __cil_tmp11 = & l2->t203;
  mISDN_FsmDelTimer(__cil_tmp11, 1);
  restart_t200(l2, 2);
  }
  {
  __cil_tmp12 = (struct sk_buff *)0;
  __cil_tmp13 = (unsigned long )__cil_tmp12;
  __cil_tmp14 = (unsigned long )skb;
  if (__cil_tmp14 != __cil_tmp13) {
    {
    consume_skb(skb);
    }
  } else {

  }
  }
  return;
}
}
static void l2_start_multi(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  u_char tmp ;
  void *__cil_tmp7 ;
  struct sk_buff *__cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  int __cil_tmp11 ;
  u_char __cil_tmp12 ;
  u_char __cil_tmp13 ;
  struct FsmTimer *__cil_tmp14 ;
  int __cil_tmp15 ;
  void *__cil_tmp16 ;
  struct teimgr *__cil_tmp17 ;
  unsigned long __cil_tmp18 ;
  struct teimgr *__cil_tmp19 ;
  unsigned long __cil_tmp20 ;

  {
  {
  __cil_tmp7 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp7;
  skb = (struct sk_buff *)arg;
  l2->vs = 0U;
  l2->va = 0U;
  l2->vr = 0U;
  l2->sow = 0U;
  clear_exception(l2);
  tmp = get_PollFlag(l2, skb);
  __cil_tmp8 = (struct sk_buff *)0;
  __cil_tmp9 = (unsigned int )tmp;
  __cil_tmp10 = __cil_tmp9 | 99U;
  __cil_tmp11 = (int )__cil_tmp10;
  __cil_tmp12 = (u_char )__cil_tmp11;
  __cil_tmp13 = (u_char )1;
  send_uframe(l2, __cil_tmp8, __cil_tmp12, __cil_tmp13);
  mISDN_FsmChangeState(fi, 6);
  __cil_tmp14 = & l2->t203;
  __cil_tmp15 = l2->T203;
  __cil_tmp16 = (void *)0;
  mISDN_FsmAddTimer(__cil_tmp14, __cil_tmp15, 18, __cil_tmp16, 3);
  skb_trim(skb, 0U);
  l2up(l2, 4104U, skb);
  }
  {
  __cil_tmp17 = (struct teimgr *)0;
  __cil_tmp18 = (unsigned long )__cil_tmp17;
  __cil_tmp19 = l2->tm;
  __cil_tmp20 = (unsigned long )__cil_tmp19;
  if (__cil_tmp20 != __cil_tmp18) {
    {
    l2_tei(l2, 7172U, 0UL);
    }
  } else {

  }
  }
  return;
}
}
static void l2_send_UA(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  u_char tmp ;
  void *__cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  int __cil_tmp10 ;
  u_char __cil_tmp11 ;
  u_char __cil_tmp12 ;

  {
  {
  __cil_tmp7 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp7;
  skb = (struct sk_buff *)arg;
  tmp = get_PollFlag(l2, skb);
  __cil_tmp8 = (unsigned int )tmp;
  __cil_tmp9 = __cil_tmp8 | 99U;
  __cil_tmp10 = (int )__cil_tmp9;
  __cil_tmp11 = (u_char )__cil_tmp10;
  __cil_tmp12 = (u_char )1;
  send_uframe(l2, skb, __cil_tmp11, __cil_tmp12);
  }
  return;
}
}
static void l2_send_DM(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  u_char tmp ;
  void *__cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  int __cil_tmp10 ;
  u_char __cil_tmp11 ;
  u_char __cil_tmp12 ;

  {
  {
  __cil_tmp7 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp7;
  skb = (struct sk_buff *)arg;
  tmp = get_PollFlag(l2, skb);
  __cil_tmp8 = (unsigned int )tmp;
  __cil_tmp9 = __cil_tmp8 | 15U;
  __cil_tmp10 = (int )__cil_tmp9;
  __cil_tmp11 = (u_char )__cil_tmp10;
  __cil_tmp12 = (u_char )1;
  send_uframe(l2, skb, __cil_tmp11, __cil_tmp12);
  }
  return;
}
}
static void l2_restart_multi(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  int est ;
  u_char tmp ;
  __u32 tmp___0 ;
  unsigned int tmp___1 ;
  void *__cil_tmp10 ;
  unsigned int __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  int __cil_tmp13 ;
  u_char __cil_tmp14 ;
  u_char __cil_tmp15 ;
  void *__cil_tmp16 ;
  u_int __cil_tmp17 ;
  u_int __cil_tmp18 ;
  struct sk_buff_head *__cil_tmp19 ;
  struct FsmTimer *__cil_tmp20 ;
  int __cil_tmp21 ;
  void *__cil_tmp22 ;
  void *__cil_tmp23 ;
  struct sk_buff_head *__cil_tmp24 ;
  struct sk_buff_head const *__cil_tmp25 ;
  void *__cil_tmp26 ;

  {
  {
  __cil_tmp10 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp10;
  skb = (struct sk_buff *)arg;
  est = 0;
  tmp = get_PollFlag(l2, skb);
  __cil_tmp11 = (unsigned int )tmp;
  __cil_tmp12 = __cil_tmp11 | 99U;
  __cil_tmp13 = (int )__cil_tmp12;
  __cil_tmp14 = (u_char )__cil_tmp13;
  __cil_tmp15 = (u_char )1;
  send_uframe(l2, skb, __cil_tmp14, __cil_tmp15);
  __cil_tmp16 = (void *)70;
  l2mgr(l2, 7940U, __cil_tmp16);
  }
  {
  __cil_tmp17 = l2->va;
  __cil_tmp18 = l2->vs;
  if (__cil_tmp18 != __cil_tmp17) {
    {
    __cil_tmp19 = & l2->i_queue;
    skb_queue_purge(__cil_tmp19);
    est = 1;
    }
  } else {

  }
  }
  {
  clear_exception(l2);
  l2->vs = 0U;
  l2->va = 0U;
  l2->vr = 0U;
  l2->sow = 0U;
  mISDN_FsmChangeState(fi, 6);
  stop_t200(l2, 3);
  __cil_tmp20 = & l2->t203;
  __cil_tmp21 = l2->T203;
  __cil_tmp22 = (void *)0;
  mISDN_FsmRestartTimer(__cil_tmp20, __cil_tmp21, 18, __cil_tmp22, 3);
  }
  if (est != 0) {
    {
    __cil_tmp23 = (void *)0;
    l2up_create(l2, 4104U, 0, __cil_tmp23);
    }
  } else {

  }
  {
  __cil_tmp24 = & l2->i_queue;
  __cil_tmp25 = (struct sk_buff_head const *)__cil_tmp24;
  tmp___0 = skb_queue_len(__cil_tmp25);
  }
  if (tmp___0 != 0U) {
    {
    tmp___1 = cansend(l2);
    }
    if (tmp___1 != 0U) {
      {
      __cil_tmp26 = (void *)0;
      mISDN_FsmEvent(fi, 9, __cil_tmp26);
      }
    } else {

    }
  } else {

  }
  return;
}
}
static void l2_stop_multi(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  u_char tmp ;
  void *__cil_tmp7 ;
  struct FsmTimer *__cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  int __cil_tmp11 ;
  u_char __cil_tmp12 ;
  u_char __cil_tmp13 ;
  struct sk_buff_head *__cil_tmp14 ;
  struct teimgr *__cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  struct teimgr *__cil_tmp17 ;
  unsigned long __cil_tmp18 ;

  {
  {
  __cil_tmp7 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp7;
  skb = (struct sk_buff *)arg;
  mISDN_FsmChangeState(fi, 3);
  __cil_tmp8 = & l2->t203;
  mISDN_FsmDelTimer(__cil_tmp8, 3);
  stop_t200(l2, 4);
  tmp = get_PollFlag(l2, skb);
  __cil_tmp9 = (unsigned int )tmp;
  __cil_tmp10 = __cil_tmp9 | 99U;
  __cil_tmp11 = (int )__cil_tmp10;
  __cil_tmp12 = (u_char )__cil_tmp11;
  __cil_tmp13 = (u_char )1;
  send_uframe(l2, skb, __cil_tmp12, __cil_tmp13);
  __cil_tmp14 = & l2->i_queue;
  skb_queue_purge(__cil_tmp14);
  freewin(l2);
  lapb_dl_release_l2l3(l2, 4360);
  }
  {
  __cil_tmp15 = (struct teimgr *)0;
  __cil_tmp16 = (unsigned long )__cil_tmp15;
  __cil_tmp17 = l2->tm;
  __cil_tmp18 = (unsigned long )__cil_tmp17;
  if (__cil_tmp18 != __cil_tmp16) {
    {
    l2_tei(l2, 7428U, 0UL);
    }
  } else {

  }
  }
  return;
}
}
static void l2_connected(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  int pr ;
  u_char tmp ;
  int tmp___0 ;
  int tmp___1 ;
  __u32 tmp___2 ;
  unsigned int tmp___3 ;
  void *__cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  u_long *__cil_tmp14 ;
  unsigned long volatile *__cil_tmp15 ;
  void *__cil_tmp16 ;
  u_long *__cil_tmp17 ;
  unsigned long volatile *__cil_tmp18 ;
  u_int __cil_tmp19 ;
  u_int __cil_tmp20 ;
  struct sk_buff_head *__cil_tmp21 ;
  struct FsmTimer *__cil_tmp22 ;
  int __cil_tmp23 ;
  void *__cil_tmp24 ;
  u_int __cil_tmp25 ;
  void *__cil_tmp26 ;
  struct sk_buff_head *__cil_tmp27 ;
  struct sk_buff_head const *__cil_tmp28 ;
  void *__cil_tmp29 ;
  struct teimgr *__cil_tmp30 ;
  unsigned long __cil_tmp31 ;
  struct teimgr *__cil_tmp32 ;
  unsigned long __cil_tmp33 ;

  {
  {
  __cil_tmp12 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp12;
  skb = (struct sk_buff *)arg;
  pr = -1;
  tmp = get_PollFlag(l2, skb);
  }
  {
  __cil_tmp13 = (unsigned int )tmp;
  if (__cil_tmp13 == 0U) {
    {
    l2_mdl_error_ua(fi, event, arg);
    }
    return;
  } else {

  }
  }
  {
  consume_skb(skb);
  __cil_tmp14 = & l2->flag;
  __cil_tmp15 = (unsigned long volatile *)__cil_tmp14;
  tmp___0 = test_and_clear_bit(4, __cil_tmp15);
  }
  if (tmp___0 != 0) {
    {
    __cil_tmp16 = (void *)0;
    l2_disconnect(fi, event, __cil_tmp16);
    }
  } else {

  }
  {
  __cil_tmp17 = & l2->flag;
  __cil_tmp18 = (unsigned long volatile *)__cil_tmp17;
  tmp___1 = test_and_clear_bit(5, __cil_tmp18);
  }
  if (tmp___1 != 0) {
    pr = 20488;
  } else {
    {
    __cil_tmp19 = l2->va;
    __cil_tmp20 = l2->vs;
    if (__cil_tmp20 != __cil_tmp19) {
      {
      __cil_tmp21 = & l2->i_queue;
      skb_queue_purge(__cil_tmp21);
      pr = 4104;
      }
    } else {

    }
    }
  }
  {
  stop_t200(l2, 5);
  l2->vr = 0U;
  l2->vs = 0U;
  l2->va = 0U;
  l2->sow = 0U;
  mISDN_FsmChangeState(fi, 6);
  __cil_tmp22 = & l2->t203;
  __cil_tmp23 = l2->T203;
  __cil_tmp24 = (void *)0;
  mISDN_FsmAddTimer(__cil_tmp22, __cil_tmp23, 18, __cil_tmp24, 4);
  }
  if (pr != -1) {
    {
    __cil_tmp25 = (u_int )pr;
    __cil_tmp26 = (void *)0;
    l2up_create(l2, __cil_tmp25, 0, __cil_tmp26);
    }
  } else {

  }
  {
  __cil_tmp27 = & l2->i_queue;
  __cil_tmp28 = (struct sk_buff_head const *)__cil_tmp27;
  tmp___2 = skb_queue_len(__cil_tmp28);
  }
  if (tmp___2 != 0U) {
    {
    tmp___3 = cansend(l2);
    }
    if (tmp___3 != 0U) {
      {
      __cil_tmp29 = (void *)0;
      mISDN_FsmEvent(fi, 9, __cil_tmp29);
      }
    } else {

    }
  } else {

  }
  {
  __cil_tmp30 = (struct teimgr *)0;
  __cil_tmp31 = (unsigned long )__cil_tmp30;
  __cil_tmp32 = l2->tm;
  __cil_tmp33 = (unsigned long )__cil_tmp32;
  if (__cil_tmp33 != __cil_tmp31) {
    {
    l2_tei(l2, 7172U, 0UL);
    }
  } else {

  }
  }
  return;
}
}
static void l2_released(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  u_char tmp ;
  void *__cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  struct teimgr *__cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  struct teimgr *__cil_tmp11 ;
  unsigned long __cil_tmp12 ;

  {
  {
  __cil_tmp7 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp7;
  skb = (struct sk_buff *)arg;
  tmp = get_PollFlag(l2, skb);
  }
  {
  __cil_tmp8 = (unsigned int )tmp;
  if (__cil_tmp8 == 0U) {
    {
    l2_mdl_error_ua(fi, event, arg);
    }
    return;
  } else {

  }
  }
  {
  consume_skb(skb);
  stop_t200(l2, 6);
  lapb_dl_release_l2l3(l2, 20744);
  mISDN_FsmChangeState(fi, 3);
  }
  {
  __cil_tmp9 = (struct teimgr *)0;
  __cil_tmp10 = (unsigned long )__cil_tmp9;
  __cil_tmp11 = l2->tm;
  __cil_tmp12 = (unsigned long )__cil_tmp11;
  if (__cil_tmp12 != __cil_tmp10) {
    {
    l2_tei(l2, 7428U, 0UL);
    }
  } else {

  }
  }
  return;
}
}
static void l2_reestablish(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  u_char tmp ;
  void *__cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  u_long *__cil_tmp9 ;
  unsigned long volatile *__cil_tmp10 ;

  {
  {
  __cil_tmp7 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp7;
  skb = (struct sk_buff *)arg;
  tmp = get_PollFlagFree(l2, skb);
  }
  {
  __cil_tmp8 = (unsigned int )tmp;
  if (__cil_tmp8 == 0U) {
    {
    establishlink(fi);
    __cil_tmp9 = & l2->flag;
    __cil_tmp10 = (unsigned long volatile *)__cil_tmp9;
    test_and_set_bit(5, __cil_tmp10);
    }
  } else {

  }
  }
  return;
}
}
static void l2_st5_dm_release(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  int tmp ;
  u_int tmp___0 ;
  int tmp___1 ;
  u_char tmp___2 ;
  void *__cil_tmp10 ;
  unsigned int __cil_tmp11 ;
  u_long *__cil_tmp12 ;
  unsigned long const volatile *__cil_tmp13 ;
  struct sk_buff_head *__cil_tmp14 ;
  u_long *__cil_tmp15 ;
  unsigned long const volatile *__cil_tmp16 ;
  void *__cil_tmp17 ;
  struct teimgr *__cil_tmp18 ;
  unsigned long __cil_tmp19 ;
  struct teimgr *__cil_tmp20 ;
  unsigned long __cil_tmp21 ;

  {
  {
  __cil_tmp10 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp10;
  skb = (struct sk_buff *)arg;
  tmp___2 = get_PollFlagFree(l2, skb);
  }
  {
  __cil_tmp11 = (unsigned int )tmp___2;
  if (__cil_tmp11 != 0U) {
    {
    stop_t200(l2, 7);
    __cil_tmp12 = & l2->flag;
    __cil_tmp13 = (unsigned long const volatile *)__cil_tmp12;
    tmp = constant_test_bit(5U, __cil_tmp13);
    }
    if (tmp == 0) {
      {
      __cil_tmp14 = & l2->i_queue;
      skb_queue_purge(__cil_tmp14);
      }
    } else {

    }
    {
    __cil_tmp15 = & l2->flag;
    __cil_tmp16 = (unsigned long const volatile *)__cil_tmp15;
    tmp___1 = constant_test_bit(0U, __cil_tmp16);
    }
    if (tmp___1 != 0) {
      {
      tmp___0 = l2_newid(l2);
      __cil_tmp17 = (void *)0;
      l2down_create(l2, 513U, tmp___0, 0, __cil_tmp17);
      }
    } else {

    }
    {
    st5_dl_release_l2l3(l2);
    mISDN_FsmChangeState(fi, 3);
    }
    {
    __cil_tmp18 = (struct teimgr *)0;
    __cil_tmp19 = (unsigned long )__cil_tmp18;
    __cil_tmp20 = l2->tm;
    __cil_tmp21 = (unsigned long )__cil_tmp20;
    if (__cil_tmp21 != __cil_tmp19) {
      {
      l2_tei(l2, 7428U, 0UL);
      }
    } else {

    }
    }
  } else {

  }
  }
  return;
}
}
static void l2_st6_dm_release(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  u_char tmp ;
  void *__cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  struct teimgr *__cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  struct teimgr *__cil_tmp11 ;
  unsigned long __cil_tmp12 ;

  {
  {
  __cil_tmp7 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp7;
  skb = (struct sk_buff *)arg;
  tmp = get_PollFlagFree(l2, skb);
  }
  {
  __cil_tmp8 = (unsigned int )tmp;
  if (__cil_tmp8 != 0U) {
    {
    stop_t200(l2, 8);
    lapb_dl_release_l2l3(l2, 20744);
    mISDN_FsmChangeState(fi, 3);
    }
    {
    __cil_tmp9 = (struct teimgr *)0;
    __cil_tmp10 = (unsigned long )__cil_tmp9;
    __cil_tmp11 = l2->tm;
    __cil_tmp12 = (unsigned long )__cil_tmp11;
    if (__cil_tmp12 != __cil_tmp10) {
      {
      l2_tei(l2, 7428U, 0UL);
      }
    } else {

    }
    }
  } else {

  }
  }
  return;
}
}
static void enquiry_cr(struct layer2 *l2 , u_char typ , u_char cr , u_char pf )
{ struct sk_buff *skb ;
  u_char tmp[4U] ;
  int i ;
  int tmp___0 ;
  int tmp___1 ;
  unsigned int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  int tmp___5 ;
  size_t __len ;
  void *__ret ;
  unsigned char *tmp___7 ;
  u_char *__cil_tmp17 ;
  int __cil_tmp18 ;
  u_long *__cil_tmp19 ;
  unsigned long const volatile *__cil_tmp20 ;
  unsigned int __cil_tmp21 ;
  u_int __cil_tmp22 ;
  u_char __cil_tmp23 ;
  int __cil_tmp24 ;
  int __cil_tmp25 ;
  unsigned int __cil_tmp26 ;
  unsigned int __cil_tmp27 ;
  unsigned int __cil_tmp28 ;
  int __cil_tmp29 ;
  u_int __cil_tmp30 ;
  u_char __cil_tmp31 ;
  int __cil_tmp32 ;
  int __cil_tmp33 ;
  int __cil_tmp34 ;
  unsigned int __cil_tmp35 ;
  unsigned int __cil_tmp36 ;
  unsigned int __cil_tmp37 ;
  struct sk_buff *__cil_tmp38 ;
  unsigned long __cil_tmp39 ;
  unsigned long __cil_tmp40 ;
  unsigned int __cil_tmp41 ;
  void *__cil_tmp42 ;
  void const *__cil_tmp43 ;

  {
  {
  __cil_tmp17 = (u_char *)(& tmp);
  __cil_tmp18 = (int )cr;
  i = sethdraddr(l2, __cil_tmp17, __cil_tmp18);
  __cil_tmp19 = & l2->flag;
  __cil_tmp20 = (unsigned long const volatile *)__cil_tmp19;
  tmp___5 = constant_test_bit(3U, __cil_tmp20);
  }
  if (tmp___5 != 0) {
    tmp___0 = i;
    i = i + 1;
    tmp[tmp___0] = typ;
    tmp___1 = i;
    i = i + 1;
    {
    __cil_tmp21 = (unsigned int )pf;
    if (__cil_tmp21 != 0U) {
      tmp___2 = 1U;
    } else {
      tmp___2 = 0U;
    }
    }
    __cil_tmp22 = l2->vr;
    __cil_tmp23 = (u_char )__cil_tmp22;
    __cil_tmp24 = (int )__cil_tmp23;
    __cil_tmp25 = __cil_tmp24 << 1U;
    __cil_tmp26 = (unsigned int )__cil_tmp25;
    __cil_tmp27 = __cil_tmp26 | tmp___2;
    tmp[tmp___1] = (u_char )__cil_tmp27;
  } else {
    tmp___3 = i;
    i = i + 1;
    {
    __cil_tmp28 = (unsigned int )pf;
    if (__cil_tmp28 != 0U) {
      tmp___4 = 16U;
    } else {
      tmp___4 = 0U;
    }
    }
    __cil_tmp29 = (int )typ;
    __cil_tmp30 = l2->vr;
    __cil_tmp31 = (u_char )__cil_tmp30;
    __cil_tmp32 = (int )__cil_tmp31;
    __cil_tmp33 = __cil_tmp32 << 5U;
    __cil_tmp34 = __cil_tmp33 | __cil_tmp29;
    __cil_tmp35 = (unsigned int )__cil_tmp34;
    __cil_tmp36 = __cil_tmp35 | tmp___4;
    tmp[tmp___3] = (u_char )__cil_tmp36;
  }
  {
  __cil_tmp37 = (unsigned int )i;
  skb = mI_alloc_skb(__cil_tmp37, 32U);
  }
  {
  __cil_tmp38 = (struct sk_buff *)0;
  __cil_tmp39 = (unsigned long )__cil_tmp38;
  __cil_tmp40 = (unsigned long )skb;
  if (__cil_tmp40 == __cil_tmp39) {
    {
    printk("<4>isdnl2 can\'t alloc sbbuff for enquiry_cr\n");
    }
    return;
  } else {

  }
  }
  {
  __len = (size_t )i;
  __cil_tmp41 = (unsigned int )i;
  tmp___7 = skb_put(skb, __cil_tmp41);
  __cil_tmp42 = (void *)tmp___7;
  __cil_tmp43 = (void const *)(& tmp);
  __ret = __builtin_memcpy(__cil_tmp42, __cil_tmp43, __len);
  enqueue_super(l2, skb);
  }
  return;
}
}
__inline void enquiry_response(struct layer2 *l2 )
{ int tmp ;
  u_long *__cil_tmp3 ;
  unsigned long const volatile *__cil_tmp4 ;
  u_char __cil_tmp5 ;
  u_char __cil_tmp6 ;
  u_char __cil_tmp7 ;
  u_char __cil_tmp8 ;
  u_char __cil_tmp9 ;
  u_char __cil_tmp10 ;
  u_long *__cil_tmp11 ;
  unsigned long volatile *__cil_tmp12 ;

  {
  {
  __cil_tmp3 = & l2->flag;
  __cil_tmp4 = (unsigned long const volatile *)__cil_tmp3;
  tmp = constant_test_bit(9U, __cil_tmp4);
  }
  if (tmp != 0) {
    {
    __cil_tmp5 = (u_char )5;
    __cil_tmp6 = (u_char )1;
    __cil_tmp7 = (u_char )1;
    enquiry_cr(l2, __cil_tmp5, __cil_tmp6, __cil_tmp7);
    }
  } else {
    {
    __cil_tmp8 = (u_char )1;
    __cil_tmp9 = (u_char )1;
    __cil_tmp10 = (u_char )1;
    enquiry_cr(l2, __cil_tmp8, __cil_tmp9, __cil_tmp10);
    }
  }
  {
  __cil_tmp11 = & l2->flag;
  __cil_tmp12 = (unsigned long volatile *)__cil_tmp11;
  test_and_clear_bit(7, __cil_tmp12);
  }
  return;
}
}
__inline void transmit_enquiry(struct layer2 *l2 )
{ int tmp ;
  u_long *__cil_tmp3 ;
  unsigned long const volatile *__cil_tmp4 ;
  u_char __cil_tmp5 ;
  u_char __cil_tmp6 ;
  u_char __cil_tmp7 ;
  u_char __cil_tmp8 ;
  u_char __cil_tmp9 ;
  u_char __cil_tmp10 ;
  u_long *__cil_tmp11 ;
  unsigned long volatile *__cil_tmp12 ;

  {
  {
  __cil_tmp3 = & l2->flag;
  __cil_tmp4 = (unsigned long const volatile *)__cil_tmp3;
  tmp = constant_test_bit(9U, __cil_tmp4);
  }
  if (tmp != 0) {
    {
    __cil_tmp5 = (u_char )5;
    __cil_tmp6 = (u_char )0;
    __cil_tmp7 = (u_char )1;
    enquiry_cr(l2, __cil_tmp5, __cil_tmp6, __cil_tmp7);
    }
  } else {
    {
    __cil_tmp8 = (u_char )1;
    __cil_tmp9 = (u_char )0;
    __cil_tmp10 = (u_char )1;
    enquiry_cr(l2, __cil_tmp8, __cil_tmp9, __cil_tmp10);
    }
  }
  {
  __cil_tmp11 = & l2->flag;
  __cil_tmp12 = (unsigned long volatile *)__cil_tmp11;
  test_and_clear_bit(7, __cil_tmp12);
  start_t200(l2, 9);
  }
  return;
}
}
static void nrerrorrecovery(struct FsmInst *fi )
{ struct layer2 *l2 ;
  void *__cil_tmp3 ;
  void *__cil_tmp4 ;
  u_long *__cil_tmp5 ;
  unsigned long volatile *__cil_tmp6 ;

  {
  {
  __cil_tmp3 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp3;
  __cil_tmp4 = (void *)74;
  l2mgr(l2, 7940U, __cil_tmp4);
  establishlink(fi);
  __cil_tmp5 = & l2->flag;
  __cil_tmp6 = (unsigned long volatile *)__cil_tmp5;
  test_and_clear_bit(5, __cil_tmp6);
  }
  return;
}
}
static void invoke_retransmission(struct layer2 *l2 , unsigned int nr )
{ u_int p1 ;
  int tmp ;
  u_int __cil_tmp5 ;
  u_int __cil_tmp6 ;
  u_long *__cil_tmp7 ;
  unsigned long const volatile *__cil_tmp8 ;
  u_int __cil_tmp9 ;
  u_int __cil_tmp10 ;
  u_int __cil_tmp11 ;
  u_int __cil_tmp12 ;
  u_int __cil_tmp13 ;
  u_int __cil_tmp14 ;
  u_int __cil_tmp15 ;
  u_int __cil_tmp16 ;
  u_int __cil_tmp17 ;
  u_int __cil_tmp18 ;
  u_int __cil_tmp19 ;
  struct sk_buff *__cil_tmp20 ;
  unsigned long __cil_tmp21 ;
  struct sk_buff *__cil_tmp22 ;
  unsigned long __cil_tmp23 ;
  struct sk_buff_head *__cil_tmp24 ;
  struct sk_buff *__cil_tmp25 ;
  u_int __cil_tmp26 ;
  struct FsmInst *__cil_tmp27 ;
  void *__cil_tmp28 ;

  {
  {
  __cil_tmp5 = l2->vs;
  if (__cil_tmp5 != nr) {
    goto ldv_39010;
    ldv_39009:
    {
    __cil_tmp6 = l2->vs;
    l2->vs = __cil_tmp6 - 1U;
    __cil_tmp7 = & l2->flag;
    __cil_tmp8 = (unsigned long const volatile *)__cil_tmp7;
    tmp = constant_test_bit(3U, __cil_tmp8);
    }
    if (tmp != 0) {
      __cil_tmp9 = l2->vs;
      l2->vs = __cil_tmp9 & 127U;
      __cil_tmp10 = l2->va;
      __cil_tmp11 = l2->vs;
      __cil_tmp12 = __cil_tmp11 - __cil_tmp10;
      p1 = __cil_tmp12 & 127U;
    } else {
      __cil_tmp13 = l2->vs;
      l2->vs = __cil_tmp13 & 7U;
      __cil_tmp14 = l2->va;
      __cil_tmp15 = l2->vs;
      __cil_tmp16 = __cil_tmp15 - __cil_tmp14;
      p1 = __cil_tmp16 & 7U;
    }
    __cil_tmp17 = l2->window;
    __cil_tmp18 = l2->sow;
    __cil_tmp19 = __cil_tmp18 + p1;
    p1 = __cil_tmp19 % __cil_tmp17;
    {
    __cil_tmp20 = (struct sk_buff *)0;
    __cil_tmp21 = (unsigned long )__cil_tmp20;
    __cil_tmp22 = l2->windowar[p1];
    __cil_tmp23 = (unsigned long )__cil_tmp22;
    if (__cil_tmp23 != __cil_tmp21) {
      {
      __cil_tmp24 = & l2->i_queue;
      __cil_tmp25 = l2->windowar[p1];
      skb_queue_head(__cil_tmp24, __cil_tmp25);
      }
    } else {
      {
      printk("<4>%s: windowar[%d] is NULL\n", "invoke_retransmission", p1);
      }
    }
    }
    l2->windowar[p1] = (struct sk_buff *)0;
    ldv_39010: ;
    {
    __cil_tmp26 = l2->vs;
    if (__cil_tmp26 != nr) {
      goto ldv_39009;
    } else {
      goto ldv_39011;
    }
    }
    ldv_39011:
    {
    __cil_tmp27 = & l2->l2m;
    __cil_tmp28 = (void *)0;
    mISDN_FsmEvent(__cil_tmp27, 9, __cil_tmp28);
    }
  } else {

  }
  }
  return;
}
}
static void l2_st7_got_super(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  int PollFlag ;
  int rsp ;
  int typ ;
  unsigned int nr ;
  int tmp ;
  u_int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  __u32 tmp___5 ;
  unsigned int tmp___6 ;
  void *__cil_tmp18 ;
  unsigned char *__cil_tmp19 ;
  unsigned char __cil_tmp20 ;
  int __cil_tmp21 ;
  u_long *__cil_tmp22 ;
  unsigned long const volatile *__cil_tmp23 ;
  unsigned char *__cil_tmp24 ;
  unsigned char *__cil_tmp25 ;
  u_long *__cil_tmp26 ;
  unsigned long const volatile *__cil_tmp27 ;
  unsigned char *__cil_tmp28 ;
  unsigned char *__cil_tmp29 ;
  unsigned char __cil_tmp30 ;
  int __cil_tmp31 ;
  unsigned char *__cil_tmp32 ;
  unsigned char *__cil_tmp33 ;
  unsigned char __cil_tmp34 ;
  int __cil_tmp35 ;
  int __cil_tmp36 ;
  unsigned char *__cil_tmp37 ;
  unsigned char __cil_tmp38 ;
  int __cil_tmp39 ;
  unsigned char *__cil_tmp40 ;
  unsigned char __cil_tmp41 ;
  int __cil_tmp42 ;
  int __cil_tmp43 ;
  unsigned int __cil_tmp44 ;
  void *__cil_tmp45 ;
  struct FsmTimer *__cil_tmp46 ;
  int __cil_tmp47 ;
  void *__cil_tmp48 ;
  struct FsmInst *__cil_tmp49 ;
  char *__cil_tmp50 ;
  u_int __cil_tmp51 ;
  struct FsmTimer *__cil_tmp52 ;
  int __cil_tmp53 ;
  void *__cil_tmp54 ;
  u_int __cil_tmp55 ;
  struct FsmTimer *__cil_tmp56 ;
  struct sk_buff_head *__cil_tmp57 ;
  struct sk_buff_head const *__cil_tmp58 ;
  void *__cil_tmp59 ;

  {
  {
  __cil_tmp18 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp18;
  skb = (struct sk_buff *)arg;
  typ = 1;
  __cil_tmp19 = skb->data;
  __cil_tmp20 = *__cil_tmp19;
  __cil_tmp21 = (int )__cil_tmp20;
  rsp = __cil_tmp21 & 2;
  __cil_tmp22 = & l2->flag;
  __cil_tmp23 = (unsigned long const volatile *)__cil_tmp22;
  tmp = constant_test_bit(2U, __cil_tmp23);
  }
  if (tmp != 0) {
    rsp = rsp == 0;
  } else {

  }
  {
  tmp___0 = l2addrsize(l2);
  skb_pull(skb, tmp___0);
  __cil_tmp24 = skb->data;
  tmp___1 = IsRNR(__cil_tmp24, l2);
  }
  if (tmp___1 != 0) {
    {
    set_peer_busy(l2);
    typ = 5;
    }
  } else {
    {
    clear_peer_busy(l2);
    }
  }
  {
  __cil_tmp25 = skb->data;
  tmp___2 = IsREJ(__cil_tmp25, l2);
  }
  if (tmp___2 != 0) {
    typ = 9;
  } else {

  }
  {
  __cil_tmp26 = & l2->flag;
  __cil_tmp27 = (unsigned long const volatile *)__cil_tmp26;
  tmp___3 = constant_test_bit(3U, __cil_tmp27);
  }
  if (tmp___3 != 0) {
    __cil_tmp28 = skb->data;
    __cil_tmp29 = __cil_tmp28 + 1UL;
    __cil_tmp30 = *__cil_tmp29;
    __cil_tmp31 = (int )__cil_tmp30;
    PollFlag = __cil_tmp31 & 1;
    __cil_tmp32 = skb->data;
    __cil_tmp33 = __cil_tmp32 + 1UL;
    __cil_tmp34 = *__cil_tmp33;
    __cil_tmp35 = (int )__cil_tmp34;
    __cil_tmp36 = __cil_tmp35 >> 1;
    nr = (unsigned int )__cil_tmp36;
  } else {
    __cil_tmp37 = skb->data;
    __cil_tmp38 = *__cil_tmp37;
    __cil_tmp39 = (int )__cil_tmp38;
    PollFlag = __cil_tmp39 & 16;
    __cil_tmp40 = skb->data;
    __cil_tmp41 = *__cil_tmp40;
    __cil_tmp42 = (int )__cil_tmp41;
    __cil_tmp43 = __cil_tmp42 >> 5;
    __cil_tmp44 = (unsigned int )__cil_tmp43;
    nr = __cil_tmp44 & 7U;
  }
  {
  consume_skb(skb);
  }
  if (PollFlag != 0) {
    if (rsp != 0) {
      {
      __cil_tmp45 = (void *)65;
      l2mgr(l2, 7940U, __cil_tmp45);
      }
    } else {
      {
      enquiry_response(l2);
      }
    }
  } else {

  }
  {
  tmp___6 = legalnr(l2, nr);
  }
  if (tmp___6 != 0U) {
    if (typ == 9) {
      {
      setva(l2, nr);
      invoke_retransmission(l2, nr);
      stop_t200(l2, 10);
      __cil_tmp46 = & l2->t203;
      __cil_tmp47 = l2->T203;
      __cil_tmp48 = (void *)0;
      tmp___4 = mISDN_FsmAddTimer(__cil_tmp46, __cil_tmp47, 18, __cil_tmp48, 6);
      }
      if (tmp___4 != 0) {
        {
        __cil_tmp49 = & l2->l2m;
        __cil_tmp50 = (char *)"Restart T203 ST7 REJ";
        l2m_debug(__cil_tmp49, __cil_tmp50);
        }
      } else {

      }
    } else {
      {
      __cil_tmp51 = l2->vs;
      if (__cil_tmp51 == nr) {
        if (typ == 1) {
          {
          setva(l2, nr);
          stop_t200(l2, 11);
          __cil_tmp52 = & l2->t203;
          __cil_tmp53 = l2->T203;
          __cil_tmp54 = (void *)0;
          mISDN_FsmRestartTimer(__cil_tmp52, __cil_tmp53, 18, __cil_tmp54, 7);
          }
        } else {
          goto _L___0;
        }
      } else {
        _L___0:
        {
        __cil_tmp55 = l2->va;
        if (__cil_tmp55 != nr) {
          goto _L;
        } else
        if (typ == 5) {
          _L:
          {
          setva(l2, nr);
          }
          if (typ != 1) {
            {
            __cil_tmp56 = & l2->t203;
            mISDN_FsmDelTimer(__cil_tmp56, 9);
            }
          } else {

          }
          {
          restart_t200(l2, 12);
          }
        } else {

        }
        }
      }
      }
    }
    {
    __cil_tmp57 = & l2->i_queue;
    __cil_tmp58 = (struct sk_buff_head const *)__cil_tmp57;
    tmp___5 = skb_queue_len(__cil_tmp58);
    }
    if (tmp___5 != 0U) {
      if (typ == 1) {
        {
        __cil_tmp59 = (void *)0;
        mISDN_FsmEvent(fi, 9, __cil_tmp59);
        }
      } else {

      }
    } else {

    }
  } else {
    {
    nrerrorrecovery(fi);
    }
  }
  return;
}
}
static void l2_feed_i_if_reest(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  int tmp ;
  void *__cil_tmp7 ;
  u_long *__cil_tmp8 ;
  unsigned long const volatile *__cil_tmp9 ;
  struct sk_buff_head *__cil_tmp10 ;

  {
  {
  __cil_tmp7 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp7;
  skb = (struct sk_buff *)arg;
  __cil_tmp8 = & l2->flag;
  __cil_tmp9 = (unsigned long const volatile *)__cil_tmp8;
  tmp = constant_test_bit(5U, __cil_tmp9);
  }
  if (tmp == 0) {
    {
    __cil_tmp10 = & l2->i_queue;
    skb_queue_tail(__cil_tmp10, skb);
    }
  } else {
    {
    consume_skb(skb);
    }
  }
  return;
}
}
static void l2_feed_i_pull(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  void *__cil_tmp6 ;
  struct sk_buff_head *__cil_tmp7 ;
  void *__cil_tmp8 ;

  {
  {
  __cil_tmp6 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp6;
  skb = (struct sk_buff *)arg;
  __cil_tmp7 = & l2->i_queue;
  skb_queue_tail(__cil_tmp7, skb);
  __cil_tmp8 = (void *)0;
  mISDN_FsmEvent(fi, 9, __cil_tmp8);
  }
  return;
}
}
static void l2_feed_iqueue(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  void *__cil_tmp6 ;
  struct sk_buff_head *__cil_tmp7 ;

  {
  {
  __cil_tmp6 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp6;
  skb = (struct sk_buff *)arg;
  __cil_tmp7 = & l2->i_queue;
  skb_queue_tail(__cil_tmp7, skb);
  }
  return;
}
}
static void l2_got_iframe(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  int PollFlag ;
  int i ;
  u_int ns ;
  u_int nr ;
  u_int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  u_int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  unsigned int tmp___6 ;
  __u32 tmp___7 ;
  int tmp___8 ;
  void *__cil_tmp20 ;
  u_long *__cil_tmp21 ;
  unsigned long const volatile *__cil_tmp22 ;
  unsigned long __cil_tmp23 ;
  unsigned long __cil_tmp24 ;
  unsigned char *__cil_tmp25 ;
  unsigned char *__cil_tmp26 ;
  unsigned char __cil_tmp27 ;
  int __cil_tmp28 ;
  unsigned long __cil_tmp29 ;
  unsigned char *__cil_tmp30 ;
  unsigned char *__cil_tmp31 ;
  unsigned char __cil_tmp32 ;
  int __cil_tmp33 ;
  int __cil_tmp34 ;
  unsigned long __cil_tmp35 ;
  unsigned long __cil_tmp36 ;
  unsigned char *__cil_tmp37 ;
  unsigned char *__cil_tmp38 ;
  unsigned char __cil_tmp39 ;
  int __cil_tmp40 ;
  int __cil_tmp41 ;
  u_int __cil_tmp42 ;
  unsigned long __cil_tmp43 ;
  unsigned char *__cil_tmp44 ;
  unsigned char *__cil_tmp45 ;
  unsigned char __cil_tmp46 ;
  int __cil_tmp47 ;
  unsigned long __cil_tmp48 ;
  unsigned char *__cil_tmp49 ;
  unsigned char *__cil_tmp50 ;
  unsigned char __cil_tmp51 ;
  int __cil_tmp52 ;
  int __cil_tmp53 ;
  u_int __cil_tmp54 ;
  unsigned long __cil_tmp55 ;
  unsigned char *__cil_tmp56 ;
  unsigned char *__cil_tmp57 ;
  unsigned char __cil_tmp58 ;
  int __cil_tmp59 ;
  int __cil_tmp60 ;
  u_int __cil_tmp61 ;
  u_long *__cil_tmp62 ;
  unsigned long const volatile *__cil_tmp63 ;
  u_int __cil_tmp64 ;
  u_int __cil_tmp65 ;
  u_long *__cil_tmp66 ;
  unsigned long const volatile *__cil_tmp67 ;
  u_int __cil_tmp68 ;
  u_int __cil_tmp69 ;
  u_long *__cil_tmp70 ;
  unsigned long volatile *__cil_tmp71 ;
  u_long *__cil_tmp72 ;
  unsigned long volatile *__cil_tmp73 ;
  u_long *__cil_tmp74 ;
  unsigned long volatile *__cil_tmp75 ;
  u_char __cil_tmp76 ;
  u_char __cil_tmp77 ;
  u_char __cil_tmp78 ;
  int __cil_tmp79 ;
  u_char __cil_tmp80 ;
  u_long *__cil_tmp81 ;
  unsigned long volatile *__cil_tmp82 ;
  u_long *__cil_tmp83 ;
  unsigned long const volatile *__cil_tmp84 ;
  int __cil_tmp85 ;
  u_int __cil_tmp86 ;
  struct FsmTimer *__cil_tmp87 ;
  int __cil_tmp88 ;
  void *__cil_tmp89 ;
  u_int __cil_tmp90 ;
  struct sk_buff_head *__cil_tmp91 ;
  struct sk_buff_head const *__cil_tmp92 ;
  int __cil_tmp93 ;
  void *__cil_tmp94 ;
  u_long *__cil_tmp95 ;
  unsigned long volatile *__cil_tmp96 ;
  u_char __cil_tmp97 ;
  u_char __cil_tmp98 ;
  u_char __cil_tmp99 ;

  {
  {
  __cil_tmp20 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp20;
  skb = (struct sk_buff *)arg;
  tmp = l2addrsize(l2);
  i = (int )tmp;
  __cil_tmp21 = & l2->flag;
  __cil_tmp22 = (unsigned long const volatile *)__cil_tmp21;
  tmp___0 = constant_test_bit(3U, __cil_tmp22);
  }
  if (tmp___0 != 0) {
    __cil_tmp23 = (unsigned long )i;
    __cil_tmp24 = __cil_tmp23 + 1UL;
    __cil_tmp25 = skb->data;
    __cil_tmp26 = __cil_tmp25 + __cil_tmp24;
    __cil_tmp27 = *__cil_tmp26;
    __cil_tmp28 = (int )__cil_tmp27;
    PollFlag = __cil_tmp28 & 1;
    __cil_tmp29 = (unsigned long )i;
    __cil_tmp30 = skb->data;
    __cil_tmp31 = __cil_tmp30 + __cil_tmp29;
    __cil_tmp32 = *__cil_tmp31;
    __cil_tmp33 = (int )__cil_tmp32;
    __cil_tmp34 = __cil_tmp33 >> 1;
    ns = (u_int )__cil_tmp34;
    __cil_tmp35 = (unsigned long )i;
    __cil_tmp36 = __cil_tmp35 + 1UL;
    __cil_tmp37 = skb->data;
    __cil_tmp38 = __cil_tmp37 + __cil_tmp36;
    __cil_tmp39 = *__cil_tmp38;
    __cil_tmp40 = (int )__cil_tmp39;
    __cil_tmp41 = __cil_tmp40 >> 1;
    __cil_tmp42 = (u_int )__cil_tmp41;
    nr = __cil_tmp42 & 127U;
  } else {
    __cil_tmp43 = (unsigned long )i;
    __cil_tmp44 = skb->data;
    __cil_tmp45 = __cil_tmp44 + __cil_tmp43;
    __cil_tmp46 = *__cil_tmp45;
    __cil_tmp47 = (int )__cil_tmp46;
    PollFlag = __cil_tmp47 & 16;
    __cil_tmp48 = (unsigned long )i;
    __cil_tmp49 = skb->data;
    __cil_tmp50 = __cil_tmp49 + __cil_tmp48;
    __cil_tmp51 = *__cil_tmp50;
    __cil_tmp52 = (int )__cil_tmp51;
    __cil_tmp53 = __cil_tmp52 >> 1;
    __cil_tmp54 = (u_int )__cil_tmp53;
    ns = __cil_tmp54 & 7U;
    __cil_tmp55 = (unsigned long )i;
    __cil_tmp56 = skb->data;
    __cil_tmp57 = __cil_tmp56 + __cil_tmp55;
    __cil_tmp58 = *__cil_tmp57;
    __cil_tmp59 = (int )__cil_tmp58;
    __cil_tmp60 = __cil_tmp59 >> 5;
    __cil_tmp61 = (u_int )__cil_tmp60;
    nr = __cil_tmp61 & 7U;
  }
  {
  __cil_tmp62 = & l2->flag;
  __cil_tmp63 = (unsigned long const volatile *)__cil_tmp62;
  tmp___4 = constant_test_bit(9U, __cil_tmp63);
  }
  if (tmp___4 != 0) {
    {
    consume_skb(skb);
    }
    if (PollFlag != 0) {
      {
      enquiry_response(l2);
      }
    } else {

    }
  } else {
    {
    __cil_tmp64 = l2->vr;
    if (__cil_tmp64 == ns) {
      {
      __cil_tmp65 = l2->vr;
      l2->vr = __cil_tmp65 + 1U;
      __cil_tmp66 = & l2->flag;
      __cil_tmp67 = (unsigned long const volatile *)__cil_tmp66;
      tmp___1 = constant_test_bit(3U, __cil_tmp67);
      }
      if (tmp___1 != 0) {
        __cil_tmp68 = l2->vr;
        l2->vr = __cil_tmp68 & 127U;
      } else {
        __cil_tmp69 = l2->vr;
        l2->vr = __cil_tmp69 & 7U;
      }
      {
      __cil_tmp70 = & l2->flag;
      __cil_tmp71 = (unsigned long volatile *)__cil_tmp70;
      test_and_clear_bit(8, __cil_tmp71);
      }
      if (PollFlag != 0) {
        {
        enquiry_response(l2);
        }
      } else {
        {
        __cil_tmp72 = & l2->flag;
        __cil_tmp73 = (unsigned long volatile *)__cil_tmp72;
        test_and_set_bit(7, __cil_tmp73);
        }
      }
      {
      tmp___2 = l2headersize(l2, 0);
      skb_pull(skb, tmp___2);
      l2up(l2, 12296U, skb);
      }
    } else {
      {
      consume_skb(skb);
      __cil_tmp74 = & l2->flag;
      __cil_tmp75 = (unsigned long volatile *)__cil_tmp74;
      tmp___3 = test_and_set_bit(8, __cil_tmp75);
      }
      if (tmp___3 != 0) {
        if (PollFlag != 0) {
          {
          enquiry_response(l2);
          }
        } else {
          {
          __cil_tmp76 = (u_char )9;
          __cil_tmp77 = (u_char )1;
          __cil_tmp78 = (u_char )PollFlag;
          __cil_tmp79 = (int )__cil_tmp78;
          __cil_tmp80 = (u_char )__cil_tmp79;
          enquiry_cr(l2, __cil_tmp76, __cil_tmp77, __cil_tmp80);
          __cil_tmp81 = & l2->flag;
          __cil_tmp82 = (unsigned long volatile *)__cil_tmp81;
          test_and_clear_bit(7, __cil_tmp82);
          }
        }
      } else {

      }
    }
    }
  }
  {
  tmp___6 = legalnr(l2, nr);
  }
  if (tmp___6 != 0U) {
    {
    __cil_tmp83 = & l2->flag;
    __cil_tmp84 = (unsigned long const volatile *)__cil_tmp83;
    tmp___5 = constant_test_bit(10U, __cil_tmp84);
    }
    if (tmp___5 == 0) {
      {
      __cil_tmp85 = fi->state;
      if (__cil_tmp85 == 6) {
        {
        __cil_tmp86 = l2->vs;
        if (__cil_tmp86 == nr) {
          {
          stop_t200(l2, 13);
          __cil_tmp87 = & l2->t203;
          __cil_tmp88 = l2->T203;
          __cil_tmp89 = (void *)0;
          mISDN_FsmRestartTimer(__cil_tmp87, __cil_tmp88, 18, __cil_tmp89, 7);
          }
        } else {
          {
          __cil_tmp90 = l2->va;
          if (__cil_tmp90 != nr) {
            {
            restart_t200(l2, 14);
            }
          } else {

          }
          }
        }
        }
      } else {

      }
      }
    } else {

    }
    {
    setva(l2, nr);
    }
  } else {
    {
    nrerrorrecovery(fi);
    }
    return;
  }
  {
  __cil_tmp91 = & l2->i_queue;
  __cil_tmp92 = (struct sk_buff_head const *)__cil_tmp91;
  tmp___7 = skb_queue_len(__cil_tmp92);
  }
  if (tmp___7 != 0U) {
    {
    __cil_tmp93 = fi->state;
    if (__cil_tmp93 == 6) {
      {
      __cil_tmp94 = (void *)0;
      mISDN_FsmEvent(fi, 9, __cil_tmp94);
      }
    } else {

    }
    }
  } else {

  }
  {
  __cil_tmp95 = & l2->flag;
  __cil_tmp96 = (unsigned long volatile *)__cil_tmp95;
  tmp___8 = test_and_clear_bit(7, __cil_tmp96);
  }
  if (tmp___8 != 0) {
    {
    __cil_tmp97 = (u_char )1;
    __cil_tmp98 = (u_char )1;
    __cil_tmp99 = (u_char )0;
    enquiry_cr(l2, __cil_tmp97, __cil_tmp98, __cil_tmp99);
    }
  } else {

  }
  return;
}
}
static void l2_got_tei(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  u_int info ;
  __u32 tmp ;
  void *__cil_tmp7 ;
  long __cil_tmp8 ;
  struct mISDNchannel *__cil_tmp9 ;
  signed char __cil_tmp10 ;
  u_int __cil_tmp11 ;
  signed char __cil_tmp12 ;
  u_int __cil_tmp13 ;
  void *__cil_tmp14 ;
  int __cil_tmp15 ;
  u_long *__cil_tmp16 ;
  unsigned long volatile *__cil_tmp17 ;
  struct sk_buff_head *__cil_tmp18 ;
  struct sk_buff_head const *__cil_tmp19 ;

  {
  {
  __cil_tmp7 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp7;
  __cil_tmp8 = (long )arg;
  l2->tei = (signed char )__cil_tmp8;
  __cil_tmp9 = & l2->ch;
  __cil_tmp10 = l2->sapi;
  __cil_tmp11 = (u_int )__cil_tmp10;
  __cil_tmp12 = l2->tei;
  __cil_tmp13 = (u_int )__cil_tmp12;
  set_channel_address(__cil_tmp9, __cil_tmp11, __cil_tmp13);
  info = 1U;
  __cil_tmp14 = (void *)(& info);
  l2up_create(l2, 8U, 4, __cil_tmp14);
  }
  {
  __cil_tmp15 = fi->state;
  if (__cil_tmp15 == 2) {
    {
    establishlink(fi);
    __cil_tmp16 = & l2->flag;
    __cil_tmp17 = (unsigned long volatile *)__cil_tmp16;
    test_and_set_bit(5, __cil_tmp17);
    }
  } else {
    {
    mISDN_FsmChangeState(fi, 3);
    }
  }
  }
  {
  __cil_tmp18 = & l2->ui_queue;
  __cil_tmp19 = (struct sk_buff_head const *)__cil_tmp18;
  tmp = skb_queue_len(__cil_tmp19);
  }
  if (tmp != 0U) {
    {
    tx_ui(l2);
    }
  } else {

  }
  return;
}
}
static void l2_st5_tout_200(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  u_int tmp ;
  int tmp___0 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  void *__cil_tmp11 ;
  u_long *__cil_tmp12 ;
  unsigned long const volatile *__cil_tmp13 ;
  u_long *__cil_tmp14 ;
  unsigned long const volatile *__cil_tmp15 ;
  struct FsmTimer *__cil_tmp16 ;
  int __cil_tmp17 ;
  void *__cil_tmp18 ;
  int __cil_tmp19 ;
  int __cil_tmp20 ;
  u_long *__cil_tmp21 ;
  unsigned long volatile *__cil_tmp22 ;
  struct sk_buff_head *__cil_tmp23 ;
  void *__cil_tmp24 ;
  u_long *__cil_tmp25 ;
  unsigned long const volatile *__cil_tmp26 ;
  void *__cil_tmp27 ;
  struct teimgr *__cil_tmp28 ;
  unsigned long __cil_tmp29 ;
  struct teimgr *__cil_tmp30 ;
  unsigned long __cil_tmp31 ;
  int __cil_tmp32 ;
  struct FsmTimer *__cil_tmp33 ;
  int __cil_tmp34 ;
  void *__cil_tmp35 ;
  u_long *__cil_tmp36 ;
  unsigned long const volatile *__cil_tmp37 ;
  struct sk_buff *__cil_tmp38 ;
  u_char __cil_tmp39 ;
  u_char __cil_tmp40 ;

  {
  {
  __cil_tmp11 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp11;
  __cil_tmp12 = & l2->flag;
  __cil_tmp13 = (unsigned long const volatile *)__cil_tmp12;
  tmp___4 = constant_test_bit(1U, __cil_tmp13);
  }
  if (tmp___4 != 0) {
    {
    __cil_tmp14 = & l2->flag;
    __cil_tmp15 = (unsigned long const volatile *)__cil_tmp14;
    tmp___5 = constant_test_bit(11U, __cil_tmp15);
    }
    if (tmp___5 != 0) {
      {
      __cil_tmp16 = & l2->t200;
      __cil_tmp17 = l2->T200;
      __cil_tmp18 = (void *)0;
      mISDN_FsmAddTimer(__cil_tmp16, __cil_tmp17, 17, __cil_tmp18, 9);
      }
    } else {
      goto _L;
    }
  } else {
    _L:
    {
    __cil_tmp19 = l2->N200;
    __cil_tmp20 = l2->rc;
    if (__cil_tmp20 == __cil_tmp19) {
      {
      mISDN_FsmChangeState(fi, 3);
      __cil_tmp21 = & l2->flag;
      __cil_tmp22 = (unsigned long volatile *)__cil_tmp21;
      test_and_clear_bit(6, __cil_tmp22);
      __cil_tmp23 = & l2->i_queue;
      skb_queue_purge(__cil_tmp23);
      __cil_tmp24 = (void *)71;
      l2mgr(l2, 7940U, __cil_tmp24);
      __cil_tmp25 = & l2->flag;
      __cil_tmp26 = (unsigned long const volatile *)__cil_tmp25;
      tmp___0 = constant_test_bit(0U, __cil_tmp26);
      }
      if (tmp___0 != 0) {
        {
        tmp = l2_newid(l2);
        __cil_tmp27 = (void *)0;
        l2down_create(l2, 513U, tmp, 0, __cil_tmp27);
        }
      } else {

      }
      {
      st5_dl_release_l2l3(l2);
      }
      {
      __cil_tmp28 = (struct teimgr *)0;
      __cil_tmp29 = (unsigned long )__cil_tmp28;
      __cil_tmp30 = l2->tm;
      __cil_tmp31 = (unsigned long )__cil_tmp30;
      if (__cil_tmp31 != __cil_tmp29) {
        {
        l2_tei(l2, 7428U, 0UL);
        }
      } else {

      }
      }
    } else {
      {
      __cil_tmp32 = l2->rc;
      l2->rc = __cil_tmp32 + 1;
      __cil_tmp33 = & l2->t200;
      __cil_tmp34 = l2->T200;
      __cil_tmp35 = (void *)0;
      mISDN_FsmAddTimer(__cil_tmp33, __cil_tmp34, 17, __cil_tmp35, 9);
      __cil_tmp36 = & l2->flag;
      __cil_tmp37 = (unsigned long const volatile *)__cil_tmp36;
      tmp___3 = constant_test_bit(3U, __cil_tmp37);
      }
      if (tmp___3 != 0) {
        tmp___2 = 127;
      } else {
        tmp___2 = 63;
      }
      {
      __cil_tmp38 = (struct sk_buff *)0;
      __cil_tmp39 = (u_char )tmp___2;
      __cil_tmp40 = (u_char )0;
      send_uframe(l2, __cil_tmp38, __cil_tmp39, __cil_tmp40);
      }
    }
    }
  }
  return;
}
}
static void l2_st6_tout_200(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  int tmp ;
  int tmp___0 ;
  void *__cil_tmp7 ;
  u_long *__cil_tmp8 ;
  unsigned long const volatile *__cil_tmp9 ;
  u_long *__cil_tmp10 ;
  unsigned long const volatile *__cil_tmp11 ;
  struct FsmTimer *__cil_tmp12 ;
  int __cil_tmp13 ;
  void *__cil_tmp14 ;
  int __cil_tmp15 ;
  int __cil_tmp16 ;
  u_long *__cil_tmp17 ;
  unsigned long volatile *__cil_tmp18 ;
  void *__cil_tmp19 ;
  struct teimgr *__cil_tmp20 ;
  unsigned long __cil_tmp21 ;
  struct teimgr *__cil_tmp22 ;
  unsigned long __cil_tmp23 ;
  int __cil_tmp24 ;
  struct FsmTimer *__cil_tmp25 ;
  int __cil_tmp26 ;
  void *__cil_tmp27 ;
  struct sk_buff *__cil_tmp28 ;
  u_char __cil_tmp29 ;
  u_char __cil_tmp30 ;

  {
  {
  __cil_tmp7 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp7;
  __cil_tmp8 = & l2->flag;
  __cil_tmp9 = (unsigned long const volatile *)__cil_tmp8;
  tmp = constant_test_bit(1U, __cil_tmp9);
  }
  if (tmp != 0) {
    {
    __cil_tmp10 = & l2->flag;
    __cil_tmp11 = (unsigned long const volatile *)__cil_tmp10;
    tmp___0 = constant_test_bit(11U, __cil_tmp11);
    }
    if (tmp___0 != 0) {
      {
      __cil_tmp12 = & l2->t200;
      __cil_tmp13 = l2->T200;
      __cil_tmp14 = (void *)0;
      mISDN_FsmAddTimer(__cil_tmp12, __cil_tmp13, 17, __cil_tmp14, 9);
      }
    } else {
      goto _L;
    }
  } else {
    _L:
    {
    __cil_tmp15 = l2->N200;
    __cil_tmp16 = l2->rc;
    if (__cil_tmp16 == __cil_tmp15) {
      {
      mISDN_FsmChangeState(fi, 3);
      __cil_tmp17 = & l2->flag;
      __cil_tmp18 = (unsigned long volatile *)__cil_tmp17;
      test_and_clear_bit(6, __cil_tmp18);
      __cil_tmp19 = (void *)72;
      l2mgr(l2, 7940U, __cil_tmp19);
      lapb_dl_release_l2l3(l2, 20744);
      }
      {
      __cil_tmp20 = (struct teimgr *)0;
      __cil_tmp21 = (unsigned long )__cil_tmp20;
      __cil_tmp22 = l2->tm;
      __cil_tmp23 = (unsigned long )__cil_tmp22;
      if (__cil_tmp23 != __cil_tmp21) {
        {
        l2_tei(l2, 7428U, 0UL);
        }
      } else {

      }
      }
    } else {
      {
      __cil_tmp24 = l2->rc;
      l2->rc = __cil_tmp24 + 1;
      __cil_tmp25 = & l2->t200;
      __cil_tmp26 = l2->T200;
      __cil_tmp27 = (void *)0;
      mISDN_FsmAddTimer(__cil_tmp25, __cil_tmp26, 17, __cil_tmp27, 9);
      __cil_tmp28 = (struct sk_buff *)0;
      __cil_tmp29 = (u_char )83;
      __cil_tmp30 = (u_char )0;
      send_uframe(l2, __cil_tmp28, __cil_tmp29, __cil_tmp30);
      }
    }
    }
  }
  return;
}
}
static void l2_st7_tout_200(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  int tmp ;
  int tmp___0 ;
  void *__cil_tmp7 ;
  u_long *__cil_tmp8 ;
  unsigned long const volatile *__cil_tmp9 ;
  u_long *__cil_tmp10 ;
  unsigned long const volatile *__cil_tmp11 ;
  struct FsmTimer *__cil_tmp12 ;
  int __cil_tmp13 ;
  void *__cil_tmp14 ;
  u_long *__cil_tmp15 ;
  unsigned long volatile *__cil_tmp16 ;
  int __cil_tmp17 ;

  {
  {
  __cil_tmp7 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp7;
  __cil_tmp8 = & l2->flag;
  __cil_tmp9 = (unsigned long const volatile *)__cil_tmp8;
  tmp = constant_test_bit(1U, __cil_tmp9);
  }
  if (tmp != 0) {
    {
    __cil_tmp10 = & l2->flag;
    __cil_tmp11 = (unsigned long const volatile *)__cil_tmp10;
    tmp___0 = constant_test_bit(11U, __cil_tmp11);
    }
    if (tmp___0 != 0) {
      {
      __cil_tmp12 = & l2->t200;
      __cil_tmp13 = l2->T200;
      __cil_tmp14 = (void *)0;
      mISDN_FsmAddTimer(__cil_tmp12, __cil_tmp13, 17, __cil_tmp14, 9);
      }
      return;
    } else {

    }
  } else {

  }
  {
  __cil_tmp15 = & l2->flag;
  __cil_tmp16 = (unsigned long volatile *)__cil_tmp15;
  test_and_clear_bit(6, __cil_tmp16);
  l2->rc = 0;
  mISDN_FsmChangeState(fi, 7);
  transmit_enquiry(l2);
  __cil_tmp17 = l2->rc;
  l2->rc = __cil_tmp17 + 1;
  }
  return;
}
}
static void l2_st8_tout_200(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  int tmp ;
  int tmp___0 ;
  void *__cil_tmp7 ;
  u_long *__cil_tmp8 ;
  unsigned long const volatile *__cil_tmp9 ;
  u_long *__cil_tmp10 ;
  unsigned long const volatile *__cil_tmp11 ;
  struct FsmTimer *__cil_tmp12 ;
  int __cil_tmp13 ;
  void *__cil_tmp14 ;
  u_long *__cil_tmp15 ;
  unsigned long volatile *__cil_tmp16 ;
  int __cil_tmp17 ;
  int __cil_tmp18 ;
  void *__cil_tmp19 ;
  u_long *__cil_tmp20 ;
  unsigned long volatile *__cil_tmp21 ;
  int __cil_tmp22 ;

  {
  {
  __cil_tmp7 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp7;
  __cil_tmp8 = & l2->flag;
  __cil_tmp9 = (unsigned long const volatile *)__cil_tmp8;
  tmp = constant_test_bit(1U, __cil_tmp9);
  }
  if (tmp != 0) {
    {
    __cil_tmp10 = & l2->flag;
    __cil_tmp11 = (unsigned long const volatile *)__cil_tmp10;
    tmp___0 = constant_test_bit(11U, __cil_tmp11);
    }
    if (tmp___0 != 0) {
      {
      __cil_tmp12 = & l2->t200;
      __cil_tmp13 = l2->T200;
      __cil_tmp14 = (void *)0;
      mISDN_FsmAddTimer(__cil_tmp12, __cil_tmp13, 17, __cil_tmp14, 9);
      }
      return;
    } else {

    }
  } else {

  }
  {
  __cil_tmp15 = & l2->flag;
  __cil_tmp16 = (unsigned long volatile *)__cil_tmp15;
  test_and_clear_bit(6, __cil_tmp16);
  }
  {
  __cil_tmp17 = l2->N200;
  __cil_tmp18 = l2->rc;
  if (__cil_tmp18 == __cil_tmp17) {
    {
    __cil_tmp19 = (void *)73;
    l2mgr(l2, 7940U, __cil_tmp19);
    establishlink(fi);
    __cil_tmp20 = & l2->flag;
    __cil_tmp21 = (unsigned long volatile *)__cil_tmp20;
    test_and_clear_bit(5, __cil_tmp21);
    }
  } else {
    {
    transmit_enquiry(l2);
    __cil_tmp22 = l2->rc;
    l2->rc = __cil_tmp22 + 1;
    }
  }
  }
  return;
}
}
static void l2_st7_tout_203(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  int tmp ;
  int tmp___0 ;
  void *__cil_tmp7 ;
  u_long *__cil_tmp8 ;
  unsigned long const volatile *__cil_tmp9 ;
  u_long *__cil_tmp10 ;
  unsigned long const volatile *__cil_tmp11 ;
  struct FsmTimer *__cil_tmp12 ;
  int __cil_tmp13 ;
  void *__cil_tmp14 ;

  {
  {
  __cil_tmp7 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp7;
  __cil_tmp8 = & l2->flag;
  __cil_tmp9 = (unsigned long const volatile *)__cil_tmp8;
  tmp = constant_test_bit(1U, __cil_tmp9);
  }
  if (tmp != 0) {
    {
    __cil_tmp10 = & l2->flag;
    __cil_tmp11 = (unsigned long const volatile *)__cil_tmp10;
    tmp___0 = constant_test_bit(11U, __cil_tmp11);
    }
    if (tmp___0 != 0) {
      {
      __cil_tmp12 = & l2->t203;
      __cil_tmp13 = l2->T203;
      __cil_tmp14 = (void *)0;
      mISDN_FsmAddTimer(__cil_tmp12, __cil_tmp13, 18, __cil_tmp14, 9);
      }
      return;
    } else {

    }
  } else {

  }
  {
  mISDN_FsmChangeState(fi, 7);
  transmit_enquiry(l2);
  l2->rc = 0;
  }
  return;
}
}
static void l2_pull_iqueue(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  struct sk_buff *nskb ;
  struct sk_buff *oskb ;
  u_char header[4U] ;
  u_int i ;
  u_int p1 ;
  unsigned int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  u_int tmp___2 ;
  u_int tmp___3 ;
  u_int tmp___4 ;
  int tmp___5 ;
  size_t __len ;
  void *__ret ;
  unsigned char *tmp___7 ;
  size_t __len___0 ;
  void *__ret___0 ;
  unsigned char *tmp___9 ;
  size_t __len___1 ;
  void *__ret___1 ;
  unsigned char *tmp___11 ;
  u_int tmp___12 ;
  int tmp___13 ;
  void *__cil_tmp29 ;
  struct sk_buff_head *__cil_tmp30 ;
  struct sk_buff *__cil_tmp31 ;
  unsigned long __cil_tmp32 ;
  unsigned long __cil_tmp33 ;
  u_long *__cil_tmp34 ;
  unsigned long const volatile *__cil_tmp35 ;
  u_int __cil_tmp36 ;
  u_int __cil_tmp37 ;
  u_int __cil_tmp38 ;
  u_int __cil_tmp39 ;
  u_int __cil_tmp40 ;
  u_int __cil_tmp41 ;
  u_int __cil_tmp42 ;
  u_int __cil_tmp43 ;
  u_int __cil_tmp44 ;
  struct sk_buff *__cil_tmp45 ;
  unsigned long __cil_tmp46 ;
  struct sk_buff *__cil_tmp47 ;
  unsigned long __cil_tmp48 ;
  struct sk_buff *__cil_tmp49 ;
  u_char *__cil_tmp50 ;
  u_long *__cil_tmp51 ;
  unsigned long const volatile *__cil_tmp52 ;
  u_int __cil_tmp53 ;
  u_char __cil_tmp54 ;
  int __cil_tmp55 ;
  int __cil_tmp56 ;
  u_int __cil_tmp57 ;
  u_char __cil_tmp58 ;
  int __cil_tmp59 ;
  int __cil_tmp60 ;
  u_int __cil_tmp61 ;
  u_int __cil_tmp62 ;
  u_int __cil_tmp63 ;
  u_char __cil_tmp64 ;
  int __cil_tmp65 ;
  int __cil_tmp66 ;
  u_int __cil_tmp67 ;
  u_char __cil_tmp68 ;
  int __cil_tmp69 ;
  int __cil_tmp70 ;
  int __cil_tmp71 ;
  u_int __cil_tmp72 ;
  u_int __cil_tmp73 ;
  struct sk_buff const *__cil_tmp74 ;
  void *__cil_tmp75 ;
  void const *__cil_tmp76 ;
  unsigned int __cil_tmp77 ;
  unsigned int __cil_tmp78 ;
  struct sk_buff *__cil_tmp79 ;
  unsigned long __cil_tmp80 ;
  unsigned long __cil_tmp81 ;
  void *__cil_tmp82 ;
  void const *__cil_tmp83 ;
  unsigned int __cil_tmp84 ;
  unsigned int __cil_tmp85 ;
  void *__cil_tmp86 ;
  unsigned char *__cil_tmp87 ;
  void const *__cil_tmp88 ;
  u_long *__cil_tmp89 ;
  unsigned long volatile *__cil_tmp90 ;
  u_long *__cil_tmp91 ;
  unsigned long volatile *__cil_tmp92 ;
  struct FsmTimer *__cil_tmp93 ;
  struct FsmTimer *__cil_tmp94 ;
  int __cil_tmp95 ;
  void *__cil_tmp96 ;

  {
  {
  __cil_tmp29 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp29;
  tmp = cansend(l2);
  }
  if (tmp == 0U) {
    return;
  } else {

  }
  {
  __cil_tmp30 = & l2->i_queue;
  skb = skb_dequeue(__cil_tmp30);
  }
  {
  __cil_tmp31 = (struct sk_buff *)0;
  __cil_tmp32 = (unsigned long )__cil_tmp31;
  __cil_tmp33 = (unsigned long )skb;
  if (__cil_tmp33 == __cil_tmp32) {
    return;
  } else {

  }
  }
  {
  __cil_tmp34 = & l2->flag;
  __cil_tmp35 = (unsigned long const volatile *)__cil_tmp34;
  tmp___0 = constant_test_bit(3U, __cil_tmp35);
  }
  if (tmp___0 != 0) {
    __cil_tmp36 = l2->va;
    __cil_tmp37 = l2->vs;
    __cil_tmp38 = __cil_tmp37 - __cil_tmp36;
    p1 = __cil_tmp38 & 127U;
  } else {
    __cil_tmp39 = l2->va;
    __cil_tmp40 = l2->vs;
    __cil_tmp41 = __cil_tmp40 - __cil_tmp39;
    p1 = __cil_tmp41 & 7U;
  }
  __cil_tmp42 = l2->window;
  __cil_tmp43 = l2->sow;
  __cil_tmp44 = __cil_tmp43 + p1;
  p1 = __cil_tmp44 % __cil_tmp42;
  {
  __cil_tmp45 = (struct sk_buff *)0;
  __cil_tmp46 = (unsigned long )__cil_tmp45;
  __cil_tmp47 = l2->windowar[p1];
  __cil_tmp48 = (unsigned long )__cil_tmp47;
  if (__cil_tmp48 != __cil_tmp46) {
    {
    printk("<4>isdnl2 try overwrite ack queue entry %d\n", p1);
    __cil_tmp49 = l2->windowar[p1];
    consume_skb(__cil_tmp49);
    }
  } else {

  }
  }
  {
  l2->windowar[p1] = skb;
  __cil_tmp50 = (u_char *)(& header);
  tmp___1 = sethdraddr(l2, __cil_tmp50, 0);
  i = (u_int )tmp___1;
  __cil_tmp51 = & l2->flag;
  __cil_tmp52 = (unsigned long const volatile *)__cil_tmp51;
  tmp___5 = constant_test_bit(3U, __cil_tmp52);
  }
  if (tmp___5 != 0) {
    tmp___2 = i;
    i = i + 1U;
    __cil_tmp53 = l2->vs;
    __cil_tmp54 = (u_char )__cil_tmp53;
    __cil_tmp55 = (int )__cil_tmp54;
    __cil_tmp56 = __cil_tmp55 << 1U;
    header[tmp___2] = (u_char )__cil_tmp56;
    tmp___3 = i;
    i = i + 1U;
    __cil_tmp57 = l2->vr;
    __cil_tmp58 = (u_char )__cil_tmp57;
    __cil_tmp59 = (int )__cil_tmp58;
    __cil_tmp60 = __cil_tmp59 << 1U;
    header[tmp___3] = (u_char )__cil_tmp60;
    __cil_tmp61 = l2->vs;
    __cil_tmp62 = __cil_tmp61 + 1U;
    l2->vs = __cil_tmp62 & 127U;
  } else {
    tmp___4 = i;
    i = i + 1U;
    __cil_tmp63 = l2->vs;
    __cil_tmp64 = (u_char )__cil_tmp63;
    __cil_tmp65 = (int )__cil_tmp64;
    __cil_tmp66 = __cil_tmp65 << 1U;
    __cil_tmp67 = l2->vr;
    __cil_tmp68 = (u_char )__cil_tmp67;
    __cil_tmp69 = (int )__cil_tmp68;
    __cil_tmp70 = __cil_tmp69 << 5U;
    __cil_tmp71 = __cil_tmp70 | __cil_tmp66;
    header[tmp___4] = (u_char )__cil_tmp71;
    __cil_tmp72 = l2->vs;
    __cil_tmp73 = __cil_tmp72 + 1U;
    l2->vs = __cil_tmp73 & 7U;
  }
  {
  nskb = skb_clone(skb, 32U);
  __cil_tmp74 = (struct sk_buff const *)nskb;
  p1 = skb_headroom(__cil_tmp74);
  }
  if (p1 >= i) {
    {
    __len = (size_t )i;
    tmp___7 = skb_push(nskb, i);
    __cil_tmp75 = (void *)tmp___7;
    __cil_tmp76 = (void const *)(& header);
    __ret = __builtin_memcpy(__cil_tmp75, __cil_tmp76, __len);
    }
  } else {
    {
    printk("<4>isdnl2 pull_iqueue skb header(%d/%d) too short\n", i, p1);
    oskb = nskb;
    __cil_tmp77 = oskb->len;
    __cil_tmp78 = __cil_tmp77 + i;
    nskb = mI_alloc_skb(__cil_tmp78, 32U);
    }
    {
    __cil_tmp79 = (struct sk_buff *)0;
    __cil_tmp80 = (unsigned long )__cil_tmp79;
    __cil_tmp81 = (unsigned long )nskb;
    if (__cil_tmp81 == __cil_tmp80) {
      {
      consume_skb(oskb);
      printk("<4>%s: no skb mem\n", "l2_pull_iqueue");
      }
      return;
    } else {

    }
    }
    {
    __len___0 = (size_t )i;
    tmp___9 = skb_put(nskb, i);
    __cil_tmp82 = (void *)tmp___9;
    __cil_tmp83 = (void const *)(& header);
    __ret___0 = __builtin_memcpy(__cil_tmp82, __cil_tmp83, __len___0);
    __cil_tmp84 = oskb->len;
    __len___1 = (size_t )__cil_tmp84;
    __cil_tmp85 = oskb->len;
    tmp___11 = skb_put(nskb, __cil_tmp85);
    __cil_tmp86 = (void *)tmp___11;
    __cil_tmp87 = oskb->data;
    __cil_tmp88 = (void const *)__cil_tmp87;
    __ret___1 = __builtin_memcpy(__cil_tmp86, __cil_tmp88, __len___1);
    consume_skb(oskb);
    }
  }
  {
  tmp___12 = l2_newid(l2);
  l2down(l2, 8193U, tmp___12, nskb);
  __cil_tmp89 = & l2->flag;
  __cil_tmp90 = (unsigned long volatile *)__cil_tmp89;
  test_and_clear_bit(7, __cil_tmp90);
  __cil_tmp91 = & l2->flag;
  __cil_tmp92 = (unsigned long volatile *)__cil_tmp91;
  tmp___13 = test_and_set_bit(6, __cil_tmp92);
  }
  if (tmp___13 == 0) {
    {
    __cil_tmp93 = & l2->t203;
    mISDN_FsmDelTimer(__cil_tmp93, 13);
    __cil_tmp94 = & l2->t200;
    __cil_tmp95 = l2->T200;
    __cil_tmp96 = (void *)0;
    mISDN_FsmAddTimer(__cil_tmp94, __cil_tmp95, 17, __cil_tmp96, 11);
    }
  } else {

  }
  return;
}
}
static void l2_st8_got_super(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  int PollFlag ;
  int rsp ;
  int rnr ;
  unsigned int nr ;
  int tmp ;
  u_int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  __u32 tmp___3 ;
  unsigned int tmp___4 ;
  unsigned int tmp___5 ;
  unsigned int tmp___6 ;
  void *__cil_tmp18 ;
  unsigned char *__cil_tmp19 ;
  unsigned char __cil_tmp20 ;
  int __cil_tmp21 ;
  u_long *__cil_tmp22 ;
  unsigned long const volatile *__cil_tmp23 ;
  unsigned char *__cil_tmp24 ;
  u_long *__cil_tmp25 ;
  unsigned long const volatile *__cil_tmp26 ;
  unsigned char *__cil_tmp27 ;
  unsigned char *__cil_tmp28 ;
  unsigned char __cil_tmp29 ;
  int __cil_tmp30 ;
  unsigned char *__cil_tmp31 ;
  unsigned char *__cil_tmp32 ;
  unsigned char __cil_tmp33 ;
  int __cil_tmp34 ;
  int __cil_tmp35 ;
  unsigned char *__cil_tmp36 ;
  unsigned char __cil_tmp37 ;
  int __cil_tmp38 ;
  unsigned char *__cil_tmp39 ;
  unsigned char __cil_tmp40 ;
  int __cil_tmp41 ;
  int __cil_tmp42 ;
  unsigned int __cil_tmp43 ;
  struct FsmTimer *__cil_tmp44 ;
  int __cil_tmp45 ;
  void *__cil_tmp46 ;
  struct sk_buff_head *__cil_tmp47 ;
  struct sk_buff_head const *__cil_tmp48 ;
  void *__cil_tmp49 ;

  {
  {
  __cil_tmp18 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp18;
  skb = (struct sk_buff *)arg;
  rnr = 0;
  __cil_tmp19 = skb->data;
  __cil_tmp20 = *__cil_tmp19;
  __cil_tmp21 = (int )__cil_tmp20;
  rsp = __cil_tmp21 & 2;
  __cil_tmp22 = & l2->flag;
  __cil_tmp23 = (unsigned long const volatile *)__cil_tmp22;
  tmp = constant_test_bit(2U, __cil_tmp23);
  }
  if (tmp != 0) {
    rsp = rsp == 0;
  } else {

  }
  {
  tmp___0 = l2addrsize(l2);
  skb_pull(skb, tmp___0);
  __cil_tmp24 = skb->data;
  tmp___1 = IsRNR(__cil_tmp24, l2);
  }
  if (tmp___1 != 0) {
    {
    set_peer_busy(l2);
    rnr = 1;
    }
  } else {
    {
    clear_peer_busy(l2);
    }
  }
  {
  __cil_tmp25 = & l2->flag;
  __cil_tmp26 = (unsigned long const volatile *)__cil_tmp25;
  tmp___2 = constant_test_bit(3U, __cil_tmp26);
  }
  if (tmp___2 != 0) {
    __cil_tmp27 = skb->data;
    __cil_tmp28 = __cil_tmp27 + 1UL;
    __cil_tmp29 = *__cil_tmp28;
    __cil_tmp30 = (int )__cil_tmp29;
    PollFlag = __cil_tmp30 & 1;
    __cil_tmp31 = skb->data;
    __cil_tmp32 = __cil_tmp31 + 1UL;
    __cil_tmp33 = *__cil_tmp32;
    __cil_tmp34 = (int )__cil_tmp33;
    __cil_tmp35 = __cil_tmp34 >> 1;
    nr = (unsigned int )__cil_tmp35;
  } else {
    __cil_tmp36 = skb->data;
    __cil_tmp37 = *__cil_tmp36;
    __cil_tmp38 = (int )__cil_tmp37;
    PollFlag = __cil_tmp38 & 16;
    __cil_tmp39 = skb->data;
    __cil_tmp40 = *__cil_tmp39;
    __cil_tmp41 = (int )__cil_tmp40;
    __cil_tmp42 = __cil_tmp41 >> 5;
    __cil_tmp43 = (unsigned int )__cil_tmp42;
    nr = __cil_tmp43 & 7U;
  }
  {
  consume_skb(skb);
  }
  if (rsp != 0) {
    if (PollFlag != 0) {
      {
      tmp___5 = legalnr(l2, nr);
      }
      if (tmp___5 != 0U) {
        if (rnr != 0) {
          {
          restart_t200(l2, 15);
          }
        } else {
          {
          stop_t200(l2, 16);
          __cil_tmp44 = & l2->t203;
          __cil_tmp45 = l2->T203;
          __cil_tmp46 = (void *)0;
          mISDN_FsmAddTimer(__cil_tmp44, __cil_tmp45, 18, __cil_tmp46, 5);
          setva(l2, nr);
          }
        }
        {
        invoke_retransmission(l2, nr);
        mISDN_FsmChangeState(fi, 6);
        __cil_tmp47 = & l2->i_queue;
        __cil_tmp48 = (struct sk_buff_head const *)__cil_tmp47;
        tmp___3 = skb_queue_len(__cil_tmp48);
        }
        if (tmp___3 != 0U) {
          {
          tmp___4 = cansend(l2);
          }
          if (tmp___4 != 0U) {
            {
            __cil_tmp49 = (void *)0;
            mISDN_FsmEvent(fi, 9, __cil_tmp49);
            }
          } else {

          }
        } else {

        }
      } else {
        {
        nrerrorrecovery(fi);
        }
      }
    } else {
      goto _L;
    }
  } else {
    _L:
    if (rsp == 0) {
      if (PollFlag != 0) {
        {
        enquiry_response(l2);
        }
      } else {

      }
    } else {

    }
    {
    tmp___6 = legalnr(l2, nr);
    }
    if (tmp___6 != 0U) {
      {
      setva(l2, nr);
      }
    } else {
      {
      nrerrorrecovery(fi);
      }
    }
  }
  return;
}
}
static void l2_got_FRMR(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  u_int tmp ;
  int tmp___0 ;
  void *__cil_tmp8 ;
  u_int __cil_tmp9 ;
  unsigned char *__cil_tmp10 ;
  unsigned char __cil_tmp11 ;
  int __cil_tmp12 ;
  int __cil_tmp13 ;
  void *__cil_tmp14 ;
  u_long *__cil_tmp15 ;
  unsigned long volatile *__cil_tmp16 ;
  unsigned char *__cil_tmp17 ;
  unsigned char __cil_tmp18 ;
  int __cil_tmp19 ;
  int __cil_tmp20 ;
  void *__cil_tmp21 ;
  u_long *__cil_tmp22 ;
  unsigned long volatile *__cil_tmp23 ;
  unsigned char *__cil_tmp24 ;
  int __cil_tmp25 ;
  void *__cil_tmp26 ;
  u_long *__cil_tmp27 ;
  unsigned long volatile *__cil_tmp28 ;

  {
  {
  __cil_tmp8 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp8;
  skb = (struct sk_buff *)arg;
  tmp = l2addrsize(l2);
  __cil_tmp9 = tmp + 1U;
  skb_pull(skb, __cil_tmp9);
  }
  {
  __cil_tmp10 = skb->data;
  __cil_tmp11 = *__cil_tmp10;
  __cil_tmp12 = (int )__cil_tmp11;
  __cil_tmp13 = __cil_tmp12 & 1;
  if (__cil_tmp13 == 0) {
    {
    __cil_tmp14 = (void *)75;
    l2mgr(l2, 7940U, __cil_tmp14);
    establishlink(fi);
    __cil_tmp15 = & l2->flag;
    __cil_tmp16 = (unsigned long volatile *)__cil_tmp15;
    test_and_clear_bit(5, __cil_tmp16);
    }
  } else {
    {
    __cil_tmp17 = skb->data;
    __cil_tmp18 = *__cil_tmp17;
    __cil_tmp19 = (int )__cil_tmp18;
    __cil_tmp20 = __cil_tmp19 & 3;
    if (__cil_tmp20 == 1) {
      {
      __cil_tmp21 = (void *)75;
      l2mgr(l2, 7940U, __cil_tmp21);
      establishlink(fi);
      __cil_tmp22 = & l2->flag;
      __cil_tmp23 = (unsigned long volatile *)__cil_tmp22;
      test_and_clear_bit(5, __cil_tmp23);
      }
    } else {
      {
      __cil_tmp24 = skb->data;
      tmp___0 = IsUA(__cil_tmp24);
      }
      if (tmp___0 != 0) {
        {
        __cil_tmp25 = fi->state;
        if (__cil_tmp25 == 6) {
          {
          __cil_tmp26 = (void *)75;
          l2mgr(l2, 7940U, __cil_tmp26);
          establishlink(fi);
          __cil_tmp27 = & l2->flag;
          __cil_tmp28 = (unsigned long volatile *)__cil_tmp27;
          test_and_clear_bit(5, __cil_tmp28);
          }
        } else {

        }
        }
      } else {

      }
    }
    }
  }
  }
  {
  consume_skb(skb);
  }
  return;
}
}
static void l2_st24_tei_remove(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  void *__cil_tmp5 ;
  struct sk_buff_head *__cil_tmp6 ;

  {
  {
  __cil_tmp5 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp5;
  __cil_tmp6 = & l2->ui_queue;
  skb_queue_purge(__cil_tmp6);
  l2->tei = (signed char)127;
  mISDN_FsmChangeState(fi, 0);
  }
  return;
}
}
static void l2_st3_tei_remove(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  void *__cil_tmp5 ;
  struct sk_buff_head *__cil_tmp6 ;
  void *__cil_tmp7 ;

  {
  {
  __cil_tmp5 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp5;
  __cil_tmp6 = & l2->ui_queue;
  skb_queue_purge(__cil_tmp6);
  l2->tei = (signed char)127;
  __cil_tmp7 = (void *)0;
  l2up_create(l2, 4360U, 0, __cil_tmp7);
  mISDN_FsmChangeState(fi, 0);
  }
  return;
}
}
static void l2_st5_tei_remove(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  void *__cil_tmp5 ;
  struct sk_buff_head *__cil_tmp6 ;
  struct sk_buff_head *__cil_tmp7 ;

  {
  {
  __cil_tmp5 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp5;
  __cil_tmp6 = & l2->i_queue;
  skb_queue_purge(__cil_tmp6);
  __cil_tmp7 = & l2->ui_queue;
  skb_queue_purge(__cil_tmp7);
  freewin(l2);
  l2->tei = (signed char)127;
  stop_t200(l2, 17);
  st5_dl_release_l2l3(l2);
  mISDN_FsmChangeState(fi, 0);
  }
  return;
}
}
static void l2_st6_tei_remove(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  void *__cil_tmp5 ;
  struct sk_buff_head *__cil_tmp6 ;
  void *__cil_tmp7 ;

  {
  {
  __cil_tmp5 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp5;
  __cil_tmp6 = & l2->ui_queue;
  skb_queue_purge(__cil_tmp6);
  l2->tei = (signed char)127;
  stop_t200(l2, 18);
  __cil_tmp7 = (void *)0;
  l2up_create(l2, 4360U, 0, __cil_tmp7);
  mISDN_FsmChangeState(fi, 0);
  }
  return;
}
}
static void l2_tei_remove(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  void *__cil_tmp5 ;
  struct sk_buff_head *__cil_tmp6 ;
  struct sk_buff_head *__cil_tmp7 ;
  struct FsmTimer *__cil_tmp8 ;
  void *__cil_tmp9 ;

  {
  {
  __cil_tmp5 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp5;
  __cil_tmp6 = & l2->i_queue;
  skb_queue_purge(__cil_tmp6);
  __cil_tmp7 = & l2->ui_queue;
  skb_queue_purge(__cil_tmp7);
  freewin(l2);
  l2->tei = (signed char)127;
  stop_t200(l2, 17);
  __cil_tmp8 = & l2->t203;
  mISDN_FsmDelTimer(__cil_tmp8, 19);
  __cil_tmp9 = (void *)0;
  l2up_create(l2, 4360U, 0, __cil_tmp9);
  mISDN_FsmChangeState(fi, 0);
  }
  return;
}
}
static void l2_st14_persistent_da(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  int tmp ;
  void *__cil_tmp7 ;
  struct sk_buff_head *__cil_tmp8 ;
  struct sk_buff_head *__cil_tmp9 ;
  u_long *__cil_tmp10 ;
  unsigned long volatile *__cil_tmp11 ;

  {
  {
  __cil_tmp7 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp7;
  skb = (struct sk_buff *)arg;
  __cil_tmp8 = & l2->i_queue;
  skb_queue_purge(__cil_tmp8);
  __cil_tmp9 = & l2->ui_queue;
  skb_queue_purge(__cil_tmp9);
  __cil_tmp10 = & l2->flag;
  __cil_tmp11 = (unsigned long volatile *)__cil_tmp10;
  tmp = test_and_clear_bit(13, __cil_tmp11);
  }
  if (tmp != 0) {
    {
    l2up(l2, 4360U, skb);
    }
  } else {
    {
    consume_skb(skb);
    }
  }
  return;
}
}
static void l2_st5_persistent_da(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  void *__cil_tmp6 ;
  struct sk_buff_head *__cil_tmp7 ;
  struct sk_buff_head *__cil_tmp8 ;
  struct teimgr *__cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  struct teimgr *__cil_tmp11 ;
  unsigned long __cil_tmp12 ;

  {
  {
  __cil_tmp6 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp6;
  skb = (struct sk_buff *)arg;
  __cil_tmp7 = & l2->i_queue;
  skb_queue_purge(__cil_tmp7);
  __cil_tmp8 = & l2->ui_queue;
  skb_queue_purge(__cil_tmp8);
  freewin(l2);
  stop_t200(l2, 19);
  st5_dl_release_l2l3(l2);
  mISDN_FsmChangeState(fi, 3);
  }
  {
  __cil_tmp9 = (struct teimgr *)0;
  __cil_tmp10 = (unsigned long )__cil_tmp9;
  __cil_tmp11 = l2->tm;
  __cil_tmp12 = (unsigned long )__cil_tmp11;
  if (__cil_tmp12 != __cil_tmp10) {
    {
    l2_tei(l2, 7428U, 0UL);
    }
  } else {

  }
  }
  {
  consume_skb(skb);
  }
  return;
}
}
static void l2_st6_persistent_da(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  void *__cil_tmp6 ;
  struct sk_buff_head *__cil_tmp7 ;
  struct teimgr *__cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  struct teimgr *__cil_tmp10 ;
  unsigned long __cil_tmp11 ;

  {
  {
  __cil_tmp6 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp6;
  skb = (struct sk_buff *)arg;
  __cil_tmp7 = & l2->ui_queue;
  skb_queue_purge(__cil_tmp7);
  stop_t200(l2, 20);
  l2up(l2, 20744U, skb);
  mISDN_FsmChangeState(fi, 3);
  }
  {
  __cil_tmp8 = (struct teimgr *)0;
  __cil_tmp9 = (unsigned long )__cil_tmp8;
  __cil_tmp10 = l2->tm;
  __cil_tmp11 = (unsigned long )__cil_tmp10;
  if (__cil_tmp11 != __cil_tmp9) {
    {
    l2_tei(l2, 7428U, 0UL);
    }
  } else {

  }
  }
  return;
}
}
static void l2_persistent_da(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  void *__cil_tmp6 ;
  struct sk_buff_head *__cil_tmp7 ;
  struct sk_buff_head *__cil_tmp8 ;
  struct FsmTimer *__cil_tmp9 ;
  struct teimgr *__cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  struct teimgr *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;

  {
  {
  __cil_tmp6 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp6;
  skb = (struct sk_buff *)arg;
  __cil_tmp7 = & l2->i_queue;
  skb_queue_purge(__cil_tmp7);
  __cil_tmp8 = & l2->ui_queue;
  skb_queue_purge(__cil_tmp8);
  freewin(l2);
  stop_t200(l2, 19);
  __cil_tmp9 = & l2->t203;
  mISDN_FsmDelTimer(__cil_tmp9, 19);
  l2up(l2, 4360U, skb);
  mISDN_FsmChangeState(fi, 3);
  }
  {
  __cil_tmp10 = (struct teimgr *)0;
  __cil_tmp11 = (unsigned long )__cil_tmp10;
  __cil_tmp12 = l2->tm;
  __cil_tmp13 = (unsigned long )__cil_tmp12;
  if (__cil_tmp13 != __cil_tmp11) {
    {
    l2_tei(l2, 7428U, 0UL);
    }
  } else {

  }
  }
  return;
}
}
static void l2_set_own_busy(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  int tmp ;
  void *__cil_tmp7 ;
  u_long *__cil_tmp8 ;
  unsigned long volatile *__cil_tmp9 ;
  u_char __cil_tmp10 ;
  u_char __cil_tmp11 ;
  u_char __cil_tmp12 ;
  u_long *__cil_tmp13 ;
  unsigned long volatile *__cil_tmp14 ;
  struct sk_buff *__cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  unsigned long __cil_tmp17 ;

  {
  {
  __cil_tmp7 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp7;
  skb = (struct sk_buff *)arg;
  __cil_tmp8 = & l2->flag;
  __cil_tmp9 = (unsigned long volatile *)__cil_tmp8;
  tmp = test_and_set_bit(9, __cil_tmp9);
  }
  if (tmp == 0) {
    {
    __cil_tmp10 = (u_char )5;
    __cil_tmp11 = (u_char )1;
    __cil_tmp12 = (u_char )0;
    enquiry_cr(l2, __cil_tmp10, __cil_tmp11, __cil_tmp12);
    __cil_tmp13 = & l2->flag;
    __cil_tmp14 = (unsigned long volatile *)__cil_tmp13;
    test_and_clear_bit(7, __cil_tmp14);
    }
  } else {

  }
  {
  __cil_tmp15 = (struct sk_buff *)0;
  __cil_tmp16 = (unsigned long )__cil_tmp15;
  __cil_tmp17 = (unsigned long )skb;
  if (__cil_tmp17 != __cil_tmp16) {
    {
    consume_skb(skb);
    }
  } else {

  }
  }
  return;
}
}
static void l2_clear_own_busy(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  struct sk_buff *skb ;
  int tmp ;
  void *__cil_tmp7 ;
  u_long *__cil_tmp8 ;
  unsigned long volatile *__cil_tmp9 ;
  u_char __cil_tmp10 ;
  u_char __cil_tmp11 ;
  u_char __cil_tmp12 ;
  u_long *__cil_tmp13 ;
  unsigned long volatile *__cil_tmp14 ;
  struct sk_buff *__cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  unsigned long __cil_tmp17 ;

  {
  {
  __cil_tmp7 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp7;
  skb = (struct sk_buff *)arg;
  __cil_tmp8 = & l2->flag;
  __cil_tmp9 = (unsigned long volatile *)__cil_tmp8;
  tmp = test_and_clear_bit(9, __cil_tmp9);
  }
  if (tmp == 0) {
    {
    __cil_tmp10 = (u_char )1;
    __cil_tmp11 = (u_char )1;
    __cil_tmp12 = (u_char )0;
    enquiry_cr(l2, __cil_tmp10, __cil_tmp11, __cil_tmp12);
    __cil_tmp13 = & l2->flag;
    __cil_tmp14 = (unsigned long volatile *)__cil_tmp13;
    test_and_clear_bit(7, __cil_tmp14);
    }
  } else {

  }
  {
  __cil_tmp15 = (struct sk_buff *)0;
  __cil_tmp16 = (unsigned long )__cil_tmp15;
  __cil_tmp17 = (unsigned long )skb;
  if (__cil_tmp17 != __cil_tmp16) {
    {
    consume_skb(skb);
    }
  } else {

  }
  }
  return;
}
}
static void l2_frame_error(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  void *__cil_tmp5 ;

  {
  {
  __cil_tmp5 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp5;
  l2mgr(l2, 7940U, arg);
  }
  return;
}
}
static void l2_frame_error_reest(struct FsmInst *fi , int event , void *arg )
{ struct layer2 *l2 ;
  void *__cil_tmp5 ;
  u_long *__cil_tmp6 ;
  unsigned long volatile *__cil_tmp7 ;

  {
  {
  __cil_tmp5 = fi->userdata;
  l2 = (struct layer2 *)__cil_tmp5;
  l2mgr(l2, 7940U, arg);
  establishlink(fi);
  __cil_tmp6 = & l2->flag;
  __cil_tmp7 = (unsigned long volatile *)__cil_tmp6;
  test_and_clear_bit(5, __cil_tmp7);
  }
  return;
}
}
static struct FsmNode L2FnList[88U] =
  { {0, 11, & l2_mdl_assign},
        {1, 11, & l2_go_st3},
        {3, 11, & l2_establish},
        {4, 11, & l2_discard_i_setl3},
        {6, 11, & l2_l3_reestablish},
        {7, 11, & l2_l3_reestablish},
        {3, 12, & l2_release},
        {4, 12, & l2_pend_rel},
        {6, 12, & l2_disconnect},
        {7, 12, & l2_disconnect},
        {4, 8, & l2_feed_i_if_reest},
        {6, 8, & l2_feed_i_pull},
        {7, 8, & l2_feed_iqueue},
        {0, 10, & l2_queue_ui_assign},
        {1, 10, & l2_queue_ui},
        {2, 10, & l2_queue_ui},
        {3, 10, & l2_send_ui},
        {4, 10, & l2_send_ui},
        {5, 10, & l2_send_ui},
        {6, 10, & l2_send_ui},
        {7, 10, & l2_send_ui},
        {0, 13, & l2_got_tei},
        {1, 13, & l2_got_tei},
        {2, 13, & l2_got_tei},
        {1, 15, & l2_st24_tei_remove},
        {2, 15, & l2_st3_tei_remove},
        {3, 14, & l2_st24_tei_remove},
        {4, 14, & l2_st5_tei_remove},
        {5, 14, & l2_st6_tei_remove},
        {6, 14, & l2_tei_remove},
        {7, 14, & l2_tei_remove},
        {3, 1, & l2_start_multi},
        {4, 1, & l2_send_UA},
        {5, 1, & l2_send_DM},
        {6, 1, & l2_restart_multi},
        {7, 1, & l2_restart_multi},
        {3, 2, & l2_send_DM},
        {4, 2, & l2_send_DM},
        {5, 2, & l2_send_UA},
        {6, 2, & l2_stop_multi},
        {7, 2, & l2_stop_multi},
        {3, 4, & l2_mdl_error_ua},
        {4, 4, & l2_connected},
        {5, 4, & l2_released},
        {6, 4, & l2_mdl_error_ua},
        {7, 4, & l2_mdl_error_ua},
        {3, 3, & l2_reestablish},
        {4, 3, & l2_st5_dm_release},
        {5, 3, & l2_st6_dm_release},
        {6, 3, & l2_mdl_error_dm},
        {7, 3, & l2_st8_mdl_error_dm},
        {0, 0, & l2_got_ui},
        {1, 0, & l2_got_ui},
        {2, 0, & l2_got_ui},
        {3, 0, & l2_got_ui},
        {4, 0, & l2_got_ui},
        {5, 0, & l2_got_ui},
        {6, 0, & l2_got_ui},
        {7, 0, & l2_got_ui},
        {6, 5, & l2_got_FRMR},
        {7, 5, & l2_got_FRMR},
        {6, 6, & l2_st7_got_super},
        {7, 6, & l2_st8_got_super},
        {6, 7, & l2_got_iframe},
        {7, 7, & l2_got_iframe},
        {4, 17, & l2_st5_tout_200},
        {5, 17, & l2_st6_tout_200},
        {6, 17, & l2_st7_tout_200},
        {7, 17, & l2_st8_tout_200},
        {6, 18, & l2_st7_tout_203},
        {6, 9, & l2_pull_iqueue},
        {6, 19, & l2_set_own_busy},
        {7, 19, & l2_set_own_busy},
        {6, 20, & l2_clear_own_busy},
        {7, 20, & l2_clear_own_busy},
        {3, 21, & l2_frame_error},
        {4, 21, & l2_frame_error},
        {5, 21, & l2_frame_error},
        {6, 21, & l2_frame_error_reest},
        {7, 21, & l2_frame_error_reest},
        {0, 16, & l2_st14_persistent_da},
        {1, 16, & l2_st24_tei_remove},
        {2, 16, & l2_st3_tei_remove},
        {3, 16, & l2_st14_persistent_da},
        {4, 16, & l2_st5_persistent_da},
        {5, 16, & l2_st6_persistent_da},
        {6, 16, & l2_persistent_da},
        {7, 16, & l2_persistent_da}};
static int ph_data_indication(struct layer2 *l2 , struct mISDNhead *hh , struct sk_buff *skb )
{ u_char *datap ;
  int ret ;
  int psapi ;
  int ptei ;
  u_int l ;
  int c ;
  u_char *tmp ;
  u_char *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  unsigned int __cil_tmp20 ;
  struct FsmInst *__cil_tmp21 ;
  void *__cil_tmp22 ;
  u_long *__cil_tmp23 ;
  unsigned long const volatile *__cil_tmp24 ;
  u_char __cil_tmp25 ;
  u_char __cil_tmp26 ;
  int __cil_tmp27 ;
  signed char __cil_tmp28 ;
  int __cil_tmp29 ;
  u_int __cil_tmp30 ;
  unsigned int __cil_tmp31 ;
  signed char __cil_tmp32 ;
  int __cil_tmp33 ;
  signed char __cil_tmp34 ;
  int __cil_tmp35 ;
  u_int __cil_tmp36 ;
  unsigned int __cil_tmp37 ;
  signed char __cil_tmp38 ;
  int __cil_tmp39 ;
  unsigned long __cil_tmp40 ;
  u_char __cil_tmp41 ;
  int __cil_tmp42 ;
  int __cil_tmp43 ;
  struct FsmInst *__cil_tmp44 ;
  void *__cil_tmp45 ;
  struct FsmInst *__cil_tmp46 ;
  void *__cil_tmp47 ;
  struct FsmInst *__cil_tmp48 ;
  void *__cil_tmp49 ;
  struct FsmInst *__cil_tmp50 ;
  void *__cil_tmp51 ;
  struct FsmInst *__cil_tmp52 ;
  void *__cil_tmp53 ;
  struct FsmInst *__cil_tmp54 ;
  void *__cil_tmp55 ;
  struct FsmInst *__cil_tmp56 ;
  void *__cil_tmp57 ;
  struct FsmInst *__cil_tmp58 ;
  void *__cil_tmp59 ;
  struct FsmInst *__cil_tmp60 ;
  long __cil_tmp61 ;
  void *__cil_tmp62 ;

  {
  {
  datap = skb->data;
  ret = -22;
  c = 0;
  l = l2addrsize(l2);
  }
  {
  __cil_tmp20 = skb->len;
  if (__cil_tmp20 <= l) {
    {
    __cil_tmp21 = & l2->l2m;
    __cil_tmp22 = (void *)78;
    mISDN_FsmEvent(__cil_tmp21, 21, __cil_tmp22);
    }
    return (ret);
  } else {

  }
  }
  {
  __cil_tmp23 = & l2->flag;
  __cil_tmp24 = (unsigned long const volatile *)__cil_tmp23;
  tmp___1 = constant_test_bit(1U, __cil_tmp24);
  }
  if (tmp___1 != 0) {
    tmp = datap;
    datap = datap + 1;
    __cil_tmp25 = *tmp;
    psapi = (int )__cil_tmp25;
    tmp___0 = datap;
    datap = datap + 1;
    __cil_tmp26 = *tmp___0;
    ptei = (int )__cil_tmp26;
    if (psapi & 1) {
      {
      printk("<4>l2 D-channel frame wrong EA0/EA1\n");
      }
      return (ret);
    } else {
      {
      __cil_tmp27 = ptei & 1;
      if (__cil_tmp27 == 0) {
        {
        printk("<4>l2 D-channel frame wrong EA0/EA1\n");
        }
        return (ret);
      } else {

      }
      }
    }
    psapi = psapi >> 2;
    ptei = ptei >> 1;
    {
    __cil_tmp28 = l2->sapi;
    __cil_tmp29 = (int )__cil_tmp28;
    if (__cil_tmp29 != psapi) {
      {
      __cil_tmp30 = *debug___4;
      __cil_tmp31 = __cil_tmp30 & 16711680U;
      if (__cil_tmp31 != 0U) {
        {
        __cil_tmp32 = l2->sapi;
        __cil_tmp33 = (int )__cil_tmp32;
        printk("<7>%s: sapi %d/%d mismatch\n", "ph_data_indication", psapi, __cil_tmp33);
        }
      } else {

      }
      }
      {
      consume_skb(skb);
      }
      return (0);
    } else {

    }
    }
    {
    __cil_tmp34 = l2->tei;
    __cil_tmp35 = (int )__cil_tmp34;
    if (__cil_tmp35 != ptei) {
      if (ptei != 127) {
        {
        __cil_tmp36 = *debug___4;
        __cil_tmp37 = __cil_tmp36 & 16711680U;
        if (__cil_tmp37 != 0U) {
          {
          __cil_tmp38 = l2->tei;
          __cil_tmp39 = (int )__cil_tmp38;
          printk("<7>%s: tei %d/%d mismatch\n", "ph_data_indication", ptei, __cil_tmp39);
          }
        } else {

        }
        }
        {
        consume_skb(skb);
        }
        return (0);
      } else {

      }
    } else {

    }
    }
  } else {
    __cil_tmp40 = (unsigned long )l;
    datap = datap + __cil_tmp40;
  }
  {
  __cil_tmp41 = *datap;
  __cil_tmp42 = (int )__cil_tmp41;
  __cil_tmp43 = __cil_tmp42 & 1;
  if (__cil_tmp43 == 0) {
    {
    c = iframe_error(l2, skb);
    }
    if (c == 0) {
      {
      __cil_tmp44 = & l2->l2m;
      __cil_tmp45 = (void *)skb;
      ret = mISDN_FsmEvent(__cil_tmp44, 7, __cil_tmp45);
      }
    } else {

    }
  } else {
    {
    tmp___8 = IsSFrame(datap, l2);
    }
    if (tmp___8 != 0) {
      {
      c = super_error(l2, skb);
      }
      if (c == 0) {
        {
        __cil_tmp46 = & l2->l2m;
        __cil_tmp47 = (void *)skb;
        ret = mISDN_FsmEvent(__cil_tmp46, 6, __cil_tmp47);
        }
      } else {

      }
    } else {
      {
      tmp___7 = IsUI(datap);
      }
      if (tmp___7 != 0) {
        {
        c = UI_error(l2, skb);
        }
        if (c == 0) {
          {
          __cil_tmp48 = & l2->l2m;
          __cil_tmp49 = (void *)skb;
          ret = mISDN_FsmEvent(__cil_tmp48, 0, __cil_tmp49);
          }
        } else {

        }
      } else {
        {
        tmp___6 = IsSABME(datap, l2);
        }
        if (tmp___6 != 0) {
          {
          c = unnum_error(l2, skb, 0);
          }
          if (c == 0) {
            {
            __cil_tmp50 = & l2->l2m;
            __cil_tmp51 = (void *)skb;
            ret = mISDN_FsmEvent(__cil_tmp50, 1, __cil_tmp51);
            }
          } else {

          }
        } else {
          {
          tmp___5 = IsUA(datap);
          }
          if (tmp___5 != 0) {
            {
            c = unnum_error(l2, skb, 1);
            }
            if (c == 0) {
              {
              __cil_tmp52 = & l2->l2m;
              __cil_tmp53 = (void *)skb;
              ret = mISDN_FsmEvent(__cil_tmp52, 4, __cil_tmp53);
              }
            } else {

            }
          } else {
            {
            tmp___4 = IsDISC(datap);
            }
            if (tmp___4 != 0) {
              {
              c = unnum_error(l2, skb, 0);
              }
              if (c == 0) {
                {
                __cil_tmp54 = & l2->l2m;
                __cil_tmp55 = (void *)skb;
                ret = mISDN_FsmEvent(__cil_tmp54, 2, __cil_tmp55);
                }
              } else {

              }
            } else {
              {
              tmp___3 = IsDM(datap);
              }
              if (tmp___3 != 0) {
                {
                c = unnum_error(l2, skb, 1);
                }
                if (c == 0) {
                  {
                  __cil_tmp56 = & l2->l2m;
                  __cil_tmp57 = (void *)skb;
                  ret = mISDN_FsmEvent(__cil_tmp56, 3, __cil_tmp57);
                  }
                } else {

                }
              } else {
                {
                tmp___2 = IsFRMR(datap);
                }
                if (tmp___2 != 0) {
                  {
                  c = FRMR_error(l2, skb);
                  }
                  if (c == 0) {
                    {
                    __cil_tmp58 = & l2->l2m;
                    __cil_tmp59 = (void *)skb;
                    ret = mISDN_FsmEvent(__cil_tmp58, 5, __cil_tmp59);
                    }
                  } else {

                  }
                } else {
                  c = 76;
                }
              }
            }
          }
        }
      }
    }
  }
  }
  if (c != 0) {
    {
    printk("<4>l2 D-channel frame error %c\n", c);
    __cil_tmp60 = & l2->l2m;
    __cil_tmp61 = (long )c;
    __cil_tmp62 = (void *)__cil_tmp61;
    mISDN_FsmEvent(__cil_tmp60, 21, __cil_tmp62);
    }
  } else {

  }
  return (ret);
}
}
static int l2_send(struct mISDNchannel *ch , struct sk_buff *skb )
{ struct layer2 *l2 ;
  struct mISDNchannel const *__mptr ;
  struct mISDNhead *hh ;
  int ret ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  u_int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  u_int tmp___7 ;
  int tmp___8 ;
  struct layer2 *__cil_tmp17 ;
  char (*__cil_tmp18)[48U] ;
  u_int __cil_tmp19 ;
  unsigned int __cil_tmp20 ;
  unsigned int __cil_tmp21 ;
  unsigned int __cil_tmp22 ;
  signed char __cil_tmp23 ;
  int __cil_tmp24 ;
  signed char __cil_tmp25 ;
  int __cil_tmp26 ;
  unsigned int __cil_tmp27 ;
  int __cil_tmp28 ;
  unsigned int __cil_tmp29 ;
  int __cil_tmp30 ;
  unsigned int __cil_tmp31 ;
  int __cil_tmp32 ;
  unsigned int __cil_tmp33 ;
  int __cil_tmp34 ;
  unsigned int __cil_tmp35 ;
  int __cil_tmp36 ;
  unsigned int __cil_tmp37 ;
  int __cil_tmp38 ;
  unsigned int __cil_tmp39 ;
  int __cil_tmp40 ;
  unsigned int __cil_tmp41 ;
  int __cil_tmp42 ;
  unsigned int __cil_tmp43 ;
  int __cil_tmp44 ;
  u_long *__cil_tmp45 ;
  unsigned long volatile *__cil_tmp46 ;
  void *__cil_tmp47 ;
  u_long *__cil_tmp48 ;
  unsigned long volatile *__cil_tmp49 ;
  struct FsmInst *__cil_tmp50 ;
  void *__cil_tmp51 ;
  u_long *__cil_tmp52 ;
  unsigned long volatile *__cil_tmp53 ;
  void *__cil_tmp54 ;
  struct FsmInst *__cil_tmp55 ;
  void *__cil_tmp56 ;
  struct mISDNchannel *__cil_tmp57 ;
  unsigned long __cil_tmp58 ;
  struct mISDNchannel *__cil_tmp59 ;
  unsigned long __cil_tmp60 ;
  struct mISDNchannel *__cil_tmp61 ;
  send_func_t *__cil_tmp62 ;
  struct mISDNchannel *__cil_tmp63 ;
  struct FsmInst *__cil_tmp64 ;
  void *__cil_tmp65 ;
  struct FsmInst *__cil_tmp66 ;
  void *__cil_tmp67 ;
  u_long *__cil_tmp68 ;
  unsigned long const volatile *__cil_tmp69 ;
  u_long *__cil_tmp70 ;
  unsigned long volatile *__cil_tmp71 ;
  u_long *__cil_tmp72 ;
  unsigned long const volatile *__cil_tmp73 ;
  u_long *__cil_tmp74 ;
  unsigned long const volatile *__cil_tmp75 ;
  struct FsmInst *__cil_tmp76 ;
  void *__cil_tmp77 ;
  u_long *__cil_tmp78 ;
  unsigned long const volatile *__cil_tmp79 ;
  struct FsmInst *__cil_tmp80 ;
  void *__cil_tmp81 ;
  u_long *__cil_tmp82 ;
  unsigned long const volatile *__cil_tmp83 ;
  u_long *__cil_tmp84 ;
  unsigned long volatile *__cil_tmp85 ;
  u_long *__cil_tmp86 ;
  unsigned long const volatile *__cil_tmp87 ;
  u_long *__cil_tmp88 ;
  unsigned long volatile *__cil_tmp89 ;
  u_long *__cil_tmp90 ;
  unsigned long const volatile *__cil_tmp91 ;
  void *__cil_tmp92 ;
  struct FsmInst *__cil_tmp93 ;
  void *__cil_tmp94 ;
  u_int __cil_tmp95 ;
  unsigned int __cil_tmp96 ;
  struct FsmInst *__cil_tmp97 ;
  char *__cil_tmp98 ;
  unsigned int __cil_tmp99 ;

  {
  __mptr = (struct mISDNchannel const *)ch;
  __cil_tmp17 = (struct layer2 *)__mptr;
  l2 = __cil_tmp17 + 1152921504606846960UL;
  __cil_tmp18 = & skb->cb;
  hh = (struct mISDNhead *)__cil_tmp18;
  ret = -22;
  {
  __cil_tmp19 = *debug___4;
  __cil_tmp20 = __cil_tmp19 & 524288U;
  if (__cil_tmp20 != 0U) {
    {
    __cil_tmp21 = hh->prim;
    __cil_tmp22 = hh->id;
    __cil_tmp23 = l2->sapi;
    __cil_tmp24 = (int )__cil_tmp23;
    __cil_tmp25 = l2->tei;
    __cil_tmp26 = (int )__cil_tmp25;
    printk("<7>%s: prim(%x) id(%x) sapi(%d) tei(%d)\n", "l2_send", __cil_tmp21, __cil_tmp22,
           __cil_tmp24, __cil_tmp26);
    }
  } else {

  }
  }
  {
  __cil_tmp27 = hh->prim;
  __cil_tmp28 = (int )__cil_tmp27;
  if (__cil_tmp28 == 8194) {
    goto case_8194;
  } else {
    {
    __cil_tmp29 = hh->prim;
    __cil_tmp30 = (int )__cil_tmp29;
    if (__cil_tmp30 == 24578) {
      goto case_24578;
    } else {
      {
      __cil_tmp31 = hh->prim;
      __cil_tmp32 = (int )__cil_tmp31;
      if (__cil_tmp32 == 258) {
        goto case_258;
      } else {
        {
        __cil_tmp33 = hh->prim;
        __cil_tmp34 = (int )__cil_tmp33;
        if (__cil_tmp34 == 514) {
          goto case_514;
        } else {
          {
          __cil_tmp35 = hh->prim;
          __cil_tmp36 = (int )__cil_tmp35;
          if (__cil_tmp36 == 1794) {
            goto case_1794;
          } else {
            {
            __cil_tmp37 = hh->prim;
            __cil_tmp38 = (int )__cil_tmp37;
            if (__cil_tmp38 == 12292) {
              goto case_12292;
            } else {
              {
              __cil_tmp39 = hh->prim;
              __cil_tmp40 = (int )__cil_tmp39;
              if (__cil_tmp40 == 12548) {
                goto case_12548;
              } else {
                {
                __cil_tmp41 = hh->prim;
                __cil_tmp42 = (int )__cil_tmp41;
                if (__cil_tmp42 == 4100) {
                  goto case_4100;
                } else {
                  {
                  __cil_tmp43 = hh->prim;
                  __cil_tmp44 = (int )__cil_tmp43;
                  if (__cil_tmp44 == 4356) {
                    goto case_4356;
                  } else {
                    goto switch_default;
                    if (0) {
                      case_8194:
                      {
                      ret = ph_data_indication(l2, hh, skb);
                      }
                      goto ldv_39240;
                      case_24578:
                      {
                      ret = ph_data_confirm(l2, hh, skb);
                      }
                      goto ldv_39240;
                      case_258:
                      {
                      __cil_tmp45 = & l2->flag;
                      __cil_tmp46 = (unsigned long volatile *)__cil_tmp45;
                      test_and_set_bit(12, __cil_tmp46);
                      __cil_tmp47 = (void *)0;
                      l2up_create(l2, 1282U, 0, __cil_tmp47);
                      __cil_tmp48 = & l2->flag;
                      __cil_tmp49 = (unsigned long volatile *)__cil_tmp48;
                      tmp = test_and_clear_bit(13, __cil_tmp49);
                      }
                      if (tmp != 0) {
                        {
                        __cil_tmp50 = & l2->l2m;
                        __cil_tmp51 = (void *)skb;
                        ret = mISDN_FsmEvent(__cil_tmp50, 11, __cil_tmp51);
                        }
                      } else {

                      }
                      goto ldv_39240;
                      case_514:
                      {
                      __cil_tmp52 = & l2->flag;
                      __cil_tmp53 = (unsigned long volatile *)__cil_tmp52;
                      test_and_clear_bit(12, __cil_tmp53);
                      __cil_tmp54 = (void *)0;
                      l2up_create(l2, 1538U, 0, __cil_tmp54);
                      __cil_tmp55 = & l2->l2m;
                      __cil_tmp56 = (void *)skb;
                      ret = mISDN_FsmEvent(__cil_tmp55, 16, __cil_tmp56);
                      }
                      goto ldv_39240;
                      case_1794: ;
                      {
                      __cil_tmp57 = (struct mISDNchannel *)0;
                      __cil_tmp58 = (unsigned long )__cil_tmp57;
                      __cil_tmp59 = l2->up;
                      __cil_tmp60 = (unsigned long )__cil_tmp59;
                      if (__cil_tmp60 == __cil_tmp58) {
                        goto ldv_39240;
                      } else {

                      }
                      }
                      {
                      __cil_tmp61 = l2->up;
                      __cil_tmp62 = __cil_tmp61->send;
                      __cil_tmp63 = l2->up;
                      ret = (*__cil_tmp62)(__cil_tmp63, skb);
                      }
                      goto ldv_39240;
                      case_12292:
                      {
                      __cil_tmp64 = & l2->l2m;
                      __cil_tmp65 = (void *)skb;
                      ret = mISDN_FsmEvent(__cil_tmp64, 8, __cil_tmp65);
                      }
                      goto ldv_39240;
                      case_12548:
                      {
                      __cil_tmp66 = & l2->l2m;
                      __cil_tmp67 = (void *)skb;
                      ret = mISDN_FsmEvent(__cil_tmp66, 10, __cil_tmp67);
                      }
                      goto ldv_39240;
                      case_4100:
                      {
                      __cil_tmp68 = & l2->flag;
                      __cil_tmp69 = (unsigned long const volatile *)__cil_tmp68;
                      tmp___0 = constant_test_bit(0U, __cil_tmp69);
                      }
                      if (tmp___0 != 0) {
                        {
                        __cil_tmp70 = & l2->flag;
                        __cil_tmp71 = (unsigned long volatile *)__cil_tmp70;
                        test_and_set_bit(2, __cil_tmp71);
                        }
                      } else {

                      }
                      {
                      __cil_tmp72 = & l2->flag;
                      __cil_tmp73 = (unsigned long const volatile *)__cil_tmp72;
                      tmp___6 = constant_test_bit(12U, __cil_tmp73);
                      }
                      if (tmp___6 != 0) {
                        {
                        __cil_tmp74 = & l2->flag;
                        __cil_tmp75 = (unsigned long const volatile *)__cil_tmp74;
                        tmp___4 = constant_test_bit(1U, __cil_tmp75);
                        }
                        if (tmp___4 != 0) {
                          {
                          __cil_tmp76 = & l2->l2m;
                          __cil_tmp77 = (void *)skb;
                          ret = mISDN_FsmEvent(__cil_tmp76, 11, __cil_tmp77);
                          }
                        } else {
                          {
                          __cil_tmp78 = & l2->flag;
                          __cil_tmp79 = (unsigned long const volatile *)__cil_tmp78;
                          tmp___5 = constant_test_bit(2U, __cil_tmp79);
                          }
                          if (tmp___5 != 0) {
                            {
                            __cil_tmp80 = & l2->l2m;
                            __cil_tmp81 = (void *)skb;
                            ret = mISDN_FsmEvent(__cil_tmp80, 11, __cil_tmp81);
                            }
                          } else {
                            {
                            __cil_tmp82 = & l2->flag;
                            __cil_tmp83 = (unsigned long const volatile *)__cil_tmp82;
                            tmp___1 = constant_test_bit(1U, __cil_tmp83);
                            }
                            if (tmp___1 != 0) {
                              {
                              __cil_tmp84 = & l2->flag;
                              __cil_tmp85 = (unsigned long volatile *)__cil_tmp84;
                              test_and_set_bit(13, __cil_tmp85);
                              }
                            } else {
                              {
                              __cil_tmp86 = & l2->flag;
                              __cil_tmp87 = (unsigned long const volatile *)__cil_tmp86;
                              tmp___2 = constant_test_bit(2U, __cil_tmp87);
                              }
                              if (tmp___2 != 0) {
                                {
                                __cil_tmp88 = & l2->flag;
                                __cil_tmp89 = (unsigned long volatile *)__cil_tmp88;
                                test_and_set_bit(13, __cil_tmp89);
                                }
                              } else {

                              }
                            }
                            {
                            tmp___3 = l2_newid(l2);
                            ret = l2down(l2, 257U, tmp___3, skb);
                            }
                          }
                        }
                      } else {

                      }
                      goto ldv_39240;
                      case_4356:
                      {
                      __cil_tmp90 = & l2->flag;
                      __cil_tmp91 = (unsigned long const volatile *)__cil_tmp90;
                      tmp___8 = constant_test_bit(0U, __cil_tmp91);
                      }
                      if (tmp___8 != 0) {
                        {
                        tmp___7 = l2_newid(l2);
                        __cil_tmp92 = (void *)0;
                        l2down_create(l2, 513U, tmp___7, 0, __cil_tmp92);
                        }
                      } else {

                      }
                      {
                      __cil_tmp93 = & l2->l2m;
                      __cil_tmp94 = (void *)skb;
                      ret = mISDN_FsmEvent(__cil_tmp93, 12, __cil_tmp94);
                      }
                      goto ldv_39240;
                      switch_default: ;
                      {
                      __cil_tmp95 = *debug___4;
                      __cil_tmp96 = __cil_tmp95 & 16711680U;
                      if (__cil_tmp96 != 0U) {
                        {
                        __cil_tmp97 = & l2->l2m;
                        __cil_tmp98 = (char *)"l2 unknown pr %04x";
                        __cil_tmp99 = hh->prim;
                        l2m_debug(__cil_tmp97, __cil_tmp98, __cil_tmp99);
                        }
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
              }
            }
            }
          }
          }
        }
        }
      }
      }
    }
    }
  }
  }
  ldv_39240: ;
  if (ret != 0) {
    {
    consume_skb(skb);
    ret = 0;
    }
  } else {

  }
  return (ret);
}
}
int tei_l2(struct layer2 *l2 , u_int cmd , u_long arg )
{ int ret ;
  u_int __cil_tmp5 ;
  unsigned int __cil_tmp6 ;
  int __cil_tmp7 ;
  int __cil_tmp8 ;
  int __cil_tmp9 ;
  int __cil_tmp10 ;
  struct FsmInst *__cil_tmp11 ;
  void *__cil_tmp12 ;
  struct FsmInst *__cil_tmp13 ;
  void *__cil_tmp14 ;
  struct FsmInst *__cil_tmp15 ;
  void *__cil_tmp16 ;
  struct FsmInst *__cil_tmp17 ;
  void *__cil_tmp18 ;

  {
  ret = -22;
  {
  __cil_tmp5 = *debug___4;
  __cil_tmp6 = __cil_tmp5 & 1048576U;
  if (__cil_tmp6 != 0U) {
    {
    printk("<7>%s: cmd(%x)\n", "tei_l2", cmd);
    }
  } else {

  }
  }
  {
  __cil_tmp7 = (int )cmd;
  if (__cil_tmp7 == 6148) {
    goto case_6148;
  } else {
    {
    __cil_tmp8 = (int )cmd;
    if (__cil_tmp8 == 6660) {
      goto case_6660;
    } else {
      {
      __cil_tmp9 = (int )cmd;
      if (__cil_tmp9 == 7940) {
        goto case_7940;
      } else {
        {
        __cil_tmp10 = (int )cmd;
        if (__cil_tmp10 == 24324) {
          goto case_24324;
        } else
        if (0) {
          case_6148:
          {
          __cil_tmp11 = & l2->l2m;
          __cil_tmp12 = (void *)arg;
          ret = mISDN_FsmEvent(__cil_tmp11, 13, __cil_tmp12);
          }
          goto ldv_39258;
          case_6660:
          {
          __cil_tmp13 = & l2->l2m;
          __cil_tmp14 = (void *)0;
          ret = mISDN_FsmEvent(__cil_tmp13, 14, __cil_tmp14);
          }
          goto ldv_39258;
          case_7940:
          {
          __cil_tmp15 = & l2->l2m;
          __cil_tmp16 = (void *)0;
          ret = mISDN_FsmEvent(__cil_tmp15, 15, __cil_tmp16);
          }
          goto ldv_39258;
          case_24324:
          {
          printk("<5>MDL_ERROR|REQ (tei_l2)\n");
          __cil_tmp17 = & l2->l2m;
          __cil_tmp18 = (void *)0;
          ret = mISDN_FsmEvent(__cil_tmp17, 15, __cil_tmp18);
          }
          goto ldv_39258;
        } else {

        }
        }
      }
      }
    }
    }
  }
  }
  ldv_39258: ;
  return (ret);
}
}
static void release_l2(struct layer2 *l2 )
{ int tmp ;
  struct FsmTimer *__cil_tmp3 ;
  struct FsmTimer *__cil_tmp4 ;
  struct sk_buff_head *__cil_tmp5 ;
  struct sk_buff_head *__cil_tmp6 ;
  struct sk_buff_head *__cil_tmp7 ;
  u_long *__cil_tmp8 ;
  unsigned long const volatile *__cil_tmp9 ;
  struct mISDNstack *__cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  struct mISDNstack *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  struct mISDNstack *__cil_tmp14 ;
  struct mISDNdevice *__cil_tmp15 ;
  ctrl_func_t *__cil_tmp16 ;
  struct mISDNstack *__cil_tmp17 ;
  struct mISDNdevice *__cil_tmp18 ;
  struct mISDNchannel *__cil_tmp19 ;
  void *__cil_tmp20 ;
  void const *__cil_tmp21 ;

  {
  {
  __cil_tmp3 = & l2->t200;
  mISDN_FsmDelTimer(__cil_tmp3, 21);
  __cil_tmp4 = & l2->t203;
  mISDN_FsmDelTimer(__cil_tmp4, 16);
  __cil_tmp5 = & l2->i_queue;
  skb_queue_purge(__cil_tmp5);
  __cil_tmp6 = & l2->ui_queue;
  skb_queue_purge(__cil_tmp6);
  __cil_tmp7 = & l2->down_queue;
  skb_queue_purge(__cil_tmp7);
  ReleaseWin(l2);
  __cil_tmp8 = & l2->flag;
  __cil_tmp9 = (unsigned long const volatile *)__cil_tmp8;
  tmp = constant_test_bit(1U, __cil_tmp9);
  }
  if (tmp != 0) {
    {
    TEIrelease(l2);
    }
    {
    __cil_tmp10 = (struct mISDNstack *)0;
    __cil_tmp11 = (unsigned long )__cil_tmp10;
    __cil_tmp12 = l2->ch.st;
    __cil_tmp13 = (unsigned long )__cil_tmp12;
    if (__cil_tmp13 != __cil_tmp11) {
      {
      __cil_tmp14 = l2->ch.st;
      __cil_tmp15 = __cil_tmp14->dev;
      __cil_tmp16 = __cil_tmp15->D.ctrl;
      __cil_tmp17 = l2->ch.st;
      __cil_tmp18 = __cil_tmp17->dev;
      __cil_tmp19 = & __cil_tmp18->D;
      __cil_tmp20 = (void *)0;
      (*__cil_tmp16)(__cil_tmp19, 512U, __cil_tmp20);
      }
    } else {

    }
    }
  } else {

  }
  {
  __cil_tmp21 = (void const *)l2;
  kfree(__cil_tmp21);
  }
  return;
}
}
static int l2_ctrl(struct mISDNchannel *ch , u_int cmd , void *arg )
{ struct layer2 *l2 ;
  struct mISDNchannel const *__mptr ;
  u_int info ;
  int tmp ;
  struct layer2 *__cil_tmp8 ;
  u_int __cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  int __cil_tmp11 ;
  int __cil_tmp12 ;
  u_long *__cil_tmp13 ;
  unsigned long const volatile *__cil_tmp14 ;
  struct mISDNchannel *__cil_tmp15 ;
  signed char __cil_tmp16 ;
  u_int __cil_tmp17 ;
  signed char __cil_tmp18 ;
  u_int __cil_tmp19 ;
  void *__cil_tmp20 ;
  struct mISDNchannel *__cil_tmp21 ;
  unsigned long __cil_tmp22 ;
  struct mISDNchannel *__cil_tmp23 ;
  unsigned long __cil_tmp24 ;
  struct mISDNchannel *__cil_tmp25 ;
  ctrl_func_t *__cil_tmp26 ;
  struct mISDNchannel *__cil_tmp27 ;
  void *__cil_tmp28 ;

  {
  __mptr = (struct mISDNchannel const *)ch;
  __cil_tmp8 = (struct layer2 *)__mptr;
  l2 = __cil_tmp8 + 1152921504606846960UL;
  {
  __cil_tmp9 = *debug___4;
  __cil_tmp10 = __cil_tmp9 & 262144U;
  if (__cil_tmp10 != 0U) {
    {
    printk("<7>%s:(%x)\n", "l2_ctrl", cmd);
    }
  } else {

  }
  }
  {
  __cil_tmp11 = (int )cmd;
  if (__cil_tmp11 == 256) {
    goto case_256;
  } else {
    {
    __cil_tmp12 = (int )cmd;
    if (__cil_tmp12 == 512) {
      goto case_512;
    } else
    if (0) {
      case_256:
      {
      __cil_tmp13 = & l2->flag;
      __cil_tmp14 = (unsigned long const volatile *)__cil_tmp13;
      tmp = constant_test_bit(1U, __cil_tmp14);
      }
      if (tmp != 0) {
        {
        __cil_tmp15 = & l2->ch;
        __cil_tmp16 = l2->sapi;
        __cil_tmp17 = (u_int )__cil_tmp16;
        __cil_tmp18 = l2->tei;
        __cil_tmp19 = (u_int )__cil_tmp18;
        set_channel_address(__cil_tmp15, __cil_tmp17, __cil_tmp19);
        info = 1U;
        __cil_tmp20 = (void *)(& info);
        l2up_create(l2, 8U, 4, __cil_tmp20);
        }
      } else {

      }
      goto ldv_39276;
      case_512: ;
      {
      __cil_tmp21 = (struct mISDNchannel *)0;
      __cil_tmp22 = (unsigned long )__cil_tmp21;
      __cil_tmp23 = l2->ch.peer;
      __cil_tmp24 = (unsigned long )__cil_tmp23;
      if (__cil_tmp24 != __cil_tmp22) {
        {
        __cil_tmp25 = l2->ch.peer;
        __cil_tmp26 = __cil_tmp25->ctrl;
        __cil_tmp27 = l2->ch.peer;
        __cil_tmp28 = (void *)0;
        (*__cil_tmp26)(__cil_tmp27, 512U, __cil_tmp28);
        }
      } else {

      }
      }
      {
      release_l2(l2);
      }
      goto ldv_39276;
    } else {

    }
    }
  }
  }
  ldv_39276: ;
  return (0);
}
}
struct layer2 *create_l2(struct mISDNchannel *ch , u_int protocol , u_long options ,
                         int tei , int sapi )
{ struct layer2 *l2 ;
  struct channel_req rq ;
  void *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  struct layer2 *__cil_tmp20 ;
  unsigned long __cil_tmp21 ;
  unsigned long __cil_tmp22 ;
  int __cil_tmp23 ;
  int __cil_tmp24 ;
  int __cil_tmp25 ;
  u_long *__cil_tmp26 ;
  unsigned long volatile *__cil_tmp27 ;
  u_long *__cil_tmp28 ;
  unsigned long volatile *__cil_tmp29 ;
  u_long *__cil_tmp30 ;
  unsigned long volatile *__cil_tmp31 ;
  unsigned long const volatile *__cil_tmp32 ;
  unsigned long const volatile *__cil_tmp33 ;
  u_long *__cil_tmp34 ;
  unsigned long volatile *__cil_tmp35 ;
  unsigned long const volatile *__cil_tmp36 ;
  u_long *__cil_tmp37 ;
  unsigned long volatile *__cil_tmp38 ;
  unsigned long const volatile *__cil_tmp39 ;
  struct mISDNstack *__cil_tmp40 ;
  struct mISDNdevice *__cil_tmp41 ;
  ctrl_func_t *__cil_tmp42 ;
  struct mISDNstack *__cil_tmp43 ;
  struct mISDNdevice *__cil_tmp44 ;
  struct mISDNchannel *__cil_tmp45 ;
  void *__cil_tmp46 ;
  u_long *__cil_tmp47 ;
  unsigned long volatile *__cil_tmp48 ;
  u_long *__cil_tmp49 ;
  unsigned long volatile *__cil_tmp50 ;
  u_long *__cil_tmp51 ;
  unsigned long volatile *__cil_tmp52 ;
  unsigned long const volatile *__cil_tmp53 ;
  unsigned long const volatile *__cil_tmp54 ;
  u_long *__cil_tmp55 ;
  unsigned long volatile *__cil_tmp56 ;
  unsigned long const volatile *__cil_tmp57 ;
  u_long *__cil_tmp58 ;
  unsigned long volatile *__cil_tmp59 ;
  unsigned long const volatile *__cil_tmp60 ;
  struct mISDNstack *__cil_tmp61 ;
  struct mISDNdevice *__cil_tmp62 ;
  ctrl_func_t *__cil_tmp63 ;
  struct mISDNstack *__cil_tmp64 ;
  struct mISDNdevice *__cil_tmp65 ;
  struct mISDNchannel *__cil_tmp66 ;
  void *__cil_tmp67 ;
  u_long *__cil_tmp68 ;
  unsigned long volatile *__cil_tmp69 ;
  void const *__cil_tmp70 ;
  struct sk_buff_head *__cil_tmp71 ;
  struct sk_buff_head *__cil_tmp72 ;
  struct sk_buff_head *__cil_tmp73 ;
  struct sk_buff_head *__cil_tmp74 ;
  u_long *__cil_tmp75 ;
  unsigned long const volatile *__cil_tmp76 ;
  u_long *__cil_tmp77 ;
  unsigned long const volatile *__cil_tmp78 ;
  u_long *__cil_tmp79 ;
  unsigned long const volatile *__cil_tmp80 ;
  u_int __cil_tmp81 ;
  struct FsmInst *__cil_tmp82 ;
  struct FsmTimer *__cil_tmp83 ;
  struct FsmInst *__cil_tmp84 ;
  struct FsmTimer *__cil_tmp85 ;

  {
  {
  tmp = kzalloc(976UL, 208U);
  l2 = (struct layer2 *)tmp;
  }
  {
  __cil_tmp20 = (struct layer2 *)0;
  __cil_tmp21 = (unsigned long )__cil_tmp20;
  __cil_tmp22 = (unsigned long )l2;
  if (__cil_tmp22 == __cil_tmp21) {
    {
    printk("<3>kzalloc layer2 failed\n");
    }
    return ((struct layer2 *)0);
  } else {

  }
  }
  l2->next_id = 1U;
  l2->down_id = 65534U;
  l2->up = ch;
  l2->ch.st = ch->st;
  l2->ch.send = & l2_send;
  l2->ch.ctrl = & l2_ctrl;
  {
  __cil_tmp23 = (int )protocol;
  if (__cil_tmp23 == 17) {
    goto case_17;
  } else {
    {
    __cil_tmp24 = (int )protocol;
    if (__cil_tmp24 == 16) {
      goto case_16;
    } else {
      {
      __cil_tmp25 = (int )protocol;
      if (__cil_tmp25 == 35) {
        goto case_35;
      } else {
        goto switch_default;
        if (0) {
          case_17:
          {
          __cil_tmp26 = & l2->flag;
          __cil_tmp27 = (unsigned long volatile *)__cil_tmp26;
          test_and_set_bit(1, __cil_tmp27);
          __cil_tmp28 = & l2->flag;
          __cil_tmp29 = (unsigned long volatile *)__cil_tmp28;
          test_and_set_bit(18, __cil_tmp29);
          __cil_tmp30 = & l2->flag;
          __cil_tmp31 = (unsigned long volatile *)__cil_tmp30;
          test_and_set_bit(3, __cil_tmp31);
          l2->sapi = (signed char )sapi;
          l2->maxlen = 260U;
          __cil_tmp32 = (unsigned long const volatile *)(& options);
          tmp___0 = constant_test_bit(1U, __cil_tmp32);
          }
          if (tmp___0 != 0) {
            l2->window = 7U;
          } else {
            l2->window = 1U;
          }
          {
          __cil_tmp33 = (unsigned long const volatile *)(& options);
          tmp___1 = constant_test_bit(2U, __cil_tmp33);
          }
          if (tmp___1 != 0) {
            {
            __cil_tmp34 = & l2->flag;
            __cil_tmp35 = (unsigned long volatile *)__cil_tmp34;
            test_and_set_bit(14, __cil_tmp35);
            }
          } else {

          }
          {
          __cil_tmp36 = (unsigned long const volatile *)(& options);
          tmp___2 = constant_test_bit(3U, __cil_tmp36);
          }
          if (tmp___2 != 0) {
            {
            __cil_tmp37 = & l2->flag;
            __cil_tmp38 = (unsigned long volatile *)__cil_tmp37;
            test_and_set_bit(15, __cil_tmp38);
            }
          } else {

          }
          {
          l2->tei = (signed char )tei;
          l2->T200 = 1000;
          l2->N200 = 3;
          l2->T203 = 10000;
          __cil_tmp39 = (unsigned long const volatile *)(& options);
          tmp___3 = constant_test_bit(1U, __cil_tmp39);
          }
          if (tmp___3 != 0) {
            rq.protocol = 4U;
          } else {
            rq.protocol = 2U;
          }
          {
          rq.adr.channel = (unsigned char)0;
          __cil_tmp40 = l2->ch.st;
          __cil_tmp41 = __cil_tmp40->dev;
          __cil_tmp42 = __cil_tmp41->D.ctrl;
          __cil_tmp43 = l2->ch.st;
          __cil_tmp44 = __cil_tmp43->dev;
          __cil_tmp45 = & __cil_tmp44->D;
          __cil_tmp46 = (void *)(& rq);
          (*__cil_tmp42)(__cil_tmp45, 256U, __cil_tmp46);
          }
          goto ldv_39288;
          case_16:
          {
          __cil_tmp47 = & l2->flag;
          __cil_tmp48 = (unsigned long volatile *)__cil_tmp47;
          test_and_set_bit(1, __cil_tmp48);
          __cil_tmp49 = & l2->flag;
          __cil_tmp50 = (unsigned long volatile *)__cil_tmp49;
          test_and_set_bit(3, __cil_tmp50);
          __cil_tmp51 = & l2->flag;
          __cil_tmp52 = (unsigned long volatile *)__cil_tmp51;
          test_and_set_bit(2, __cil_tmp52);
          l2->sapi = (signed char )sapi;
          l2->maxlen = 260U;
          __cil_tmp53 = (unsigned long const volatile *)(& options);
          tmp___4 = constant_test_bit(1U, __cil_tmp53);
          }
          if (tmp___4 != 0) {
            l2->window = 7U;
          } else {
            l2->window = 1U;
          }
          {
          __cil_tmp54 = (unsigned long const volatile *)(& options);
          tmp___5 = constant_test_bit(2U, __cil_tmp54);
          }
          if (tmp___5 != 0) {
            {
            __cil_tmp55 = & l2->flag;
            __cil_tmp56 = (unsigned long volatile *)__cil_tmp55;
            test_and_set_bit(14, __cil_tmp56);
            }
          } else {

          }
          {
          __cil_tmp57 = (unsigned long const volatile *)(& options);
          tmp___6 = constant_test_bit(3U, __cil_tmp57);
          }
          if (tmp___6 != 0) {
            {
            __cil_tmp58 = & l2->flag;
            __cil_tmp59 = (unsigned long volatile *)__cil_tmp58;
            test_and_set_bit(15, __cil_tmp59);
            }
          } else {

          }
          {
          l2->tei = (signed char )tei;
          l2->T200 = 1000;
          l2->N200 = 3;
          l2->T203 = 10000;
          __cil_tmp60 = (unsigned long const volatile *)(& options);
          tmp___7 = constant_test_bit(1U, __cil_tmp60);
          }
          if (tmp___7 != 0) {
            rq.protocol = 3U;
          } else {
            rq.protocol = 1U;
          }
          {
          rq.adr.channel = (unsigned char)0;
          __cil_tmp61 = l2->ch.st;
          __cil_tmp62 = __cil_tmp61->dev;
          __cil_tmp63 = __cil_tmp62->D.ctrl;
          __cil_tmp64 = l2->ch.st;
          __cil_tmp65 = __cil_tmp64->dev;
          __cil_tmp66 = & __cil_tmp65->D;
          __cil_tmp67 = (void *)(& rq);
          (*__cil_tmp63)(__cil_tmp66, 256U, __cil_tmp67);
          }
          goto ldv_39288;
          case_35:
          {
          __cil_tmp68 = & l2->flag;
          __cil_tmp69 = (unsigned long volatile *)__cil_tmp68;
          test_and_set_bit(0, __cil_tmp69);
          l2->window = 7U;
          l2->maxlen = 2048U;
          l2->T200 = 1000;
          l2->N200 = 4;
          l2->T203 = 5000;
          l2->addr.A = (u_char )3U;
          l2->addr.B = (u_char )1U;
          }
          goto ldv_39288;
          switch_default:
          {
          printk("<3>layer2 create failed prt %x\n", protocol);
          __cil_tmp70 = (void const *)l2;
          kfree(__cil_tmp70);
          }
          return ((struct layer2 *)0);
        } else {

        }
      }
      }
    }
    }
  }
  }
  ldv_39288:
  {
  __cil_tmp71 = & l2->i_queue;
  skb_queue_head_init(__cil_tmp71);
  __cil_tmp72 = & l2->ui_queue;
  skb_queue_head_init(__cil_tmp72);
  __cil_tmp73 = & l2->down_queue;
  skb_queue_head_init(__cil_tmp73);
  __cil_tmp74 = & l2->tmp_queue;
  skb_queue_head_init(__cil_tmp74);
  InitWin(l2);
  l2->l2m.fsm = & l2fsm;
  __cil_tmp75 = & l2->flag;
  __cil_tmp76 = (unsigned long const volatile *)__cil_tmp75;
  tmp___8 = constant_test_bit(0U, __cil_tmp76);
  }
  if (tmp___8 != 0) {
    l2->l2m.state = 3;
  } else {
    {
    __cil_tmp77 = & l2->flag;
    __cil_tmp78 = (unsigned long const volatile *)__cil_tmp77;
    tmp___9 = constant_test_bit(14U, __cil_tmp78);
    }
    if (tmp___9 != 0) {
      l2->l2m.state = 3;
    } else {
      {
      __cil_tmp79 = & l2->flag;
      __cil_tmp80 = (unsigned long const volatile *)__cil_tmp79;
      tmp___10 = constant_test_bit(18U, __cil_tmp80);
      }
      if (tmp___10 != 0) {
        l2->l2m.state = 3;
      } else {
        l2->l2m.state = 0;
      }
    }
  }
  {
  __cil_tmp81 = *debug___4;
  l2->l2m.debug = (int )__cil_tmp81;
  l2->l2m.userdata = (void *)l2;
  l2->l2m.userint = 0;
  l2->l2m.printdebug = & l2m_debug;
  __cil_tmp82 = & l2->l2m;
  __cil_tmp83 = & l2->t200;
  mISDN_FsmInitTimer(__cil_tmp82, __cil_tmp83);
  __cil_tmp84 = & l2->l2m;
  __cil_tmp85 = & l2->t203;
  mISDN_FsmInitTimer(__cil_tmp84, __cil_tmp85);
  }
  return (l2);
}
}
static int x75create(struct channel_req *crq )
{ struct layer2 *l2 ;
  u_int __cil_tmp3 ;
  struct mISDNchannel *__cil_tmp4 ;
  u_int __cil_tmp5 ;
  struct layer2 *__cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  unsigned long __cil_tmp8 ;

  {
  {
  __cil_tmp3 = crq->protocol;
  if (__cil_tmp3 != 35U) {
    return (-93);
  } else {

  }
  }
  {
  __cil_tmp4 = crq->ch;
  __cil_tmp5 = crq->protocol;
  l2 = create_l2(__cil_tmp4, __cil_tmp5, 0UL, 0, 0);
  }
  {
  __cil_tmp6 = (struct layer2 *)0;
  __cil_tmp7 = (unsigned long )__cil_tmp6;
  __cil_tmp8 = (unsigned long )l2;
  if (__cil_tmp8 == __cil_tmp7) {
    return (-12);
  } else {

  }
  }
  crq->ch = & l2->ch;
  crq->protocol = 34U;
  return (0);
}
}
static struct Bprotocol X75SLP = {{(struct list_head *)0, (struct list_head *)0}, (char *)"X75SLP", 8U, & x75create};
int Isdnl2_Init(u_int *deb )
{ struct FsmNode *__cil_tmp2 ;

  {
  {
  debug___4 = deb;
  mISDN_register_Bprotocol(& X75SLP);
  l2fsm.state_count = 8;
  l2fsm.event_count = 22;
  l2fsm.strEvent = (char **)(& strL2Event);
  l2fsm.strState = (char **)(& strL2State);
  __cil_tmp2 = (struct FsmNode *)(& L2FnList);
  mISDN_FsmNew(& l2fsm, __cil_tmp2, 88);
  TEIInit(deb);
  }
  return (0);
}
}
void Isdnl2_cleanup(void)
{

  {
  {
  mISDN_unregister_Bprotocol(& X75SLP);
  TEIFree();
  mISDN_FsmFree(& l2fsm);
  }
  return;
}
}
extern void get_random_bytes(void * , int ) ;
static u_int *debug___5 ;
static struct Fsm deactfsm = {(FSMFNPTR (**)(struct FsmInst * , int , void * ))0, 0, 0, (char **)0, (char **)0};
static struct Fsm teifsmu = {(FSMFNPTR (**)(struct FsmInst * , int , void * ))0, 0, 0, (char **)0, (char **)0};
static struct Fsm teifsmn = {(FSMFNPTR (**)(struct FsmInst * , int , void * ))0, 0, 0, (char **)0, (char **)0};
static char *strDeactState[3U] = { (char *)"ST_L1_DEACT", (char *)"ST_L1_DEACT_PENDING", (char *)"ST_L1_ACTIV"};
static char *strDeactEvent[6U] = { (char *)"EV_ACTIVATE", (char *)"EV_ACTIVATE_IND", (char *)"EV_DEACTIVATE", (char *)"EV_DEACTIVATE_IND",
        (char *)"EV_UI", (char *)"EV_DATIMER"};
static void da_debug(struct FsmInst *fi , char *fmt , ...)
{ struct manager *mgr ;
  struct va_format vaf ;
  va_list va ;
  void *__cil_tmp6 ;
  u_int __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  __va_list_tag *__cil_tmp9 ;
  __builtin_va_list __cil_tmp10 ;
  struct mISDNstack *__cil_tmp11 ;
  struct mISDNdevice *__cil_tmp12 ;
  u_int __cil_tmp13 ;
  __builtin_va_list __cil_tmp14 ;

  {
  __cil_tmp6 = fi->userdata;
  mgr = (struct manager *)__cil_tmp6;
  {
  __cil_tmp7 = *debug___5;
  __cil_tmp8 = __cil_tmp7 & 2097152U;
  if (__cil_tmp8 == 0U) {
    return;
  } else {

  }
  }
  {
  vaf.fmt = (char const *)fmt;
  vaf.va = & va;
  __cil_tmp11 = mgr->ch.st;
  __cil_tmp12 = __cil_tmp11->dev;
  __cil_tmp13 = __cil_tmp12->id;
  printk("<7>mgr(%d): %pV\n", __cil_tmp13, & vaf);

  }
  return;
}
}
static void da_activate(struct FsmInst *fi , int event , void *arg )
{ struct manager *mgr ;
  void *__cil_tmp5 ;
  int __cil_tmp6 ;
  struct FsmTimer *__cil_tmp7 ;

  {
  __cil_tmp5 = fi->userdata;
  mgr = (struct manager *)__cil_tmp5;
  {
  __cil_tmp6 = fi->state;
  if (__cil_tmp6 == 1) {
    {
    __cil_tmp7 = & mgr->datimer;
    mISDN_FsmDelTimer(__cil_tmp7, 1);
    }
  } else {

  }
  }
  {
  mISDN_FsmChangeState(fi, 2);
  }
  return;
}
}
static void da_deactivate_ind(struct FsmInst *fi , int event , void *arg )
{

  {
  {
  mISDN_FsmChangeState(fi, 0);
  }
  return;
}
}
static void da_deactivate(struct FsmInst *fi , int event , void *arg )
{ struct manager *mgr ;
  struct layer2 *l2 ;
  u_long flags ;
  struct list_head const *__mptr ;
  struct list_head const *__mptr___0 ;
  int tmp ;
  void *__cil_tmp10 ;
  rwlock_t *__cil_tmp11 ;
  struct list_head *__cil_tmp12 ;
  int __cil_tmp13 ;
  rwlock_t *__cil_tmp14 ;
  struct list_head *__cil_tmp15 ;
  struct list_head *__cil_tmp16 ;
  unsigned long __cil_tmp17 ;
  struct list_head *__cil_tmp18 ;
  unsigned long __cil_tmp19 ;
  rwlock_t *__cil_tmp20 ;
  u_long *__cil_tmp21 ;
  unsigned long const volatile *__cil_tmp22 ;
  struct FsmTimer *__cil_tmp23 ;
  void *__cil_tmp24 ;

  {
  {
  __cil_tmp10 = fi->userdata;
  mgr = (struct manager *)__cil_tmp10;
  __cil_tmp11 = & mgr->lock;
  flags = _raw_read_lock_irqsave(__cil_tmp11);
  __cil_tmp12 = mgr->layer2.next;
  __mptr = (struct list_head const *)__cil_tmp12;
  l2 = (struct layer2 *)__mptr;
  }
  goto ldv_38563;
  ldv_38562: ;
  {
  __cil_tmp13 = l2->l2m.state;
  if (__cil_tmp13 > 3) {
    {
    __cil_tmp14 = & mgr->lock;
    _raw_read_unlock_irqrestore(__cil_tmp14, flags);
    }
    return;
  } else {

  }
  }
  __cil_tmp15 = l2->list.next;
  __mptr___0 = (struct list_head const *)__cil_tmp15;
  l2 = (struct layer2 *)__mptr___0;
  ldv_38563: ;
  {
  __cil_tmp16 = & mgr->layer2;
  __cil_tmp17 = (unsigned long )__cil_tmp16;
  __cil_tmp18 = & l2->list;
  __cil_tmp19 = (unsigned long )__cil_tmp18;
  if (__cil_tmp19 != __cil_tmp17) {
    goto ldv_38562;
  } else {
    goto ldv_38564;
  }
  }
  ldv_38564:
  {
  __cil_tmp20 = & mgr->lock;
  _raw_read_unlock_irqrestore(__cil_tmp20, flags);
  __cil_tmp21 = & mgr->options;
  __cil_tmp22 = (unsigned long const volatile *)__cil_tmp21;
  tmp = constant_test_bit(5U, __cil_tmp22);
  }
  if (tmp == 0) {
    {
    __cil_tmp23 = & mgr->datimer;
    __cil_tmp24 = (void *)0;
    mISDN_FsmAddTimer(__cil_tmp23, 10000, 5, __cil_tmp24, 1);
    mISDN_FsmChangeState(fi, 1);
    }
  } else {

  }
  return;
}
}
static void da_ui(struct FsmInst *fi , int event , void *arg )
{ struct manager *mgr ;
  int tmp ;
  void *__cil_tmp6 ;
  u_long *__cil_tmp7 ;
  unsigned long const volatile *__cil_tmp8 ;
  struct FsmTimer *__cil_tmp9 ;
  struct FsmTimer *__cil_tmp10 ;
  void *__cil_tmp11 ;

  {
  {
  __cil_tmp6 = fi->userdata;
  mgr = (struct manager *)__cil_tmp6;
  __cil_tmp7 = & mgr->options;
  __cil_tmp8 = (unsigned long const volatile *)__cil_tmp7;
  tmp = constant_test_bit(5U, __cil_tmp8);
  }
  if (tmp == 0) {
    {
    __cil_tmp9 = & mgr->datimer;
    mISDN_FsmDelTimer(__cil_tmp9, 2);
    __cil_tmp10 = & mgr->datimer;
    __cil_tmp11 = (void *)0;
    mISDN_FsmAddTimer(__cil_tmp10, 10000, 5, __cil_tmp11, 2);
    }
  } else {

  }
  return;
}
}
static void da_timer(struct FsmInst *fi , int event , void *arg )
{ struct manager *mgr ;
  struct layer2 *l2 ;
  u_long flags ;
  struct list_head const *__mptr ;
  struct list_head const *__mptr___0 ;
  void *__cil_tmp9 ;
  rwlock_t *__cil_tmp10 ;
  struct list_head *__cil_tmp11 ;
  int __cil_tmp12 ;
  rwlock_t *__cil_tmp13 ;
  struct list_head *__cil_tmp14 ;
  struct list_head *__cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  struct list_head *__cil_tmp17 ;
  unsigned long __cil_tmp18 ;
  rwlock_t *__cil_tmp19 ;
  struct mISDNchannel *__cil_tmp20 ;
  void *__cil_tmp21 ;

  {
  {
  __cil_tmp9 = fi->userdata;
  mgr = (struct manager *)__cil_tmp9;
  __cil_tmp10 = & mgr->lock;
  flags = _raw_read_lock_irqsave(__cil_tmp10);
  __cil_tmp11 = mgr->layer2.next;
  __mptr = (struct list_head const *)__cil_tmp11;
  l2 = (struct layer2 *)__mptr;
  }
  goto ldv_38593;
  ldv_38592: ;
  {
  __cil_tmp12 = l2->l2m.state;
  if (__cil_tmp12 > 3) {
    {
    __cil_tmp13 = & mgr->lock;
    _raw_read_unlock_irqrestore(__cil_tmp13, flags);
    mISDN_FsmChangeState(fi, 2);
    }
    return;
  } else {

  }
  }
  __cil_tmp14 = l2->list.next;
  __mptr___0 = (struct list_head const *)__cil_tmp14;
  l2 = (struct layer2 *)__mptr___0;
  ldv_38593: ;
  {
  __cil_tmp15 = & mgr->layer2;
  __cil_tmp16 = (unsigned long )__cil_tmp15;
  __cil_tmp17 = & l2->list;
  __cil_tmp18 = (unsigned long )__cil_tmp17;
  if (__cil_tmp18 != __cil_tmp16) {
    goto ldv_38592;
  } else {
    goto ldv_38594;
  }
  }
  ldv_38594:
  {
  __cil_tmp19 = & mgr->lock;
  _raw_read_unlock_irqrestore(__cil_tmp19, flags);
  mISDN_FsmChangeState(fi, 0);
  __cil_tmp20 = & mgr->ch;
  __cil_tmp21 = (void *)0;
  _queue_data(__cil_tmp20, 513U, 65535U, 0U, __cil_tmp21, 32U);
  }
  return;
}
}
static struct FsmNode DeactFnList[6U] = { {0, 1, & da_activate},
        {2, 3, & da_deactivate_ind},
        {2, 2, & da_deactivate},
        {1, 0, & da_activate},
        {1, 4, & da_ui},
        {1, 5, & da_timer}};
static char *strTeiState[3U] = { (char *)"ST_TEI_NOP", (char *)"ST_TEI_IDREQ", (char *)"ST_TEI_IDVERIFY"};
static char *strTeiEvent[9U] =
  { (char *)"EV_IDREQ", (char *)"EV_ASSIGN", (char *)"EV_ASSIGN_REQ", (char *)"EV_DENIED",
        (char *)"EV_CHKREQ", (char *)"EV_CHKRESP", (char *)"EV_REMOVE", (char *)"EV_VERIFY",
        (char *)"EV_TIMER"};
static void tei_debug(struct FsmInst *fi , char *fmt , ...)
{ struct teimgr *tm ;
  struct va_format vaf ;
  va_list va ;
  void *__cil_tmp6 ;
  u_int __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  __builtin_va_list __cil_tmp9 ;
  struct layer2 *__cil_tmp10 ;
  signed char __cil_tmp11 ;
  int __cil_tmp12 ;
  struct layer2 *__cil_tmp13 ;
  signed char __cil_tmp14 ;
  int __cil_tmp15 ;
  __builtin_va_list __cil_tmp16 ;

  {
  __cil_tmp6 = fi->userdata;
  tm = (struct teimgr *)__cil_tmp6;
  {
  __cil_tmp7 = *debug___5;
  __cil_tmp8 = __cil_tmp7 & 2097152U;
  if (__cil_tmp8 == 0U) {
    return;
  } else {

  }
  }
  {
  vaf.fmt = (char const *)fmt;
  vaf.va = & va;
  __cil_tmp10 = tm->l2;
  __cil_tmp11 = __cil_tmp10->sapi;
  __cil_tmp12 = (int )__cil_tmp11;
  __cil_tmp13 = tm->l2;
  __cil_tmp14 = __cil_tmp13->tei;
  __cil_tmp15 = (int )__cil_tmp14;
  printk("<7>sapi(%d) tei(%d): %pV\n", __cil_tmp12, __cil_tmp15, & vaf);

  }
  return;
}
}
static int get_free_id(struct manager *mgr )
{ u64 ids ;
  int i ;
  struct layer2 *l2 ;
  struct list_head const *__mptr ;
  struct list_head const *__mptr___0 ;
  int tmp ;
  struct list_head *__cil_tmp8 ;
  u_int __cil_tmp9 ;
  u_int __cil_tmp10 ;
  int __cil_tmp11 ;
  unsigned long volatile *__cil_tmp12 ;
  struct list_head *__cil_tmp13 ;
  struct list_head *__cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  struct list_head *__cil_tmp16 ;
  unsigned long __cil_tmp17 ;
  unsigned long const volatile *__cil_tmp18 ;

  {
  ids = 0ULL;
  __cil_tmp8 = mgr->layer2.next;
  __mptr = (struct list_head const *)__cil_tmp8;
  l2 = (struct layer2 *)__mptr;
  goto ldv_38634;
  ldv_38633: ;
  {
  __cil_tmp9 = l2->ch.nr;
  if (__cil_tmp9 > 63U) {
    {
    printk("<4>%s: more as 63 layer2 for one device\n", "get_free_id");
    }
    return (-16);
  } else {

  }
  }
  {
  __cil_tmp10 = l2->ch.nr;
  __cil_tmp11 = (int )__cil_tmp10;
  __cil_tmp12 = (unsigned long volatile *)(& ids);
  test_and_set_bit(__cil_tmp11, __cil_tmp12);
  __cil_tmp13 = l2->list.next;
  __mptr___0 = (struct list_head const *)__cil_tmp13;
  l2 = (struct layer2 *)__mptr___0;
  }
  ldv_38634: ;
  {
  __cil_tmp14 = & mgr->layer2;
  __cil_tmp15 = (unsigned long )__cil_tmp14;
  __cil_tmp16 = & l2->list;
  __cil_tmp17 = (unsigned long )__cil_tmp16;
  if (__cil_tmp17 != __cil_tmp15) {
    goto ldv_38633;
  } else {
    goto ldv_38635;
  }
  }
  ldv_38635:
  i = 1;
  goto ldv_38637;
  ldv_38636:
  {
  __cil_tmp18 = (unsigned long const volatile *)(& ids);
  tmp = variable_test_bit(i, __cil_tmp18);
  }
  if (tmp == 0) {
    return (i);
  } else {

  }
  i = i + 1;
  ldv_38637: ;
  if (i <= 63) {
    goto ldv_38636;
  } else {
    goto ldv_38638;
  }
  ldv_38638:
  {
  printk("<4>%s: more as 63 layer2 for one device\n", "get_free_id");
  }
  return (-16);
}
}
static int get_free_tei(struct manager *mgr )
{ u64 ids ;
  int i ;
  struct layer2 *l2 ;
  struct list_head const *__mptr ;
  struct list_head const *__mptr___0 ;
  int tmp ;
  struct list_head *__cil_tmp8 ;
  u_int __cil_tmp9 ;
  u_int __cil_tmp10 ;
  unsigned int __cil_tmp11 ;
  u_int __cil_tmp12 ;
  u_int __cil_tmp13 ;
  unsigned long volatile *__cil_tmp14 ;
  struct list_head *__cil_tmp15 ;
  struct list_head *__cil_tmp16 ;
  unsigned long __cil_tmp17 ;
  struct list_head *__cil_tmp18 ;
  unsigned long __cil_tmp19 ;
  unsigned long const volatile *__cil_tmp20 ;

  {
  ids = 0ULL;
  __cil_tmp8 = mgr->layer2.next;
  __mptr = (struct list_head const *)__cil_tmp8;
  l2 = (struct layer2 *)__mptr;
  goto ldv_38651;
  ldv_38650: ;
  {
  __cil_tmp9 = l2->ch.nr;
  if (__cil_tmp9 == 0U) {
    goto ldv_38649;
  } else {

  }
  }
  {
  __cil_tmp10 = l2->ch.addr;
  __cil_tmp11 = __cil_tmp10 & 255U;
  if (__cil_tmp11 != 0U) {
    goto ldv_38649;
  } else {

  }
  }
  __cil_tmp12 = l2->ch.addr;
  __cil_tmp13 = __cil_tmp12 >> 8;
  i = (int )__cil_tmp13;
  if (i <= 63) {
    goto ldv_38649;
  } else {

  }
  {
  i = i + -64;
  __cil_tmp14 = (unsigned long volatile *)(& ids);
  test_and_set_bit(i, __cil_tmp14);
  }
  ldv_38649:
  __cil_tmp15 = l2->list.next;
  __mptr___0 = (struct list_head const *)__cil_tmp15;
  l2 = (struct layer2 *)__mptr___0;
  ldv_38651: ;
  {
  __cil_tmp16 = & mgr->layer2;
  __cil_tmp17 = (unsigned long )__cil_tmp16;
  __cil_tmp18 = & l2->list;
  __cil_tmp19 = (unsigned long )__cil_tmp18;
  if (__cil_tmp19 != __cil_tmp17) {
    goto ldv_38650;
  } else {
    goto ldv_38652;
  }
  }
  ldv_38652:
  i = 0;
  goto ldv_38654;
  ldv_38653:
  {
  __cil_tmp20 = (unsigned long const volatile *)(& ids);
  tmp = variable_test_bit(i, __cil_tmp20);
  }
  if (tmp == 0) {
    return (i + 64);
  } else {

  }
  i = i + 1;
  ldv_38654: ;
  if (i <= 63) {
    goto ldv_38653;
  } else {
    goto ldv_38655;
  }
  ldv_38655:
  {
  printk("<4>%s: more as 63 dynamic tei for one device\n", "get_free_tei");
  }
  return (-1);
}
}
static void teiup_create(struct manager *mgr , u_int prim , int len , void *arg )
{ struct sk_buff *skb ;
  struct mISDNhead *hh ;
  int err ;
  size_t __len ;
  void *__ret ;
  unsigned char *tmp___0 ;
  unsigned int __cil_tmp11 ;
  struct sk_buff *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  char (*__cil_tmp15)[48U] ;
  u_int __cil_tmp16 ;
  u_int __cil_tmp17 ;
  u_int __cil_tmp18 ;
  unsigned int __cil_tmp19 ;
  void *__cil_tmp20 ;
  void const *__cil_tmp21 ;
  struct mISDNchannel *__cil_tmp22 ;
  send_func_t *__cil_tmp23 ;
  struct mISDNchannel *__cil_tmp24 ;

  {
  {
  __cil_tmp11 = (unsigned int )len;
  skb = mI_alloc_skb(__cil_tmp11, 32U);
  }
  {
  __cil_tmp12 = (struct sk_buff *)0;
  __cil_tmp13 = (unsigned long )__cil_tmp12;
  __cil_tmp14 = (unsigned long )skb;
  if (__cil_tmp14 == __cil_tmp13) {
    return;
  } else {

  }
  }
  __cil_tmp15 = & skb->cb;
  hh = (struct mISDNhead *)__cil_tmp15;
  hh->prim = prim;
  __cil_tmp16 = mgr->ch.addr;
  __cil_tmp17 = mgr->ch.nr;
  __cil_tmp18 = __cil_tmp17 << 16;
  hh->id = __cil_tmp18 | __cil_tmp16;
  if (len != 0) {
    {
    __len = (size_t )len;
    __cil_tmp19 = (unsigned int )len;
    tmp___0 = skb_put(skb, __cil_tmp19);
    __cil_tmp20 = (void *)tmp___0;
    __cil_tmp21 = (void const *)arg;
    __ret = __builtin_memcpy(__cil_tmp20, __cil_tmp21, __len);
    }
  } else {

  }
  {
  __cil_tmp22 = mgr->up;
  __cil_tmp23 = __cil_tmp22->send;
  __cil_tmp24 = mgr->up;
  err = (*__cil_tmp23)(__cil_tmp24, skb);
  }
  if (err != 0) {
    {
    printk("<4>%s: err=%d\n", "teiup_create", err);
    consume_skb(skb);
    }
  } else {

  }
  return;
}
}
static u_int new_id(struct manager *mgr )
{ u_int id ;
  u_int tmp ;
  u_int __cil_tmp4 ;

  {
  tmp = mgr->nextid;
  __cil_tmp4 = mgr->nextid;
  mgr->nextid = __cil_tmp4 + 1U;
  id = tmp;
  if (id == 32767U) {
    mgr->nextid = 1U;
  } else {

  }
  id = id << 16;
  id = id | 32512U;
  id = id | 63U;
  return (id);
}
}
static void do_send(struct manager *mgr )
{ int tmp ;
  struct sk_buff *skb ;
  struct sk_buff *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  u_long *__cil_tmp7 ;
  unsigned long const volatile *__cil_tmp8 ;
  u_long *__cil_tmp9 ;
  unsigned long volatile *__cil_tmp10 ;
  struct sk_buff_head *__cil_tmp11 ;
  struct sk_buff *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  u_long *__cil_tmp15 ;
  unsigned long volatile *__cil_tmp16 ;
  char (*__cil_tmp17)[48U] ;
  struct mISDNhead *__cil_tmp18 ;
  struct FsmInst *__cil_tmp19 ;
  void *__cil_tmp20 ;
  send_func_t *__cil_tmp21 ;
  struct mISDNchannel *__cil_tmp22 ;
  u_long *__cil_tmp23 ;
  unsigned long volatile *__cil_tmp24 ;

  {
  {
  __cil_tmp7 = & mgr->options;
  __cil_tmp8 = (unsigned long const volatile *)__cil_tmp7;
  tmp = constant_test_bit(16U, __cil_tmp8);
  }
  if (tmp == 0) {
    return;
  } else {

  }
  {
  __cil_tmp9 = & mgr->options;
  __cil_tmp10 = (unsigned long volatile *)__cil_tmp9;
  tmp___2 = test_and_set_bit(17, __cil_tmp10);
  }
  if (tmp___2 == 0) {
    {
    __cil_tmp11 = & mgr->sendq;
    tmp___0 = skb_dequeue(__cil_tmp11);
    skb = tmp___0;
    }
    {
    __cil_tmp12 = (struct sk_buff *)0;
    __cil_tmp13 = (unsigned long )__cil_tmp12;
    __cil_tmp14 = (unsigned long )skb;
    if (__cil_tmp14 == __cil_tmp13) {
      {
      __cil_tmp15 = & mgr->options;
      __cil_tmp16 = (unsigned long volatile *)__cil_tmp15;
      test_and_clear_bit(17, __cil_tmp16);
      }
      return;
    } else {

    }
    }
    {
    __cil_tmp17 = & skb->cb;
    __cil_tmp18 = (struct mISDNhead *)__cil_tmp17;
    mgr->lastid = __cil_tmp18->id;
    __cil_tmp19 = & mgr->deact;
    __cil_tmp20 = (void *)0;
    mISDN_FsmEvent(__cil_tmp19, 4, __cil_tmp20);
    __cil_tmp21 = mgr->ch.recv;
    __cil_tmp22 = mgr->ch.peer;
    tmp___1 = (*__cil_tmp21)(__cil_tmp22, skb);
    }
    if (tmp___1 != 0) {
      {
      consume_skb(skb);
      __cil_tmp23 = & mgr->options;
      __cil_tmp24 = (unsigned long volatile *)__cil_tmp23;
      test_and_clear_bit(17, __cil_tmp24);
      mgr->lastid = 65534U;
      }
    } else {

    }
  } else {

  }
  return;
}
}
static void do_ack(struct manager *mgr , u_int id )
{ struct sk_buff *skb ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  u_long *__cil_tmp7 ;
  unsigned long const volatile *__cil_tmp8 ;
  u_int __cil_tmp9 ;
  u_long *__cil_tmp10 ;
  unsigned long const volatile *__cil_tmp11 ;
  struct sk_buff_head *__cil_tmp12 ;
  struct sk_buff *__cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  char (*__cil_tmp16)[48U] ;
  struct mISDNhead *__cil_tmp17 ;
  send_func_t *__cil_tmp18 ;
  struct mISDNchannel *__cil_tmp19 ;
  u_long *__cil_tmp20 ;
  unsigned long volatile *__cil_tmp21 ;

  {
  {
  __cil_tmp7 = & mgr->options;
  __cil_tmp8 = (unsigned long const volatile *)__cil_tmp7;
  tmp___1 = constant_test_bit(17U, __cil_tmp8);
  }
  if (tmp___1 != 0) {
    {
    __cil_tmp9 = mgr->lastid;
    if (__cil_tmp9 == id) {
      {
      __cil_tmp10 = & mgr->options;
      __cil_tmp11 = (unsigned long const volatile *)__cil_tmp10;
      tmp___0 = constant_test_bit(16U, __cil_tmp11);
      }
      if (tmp___0 != 0) {
        {
        __cil_tmp12 = & mgr->sendq;
        skb = skb_dequeue(__cil_tmp12);
        }
        {
        __cil_tmp13 = (struct sk_buff *)0;
        __cil_tmp14 = (unsigned long )__cil_tmp13;
        __cil_tmp15 = (unsigned long )skb;
        if (__cil_tmp15 != __cil_tmp14) {
          {
          __cil_tmp16 = & skb->cb;
          __cil_tmp17 = (struct mISDNhead *)__cil_tmp16;
          mgr->lastid = __cil_tmp17->id;
          __cil_tmp18 = mgr->ch.recv;
          __cil_tmp19 = mgr->ch.peer;
          tmp = (*__cil_tmp18)(__cil_tmp19, skb);
          }
          if (tmp == 0) {
            return;
          } else {

          }
          {
          consume_skb(skb);
          }
        } else {

        }
        }
      } else {

      }
      {
      mgr->lastid = 65534U;
      __cil_tmp20 = & mgr->options;
      __cil_tmp21 = (unsigned long volatile *)__cil_tmp20;
      test_and_clear_bit(17, __cil_tmp21);
      }
    } else {

    }
    }
  } else {

  }
  return;
}
}
static void mgr_send_down(struct manager *mgr , struct sk_buff *skb )
{ int tmp ;
  struct sk_buff_head *__cil_tmp4 ;
  u_long *__cil_tmp5 ;
  unsigned long const volatile *__cil_tmp6 ;
  struct mISDNchannel *__cil_tmp7 ;
  void *__cil_tmp8 ;

  {
  {
  __cil_tmp4 = & mgr->sendq;
  skb_queue_tail(__cil_tmp4, skb);
  __cil_tmp5 = & mgr->options;
  __cil_tmp6 = (unsigned long const volatile *)__cil_tmp5;
  tmp = constant_test_bit(16U, __cil_tmp6);
  }
  if (tmp == 0) {
    {
    __cil_tmp7 = & mgr->ch;
    __cil_tmp8 = (void *)0;
    _queue_data(__cil_tmp7, 257U, 65535U, 0U, __cil_tmp8, 208U);
    }
  } else {
    {
    do_send(mgr);
    }
  }
  return;
}
}
static int dl_unit_data(struct manager *mgr , struct sk_buff *skb )
{ int tmp ;
  int tmp___0 ;
  u_long *__cil_tmp5 ;
  unsigned long const volatile *__cil_tmp6 ;
  u_long *__cil_tmp7 ;
  unsigned long const volatile *__cil_tmp8 ;
  struct mISDNchannel *__cil_tmp9 ;
  void *__cil_tmp10 ;
  unsigned char *__cil_tmp11 ;
  unsigned char *__cil_tmp12 ;
  unsigned char *__cil_tmp13 ;
  unsigned char *__cil_tmp14 ;
  unsigned char *__cil_tmp15 ;
  char (*__cil_tmp16)[48U] ;
  struct mISDNhead *__cil_tmp17 ;
  char (*__cil_tmp18)[48U] ;
  struct mISDNhead *__cil_tmp19 ;
  struct sk_buff_head *__cil_tmp20 ;

  {
  {
  __cil_tmp5 = & mgr->options;
  __cil_tmp6 = (unsigned long const volatile *)__cil_tmp5;
  tmp = constant_test_bit(25U, __cil_tmp6);
  }
  if (tmp == 0) {
    return (-22);
  } else {

  }
  {
  __cil_tmp7 = & mgr->options;
  __cil_tmp8 = (unsigned long const volatile *)__cil_tmp7;
  tmp___0 = constant_test_bit(16U, __cil_tmp8);
  }
  if (tmp___0 == 0) {
    {
    __cil_tmp9 = & mgr->ch;
    __cil_tmp10 = (void *)0;
    _queue_data(__cil_tmp9, 257U, 65535U, 0U, __cil_tmp10, 208U);
    }
  } else {

  }
  {
  skb_push(skb, 3U);
  __cil_tmp11 = skb->data;
  *__cil_tmp11 = (unsigned char)2;
  __cil_tmp12 = skb->data;
  __cil_tmp13 = __cil_tmp12 + 1UL;
  *__cil_tmp13 = (unsigned char)255;
  __cil_tmp14 = skb->data;
  __cil_tmp15 = __cil_tmp14 + 2UL;
  *__cil_tmp15 = (unsigned char)3;
  __cil_tmp16 = & skb->cb;
  __cil_tmp17 = (struct mISDNhead *)__cil_tmp16;
  __cil_tmp17->prim = 8193U;
  __cil_tmp18 = & skb->cb;
  __cil_tmp19 = (struct mISDNhead *)__cil_tmp18;
  __cil_tmp19->id = new_id(mgr);
  __cil_tmp20 = & mgr->sendq;
  skb_queue_tail(__cil_tmp20, skb);
  do_send(mgr);
  }
  return (0);
}
}
static unsigned int random_ri(void)
{ u16 x ;
  void *__cil_tmp2 ;

  {
  {
  __cil_tmp2 = (void *)(& x);
  get_random_bytes(__cil_tmp2, 2);
  }
  return ((unsigned int )x);
}
}
static struct layer2 *findtei(struct manager *mgr , int tei )
{ struct layer2 *l2 ;
  u_long flags ;
  struct list_head const *__mptr ;
  struct list_head const *__mptr___0 ;
  rwlock_t *__cil_tmp7 ;
  struct list_head *__cil_tmp8 ;
  signed char __cil_tmp9 ;
  int __cil_tmp10 ;
  signed char __cil_tmp11 ;
  int __cil_tmp12 ;
  signed char __cil_tmp13 ;
  int __cil_tmp14 ;
  signed char __cil_tmp15 ;
  int __cil_tmp16 ;
  struct list_head *__cil_tmp17 ;
  struct list_head *__cil_tmp18 ;
  unsigned long __cil_tmp19 ;
  struct list_head *__cil_tmp20 ;
  unsigned long __cil_tmp21 ;
  rwlock_t *__cil_tmp22 ;

  {
  {
  __cil_tmp7 = & mgr->lock;
  flags = _raw_read_lock_irqsave(__cil_tmp7);
  __cil_tmp8 = mgr->layer2.next;
  __mptr = (struct list_head const *)__cil_tmp8;
  l2 = (struct layer2 *)__mptr;
  }
  goto ldv_38710;
  ldv_38709: ;
  {
  __cil_tmp9 = l2->sapi;
  __cil_tmp10 = (int )__cil_tmp9;
  if (__cil_tmp10 == 0) {
    {
    __cil_tmp11 = l2->tei;
    __cil_tmp12 = (int )__cil_tmp11;
    if (__cil_tmp12 > 0) {
      {
      __cil_tmp13 = l2->tei;
      __cil_tmp14 = (int )__cil_tmp13;
      if (__cil_tmp14 != 127) {
        {
        __cil_tmp15 = l2->tei;
        __cil_tmp16 = (int )__cil_tmp15;
        if (__cil_tmp16 == tei) {
          goto done;
        } else {

        }
        }
      } else {

      }
      }
    } else {

    }
    }
  } else {

  }
  }
  __cil_tmp17 = l2->list.next;
  __mptr___0 = (struct list_head const *)__cil_tmp17;
  l2 = (struct layer2 *)__mptr___0;
  ldv_38710: ;
  {
  __cil_tmp18 = & mgr->layer2;
  __cil_tmp19 = (unsigned long )__cil_tmp18;
  __cil_tmp20 = & l2->list;
  __cil_tmp21 = (unsigned long )__cil_tmp20;
  if (__cil_tmp21 != __cil_tmp19) {
    goto ldv_38709;
  } else {
    goto ldv_38711;
  }
  }
  ldv_38711:
  l2 = (struct layer2 *)0;
  done:
  {
  __cil_tmp22 = & mgr->lock;
  _raw_read_unlock_irqrestore(__cil_tmp22, flags);
  }
  return (l2);
}
}
static void put_tei_msg(struct manager *mgr , u_char m_id , unsigned int ri , int tei )
{ struct sk_buff *skb ;
  u_char bp[8U] ;
  int tmp ;
  u_int tmp___0 ;
  u_long *__cil_tmp9 ;
  unsigned long const volatile *__cil_tmp10 ;
  unsigned int __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  int __cil_tmp14 ;
  signed char __cil_tmp15 ;
  int __cil_tmp16 ;
  int __cil_tmp17 ;
  void *__cil_tmp18 ;
  struct sk_buff *__cil_tmp19 ;
  unsigned long __cil_tmp20 ;
  unsigned long __cil_tmp21 ;

  {
  {
  bp[0] = (u_char )252U;
  __cil_tmp9 = & mgr->options;
  __cil_tmp10 = (unsigned long const volatile *)__cil_tmp9;
  tmp = constant_test_bit(25U, __cil_tmp10);
  }
  if (tmp != 0) {
    __cil_tmp11 = (unsigned int )bp[0];
    __cil_tmp12 = __cil_tmp11 | 2U;
    bp[0] = (u_char )__cil_tmp12;
  } else {

  }
  {
  bp[1] = (u_char )255U;
  bp[2] = (u_char )3U;
  bp[3] = (u_char )15U;
  __cil_tmp13 = ri >> 8;
  bp[4] = (u_char )__cil_tmp13;
  bp[5] = (u_char )ri;
  bp[6] = m_id;
  __cil_tmp14 = tei << 1;
  __cil_tmp15 = (signed char )__cil_tmp14;
  __cil_tmp16 = (int )__cil_tmp15;
  __cil_tmp17 = __cil_tmp16 | 1;
  bp[7] = (u_char )__cil_tmp17;
  tmp___0 = new_id(mgr);
  __cil_tmp18 = (void *)(& bp);
  skb = _alloc_mISDN_skb(8193U, tmp___0, 8U, __cil_tmp18, 32U);
  }
  {
  __cil_tmp19 = (struct sk_buff *)0;
  __cil_tmp20 = (unsigned long )__cil_tmp19;
  __cil_tmp21 = (unsigned long )skb;
  if (__cil_tmp21 == __cil_tmp20) {
    {
    printk("<4>%s: no skb for tei msg\n", "put_tei_msg");
    }
    return;
  } else {

  }
  }
  {
  mgr_send_down(mgr, skb);
  }
  return;
}
}
static void tei_id_request(struct FsmInst *fi , int event , void *arg )
{ struct teimgr *tm ;
  unsigned int tmp ;
  void *__cil_tmp6 ;
  struct layer2 *__cil_tmp7 ;
  signed char __cil_tmp8 ;
  int __cil_tmp9 ;
  void (*__cil_tmp10)(struct FsmInst * , char * , ...) ;
  struct FsmInst *__cil_tmp11 ;
  char *__cil_tmp12 ;
  struct layer2 *__cil_tmp13 ;
  signed char __cil_tmp14 ;
  int __cil_tmp15 ;
  u_int __cil_tmp16 ;
  unsigned int __cil_tmp17 ;
  void (*__cil_tmp18)(struct FsmInst * , char * , ...) ;
  struct FsmInst *__cil_tmp19 ;
  char *__cil_tmp20 ;
  int __cil_tmp21 ;
  struct manager *__cil_tmp22 ;
  u_char __cil_tmp23 ;
  int __cil_tmp24 ;
  unsigned int __cil_tmp25 ;
  struct FsmTimer *__cil_tmp26 ;
  int __cil_tmp27 ;
  void *__cil_tmp28 ;

  {
  __cil_tmp6 = fi->userdata;
  tm = (struct teimgr *)__cil_tmp6;
  {
  __cil_tmp7 = tm->l2;
  __cil_tmp8 = __cil_tmp7->tei;
  __cil_tmp9 = (int )__cil_tmp8;
  if (__cil_tmp9 != 127) {
    {
    __cil_tmp10 = tm->tei_m.printdebug;
    __cil_tmp11 = & tm->tei_m;
    __cil_tmp12 = (char *)"assign request for already assigned tei %d";
    __cil_tmp13 = tm->l2;
    __cil_tmp14 = __cil_tmp13->tei;
    __cil_tmp15 = (int )__cil_tmp14;
    (*__cil_tmp10)(__cil_tmp11, __cil_tmp12, __cil_tmp15);
    }
    return;
  } else {

  }
  }
  {
  tmp = random_ri();
  tm->ri = (int )tmp;
  }
  {
  __cil_tmp16 = *debug___5;
  __cil_tmp17 = __cil_tmp16 & 1048576U;
  if (__cil_tmp17 != 0U) {
    {
    __cil_tmp18 = tm->tei_m.printdebug;
    __cil_tmp19 = & tm->tei_m;
    __cil_tmp20 = (char *)"assign request ri %d";
    __cil_tmp21 = tm->ri;
    (*__cil_tmp18)(__cil_tmp19, __cil_tmp20, __cil_tmp21);
    }
  } else {

  }
  }
  {
  __cil_tmp22 = tm->mgr;
  __cil_tmp23 = (u_char )1;
  __cil_tmp24 = tm->ri;
  __cil_tmp25 = (unsigned int )__cil_tmp24;
  put_tei_msg(__cil_tmp22, __cil_tmp23, __cil_tmp25, 127);
  mISDN_FsmChangeState(fi, 1);
  __cil_tmp26 = & tm->timer;
  __cil_tmp27 = tm->tval;
  __cil_tmp28 = (void *)0;
  mISDN_FsmAddTimer(__cil_tmp26, __cil_tmp27, 8, __cil_tmp28, 1);
  tm->nval = 3;
  }
  return;
}
}
static void tei_id_assign(struct FsmInst *fi , int event , void *arg )
{ struct teimgr *tm ;
  struct layer2 *l2 ;
  u_char *dp ;
  int ri ;
  int tei ;
  u_char *tmp ;
  u_char *tmp___0 ;
  void *__cil_tmp11 ;
  u_char __cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  u_char __cil_tmp15 ;
  int __cil_tmp16 ;
  u_char __cil_tmp17 ;
  int __cil_tmp18 ;
  u_int __cil_tmp19 ;
  unsigned int __cil_tmp20 ;
  void (*__cil_tmp21)(struct FsmInst * , char * , ...) ;
  char *__cil_tmp22 ;
  struct manager *__cil_tmp23 ;
  struct layer2 *__cil_tmp24 ;
  unsigned long __cil_tmp25 ;
  unsigned long __cil_tmp26 ;
  struct teimgr *__cil_tmp27 ;
  int __cil_tmp28 ;
  void (*__cil_tmp29)(struct FsmInst * , char * , ...) ;
  char *__cil_tmp30 ;
  int __cil_tmp31 ;
  struct FsmTimer *__cil_tmp32 ;
  struct layer2 *__cil_tmp33 ;
  u_long __cil_tmp34 ;

  {
  __cil_tmp11 = fi->userdata;
  tm = (struct teimgr *)__cil_tmp11;
  dp = (u_char *)arg;
  tmp = dp;
  dp = dp + 1;
  __cil_tmp12 = *tmp;
  __cil_tmp13 = (unsigned int )__cil_tmp12;
  __cil_tmp14 = __cil_tmp13 << 8;
  ri = (int )__cil_tmp14;
  tmp___0 = dp;
  dp = dp + 1;
  __cil_tmp15 = *tmp___0;
  __cil_tmp16 = (int )__cil_tmp15;
  ri = __cil_tmp16 + ri;
  dp = dp + 1;
  __cil_tmp17 = *dp;
  __cil_tmp18 = (int )__cil_tmp17;
  tei = __cil_tmp18 >> 1;
  {
  __cil_tmp19 = *debug___5;
  __cil_tmp20 = __cil_tmp19 & 1048576U;
  if (__cil_tmp20 != 0U) {
    {
    __cil_tmp21 = tm->tei_m.printdebug;
    __cil_tmp22 = (char *)"identity assign ri %d tei %d";
    (*__cil_tmp21)(fi, __cil_tmp22, ri, tei);
    }
  } else {

  }
  }
  {
  __cil_tmp23 = tm->mgr;
  l2 = findtei(__cil_tmp23, tei);
  }
  {
  __cil_tmp24 = (struct layer2 *)0;
  __cil_tmp25 = (unsigned long )__cil_tmp24;
  __cil_tmp26 = (unsigned long )l2;
  if (__cil_tmp26 != __cil_tmp25) {
    {
    __cil_tmp27 = l2->tm;
    __cil_tmp28 = __cil_tmp27->ri;
    if (__cil_tmp28 != ri) {
      {
      __cil_tmp29 = tm->tei_m.printdebug;
      __cil_tmp30 = (char *)"possible duplicate assignment tei %d";
      (*__cil_tmp29)(fi, __cil_tmp30, tei);
      tei_l2(l2, 24324U, 0UL);
      }
    } else {
      {
      __cil_tmp31 = tm->ri;
      if (__cil_tmp31 == ri) {
        {
        __cil_tmp32 = & tm->timer;
        mISDN_FsmDelTimer(__cil_tmp32, 1);
        mISDN_FsmChangeState(fi, 0);
        __cil_tmp33 = tm->l2;
        __cil_tmp34 = (u_long )tei;
        tei_l2(__cil_tmp33, 6148U, __cil_tmp34);
        }
      } else {

      }
      }
    }
    }
  } else {

  }
  }
  return;
}
}
static void tei_id_test_dup(struct FsmInst *fi , int event , void *arg )
{ struct teimgr *tm ;
  struct layer2 *l2 ;
  u_char *dp ;
  int tei ;
  int ri ;
  u_char *tmp ;
  u_char *tmp___0 ;
  void *__cil_tmp11 ;
  u_char __cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  u_char __cil_tmp15 ;
  int __cil_tmp16 ;
  u_char __cil_tmp17 ;
  int __cil_tmp18 ;
  u_int __cil_tmp19 ;
  unsigned int __cil_tmp20 ;
  void (*__cil_tmp21)(struct FsmInst * , char * , ...) ;
  char *__cil_tmp22 ;
  struct manager *__cil_tmp23 ;
  struct layer2 *__cil_tmp24 ;
  unsigned long __cil_tmp25 ;
  unsigned long __cil_tmp26 ;
  struct teimgr *__cil_tmp27 ;
  int __cil_tmp28 ;
  void (*__cil_tmp29)(struct FsmInst * , char * , ...) ;
  char *__cil_tmp30 ;
  struct teimgr *__cil_tmp31 ;
  struct FsmInst *__cil_tmp32 ;
  void *__cil_tmp33 ;

  {
  __cil_tmp11 = fi->userdata;
  tm = (struct teimgr *)__cil_tmp11;
  dp = (u_char *)arg;
  tmp = dp;
  dp = dp + 1;
  __cil_tmp12 = *tmp;
  __cil_tmp13 = (unsigned int )__cil_tmp12;
  __cil_tmp14 = __cil_tmp13 << 8;
  ri = (int )__cil_tmp14;
  tmp___0 = dp;
  dp = dp + 1;
  __cil_tmp15 = *tmp___0;
  __cil_tmp16 = (int )__cil_tmp15;
  ri = __cil_tmp16 + ri;
  dp = dp + 1;
  __cil_tmp17 = *dp;
  __cil_tmp18 = (int )__cil_tmp17;
  tei = __cil_tmp18 >> 1;
  {
  __cil_tmp19 = *debug___5;
  __cil_tmp20 = __cil_tmp19 & 1048576U;
  if (__cil_tmp20 != 0U) {
    {
    __cil_tmp21 = tm->tei_m.printdebug;
    __cil_tmp22 = (char *)"foreign identity assign ri %d tei %d";
    (*__cil_tmp21)(fi, __cil_tmp22, ri, tei);
    }
  } else {

  }
  }
  {
  __cil_tmp23 = tm->mgr;
  l2 = findtei(__cil_tmp23, tei);
  }
  {
  __cil_tmp24 = (struct layer2 *)0;
  __cil_tmp25 = (unsigned long )__cil_tmp24;
  __cil_tmp26 = (unsigned long )l2;
  if (__cil_tmp26 != __cil_tmp25) {
    {
    __cil_tmp27 = l2->tm;
    __cil_tmp28 = __cil_tmp27->ri;
    if (__cil_tmp28 != ri) {
      {
      __cil_tmp29 = tm->tei_m.printdebug;
      __cil_tmp30 = (char *)"possible duplicate assignment tei %d";
      (*__cil_tmp29)(fi, __cil_tmp30, tei);
      __cil_tmp31 = l2->tm;
      __cil_tmp32 = & __cil_tmp31->tei_m;
      __cil_tmp33 = (void *)0;
      mISDN_FsmEvent(__cil_tmp32, 7, __cil_tmp33);
      }
    } else {

    }
    }
  } else {

  }
  }
  return;
}
}
static void tei_id_denied(struct FsmInst *fi , int event , void *arg )
{ struct teimgr *tm ;
  u_char *dp ;
  int ri ;
  int tei ;
  u_char *tmp ;
  u_char *tmp___0 ;
  void *__cil_tmp10 ;
  u_char __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  u_char __cil_tmp14 ;
  int __cil_tmp15 ;
  u_char __cil_tmp16 ;
  int __cil_tmp17 ;
  u_int __cil_tmp18 ;
  unsigned int __cil_tmp19 ;
  void (*__cil_tmp20)(struct FsmInst * , char * , ...) ;
  char *__cil_tmp21 ;

  {
  __cil_tmp10 = fi->userdata;
  tm = (struct teimgr *)__cil_tmp10;
  dp = (u_char *)arg;
  tmp = dp;
  dp = dp + 1;
  __cil_tmp11 = *tmp;
  __cil_tmp12 = (unsigned int )__cil_tmp11;
  __cil_tmp13 = __cil_tmp12 << 8;
  ri = (int )__cil_tmp13;
  tmp___0 = dp;
  dp = dp + 1;
  __cil_tmp14 = *tmp___0;
  __cil_tmp15 = (int )__cil_tmp14;
  ri = __cil_tmp15 + ri;
  dp = dp + 1;
  __cil_tmp16 = *dp;
  __cil_tmp17 = (int )__cil_tmp16;
  tei = __cil_tmp17 >> 1;
  {
  __cil_tmp18 = *debug___5;
  __cil_tmp19 = __cil_tmp18 & 1048576U;
  if (__cil_tmp19 != 0U) {
    {
    __cil_tmp20 = tm->tei_m.printdebug;
    __cil_tmp21 = (char *)"identity denied ri %d tei %d";
    (*__cil_tmp20)(fi, __cil_tmp21, ri, tei);
    }
  } else {

  }
  }
  return;
}
}
static void tei_id_chk_req(struct FsmInst *fi , int event , void *arg )
{ struct teimgr *tm ;
  u_char *dp ;
  int tei ;
  unsigned int tmp ;
  void *__cil_tmp8 ;
  u_char *__cil_tmp9 ;
  u_char __cil_tmp10 ;
  int __cil_tmp11 ;
  u_int __cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  void (*__cil_tmp14)(struct FsmInst * , char * , ...) ;
  char *__cil_tmp15 ;
  struct layer2 *__cil_tmp16 ;
  signed char __cil_tmp17 ;
  int __cil_tmp18 ;
  struct FsmTimer *__cil_tmp19 ;
  struct FsmInst *__cil_tmp20 ;
  struct manager *__cil_tmp21 ;
  u_char __cil_tmp22 ;
  struct layer2 *__cil_tmp23 ;
  signed char __cil_tmp24 ;
  int __cil_tmp25 ;
  struct layer2 *__cil_tmp26 ;
  signed char __cil_tmp27 ;
  int __cil_tmp28 ;
  struct FsmTimer *__cil_tmp29 ;
  struct FsmInst *__cil_tmp30 ;
  struct manager *__cil_tmp31 ;
  u_char __cil_tmp32 ;
  struct layer2 *__cil_tmp33 ;
  signed char __cil_tmp34 ;
  int __cil_tmp35 ;

  {
  __cil_tmp8 = fi->userdata;
  tm = (struct teimgr *)__cil_tmp8;
  dp = (u_char *)arg;
  __cil_tmp9 = dp + 3UL;
  __cil_tmp10 = *__cil_tmp9;
  __cil_tmp11 = (int )__cil_tmp10;
  tei = __cil_tmp11 >> 1;
  {
  __cil_tmp12 = *debug___5;
  __cil_tmp13 = __cil_tmp12 & 1048576U;
  if (__cil_tmp13 != 0U) {
    {
    __cil_tmp14 = tm->tei_m.printdebug;
    __cil_tmp15 = (char *)"identity check req tei %d";
    (*__cil_tmp14)(fi, __cil_tmp15, tei);
    }
  } else {

  }
  }
  {
  __cil_tmp16 = tm->l2;
  __cil_tmp17 = __cil_tmp16->tei;
  __cil_tmp18 = (int )__cil_tmp17;
  if (__cil_tmp18 != 127) {
    if (tei == 127) {
      {
      __cil_tmp19 = & tm->timer;
      mISDN_FsmDelTimer(__cil_tmp19, 4);
      __cil_tmp20 = & tm->tei_m;
      mISDN_FsmChangeState(__cil_tmp20, 0);
      tmp = random_ri();
      __cil_tmp21 = tm->mgr;
      __cil_tmp22 = (u_char )5;
      __cil_tmp23 = tm->l2;
      __cil_tmp24 = __cil_tmp23->tei;
      __cil_tmp25 = (int )__cil_tmp24;
      put_tei_msg(__cil_tmp21, __cil_tmp22, tmp, __cil_tmp25);
      }
    } else {
      {
      __cil_tmp26 = tm->l2;
      __cil_tmp27 = __cil_tmp26->tei;
      __cil_tmp28 = (int )__cil_tmp27;
      if (__cil_tmp28 == tei) {
        {
        __cil_tmp29 = & tm->timer;
        mISDN_FsmDelTimer(__cil_tmp29, 4);
        __cil_tmp30 = & tm->tei_m;
        mISDN_FsmChangeState(__cil_tmp30, 0);
        tmp = random_ri();
        __cil_tmp31 = tm->mgr;
        __cil_tmp32 = (u_char )5;
        __cil_tmp33 = tm->l2;
        __cil_tmp34 = __cil_tmp33->tei;
        __cil_tmp35 = (int )__cil_tmp34;
        put_tei_msg(__cil_tmp31, __cil_tmp32, tmp, __cil_tmp35);
        }
      } else {

      }
      }
    }
  } else {

  }
  }
  return;
}
}
static void tei_id_remove(struct FsmInst *fi , int event , void *arg )
{ struct teimgr *tm ;
  u_char *dp ;
  int tei ;
  void *__cil_tmp7 ;
  u_char *__cil_tmp8 ;
  u_char __cil_tmp9 ;
  int __cil_tmp10 ;
  u_int __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  void (*__cil_tmp13)(struct FsmInst * , char * , ...) ;
  char *__cil_tmp14 ;
  struct layer2 *__cil_tmp15 ;
  signed char __cil_tmp16 ;
  int __cil_tmp17 ;
  struct FsmTimer *__cil_tmp18 ;
  struct FsmInst *__cil_tmp19 ;
  struct layer2 *__cil_tmp20 ;
  struct layer2 *__cil_tmp21 ;
  signed char __cil_tmp22 ;
  int __cil_tmp23 ;
  struct FsmTimer *__cil_tmp24 ;
  struct FsmInst *__cil_tmp25 ;
  struct layer2 *__cil_tmp26 ;

  {
  __cil_tmp7 = fi->userdata;
  tm = (struct teimgr *)__cil_tmp7;
  dp = (u_char *)arg;
  __cil_tmp8 = dp + 3UL;
  __cil_tmp9 = *__cil_tmp8;
  __cil_tmp10 = (int )__cil_tmp9;
  tei = __cil_tmp10 >> 1;
  {
  __cil_tmp11 = *debug___5;
  __cil_tmp12 = __cil_tmp11 & 1048576U;
  if (__cil_tmp12 != 0U) {
    {
    __cil_tmp13 = tm->tei_m.printdebug;
    __cil_tmp14 = (char *)"identity remove tei %d";
    (*__cil_tmp13)(fi, __cil_tmp14, tei);
    }
  } else {

  }
  }
  {
  __cil_tmp15 = tm->l2;
  __cil_tmp16 = __cil_tmp15->tei;
  __cil_tmp17 = (int )__cil_tmp16;
  if (__cil_tmp17 != 127) {
    if (tei == 127) {
      {
      __cil_tmp18 = & tm->timer;
      mISDN_FsmDelTimer(__cil_tmp18, 5);
      __cil_tmp19 = & tm->tei_m;
      mISDN_FsmChangeState(__cil_tmp19, 0);
      __cil_tmp20 = tm->l2;
      tei_l2(__cil_tmp20, 6660U, 0UL);
      }
    } else {
      {
      __cil_tmp21 = tm->l2;
      __cil_tmp22 = __cil_tmp21->tei;
      __cil_tmp23 = (int )__cil_tmp22;
      if (__cil_tmp23 == tei) {
        {
        __cil_tmp24 = & tm->timer;
        mISDN_FsmDelTimer(__cil_tmp24, 5);
        __cil_tmp25 = & tm->tei_m;
        mISDN_FsmChangeState(__cil_tmp25, 0);
        __cil_tmp26 = tm->l2;
        tei_l2(__cil_tmp26, 6660U, 0UL);
        }
      } else {

      }
      }
    }
  } else {

  }
  }
  return;
}
}
static void tei_id_verify(struct FsmInst *fi , int event , void *arg )
{ struct teimgr *tm ;
  void *__cil_tmp5 ;
  u_int __cil_tmp6 ;
  unsigned int __cil_tmp7 ;
  void (*__cil_tmp8)(struct FsmInst * , char * , ...) ;
  char *__cil_tmp9 ;
  struct layer2 *__cil_tmp10 ;
  signed char __cil_tmp11 ;
  int __cil_tmp12 ;
  struct manager *__cil_tmp13 ;
  u_char __cil_tmp14 ;
  struct layer2 *__cil_tmp15 ;
  signed char __cil_tmp16 ;
  int __cil_tmp17 ;
  struct FsmInst *__cil_tmp18 ;
  struct FsmTimer *__cil_tmp19 ;
  int __cil_tmp20 ;
  void *__cil_tmp21 ;

  {
  __cil_tmp5 = fi->userdata;
  tm = (struct teimgr *)__cil_tmp5;
  {
  __cil_tmp6 = *debug___5;
  __cil_tmp7 = __cil_tmp6 & 1048576U;
  if (__cil_tmp7 != 0U) {
    {
    __cil_tmp8 = tm->tei_m.printdebug;
    __cil_tmp9 = (char *)"id verify request for tei %d";
    __cil_tmp10 = tm->l2;
    __cil_tmp11 = __cil_tmp10->tei;
    __cil_tmp12 = (int )__cil_tmp11;
    (*__cil_tmp8)(fi, __cil_tmp9, __cil_tmp12);
    }
  } else {

  }
  }
  {
  __cil_tmp13 = tm->mgr;
  __cil_tmp14 = (u_char )7;
  __cil_tmp15 = tm->l2;
  __cil_tmp16 = __cil_tmp15->tei;
  __cil_tmp17 = (int )__cil_tmp16;
  put_tei_msg(__cil_tmp13, __cil_tmp14, 0U, __cil_tmp17);
  __cil_tmp18 = & tm->tei_m;
  mISDN_FsmChangeState(__cil_tmp18, 2);
  __cil_tmp19 = & tm->timer;
  __cil_tmp20 = tm->tval;
  __cil_tmp21 = (void *)0;
  mISDN_FsmAddTimer(__cil_tmp19, __cil_tmp20, 8, __cil_tmp21, 2);
  tm->nval = 2;
  }
  return;
}
}
static void tei_id_req_tout(struct FsmInst *fi , int event , void *arg )
{ struct teimgr *tm ;
  unsigned int tmp ;
  void *__cil_tmp6 ;
  int __cil_tmp7 ;
  int __cil_tmp8 ;
  u_int __cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  void (*__cil_tmp11)(struct FsmInst * , char * , ...) ;
  char *__cil_tmp12 ;
  int __cil_tmp13 ;
  int __cil_tmp14 ;
  int __cil_tmp15 ;
  struct manager *__cil_tmp16 ;
  u_char __cil_tmp17 ;
  int __cil_tmp18 ;
  unsigned int __cil_tmp19 ;
  struct FsmTimer *__cil_tmp20 ;
  int __cil_tmp21 ;
  void *__cil_tmp22 ;
  void (*__cil_tmp23)(struct FsmInst * , char * , ...) ;
  char *__cil_tmp24 ;
  struct layer2 *__cil_tmp25 ;

  {
  __cil_tmp6 = fi->userdata;
  tm = (struct teimgr *)__cil_tmp6;
  __cil_tmp7 = tm->nval;
  tm->nval = __cil_tmp7 - 1;
  {
  __cil_tmp8 = tm->nval;
  if (__cil_tmp8 != 0) {
    {
    tmp = random_ri();
    tm->ri = (int )tmp;
    }
    {
    __cil_tmp9 = *debug___5;
    __cil_tmp10 = __cil_tmp9 & 1048576U;
    if (__cil_tmp10 != 0U) {
      {
      __cil_tmp11 = tm->tei_m.printdebug;
      __cil_tmp12 = (char *)"assign req(%d) ri %d";
      __cil_tmp13 = tm->nval;
      __cil_tmp14 = 4 - __cil_tmp13;
      __cil_tmp15 = tm->ri;
      (*__cil_tmp11)(fi, __cil_tmp12, __cil_tmp14, __cil_tmp15);
      }
    } else {

    }
    }
    {
    __cil_tmp16 = tm->mgr;
    __cil_tmp17 = (u_char )1;
    __cil_tmp18 = tm->ri;
    __cil_tmp19 = (unsigned int )__cil_tmp18;
    put_tei_msg(__cil_tmp16, __cil_tmp17, __cil_tmp19, 127);
    __cil_tmp20 = & tm->timer;
    __cil_tmp21 = tm->tval;
    __cil_tmp22 = (void *)0;
    mISDN_FsmAddTimer(__cil_tmp20, __cil_tmp21, 8, __cil_tmp22, 3);
    }
  } else {
    {
    __cil_tmp23 = tm->tei_m.printdebug;
    __cil_tmp24 = (char *)"assign req failed";
    (*__cil_tmp23)(fi, __cil_tmp24);
    __cil_tmp25 = tm->l2;
    tei_l2(__cil_tmp25, 24324U, 0UL);
    mISDN_FsmChangeState(fi, 0);
    }
  }
  }
  return;
}
}
static void tei_id_ver_tout(struct FsmInst *fi , int event , void *arg )
{ struct teimgr *tm ;
  void *__cil_tmp5 ;
  int __cil_tmp6 ;
  int __cil_tmp7 ;
  u_int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  void (*__cil_tmp10)(struct FsmInst * , char * , ...) ;
  char *__cil_tmp11 ;
  int __cil_tmp12 ;
  int __cil_tmp13 ;
  struct layer2 *__cil_tmp14 ;
  signed char __cil_tmp15 ;
  int __cil_tmp16 ;
  struct manager *__cil_tmp17 ;
  u_char __cil_tmp18 ;
  struct layer2 *__cil_tmp19 ;
  signed char __cil_tmp20 ;
  int __cil_tmp21 ;
  struct FsmTimer *__cil_tmp22 ;
  int __cil_tmp23 ;
  void *__cil_tmp24 ;
  void (*__cil_tmp25)(struct FsmInst * , char * , ...) ;
  char *__cil_tmp26 ;
  struct layer2 *__cil_tmp27 ;
  signed char __cil_tmp28 ;
  int __cil_tmp29 ;
  struct layer2 *__cil_tmp30 ;

  {
  __cil_tmp5 = fi->userdata;
  tm = (struct teimgr *)__cil_tmp5;
  __cil_tmp6 = tm->nval;
  tm->nval = __cil_tmp6 - 1;
  {
  __cil_tmp7 = tm->nval;
  if (__cil_tmp7 != 0) {
    {
    __cil_tmp8 = *debug___5;
    __cil_tmp9 = __cil_tmp8 & 1048576U;
    if (__cil_tmp9 != 0U) {
      {
      __cil_tmp10 = tm->tei_m.printdebug;
      __cil_tmp11 = (char *)"id verify req(%d) for tei %d";
      __cil_tmp12 = tm->nval;
      __cil_tmp13 = 3 - __cil_tmp12;
      __cil_tmp14 = tm->l2;
      __cil_tmp15 = __cil_tmp14->tei;
      __cil_tmp16 = (int )__cil_tmp15;
      (*__cil_tmp10)(fi, __cil_tmp11, __cil_tmp13, __cil_tmp16);
      }
    } else {

    }
    }
    {
    __cil_tmp17 = tm->mgr;
    __cil_tmp18 = (u_char )7;
    __cil_tmp19 = tm->l2;
    __cil_tmp20 = __cil_tmp19->tei;
    __cil_tmp21 = (int )__cil_tmp20;
    put_tei_msg(__cil_tmp17, __cil_tmp18, 0U, __cil_tmp21);
    __cil_tmp22 = & tm->timer;
    __cil_tmp23 = tm->tval;
    __cil_tmp24 = (void *)0;
    mISDN_FsmAddTimer(__cil_tmp22, __cil_tmp23, 8, __cil_tmp24, 4);
    }
  } else {
    {
    __cil_tmp25 = tm->tei_m.printdebug;
    __cil_tmp26 = (char *)"verify req for tei %d failed";
    __cil_tmp27 = tm->l2;
    __cil_tmp28 = __cil_tmp27->tei;
    __cil_tmp29 = (int )__cil_tmp28;
    (*__cil_tmp25)(fi, __cil_tmp26, __cil_tmp29);
    __cil_tmp30 = tm->l2;
    tei_l2(__cil_tmp30, 6660U, 0UL);
    mISDN_FsmChangeState(fi, 0);
    }
  }
  }
  return;
}
}
static struct FsmNode TeiFnListUser[11U] =
  { {0, 0, & tei_id_request},
        {0, 1, & tei_id_test_dup},
        {0, 7, & tei_id_verify},
        {0, 6, & tei_id_remove},
        {0, 4, & tei_id_chk_req},
        {1, 8, & tei_id_req_tout},
        {1, 1, & tei_id_assign},
        {1, 3, & tei_id_denied},
        {2, 8, & tei_id_ver_tout},
        {2, 6, & tei_id_remove},
        {2, 4, & tei_id_chk_req}};
static void tei_l2remove(struct layer2 *l2 )
{ struct teimgr *__cil_tmp2 ;
  struct manager *__cil_tmp3 ;
  u_char __cil_tmp4 ;
  signed char __cil_tmp5 ;
  int __cil_tmp6 ;
  struct list_head *__cil_tmp7 ;
  ctrl_func_t *__cil_tmp8 ;
  struct mISDNchannel *__cil_tmp9 ;
  void *__cil_tmp10 ;

  {
  {
  __cil_tmp2 = l2->tm;
  __cil_tmp3 = __cil_tmp2->mgr;
  __cil_tmp4 = (u_char )6;
  __cil_tmp5 = l2->tei;
  __cil_tmp6 = (int )__cil_tmp5;
  put_tei_msg(__cil_tmp3, __cil_tmp4, 0U, __cil_tmp6);
  tei_l2(l2, 6660U, 0UL);
  __cil_tmp7 = & l2->ch.list;
  list_del(__cil_tmp7);
  __cil_tmp8 = l2->ch.ctrl;
  __cil_tmp9 = & l2->ch;
  __cil_tmp10 = (void *)0;
  (*__cil_tmp8)(__cil_tmp9, 512U, __cil_tmp10);
  }
  return;
}
}
static void tei_assign_req(struct FsmInst *fi , int event , void *arg )
{ struct teimgr *tm ;
  u_char *dp ;
  u_char *tmp ;
  u_char *tmp___0 ;
  void *__cil_tmp8 ;
  struct layer2 *__cil_tmp9 ;
  signed char __cil_tmp10 ;
  int __cil_tmp11 ;
  void (*__cil_tmp12)(struct FsmInst * , char * , ...) ;
  struct FsmInst *__cil_tmp13 ;
  char *__cil_tmp14 ;
  u_char __cil_tmp15 ;
  unsigned int __cil_tmp16 ;
  unsigned int __cil_tmp17 ;
  u_char __cil_tmp18 ;
  int __cil_tmp19 ;
  int __cil_tmp20 ;
  u_int __cil_tmp21 ;
  unsigned int __cil_tmp22 ;
  void (*__cil_tmp23)(struct FsmInst * , char * , ...) ;
  struct FsmInst *__cil_tmp24 ;
  char *__cil_tmp25 ;
  int __cil_tmp26 ;
  u_char __cil_tmp27 ;
  int __cil_tmp28 ;
  struct manager *__cil_tmp29 ;
  u_char __cil_tmp30 ;
  int __cil_tmp31 ;
  unsigned int __cil_tmp32 ;
  struct layer2 *__cil_tmp33 ;
  signed char __cil_tmp34 ;
  int __cil_tmp35 ;

  {
  __cil_tmp8 = fi->userdata;
  tm = (struct teimgr *)__cil_tmp8;
  dp = (u_char *)arg;
  {
  __cil_tmp9 = tm->l2;
  __cil_tmp10 = __cil_tmp9->tei;
  __cil_tmp11 = (int )__cil_tmp10;
  if (__cil_tmp11 == 127) {
    {
    __cil_tmp12 = tm->tei_m.printdebug;
    __cil_tmp13 = & tm->tei_m;
    __cil_tmp14 = (char *)"net tei assign request without tei";
    (*__cil_tmp12)(__cil_tmp13, __cil_tmp14);
    }
    return;
  } else {

  }
  }
  tmp = dp;
  dp = dp + 1;
  __cil_tmp15 = *tmp;
  __cil_tmp16 = (unsigned int )__cil_tmp15;
  __cil_tmp17 = __cil_tmp16 << 8;
  tm->ri = (int )__cil_tmp17;
  tmp___0 = dp;
  dp = dp + 1;
  __cil_tmp18 = *tmp___0;
  __cil_tmp19 = (int )__cil_tmp18;
  __cil_tmp20 = tm->ri;
  tm->ri = __cil_tmp20 + __cil_tmp19;
  {
  __cil_tmp21 = *debug___5;
  __cil_tmp22 = __cil_tmp21 & 1048576U;
  if (__cil_tmp22 != 0U) {
    {
    __cil_tmp23 = tm->tei_m.printdebug;
    __cil_tmp24 = & tm->tei_m;
    __cil_tmp25 = (char *)"net assign request ri %d teim %d";
    __cil_tmp26 = tm->ri;
    __cil_tmp27 = *dp;
    __cil_tmp28 = (int )__cil_tmp27;
    (*__cil_tmp23)(__cil_tmp24, __cil_tmp25, __cil_tmp26, __cil_tmp28);
    }
  } else {

  }
  }
  {
  __cil_tmp29 = tm->mgr;
  __cil_tmp30 = (u_char )2;
  __cil_tmp31 = tm->ri;
  __cil_tmp32 = (unsigned int )__cil_tmp31;
  __cil_tmp33 = tm->l2;
  __cil_tmp34 = __cil_tmp33->tei;
  __cil_tmp35 = (int )__cil_tmp34;
  put_tei_msg(__cil_tmp29, __cil_tmp30, __cil_tmp32, __cil_tmp35);
  mISDN_FsmChangeState(fi, 0);
  }
  return;
}
}
static void tei_id_chk_req_net(struct FsmInst *fi , int event , void *arg )
{ struct teimgr *tm ;
  void *__cil_tmp5 ;
  u_int __cil_tmp6 ;
  unsigned int __cil_tmp7 ;
  void (*__cil_tmp8)(struct FsmInst * , char * , ...) ;
  char *__cil_tmp9 ;
  struct layer2 *__cil_tmp10 ;
  signed char __cil_tmp11 ;
  int __cil_tmp12 ;
  struct manager *__cil_tmp13 ;
  u_char __cil_tmp14 ;
  struct layer2 *__cil_tmp15 ;
  signed char __cil_tmp16 ;
  int __cil_tmp17 ;
  struct FsmInst *__cil_tmp18 ;
  struct FsmTimer *__cil_tmp19 ;
  int __cil_tmp20 ;
  void *__cil_tmp21 ;

  {
  __cil_tmp5 = fi->userdata;
  tm = (struct teimgr *)__cil_tmp5;
  {
  __cil_tmp6 = *debug___5;
  __cil_tmp7 = __cil_tmp6 & 1048576U;
  if (__cil_tmp7 != 0U) {
    {
    __cil_tmp8 = tm->tei_m.printdebug;
    __cil_tmp9 = (char *)"id check request for tei %d";
    __cil_tmp10 = tm->l2;
    __cil_tmp11 = __cil_tmp10->tei;
    __cil_tmp12 = (int )__cil_tmp11;
    (*__cil_tmp8)(fi, __cil_tmp9, __cil_tmp12);
    }
  } else {

  }
  }
  {
  tm->rcnt = 0;
  __cil_tmp13 = tm->mgr;
  __cil_tmp14 = (u_char )4;
  __cil_tmp15 = tm->l2;
  __cil_tmp16 = __cil_tmp15->tei;
  __cil_tmp17 = (int )__cil_tmp16;
  put_tei_msg(__cil_tmp13, __cil_tmp14, 0U, __cil_tmp17);
  __cil_tmp18 = & tm->tei_m;
  mISDN_FsmChangeState(__cil_tmp18, 2);
  __cil_tmp19 = & tm->timer;
  __cil_tmp20 = tm->tval;
  __cil_tmp21 = (void *)0;
  mISDN_FsmAddTimer(__cil_tmp19, __cil_tmp20, 8, __cil_tmp21, 2);
  tm->nval = 2;
  }
  return;
}
}
static void tei_id_chk_resp(struct FsmInst *fi , int event , void *arg )
{ struct teimgr *tm ;
  u_char *dp ;
  int tei ;
  void *__cil_tmp7 ;
  u_char *__cil_tmp8 ;
  u_char __cil_tmp9 ;
  int __cil_tmp10 ;
  u_int __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  void (*__cil_tmp13)(struct FsmInst * , char * , ...) ;
  char *__cil_tmp14 ;
  struct layer2 *__cil_tmp15 ;
  signed char __cil_tmp16 ;
  int __cil_tmp17 ;
  int __cil_tmp18 ;

  {
  __cil_tmp7 = fi->userdata;
  tm = (struct teimgr *)__cil_tmp7;
  dp = (u_char *)arg;
  __cil_tmp8 = dp + 3UL;
  __cil_tmp9 = *__cil_tmp8;
  __cil_tmp10 = (int )__cil_tmp9;
  tei = __cil_tmp10 >> 1;
  {
  __cil_tmp11 = *debug___5;
  __cil_tmp12 = __cil_tmp11 & 1048576U;
  if (__cil_tmp12 != 0U) {
    {
    __cil_tmp13 = tm->tei_m.printdebug;
    __cil_tmp14 = (char *)"identity check resp tei %d";
    (*__cil_tmp13)(fi, __cil_tmp14, tei);
    }
  } else {

  }
  }
  {
  __cil_tmp15 = tm->l2;
  __cil_tmp16 = __cil_tmp15->tei;
  __cil_tmp17 = (int )__cil_tmp16;
  if (__cil_tmp17 == tei) {
    __cil_tmp18 = tm->rcnt;
    tm->rcnt = __cil_tmp18 + 1;
  } else {

  }
  }
  return;
}
}
static void tei_id_verify_net(struct FsmInst *fi , int event , void *arg )
{ struct teimgr *tm ;
  u_char *dp ;
  int tei ;
  void *__cil_tmp7 ;
  u_char *__cil_tmp8 ;
  u_char __cil_tmp9 ;
  int __cil_tmp10 ;
  u_int __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  void (*__cil_tmp13)(struct FsmInst * , char * , ...) ;
  char *__cil_tmp14 ;
  struct layer2 *__cil_tmp15 ;
  signed char __cil_tmp16 ;
  int __cil_tmp17 ;
  struct layer2 *__cil_tmp18 ;
  signed char __cil_tmp19 ;
  int __cil_tmp20 ;

  {
  __cil_tmp7 = fi->userdata;
  tm = (struct teimgr *)__cil_tmp7;
  dp = (u_char *)arg;
  __cil_tmp8 = dp + 3UL;
  __cil_tmp9 = *__cil_tmp8;
  __cil_tmp10 = (int )__cil_tmp9;
  tei = __cil_tmp10 >> 1;
  {
  __cil_tmp11 = *debug___5;
  __cil_tmp12 = __cil_tmp11 & 1048576U;
  if (__cil_tmp12 != 0U) {
    {
    __cil_tmp13 = tm->tei_m.printdebug;
    __cil_tmp14 = (char *)"identity verify req tei %d/%d";
    __cil_tmp15 = tm->l2;
    __cil_tmp16 = __cil_tmp15->tei;
    __cil_tmp17 = (int )__cil_tmp16;
    (*__cil_tmp13)(fi, __cil_tmp14, tei, __cil_tmp17);
    }
  } else {

  }
  }
  {
  __cil_tmp18 = tm->l2;
  __cil_tmp19 = __cil_tmp18->tei;
  __cil_tmp20 = (int )__cil_tmp19;
  if (__cil_tmp20 == tei) {
    {
    tei_id_chk_req_net(fi, event, arg);
    }
  } else {

  }
  }
  return;
}
}
static void tei_id_ver_tout_net(struct FsmInst *fi , int event , void *arg )
{ struct teimgr *tm ;
  void *__cil_tmp5 ;
  int __cil_tmp6 ;
  u_int __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  void (*__cil_tmp9)(struct FsmInst * , char * , ...) ;
  char *__cil_tmp10 ;
  struct layer2 *__cil_tmp11 ;
  signed char __cil_tmp12 ;
  int __cil_tmp13 ;
  int __cil_tmp14 ;
  struct layer2 *__cil_tmp15 ;
  int __cil_tmp16 ;
  int __cil_tmp17 ;
  u_int __cil_tmp18 ;
  unsigned int __cil_tmp19 ;
  void (*__cil_tmp20)(struct FsmInst * , char * , ...) ;
  char *__cil_tmp21 ;
  int __cil_tmp22 ;
  int __cil_tmp23 ;
  struct layer2 *__cil_tmp24 ;
  signed char __cil_tmp25 ;
  int __cil_tmp26 ;
  struct manager *__cil_tmp27 ;
  u_char __cil_tmp28 ;
  struct layer2 *__cil_tmp29 ;
  signed char __cil_tmp30 ;
  int __cil_tmp31 ;
  struct FsmTimer *__cil_tmp32 ;
  int __cil_tmp33 ;
  void *__cil_tmp34 ;
  void (*__cil_tmp35)(struct FsmInst * , char * , ...) ;
  char *__cil_tmp36 ;
  struct layer2 *__cil_tmp37 ;
  signed char __cil_tmp38 ;
  int __cil_tmp39 ;
  struct layer2 *__cil_tmp40 ;

  {
  __cil_tmp5 = fi->userdata;
  tm = (struct teimgr *)__cil_tmp5;
  {
  __cil_tmp6 = tm->rcnt;
  if (__cil_tmp6 == 1) {
    {
    __cil_tmp7 = *debug___5;
    __cil_tmp8 = __cil_tmp7 & 1048576U;
    if (__cil_tmp8 != 0U) {
      {
      __cil_tmp9 = tm->tei_m.printdebug;
      __cil_tmp10 = (char *)"check req for tei %d successful\n";
      __cil_tmp11 = tm->l2;
      __cil_tmp12 = __cil_tmp11->tei;
      __cil_tmp13 = (int )__cil_tmp12;
      (*__cil_tmp9)(fi, __cil_tmp10, __cil_tmp13);
      }
    } else {

    }
    }
    {
    mISDN_FsmChangeState(fi, 0);
    }
  } else {
    {
    __cil_tmp14 = tm->rcnt;
    if (__cil_tmp14 > 1) {
      {
      __cil_tmp15 = tm->l2;
      tei_l2remove(__cil_tmp15);
      }
    } else {
      __cil_tmp16 = tm->nval;
      tm->nval = __cil_tmp16 - 1;
      {
      __cil_tmp17 = tm->nval;
      if (__cil_tmp17 != 0) {
        {
        __cil_tmp18 = *debug___5;
        __cil_tmp19 = __cil_tmp18 & 1048576U;
        if (__cil_tmp19 != 0U) {
          {
          __cil_tmp20 = tm->tei_m.printdebug;
          __cil_tmp21 = (char *)"id check req(%d) for tei %d";
          __cil_tmp22 = tm->nval;
          __cil_tmp23 = 3 - __cil_tmp22;
          __cil_tmp24 = tm->l2;
          __cil_tmp25 = __cil_tmp24->tei;
          __cil_tmp26 = (int )__cil_tmp25;
          (*__cil_tmp20)(fi, __cil_tmp21, __cil_tmp23, __cil_tmp26);
          }
        } else {

        }
        }
        {
        __cil_tmp27 = tm->mgr;
        __cil_tmp28 = (u_char )4;
        __cil_tmp29 = tm->l2;
        __cil_tmp30 = __cil_tmp29->tei;
        __cil_tmp31 = (int )__cil_tmp30;
        put_tei_msg(__cil_tmp27, __cil_tmp28, 0U, __cil_tmp31);
        __cil_tmp32 = & tm->timer;
        __cil_tmp33 = tm->tval;
        __cil_tmp34 = (void *)0;
        mISDN_FsmAddTimer(__cil_tmp32, __cil_tmp33, 8, __cil_tmp34, 4);
        }
      } else {
        {
        __cil_tmp35 = tm->tei_m.printdebug;
        __cil_tmp36 = (char *)"check req for tei %d failed";
        __cil_tmp37 = tm->l2;
        __cil_tmp38 = __cil_tmp37->tei;
        __cil_tmp39 = (int )__cil_tmp38;
        (*__cil_tmp35)(fi, __cil_tmp36, __cil_tmp39);
        mISDN_FsmChangeState(fi, 0);
        __cil_tmp40 = tm->l2;
        tei_l2remove(__cil_tmp40);
        }
      }
      }
    }
    }
  }
  }
  return;
}
}
static struct FsmNode TeiFnListNet[5U] = { {0, 2, & tei_assign_req},
        {0, 7, & tei_id_verify_net},
        {0, 4, & tei_id_chk_req_net},
        {2, 8, & tei_id_ver_tout_net},
        {2, 5, & tei_id_chk_resp}};
static void tei_ph_data_ind(struct teimgr *tm , u_int mt , u_char *dp , int len )
{ int tmp ;
  struct layer2 *__cil_tmp6 ;
  u_long *__cil_tmp7 ;
  unsigned long const volatile *__cil_tmp8 ;
  u_int __cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  void (*__cil_tmp11)(struct FsmInst * , char * , ...) ;
  struct FsmInst *__cil_tmp12 ;
  char *__cil_tmp13 ;
  struct FsmInst *__cil_tmp14 ;
  void *__cil_tmp15 ;
  struct FsmInst *__cil_tmp16 ;
  void *__cil_tmp17 ;
  struct FsmInst *__cil_tmp18 ;
  void *__cil_tmp19 ;
  struct FsmInst *__cil_tmp20 ;
  void *__cil_tmp21 ;
  struct FsmInst *__cil_tmp22 ;
  void *__cil_tmp23 ;
  struct FsmInst *__cil_tmp24 ;
  void *__cil_tmp25 ;

  {
  {
  __cil_tmp6 = tm->l2;
  __cil_tmp7 = & __cil_tmp6->flag;
  __cil_tmp8 = (unsigned long const volatile *)__cil_tmp7;
  tmp = constant_test_bit(15U, __cil_tmp8);
  }
  if (tmp != 0) {
    return;
  } else {

  }
  {
  __cil_tmp9 = *debug___5;
  __cil_tmp10 = __cil_tmp9 & 1048576U;
  if (__cil_tmp10 != 0U) {
    {
    __cil_tmp11 = tm->tei_m.printdebug;
    __cil_tmp12 = & tm->tei_m;
    __cil_tmp13 = (char *)"tei handler mt %x";
    (*__cil_tmp11)(__cil_tmp12, __cil_tmp13, mt);
    }
  } else {

  }
  }
  if (mt == 2U) {
    {
    __cil_tmp14 = & tm->tei_m;
    __cil_tmp15 = (void *)dp;
    mISDN_FsmEvent(__cil_tmp14, 1, __cil_tmp15);
    }
  } else
  if (mt == 3U) {
    {
    __cil_tmp16 = & tm->tei_m;
    __cil_tmp17 = (void *)dp;
    mISDN_FsmEvent(__cil_tmp16, 3, __cil_tmp17);
    }
  } else
  if (mt == 4U) {
    {
    __cil_tmp18 = & tm->tei_m;
    __cil_tmp19 = (void *)dp;
    mISDN_FsmEvent(__cil_tmp18, 4, __cil_tmp19);
    }
  } else
  if (mt == 6U) {
    {
    __cil_tmp20 = & tm->tei_m;
    __cil_tmp21 = (void *)dp;
    mISDN_FsmEvent(__cil_tmp20, 6, __cil_tmp21);
    }
  } else
  if (mt == 7U) {
    {
    __cil_tmp22 = & tm->tei_m;
    __cil_tmp23 = (void *)dp;
    mISDN_FsmEvent(__cil_tmp22, 7, __cil_tmp23);
    }
  } else
  if (mt == 5U) {
    {
    __cil_tmp24 = & tm->tei_m;
    __cil_tmp25 = (void *)dp;
    mISDN_FsmEvent(__cil_tmp24, 5, __cil_tmp25);
    }
  } else {

  }
  return;
}
}
static struct layer2 *create_new_tei(struct manager *mgr , int tei , int sapi )
{ u_long opt ;
  u_long flags ;
  int id ;
  struct layer2 *l2 ;
  void *tmp ;
  struct mISDNchannel *__cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  struct mISDNchannel *__cil_tmp11 ;
  unsigned long __cil_tmp12 ;
  unsigned long volatile *__cil_tmp13 ;
  struct mISDNstack *__cil_tmp14 ;
  struct mISDNdevice *__cil_tmp15 ;
  u_int __cil_tmp16 ;
  unsigned int __cil_tmp17 ;
  unsigned long volatile *__cil_tmp18 ;
  struct mISDNchannel *__cil_tmp19 ;
  struct layer2 *__cil_tmp20 ;
  unsigned long __cil_tmp21 ;
  unsigned long __cil_tmp22 ;
  struct teimgr *__cil_tmp23 ;
  unsigned long __cil_tmp24 ;
  struct teimgr *__cil_tmp25 ;
  unsigned long __cil_tmp26 ;
  void const *__cil_tmp27 ;
  struct teimgr *__cil_tmp28 ;
  struct teimgr *__cil_tmp29 ;
  struct teimgr *__cil_tmp30 ;
  u_int __cil_tmp31 ;
  int __cil_tmp32 ;
  struct teimgr *__cil_tmp33 ;
  struct teimgr *__cil_tmp34 ;
  struct teimgr *__cil_tmp35 ;
  struct teimgr *__cil_tmp36 ;
  struct teimgr *__cil_tmp37 ;
  struct teimgr *__cil_tmp38 ;
  struct teimgr *__cil_tmp39 ;
  struct FsmInst *__cil_tmp40 ;
  struct teimgr *__cil_tmp41 ;
  struct FsmTimer *__cil_tmp42 ;
  rwlock_t *__cil_tmp43 ;
  struct list_head *__cil_tmp44 ;
  struct list_head *__cil_tmp45 ;
  rwlock_t *__cil_tmp46 ;
  ctrl_func_t *__cil_tmp47 ;
  struct mISDNchannel *__cil_tmp48 ;
  void *__cil_tmp49 ;
  struct mISDNchannel *__cil_tmp50 ;
  struct mISDNstack *__cil_tmp51 ;
  ctrl_func_t *__cil_tmp52 ;
  struct mISDNchannel *__cil_tmp53 ;
  void *__cil_tmp54 ;

  {
  opt = 0UL;
  {
  __cil_tmp9 = (struct mISDNchannel *)0;
  __cil_tmp10 = (unsigned long )__cil_tmp9;
  __cil_tmp11 = mgr->up;
  __cil_tmp12 = (unsigned long )__cil_tmp11;
  if (__cil_tmp12 == __cil_tmp10) {
    return ((struct layer2 *)0);
  } else {

  }
  }
  if (tei >= 0) {
    if (tei <= 63) {
      {
      __cil_tmp13 = (unsigned long volatile *)(& opt);
      test_and_set_bit(3, __cil_tmp13);
      }
    } else {

    }
  } else {

  }
  {
  __cil_tmp14 = mgr->ch.st;
  __cil_tmp15 = __cil_tmp14->dev;
  __cil_tmp16 = __cil_tmp15->Dprotocols;
  __cil_tmp17 = __cil_tmp16 & 24U;
  if (__cil_tmp17 != 0U) {
    {
    __cil_tmp18 = (unsigned long volatile *)(& opt);
    test_and_set_bit(1, __cil_tmp18);
    }
  } else {

  }
  }
  {
  __cil_tmp19 = mgr->up;
  l2 = create_l2(__cil_tmp19, 17U, opt, tei, sapi);
  }
  {
  __cil_tmp20 = (struct layer2 *)0;
  __cil_tmp21 = (unsigned long )__cil_tmp20;
  __cil_tmp22 = (unsigned long )l2;
  if (__cil_tmp22 == __cil_tmp21) {
    {
    printk("<4>%s:no memory for layer2\n", "create_new_tei");
    }
    return ((struct layer2 *)0);
  } else {

  }
  }
  {
  tmp = kzalloc(224UL, 208U);
  l2->tm = (struct teimgr *)tmp;
  }
  {
  __cil_tmp23 = (struct teimgr *)0;
  __cil_tmp24 = (unsigned long )__cil_tmp23;
  __cil_tmp25 = l2->tm;
  __cil_tmp26 = (unsigned long )__cil_tmp25;
  if (__cil_tmp26 == __cil_tmp24) {
    {
    __cil_tmp27 = (void const *)l2;
    kfree(__cil_tmp27);
    printk("<4>%s:no memory for teimgr\n", "create_new_tei");
    }
    return ((struct layer2 *)0);
  } else {

  }
  }
  {
  __cil_tmp28 = l2->tm;
  __cil_tmp28->mgr = mgr;
  __cil_tmp29 = l2->tm;
  __cil_tmp29->l2 = l2;
  __cil_tmp30 = l2->tm;
  __cil_tmp31 = *debug___5;
  __cil_tmp32 = (int )__cil_tmp31;
  __cil_tmp30->tei_m.debug = __cil_tmp32 & 2097152;
  __cil_tmp33 = l2->tm;
  __cil_tmp34 = l2->tm;
  __cil_tmp33->tei_m.userdata = (void *)__cil_tmp34;
  __cil_tmp35 = l2->tm;
  __cil_tmp35->tei_m.printdebug = & tei_debug;
  __cil_tmp36 = l2->tm;
  __cil_tmp36->tei_m.fsm = & teifsmn;
  __cil_tmp37 = l2->tm;
  __cil_tmp37->tei_m.state = 0;
  __cil_tmp38 = l2->tm;
  __cil_tmp38->tval = 2000;
  __cil_tmp39 = l2->tm;
  __cil_tmp40 = & __cil_tmp39->tei_m;
  __cil_tmp41 = l2->tm;
  __cil_tmp42 = & __cil_tmp41->timer;
  mISDN_FsmInitTimer(__cil_tmp40, __cil_tmp42);
  __cil_tmp43 = & mgr->lock;
  flags = _raw_write_lock_irqsave(__cil_tmp43);
  id = get_free_id(mgr);
  __cil_tmp44 = & l2->list;
  __cil_tmp45 = & mgr->layer2;
  list_add_tail(__cil_tmp44, __cil_tmp45);
  __cil_tmp46 = & mgr->lock;
  _raw_write_unlock_irqrestore(__cil_tmp46, flags);
  }
  if (id < 0) {
    {
    __cil_tmp47 = l2->ch.ctrl;
    __cil_tmp48 = & l2->ch;
    __cil_tmp49 = (void *)0;
    (*__cil_tmp47)(__cil_tmp48, 512U, __cil_tmp49);
    printk("<4>%s:no free id\n", "create_new_tei");
    }
    return ((struct layer2 *)0);
  } else {
    {
    l2->ch.nr = (u_int )id;
    __cil_tmp50 = & l2->ch;
    __cil_tmp51 = mgr->ch.st;
    __add_layer2(__cil_tmp50, __cil_tmp51);
    l2->ch.recv = mgr->ch.recv;
    l2->ch.peer = mgr->ch.peer;
    __cil_tmp52 = l2->ch.ctrl;
    __cil_tmp53 = & l2->ch;
    __cil_tmp54 = (void *)0;
    (*__cil_tmp52)(__cil_tmp53, 256U, __cil_tmp54);
    }
  }
  return (l2);
}
}
static void new_tei_req(struct manager *mgr , u_char *dp )
{ int tei ;
  int ri ;
  struct layer2 *l2 ;
  u_char __cil_tmp6 ;
  int __cil_tmp7 ;
  u_char *__cil_tmp8 ;
  u_char __cil_tmp9 ;
  int __cil_tmp10 ;
  struct mISDNchannel *__cil_tmp11 ;
  unsigned long __cil_tmp12 ;
  struct mISDNchannel *__cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  u_char *__cil_tmp15 ;
  u_char __cil_tmp16 ;
  int __cil_tmp17 ;
  int __cil_tmp18 ;
  u_char *__cil_tmp19 ;
  u_char __cil_tmp20 ;
  unsigned int __cil_tmp21 ;
  u_char *__cil_tmp22 ;
  u_char __cil_tmp23 ;
  int __cil_tmp24 ;
  struct layer2 *__cil_tmp25 ;
  unsigned long __cil_tmp26 ;
  unsigned long __cil_tmp27 ;
  struct teimgr *__cil_tmp28 ;
  struct FsmInst *__cil_tmp29 ;
  void *__cil_tmp30 ;
  u_char __cil_tmp31 ;
  unsigned int __cil_tmp32 ;

  {
  __cil_tmp6 = *dp;
  __cil_tmp7 = (int )__cil_tmp6;
  ri = __cil_tmp7 << 8;
  __cil_tmp8 = dp + 1UL;
  __cil_tmp9 = *__cil_tmp8;
  __cil_tmp10 = (int )__cil_tmp9;
  ri = __cil_tmp10 + ri;
  {
  __cil_tmp11 = (struct mISDNchannel *)0;
  __cil_tmp12 = (unsigned long )__cil_tmp11;
  __cil_tmp13 = mgr->up;
  __cil_tmp14 = (unsigned long )__cil_tmp13;
  if (__cil_tmp14 == __cil_tmp12) {
    goto denied;
  } else {

  }
  }
  {
  __cil_tmp15 = dp + 3UL;
  __cil_tmp16 = *__cil_tmp15;
  __cil_tmp17 = (int )__cil_tmp16;
  __cil_tmp18 = __cil_tmp17 & 1;
  if (__cil_tmp18 == 0) {
    goto denied;
  } else {

  }
  }
  {
  __cil_tmp19 = dp + 3UL;
  __cil_tmp20 = *__cil_tmp19;
  __cil_tmp21 = (unsigned int )__cil_tmp20;
  if (__cil_tmp21 != 255U) {
    __cil_tmp22 = dp + 3UL;
    __cil_tmp23 = *__cil_tmp22;
    __cil_tmp24 = (int )__cil_tmp23;
    tei = __cil_tmp24 >> 1;
  } else {
    {
    tei = get_free_tei(mgr);
    }
  }
  }
  if (tei < 0) {
    {
    printk("<4>%s:No free tei\n", "new_tei_req");
    }
    goto denied;
  } else {

  }
  {
  l2 = create_new_tei(mgr, tei, 0);
  }
  {
  __cil_tmp25 = (struct layer2 *)0;
  __cil_tmp26 = (unsigned long )__cil_tmp25;
  __cil_tmp27 = (unsigned long )l2;
  if (__cil_tmp27 == __cil_tmp26) {
    goto denied;
  } else {
    {
    __cil_tmp28 = l2->tm;
    __cil_tmp29 = & __cil_tmp28->tei_m;
    __cil_tmp30 = (void *)dp;
    mISDN_FsmEvent(__cil_tmp29, 2, __cil_tmp30);
    }
  }
  }
  return;
  denied:
  {
  __cil_tmp31 = (u_char )3;
  __cil_tmp32 = (unsigned int )ri;
  put_tei_msg(mgr, __cil_tmp31, __cil_tmp32, 127);
  }
  return;
}
}
static int ph_data_ind(struct manager *mgr , struct sk_buff *skb )
{ int ret ;
  struct layer2 *l2 ;
  struct layer2 *nl2 ;
  u_char mt ;
  int tmp ;
  int tmp___0 ;
  struct list_head const *__mptr ;
  struct list_head const *__mptr___0 ;
  struct list_head const *__mptr___1 ;
  unsigned int __cil_tmp12 ;
  u_int __cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  unsigned int __cil_tmp15 ;
  unsigned char *__cil_tmp16 ;
  unsigned char __cil_tmp17 ;
  int __cil_tmp18 ;
  int __cil_tmp19 ;
  unsigned int __cil_tmp20 ;
  unsigned char *__cil_tmp21 ;
  unsigned char __cil_tmp22 ;
  int __cil_tmp23 ;
  unsigned char *__cil_tmp24 ;
  unsigned char *__cil_tmp25 ;
  unsigned char __cil_tmp26 ;
  int __cil_tmp27 ;
  int __cil_tmp28 ;
  unsigned char *__cil_tmp29 ;
  unsigned char *__cil_tmp30 ;
  unsigned char __cil_tmp31 ;
  int __cil_tmp32 ;
  int __cil_tmp33 ;
  unsigned int __cil_tmp34 ;
  unsigned char *__cil_tmp35 ;
  unsigned char *__cil_tmp36 ;
  unsigned char __cil_tmp37 ;
  int __cil_tmp38 ;
  int __cil_tmp39 ;
  unsigned char *__cil_tmp40 ;
  unsigned char *__cil_tmp41 ;
  unsigned char __cil_tmp42 ;
  unsigned int __cil_tmp43 ;
  unsigned char *__cil_tmp44 ;
  unsigned char *__cil_tmp45 ;
  int __cil_tmp46 ;
  int __cil_tmp47 ;
  int __cil_tmp48 ;
  int __cil_tmp49 ;
  int __cil_tmp50 ;
  int __cil_tmp51 ;
  int __cil_tmp52 ;
  u_long *__cil_tmp53 ;
  unsigned long const volatile *__cil_tmp54 ;
  u_long *__cil_tmp55 ;
  unsigned long const volatile *__cil_tmp56 ;
  unsigned int __cil_tmp57 ;
  unsigned char *__cil_tmp58 ;
  unsigned char *__cil_tmp59 ;
  struct list_head *__cil_tmp60 ;
  struct list_head *__cil_tmp61 ;
  struct teimgr *__cil_tmp62 ;
  u_int __cil_tmp63 ;
  unsigned char *__cil_tmp64 ;
  unsigned char *__cil_tmp65 ;
  unsigned int __cil_tmp66 ;
  unsigned int __cil_tmp67 ;
  int __cil_tmp68 ;
  struct list_head *__cil_tmp69 ;
  struct list_head *__cil_tmp70 ;
  unsigned long __cil_tmp71 ;
  struct list_head *__cil_tmp72 ;
  unsigned long __cil_tmp73 ;

  {
  ret = -22;
  {
  __cil_tmp12 = skb->len;
  if (__cil_tmp12 <= 7U) {
    {
    __cil_tmp13 = *debug___5;
    __cil_tmp14 = __cil_tmp13 & 1048576U;
    if (__cil_tmp14 != 0U) {
      {
      __cil_tmp15 = skb->len;
      printk("<7>%s: short mgr frame %d/8\n", "ph_data_ind", __cil_tmp15);
      }
    } else {

    }
    }
    goto done;
  } else {

  }
  }
  {
  __cil_tmp16 = skb->data;
  __cil_tmp17 = *__cil_tmp16;
  __cil_tmp18 = (int )__cil_tmp17;
  __cil_tmp19 = __cil_tmp18 >> 2;
  __cil_tmp20 = (unsigned int )__cil_tmp19;
  if (__cil_tmp20 != 63U) {
    goto done;
  } else {

  }
  }
  {
  __cil_tmp21 = skb->data;
  __cil_tmp22 = *__cil_tmp21;
  __cil_tmp23 = (int )__cil_tmp22;
  if (__cil_tmp23 & 1) {
    goto done;
  } else {

  }
  }
  {
  __cil_tmp24 = skb->data;
  __cil_tmp25 = __cil_tmp24 + 1UL;
  __cil_tmp26 = *__cil_tmp25;
  __cil_tmp27 = (int )__cil_tmp26;
  __cil_tmp28 = __cil_tmp27 & 1;
  if (__cil_tmp28 == 0) {
    goto done;
  } else {

  }
  }
  {
  __cil_tmp29 = skb->data;
  __cil_tmp30 = __cil_tmp29 + 1UL;
  __cil_tmp31 = *__cil_tmp30;
  __cil_tmp32 = (int )__cil_tmp31;
  __cil_tmp33 = __cil_tmp32 >> 1;
  __cil_tmp34 = (unsigned int )__cil_tmp33;
  if (__cil_tmp34 != 127U) {
    goto done;
  } else {

  }
  }
  {
  __cil_tmp35 = skb->data;
  __cil_tmp36 = __cil_tmp35 + 2UL;
  __cil_tmp37 = *__cil_tmp36;
  __cil_tmp38 = (int )__cil_tmp37;
  __cil_tmp39 = __cil_tmp38 & 239;
  if (__cil_tmp39 != 3) {
    goto done;
  } else {

  }
  }
  {
  __cil_tmp40 = skb->data;
  __cil_tmp41 = __cil_tmp40 + 3UL;
  __cil_tmp42 = *__cil_tmp41;
  __cil_tmp43 = (unsigned int )__cil_tmp42;
  if (__cil_tmp43 != 15U) {
    goto done;
  } else {

  }
  }
  __cil_tmp44 = skb->data;
  __cil_tmp45 = __cil_tmp44 + 6UL;
  mt = *__cil_tmp45;
  {
  __cil_tmp46 = (int )mt;
  if (__cil_tmp46 == 1) {
    goto case_1;
  } else {
    {
    __cil_tmp47 = (int )mt;
    if (__cil_tmp47 == 5) {
      goto case_5;
    } else {
      {
      __cil_tmp48 = (int )mt;
      if (__cil_tmp48 == 7) {
        goto case_7;
      } else {
        {
        __cil_tmp49 = (int )mt;
        if (__cil_tmp49 == 2) {
          goto case_2;
        } else {
          {
          __cil_tmp50 = (int )mt;
          if (__cil_tmp50 == 3) {
            goto case_3;
          } else {
            {
            __cil_tmp51 = (int )mt;
            if (__cil_tmp51 == 4) {
              goto case_4;
            } else {
              {
              __cil_tmp52 = (int )mt;
              if (__cil_tmp52 == 6) {
                goto case_6;
              } else {
                goto switch_default;
                if (0) {
                  case_1: ;
                  case_5: ;
                  case_7:
                  {
                  __cil_tmp53 = & mgr->options;
                  __cil_tmp54 = (unsigned long const volatile *)__cil_tmp53;
                  tmp = constant_test_bit(25U, __cil_tmp54);
                  }
                  if (tmp == 0) {
                    goto done;
                  } else {

                  }
                  goto ldv_38877;
                  case_2: ;
                  case_3: ;
                  case_4: ;
                  case_6:
                  {
                  __cil_tmp55 = & mgr->options;
                  __cil_tmp56 = (unsigned long const volatile *)__cil_tmp55;
                  tmp___0 = constant_test_bit(25U, __cil_tmp56);
                  }
                  if (tmp___0 != 0) {
                    goto done;
                  } else {

                  }
                  goto ldv_38877;
                  switch_default: ;
                  goto done;
                } else {

                }
              }
              }
            }
            }
          }
          }
        }
        }
      }
      }
    }
    }
  }
  }
  ldv_38877:
  ret = 0;
  {
  __cil_tmp57 = (unsigned int )mt;
  if (__cil_tmp57 == 1U) {
    {
    __cil_tmp58 = skb->data;
    __cil_tmp59 = __cil_tmp58 + 4U;
    new_tei_req(mgr, __cil_tmp59);
    }
    goto done;
  } else {

  }
  }
  __cil_tmp60 = mgr->layer2.next;
  __mptr = (struct list_head const *)__cil_tmp60;
  l2 = (struct layer2 *)__mptr;
  __cil_tmp61 = l2->list.next;
  __mptr___0 = (struct list_head const *)__cil_tmp61;
  nl2 = (struct layer2 *)__mptr___0;
  goto ldv_38890;
  ldv_38889:
  {
  __cil_tmp62 = l2->tm;
  __cil_tmp63 = (u_int )mt;
  __cil_tmp64 = skb->data;
  __cil_tmp65 = __cil_tmp64 + 4U;
  __cil_tmp66 = skb->len;
  __cil_tmp67 = __cil_tmp66 - 4U;
  __cil_tmp68 = (int )__cil_tmp67;
  tei_ph_data_ind(__cil_tmp62, __cil_tmp63, __cil_tmp65, __cil_tmp68);
  l2 = nl2;
  __cil_tmp69 = nl2->list.next;
  __mptr___1 = (struct list_head const *)__cil_tmp69;
  nl2 = (struct layer2 *)__mptr___1;
  }
  ldv_38890: ;
  {
  __cil_tmp70 = & mgr->layer2;
  __cil_tmp71 = (unsigned long )__cil_tmp70;
  __cil_tmp72 = & l2->list;
  __cil_tmp73 = (unsigned long )__cil_tmp72;
  if (__cil_tmp73 != __cil_tmp71) {
    goto ldv_38889;
  } else {
    goto ldv_38891;
  }
  }
  ldv_38891: ;
  done: ;
  return (ret);
}
}
int l2_tei(struct layer2 *l2 , u_int cmd , u_long arg )
{ struct teimgr *tm ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  u_long *__cil_tmp11 ;
  unsigned long const volatile *__cil_tmp12 ;
  u_int __cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  int __cil_tmp15 ;
  int __cil_tmp16 ;
  int __cil_tmp17 ;
  int __cil_tmp18 ;
  int __cil_tmp19 ;
  struct FsmInst *__cil_tmp20 ;
  void *__cil_tmp21 ;
  struct manager *__cil_tmp22 ;
  u_long *__cil_tmp23 ;
  unsigned long const volatile *__cil_tmp24 ;
  struct FsmInst *__cil_tmp25 ;
  signed char *__cil_tmp26 ;
  void *__cil_tmp27 ;
  struct manager *__cil_tmp28 ;
  u_long *__cil_tmp29 ;
  unsigned long const volatile *__cil_tmp30 ;
  struct FsmInst *__cil_tmp31 ;
  void *__cil_tmp32 ;
  struct manager *__cil_tmp33 ;
  u_long *__cil_tmp34 ;
  unsigned long const volatile *__cil_tmp35 ;
  struct manager *__cil_tmp36 ;
  struct FsmInst *__cil_tmp37 ;
  void *__cil_tmp38 ;
  struct manager *__cil_tmp39 ;
  u_long *__cil_tmp40 ;
  unsigned long const volatile *__cil_tmp41 ;
  struct manager *__cil_tmp42 ;
  struct FsmInst *__cil_tmp43 ;
  void *__cil_tmp44 ;
  struct manager *__cil_tmp45 ;
  u_long *__cil_tmp46 ;
  unsigned long const volatile *__cil_tmp47 ;
  struct manager *__cil_tmp48 ;
  struct FsmInst *__cil_tmp49 ;
  void *__cil_tmp50 ;

  {
  {
  tm = l2->tm;
  __cil_tmp11 = & l2->flag;
  __cil_tmp12 = (unsigned long const volatile *)__cil_tmp11;
  tmp = constant_test_bit(15U, __cil_tmp12);
  }
  if (tmp != 0) {
    return (0);
  } else {

  }
  {
  __cil_tmp13 = *debug___5;
  __cil_tmp14 = __cil_tmp13 & 1048576U;
  if (__cil_tmp14 != 0U) {
    {
    printk("<7>%s: cmd(%x)\n", "l2_tei", cmd);
    }
  } else {

  }
  }
  {
  __cil_tmp15 = (int )cmd;
  if (__cil_tmp15 == 6404) {
    goto case_6404;
  } else {
    {
    __cil_tmp16 = (int )cmd;
    if (__cil_tmp16 == 7940) {
      goto case_7940;
    } else {
      {
      __cil_tmp17 = (int )cmd;
      if (__cil_tmp17 == 7172) {
        goto case_7172;
      } else {
        {
        __cil_tmp18 = (int )cmd;
        if (__cil_tmp18 == 7428) {
          goto case_7428;
        } else {
          {
          __cil_tmp19 = (int )cmd;
          if (__cil_tmp19 == 7684) {
            goto case_7684;
          } else
          if (0) {
            case_6404:
            {
            __cil_tmp20 = & tm->tei_m;
            __cil_tmp21 = (void *)0;
            mISDN_FsmEvent(__cil_tmp20, 0, __cil_tmp21);
            }
            goto ldv_38900;
            case_7940:
            {
            __cil_tmp22 = tm->mgr;
            __cil_tmp23 = & __cil_tmp22->options;
            __cil_tmp24 = (unsigned long const volatile *)__cil_tmp23;
            tmp___0 = constant_test_bit(25U, __cil_tmp24);
            }
            if (tmp___0 != 0) {
              {
              __cil_tmp25 = & tm->tei_m;
              __cil_tmp26 = & l2->tei;
              __cil_tmp27 = (void *)__cil_tmp26;
              mISDN_FsmEvent(__cil_tmp25, 4, __cil_tmp27);
              }
            } else {

            }
            {
            __cil_tmp28 = tm->mgr;
            __cil_tmp29 = & __cil_tmp28->options;
            __cil_tmp30 = (unsigned long const volatile *)__cil_tmp29;
            tmp___1 = constant_test_bit(24U, __cil_tmp30);
            }
            if (tmp___1 != 0) {
              {
              __cil_tmp31 = & tm->tei_m;
              __cil_tmp32 = (void *)0;
              mISDN_FsmEvent(__cil_tmp31, 7, __cil_tmp32);
              }
            } else {

            }
            goto ldv_38900;
            case_7172:
            {
            __cil_tmp33 = tm->mgr;
            __cil_tmp34 = & __cil_tmp33->options;
            __cil_tmp35 = (unsigned long const volatile *)__cil_tmp34;
            tmp___2 = constant_test_bit(25U, __cil_tmp35);
            }
            if (tmp___2 != 0) {
              {
              __cil_tmp36 = tm->mgr;
              __cil_tmp37 = & __cil_tmp36->deact;
              __cil_tmp38 = (void *)0;
              mISDN_FsmEvent(__cil_tmp37, 0, __cil_tmp38);
              }
            } else {

            }
            goto ldv_38900;
            case_7428:
            {
            __cil_tmp39 = tm->mgr;
            __cil_tmp40 = & __cil_tmp39->options;
            __cil_tmp41 = (unsigned long const volatile *)__cil_tmp40;
            tmp___3 = constant_test_bit(25U, __cil_tmp41);
            }
            if (tmp___3 != 0) {
              {
              __cil_tmp42 = tm->mgr;
              __cil_tmp43 = & __cil_tmp42->deact;
              __cil_tmp44 = (void *)0;
              mISDN_FsmEvent(__cil_tmp43, 2, __cil_tmp44);
              }
            } else {

            }
            goto ldv_38900;
            case_7684:
            {
            __cil_tmp45 = tm->mgr;
            __cil_tmp46 = & __cil_tmp45->options;
            __cil_tmp47 = (unsigned long const volatile *)__cil_tmp46;
            tmp___4 = constant_test_bit(25U, __cil_tmp47);
            }
            if (tmp___4 != 0) {
              {
              __cil_tmp48 = tm->mgr;
              __cil_tmp49 = & __cil_tmp48->deact;
              __cil_tmp50 = (void *)0;
              mISDN_FsmEvent(__cil_tmp49, 4, __cil_tmp50);
              }
            } else {

            }
            goto ldv_38900;
          } else {

          }
          }
        }
        }
      }
      }
    }
    }
  }
  }
  ldv_38900: ;
  return (0);
}
}
void TEIrelease(struct layer2 *l2 )
{ struct teimgr *tm ;
  u_long flags ;
  struct FsmTimer *__cil_tmp4 ;
  struct manager *__cil_tmp5 ;
  rwlock_t *__cil_tmp6 ;
  struct list_head *__cil_tmp7 ;
  struct manager *__cil_tmp8 ;
  rwlock_t *__cil_tmp9 ;
  void const *__cil_tmp10 ;

  {
  {
  tm = l2->tm;
  __cil_tmp4 = & tm->timer;
  mISDN_FsmDelTimer(__cil_tmp4, 1);
  __cil_tmp5 = tm->mgr;
  __cil_tmp6 = & __cil_tmp5->lock;
  flags = _raw_write_lock_irqsave(__cil_tmp6);
  __cil_tmp7 = & l2->list;
  list_del(__cil_tmp7);
  __cil_tmp8 = tm->mgr;
  __cil_tmp9 = & __cil_tmp8->lock;
  _raw_write_unlock_irqrestore(__cil_tmp9, flags);
  l2->tm = (struct teimgr *)0;
  __cil_tmp10 = (void const *)tm;
  kfree(__cil_tmp10);
  }
  return;
}
}
static int create_teimgr(struct manager *mgr , struct channel_req *crq )
{ struct layer2 *l2 ;
  u_long opt ;
  u_long flags ;
  int id ;
  char const *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  struct list_head const *__mptr ;
  struct list_head const *__mptr___0 ;
  int tmp___2 ;
  void *tmp___3 ;
  u_int __cil_tmp14 ;
  unsigned int __cil_tmp15 ;
  struct mISDNstack *__cil_tmp16 ;
  struct mISDNdevice *__cil_tmp17 ;
  struct device *__cil_tmp18 ;
  struct device const *__cil_tmp19 ;
  u_int __cil_tmp20 ;
  unsigned char __cil_tmp21 ;
  int __cil_tmp22 ;
  unsigned char __cil_tmp23 ;
  int __cil_tmp24 ;
  unsigned char __cil_tmp25 ;
  int __cil_tmp26 ;
  unsigned char __cil_tmp27 ;
  int __cil_tmp28 ;
  unsigned char __cil_tmp29 ;
  signed char __cil_tmp30 ;
  int __cil_tmp31 ;
  unsigned char __cil_tmp32 ;
  unsigned int __cil_tmp33 ;
  unsigned long volatile *__cil_tmp34 ;
  unsigned char __cil_tmp35 ;
  unsigned int __cil_tmp36 ;
  unsigned long volatile *__cil_tmp37 ;
  u_long *__cil_tmp38 ;
  unsigned long const volatile *__cil_tmp39 ;
  u_int __cil_tmp40 ;
  unsigned char __cil_tmp41 ;
  unsigned int __cil_tmp42 ;
  unsigned char __cil_tmp43 ;
  unsigned int __cil_tmp44 ;
  struct mISDNchannel *__cil_tmp45 ;
  unsigned long __cil_tmp46 ;
  struct mISDNchannel *__cil_tmp47 ;
  unsigned long __cil_tmp48 ;
  u_long *__cil_tmp49 ;
  unsigned long const volatile *__cil_tmp50 ;
  u_int __cil_tmp51 ;
  unsigned char __cil_tmp52 ;
  unsigned int __cil_tmp53 ;
  unsigned char __cil_tmp54 ;
  unsigned int __cil_tmp55 ;
  u_int __cil_tmp56 ;
  u_long *__cil_tmp57 ;
  unsigned long volatile *__cil_tmp58 ;
  u_int __cil_tmp59 ;
  u_long *__cil_tmp60 ;
  unsigned long volatile *__cil_tmp61 ;
  struct mISDNstack *__cil_tmp62 ;
  struct mISDNdevice *__cil_tmp63 ;
  u_int __cil_tmp64 ;
  unsigned int __cil_tmp65 ;
  unsigned long volatile *__cil_tmp66 ;
  u_int __cil_tmp67 ;
  unsigned char __cil_tmp68 ;
  unsigned int __cil_tmp69 ;
  void *__cil_tmp70 ;
  struct list_head *__cil_tmp71 ;
  struct list_head const *__cil_tmp72 ;
  rwlock_t *__cil_tmp73 ;
  struct list_head *__cil_tmp74 ;
  ctrl_func_t *__cil_tmp75 ;
  struct mISDNchannel *__cil_tmp76 ;
  void *__cil_tmp77 ;
  struct list_head *__cil_tmp78 ;
  struct list_head *__cil_tmp79 ;
  unsigned long __cil_tmp80 ;
  struct list_head *__cil_tmp81 ;
  unsigned long __cil_tmp82 ;
  rwlock_t *__cil_tmp83 ;
  struct mISDNchannel *__cil_tmp84 ;
  u_int __cil_tmp85 ;
  unsigned char __cil_tmp86 ;
  int __cil_tmp87 ;
  unsigned char __cil_tmp88 ;
  int __cil_tmp89 ;
  struct layer2 *__cil_tmp90 ;
  unsigned long __cil_tmp91 ;
  unsigned long __cil_tmp92 ;
  struct teimgr *__cil_tmp93 ;
  unsigned long __cil_tmp94 ;
  struct teimgr *__cil_tmp95 ;
  unsigned long __cil_tmp96 ;
  void const *__cil_tmp97 ;
  struct teimgr *__cil_tmp98 ;
  struct teimgr *__cil_tmp99 ;
  struct teimgr *__cil_tmp100 ;
  u_int __cil_tmp101 ;
  int __cil_tmp102 ;
  struct teimgr *__cil_tmp103 ;
  struct teimgr *__cil_tmp104 ;
  struct teimgr *__cil_tmp105 ;
  u_int __cil_tmp106 ;
  struct teimgr *__cil_tmp107 ;
  struct teimgr *__cil_tmp108 ;
  struct teimgr *__cil_tmp109 ;
  struct teimgr *__cil_tmp110 ;
  struct teimgr *__cil_tmp111 ;
  struct teimgr *__cil_tmp112 ;
  struct teimgr *__cil_tmp113 ;
  struct FsmInst *__cil_tmp114 ;
  struct teimgr *__cil_tmp115 ;
  struct FsmTimer *__cil_tmp116 ;
  rwlock_t *__cil_tmp117 ;
  struct list_head *__cil_tmp118 ;
  struct list_head *__cil_tmp119 ;
  rwlock_t *__cil_tmp120 ;
  ctrl_func_t *__cil_tmp121 ;
  struct mISDNchannel *__cil_tmp122 ;
  void *__cil_tmp123 ;
  struct mISDNchannel *__cil_tmp124 ;

  {
  opt = 0UL;
  {
  __cil_tmp14 = *debug___5;
  __cil_tmp15 = __cil_tmp14 & 1048576U;
  if (__cil_tmp15 != 0U) {
    {
    __cil_tmp16 = mgr->ch.st;
    __cil_tmp17 = __cil_tmp16->dev;
    __cil_tmp18 = & __cil_tmp17->dev;
    __cil_tmp19 = (struct device const *)__cil_tmp18;
    tmp = dev_name(__cil_tmp19);
    __cil_tmp20 = crq->protocol;
    __cil_tmp21 = crq->adr.dev;
    __cil_tmp22 = (int )__cil_tmp21;
    __cil_tmp23 = crq->adr.channel;
    __cil_tmp24 = (int )__cil_tmp23;
    __cil_tmp25 = crq->adr.sapi;
    __cil_tmp26 = (int )__cil_tmp25;
    __cil_tmp27 = crq->adr.tei;
    __cil_tmp28 = (int )__cil_tmp27;
    printk("<7>%s: %s proto(%x) adr(%d %d %d %d)\n", "create_teimgr", tmp, __cil_tmp20,
           __cil_tmp22, __cil_tmp24, __cil_tmp26, __cil_tmp28);
    }
  } else {

  }
  }
  {
  __cil_tmp29 = crq->adr.tei;
  __cil_tmp30 = (signed char )__cil_tmp29;
  __cil_tmp31 = (int )__cil_tmp30;
  if (__cil_tmp31 < 0) {
    return (-22);
  } else {

  }
  }
  {
  __cil_tmp32 = crq->adr.tei;
  __cil_tmp33 = (unsigned int )__cil_tmp32;
  if (__cil_tmp33 <= 63U) {
    {
    __cil_tmp34 = (unsigned long volatile *)(& opt);
    test_and_set_bit(3, __cil_tmp34);
    }
  } else {

  }
  }
  {
  __cil_tmp35 = crq->adr.tei;
  __cil_tmp36 = (unsigned int )__cil_tmp35;
  if (__cil_tmp36 == 0U) {
    {
    __cil_tmp37 = (unsigned long volatile *)(& opt);
    test_and_set_bit(2, __cil_tmp37);
    }
  } else {

  }
  }
  {
  __cil_tmp38 = & mgr->options;
  __cil_tmp39 = (unsigned long const volatile *)__cil_tmp38;
  tmp___1 = constant_test_bit(25U, __cil_tmp39);
  }
  if (tmp___1 != 0) {
    {
    __cil_tmp40 = crq->protocol;
    if (__cil_tmp40 == 16U) {
      return (-93);
    } else {

    }
    }
    {
    __cil_tmp41 = crq->adr.tei;
    __cil_tmp42 = (unsigned int )__cil_tmp41;
    if (__cil_tmp42 != 0U) {
      {
      __cil_tmp43 = crq->adr.tei;
      __cil_tmp44 = (unsigned int )__cil_tmp43;
      if (__cil_tmp44 != 127U) {
        return (-22);
      } else {

      }
      }
    } else {

    }
    }
    {
    __cil_tmp45 = (struct mISDNchannel *)0;
    __cil_tmp46 = (unsigned long )__cil_tmp45;
    __cil_tmp47 = mgr->up;
    __cil_tmp48 = (unsigned long )__cil_tmp47;
    if (__cil_tmp48 != __cil_tmp46) {
      {
      printk("<4>%s: only one network manager is allowed\n", "create_teimgr");
      }
      return (-16);
    } else {

    }
    }
  } else {
    {
    __cil_tmp49 = & mgr->options;
    __cil_tmp50 = (unsigned long const volatile *)__cil_tmp49;
    tmp___0 = constant_test_bit(24U, __cil_tmp50);
    }
    if (tmp___0 != 0) {
      {
      __cil_tmp51 = crq->protocol;
      if (__cil_tmp51 == 17U) {
        return (-93);
      } else {

      }
      }
      {
      __cil_tmp52 = crq->adr.tei;
      __cil_tmp53 = (unsigned int )__cil_tmp52;
      if (__cil_tmp53 > 63U) {
        {
        __cil_tmp54 = crq->adr.tei;
        __cil_tmp55 = (unsigned int )__cil_tmp54;
        if (__cil_tmp55 <= 126U) {
          return (-22);
        } else {

        }
        }
      } else {

      }
      }
    } else {
      {
      __cil_tmp56 = crq->protocol;
      if (__cil_tmp56 == 17U) {
        {
        __cil_tmp57 = & mgr->options;
        __cil_tmp58 = (unsigned long volatile *)__cil_tmp57;
        test_and_set_bit(25, __cil_tmp58);
        }
      } else {

      }
      }
      {
      __cil_tmp59 = crq->protocol;
      if (__cil_tmp59 == 16U) {
        {
        __cil_tmp60 = & mgr->options;
        __cil_tmp61 = (unsigned long volatile *)__cil_tmp60;
        test_and_set_bit(24, __cil_tmp61);
        }
      } else {

      }
      }
    }
  }
  {
  __cil_tmp62 = mgr->ch.st;
  __cil_tmp63 = __cil_tmp62->dev;
  __cil_tmp64 = __cil_tmp63->Dprotocols;
  __cil_tmp65 = __cil_tmp64 & 24U;
  if (__cil_tmp65 != 0U) {
    {
    __cil_tmp66 = (unsigned long volatile *)(& opt);
    test_and_set_bit(1, __cil_tmp66);
    }
  } else {

  }
  }
  {
  __cil_tmp67 = crq->protocol;
  if (__cil_tmp67 == 17U) {
    {
    __cil_tmp68 = crq->adr.tei;
    __cil_tmp69 = (unsigned int )__cil_tmp68;
    if (__cil_tmp69 == 127U) {
      {
      mgr->up = crq->ch;
      id = 1;
      __cil_tmp70 = (void *)(& id);
      teiup_create(mgr, 8U, 4, __cil_tmp70);
      crq->ch = (struct mISDNchannel *)0;
      __cil_tmp71 = & mgr->layer2;
      __cil_tmp72 = (struct list_head const *)__cil_tmp71;
      tmp___2 = list_empty(__cil_tmp72);
      }
      if (tmp___2 == 0) {
        {
        __cil_tmp73 = & mgr->lock;
        flags = _raw_read_lock_irqsave(__cil_tmp73);
        __cil_tmp74 = mgr->layer2.next;
        __mptr = (struct list_head const *)__cil_tmp74;
        l2 = (struct layer2 *)__mptr;
        }
        goto ldv_38933;
        ldv_38932:
        {
        l2->up = mgr->up;
        __cil_tmp75 = l2->ch.ctrl;
        __cil_tmp76 = & l2->ch;
        __cil_tmp77 = (void *)0;
        (*__cil_tmp75)(__cil_tmp76, 256U, __cil_tmp77);
        __cil_tmp78 = l2->list.next;
        __mptr___0 = (struct list_head const *)__cil_tmp78;
        l2 = (struct layer2 *)__mptr___0;
        }
        ldv_38933: ;
        {
        __cil_tmp79 = & mgr->layer2;
        __cil_tmp80 = (unsigned long )__cil_tmp79;
        __cil_tmp81 = & l2->list;
        __cil_tmp82 = (unsigned long )__cil_tmp81;
        if (__cil_tmp82 != __cil_tmp80) {
          goto ldv_38932;
        } else {
          goto ldv_38934;
        }
        }
        ldv_38934:
        {
        __cil_tmp83 = & mgr->lock;
        _raw_read_unlock_irqrestore(__cil_tmp83, flags);
        }
      } else {

      }
      return (0);
    } else {

    }
    }
  } else {

  }
  }
  {
  __cil_tmp84 = crq->ch;
  __cil_tmp85 = crq->protocol;
  __cil_tmp86 = crq->adr.tei;
  __cil_tmp87 = (int )__cil_tmp86;
  __cil_tmp88 = crq->adr.sapi;
  __cil_tmp89 = (int )__cil_tmp88;
  l2 = create_l2(__cil_tmp84, __cil_tmp85, opt, __cil_tmp87, __cil_tmp89);
  }
  {
  __cil_tmp90 = (struct layer2 *)0;
  __cil_tmp91 = (unsigned long )__cil_tmp90;
  __cil_tmp92 = (unsigned long )l2;
  if (__cil_tmp92 == __cil_tmp91) {
    return (-12);
  } else {

  }
  }
  {
  tmp___3 = kzalloc(224UL, 208U);
  l2->tm = (struct teimgr *)tmp___3;
  }
  {
  __cil_tmp93 = (struct teimgr *)0;
  __cil_tmp94 = (unsigned long )__cil_tmp93;
  __cil_tmp95 = l2->tm;
  __cil_tmp96 = (unsigned long )__cil_tmp95;
  if (__cil_tmp96 == __cil_tmp94) {
    {
    __cil_tmp97 = (void const *)l2;
    kfree(__cil_tmp97);
    printk("<3>kmalloc teimgr failed\n");
    }
    return (-12);
  } else {

  }
  }
  __cil_tmp98 = l2->tm;
  __cil_tmp98->mgr = mgr;
  __cil_tmp99 = l2->tm;
  __cil_tmp99->l2 = l2;
  __cil_tmp100 = l2->tm;
  __cil_tmp101 = *debug___5;
  __cil_tmp102 = (int )__cil_tmp101;
  __cil_tmp100->tei_m.debug = __cil_tmp102 & 2097152;
  __cil_tmp103 = l2->tm;
  __cil_tmp104 = l2->tm;
  __cil_tmp103->tei_m.userdata = (void *)__cil_tmp104;
  __cil_tmp105 = l2->tm;
  __cil_tmp105->tei_m.printdebug = & tei_debug;
  {
  __cil_tmp106 = crq->protocol;
  if (__cil_tmp106 == 16U) {
    __cil_tmp107 = l2->tm;
    __cil_tmp107->tei_m.fsm = & teifsmu;
    __cil_tmp108 = l2->tm;
    __cil_tmp108->tei_m.state = 0;
    __cil_tmp109 = l2->tm;
    __cil_tmp109->tval = 1000;
  } else {
    __cil_tmp110 = l2->tm;
    __cil_tmp110->tei_m.fsm = & teifsmn;
    __cil_tmp111 = l2->tm;
    __cil_tmp111->tei_m.state = 0;
    __cil_tmp112 = l2->tm;
    __cil_tmp112->tval = 2000;
  }
  }
  {
  __cil_tmp113 = l2->tm;
  __cil_tmp114 = & __cil_tmp113->tei_m;
  __cil_tmp115 = l2->tm;
  __cil_tmp116 = & __cil_tmp115->timer;
  mISDN_FsmInitTimer(__cil_tmp114, __cil_tmp116);
  __cil_tmp117 = & mgr->lock;
  flags = _raw_write_lock_irqsave(__cil_tmp117);
  id = get_free_id(mgr);
  __cil_tmp118 = & l2->list;
  __cil_tmp119 = & mgr->layer2;
  list_add_tail(__cil_tmp118, __cil_tmp119);
  __cil_tmp120 = & mgr->lock;
  _raw_write_unlock_irqrestore(__cil_tmp120, flags);
  }
  if (id < 0) {
    {
    __cil_tmp121 = l2->ch.ctrl;
    __cil_tmp122 = & l2->ch;
    __cil_tmp123 = (void *)0;
    (*__cil_tmp121)(__cil_tmp122, 512U, __cil_tmp123);
    }
  } else {
    l2->ch.nr = (u_int )id;
    __cil_tmp124 = l2->up;
    __cil_tmp124->nr = (u_int )id;
    crq->ch = & l2->ch;
    id = 0;
  }
  return (id);
}
}
static int mgr_send(struct mISDNchannel *ch , struct sk_buff *skb )
{ struct manager *mgr ;
  struct mISDNhead *hh ;
  int ret ;
  struct mISDNchannel const *__mptr ;
  int tmp ;
  char (*__cil_tmp8)[48U] ;
  u_int __cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  unsigned int __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  int __cil_tmp14 ;
  unsigned int __cil_tmp15 ;
  int __cil_tmp16 ;
  unsigned int __cil_tmp17 ;
  int __cil_tmp18 ;
  unsigned int __cil_tmp19 ;
  int __cil_tmp20 ;
  unsigned int __cil_tmp21 ;
  int __cil_tmp22 ;
  struct FsmInst *__cil_tmp23 ;
  void *__cil_tmp24 ;
  unsigned int __cil_tmp25 ;
  u_long *__cil_tmp26 ;
  unsigned long volatile *__cil_tmp27 ;
  struct FsmInst *__cil_tmp28 ;
  void *__cil_tmp29 ;
  u_long *__cil_tmp30 ;
  unsigned long volatile *__cil_tmp31 ;
  struct FsmInst *__cil_tmp32 ;
  void *__cil_tmp33 ;

  {
  __cil_tmp8 = & skb->cb;
  hh = (struct mISDNhead *)__cil_tmp8;
  ret = -22;
  __mptr = (struct mISDNchannel const *)ch;
  mgr = (struct manager *)__mptr;
  {
  __cil_tmp9 = *debug___5;
  __cil_tmp10 = __cil_tmp9 & 524288U;
  if (__cil_tmp10 != 0U) {
    {
    __cil_tmp11 = hh->prim;
    __cil_tmp12 = hh->id;
    printk("<7>%s: prim(%x) id(%x)\n", "mgr_send", __cil_tmp11, __cil_tmp12);
    }
  } else {

  }
  }
  {
  __cil_tmp13 = hh->prim;
  __cil_tmp14 = (int )__cil_tmp13;
  if (__cil_tmp14 == 8194) {
    goto case_8194;
  } else {
    {
    __cil_tmp15 = hh->prim;
    __cil_tmp16 = (int )__cil_tmp15;
    if (__cil_tmp16 == 24578) {
      goto case_24578;
    } else {
      {
      __cil_tmp17 = hh->prim;
      __cil_tmp18 = (int )__cil_tmp17;
      if (__cil_tmp18 == 258) {
        goto case_258;
      } else {
        {
        __cil_tmp19 = hh->prim;
        __cil_tmp20 = (int )__cil_tmp19;
        if (__cil_tmp20 == 514) {
          goto case_514;
        } else {
          {
          __cil_tmp21 = hh->prim;
          __cil_tmp22 = (int )__cil_tmp21;
          if (__cil_tmp22 == 12548) {
            goto case_12548;
          } else
          if (0) {
            case_8194:
            {
            __cil_tmp23 = & mgr->deact;
            __cil_tmp24 = (void *)0;
            mISDN_FsmEvent(__cil_tmp23, 4, __cil_tmp24);
            ret = ph_data_ind(mgr, skb);
            }
            goto ldv_38955;
            case_24578:
            {
            __cil_tmp25 = hh->id;
            do_ack(mgr, __cil_tmp25);
            ret = 0;
            }
            goto ldv_38955;
            case_258:
            {
            __cil_tmp26 = & mgr->options;
            __cil_tmp27 = (unsigned long volatile *)__cil_tmp26;
            test_and_set_bit(16, __cil_tmp27);
            __cil_tmp28 = & mgr->deact;
            __cil_tmp29 = (void *)0;
            mISDN_FsmEvent(__cil_tmp28, 1, __cil_tmp29);
            do_send(mgr);
            ret = 0;
            }
            goto ldv_38955;
            case_514:
            {
            __cil_tmp30 = & mgr->options;
            __cil_tmp31 = (unsigned long volatile *)__cil_tmp30;
            test_and_clear_bit(16, __cil_tmp31);
            __cil_tmp32 = & mgr->deact;
            __cil_tmp33 = (void *)0;
            mISDN_FsmEvent(__cil_tmp32, 3, __cil_tmp33);
            ret = 0;
            }
            goto ldv_38955;
            case_12548:
            {
            tmp = dl_unit_data(mgr, skb);
            }
            return (tmp);
          } else {

          }
          }
        }
        }
      }
      }
    }
    }
  }
  }
  ldv_38955: ;
  if (ret == 0) {
    {
    consume_skb(skb);
    }
  } else {

  }
  return (ret);
}
}
static int free_teimanager(struct manager *mgr )
{ struct layer2 *l2 ;
  struct layer2 *nl2 ;
  struct list_head const *__mptr ;
  struct list_head const *__mptr___0 ;
  struct list_head const *__mptr___1 ;
  struct list_head const *__mptr___2 ;
  struct list_head const *__mptr___3 ;
  struct list_head const *__mptr___4 ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  u_long *__cil_tmp14 ;
  unsigned long volatile *__cil_tmp15 ;
  u_long *__cil_tmp16 ;
  unsigned long const volatile *__cil_tmp17 ;
  u_long *__cil_tmp18 ;
  unsigned long const volatile *__cil_tmp19 ;
  struct list_head *__cil_tmp20 ;
  struct list_head *__cil_tmp21 ;
  u_char __cil_tmp22 ;
  signed char __cil_tmp23 ;
  int __cil_tmp24 ;
  struct mISDNstack *__cil_tmp25 ;
  struct mutex *__cil_tmp26 ;
  struct list_head *__cil_tmp27 ;
  struct mISDNstack *__cil_tmp28 ;
  struct mutex *__cil_tmp29 ;
  ctrl_func_t *__cil_tmp30 ;
  struct mISDNchannel *__cil_tmp31 ;
  void *__cil_tmp32 ;
  struct list_head *__cil_tmp33 ;
  struct list_head *__cil_tmp34 ;
  unsigned long __cil_tmp35 ;
  struct list_head *__cil_tmp36 ;
  unsigned long __cil_tmp37 ;
  u_long *__cil_tmp38 ;
  unsigned long volatile *__cil_tmp39 ;
  struct list_head *__cil_tmp40 ;
  struct list_head *__cil_tmp41 ;
  struct list_head *__cil_tmp42 ;
  struct list_head *__cil_tmp43 ;
  unsigned long __cil_tmp44 ;
  struct list_head *__cil_tmp45 ;
  unsigned long __cil_tmp46 ;
  u_long *__cil_tmp47 ;
  unsigned long const volatile *__cil_tmp48 ;
  struct list_head *__cil_tmp49 ;
  struct list_head const *__cil_tmp50 ;
  u_long *__cil_tmp51 ;
  unsigned long volatile *__cil_tmp52 ;
  struct mISDNstack *__cil_tmp53 ;
  struct mISDNdevice *__cil_tmp54 ;
  ctrl_func_t *__cil_tmp55 ;
  struct mISDNstack *__cil_tmp56 ;
  struct mISDNdevice *__cil_tmp57 ;
  struct mISDNchannel *__cil_tmp58 ;
  void *__cil_tmp59 ;

  {
  {
  __cil_tmp14 = & mgr->options;
  __cil_tmp15 = (unsigned long volatile *)__cil_tmp14;
  test_and_clear_bit(5, __cil_tmp15);
  __cil_tmp16 = & mgr->options;
  __cil_tmp17 = (unsigned long const volatile *)__cil_tmp16;
  tmp___0 = constant_test_bit(25U, __cil_tmp17);
  }
  if (tmp___0 != 0) {
    {
    mgr->up = (struct mISDNchannel *)0;
    __cil_tmp18 = & mgr->options;
    __cil_tmp19 = (unsigned long const volatile *)__cil_tmp18;
    tmp = constant_test_bit(4U, __cil_tmp19);
    }
    if (tmp != 0) {
      __cil_tmp20 = mgr->layer2.next;
      __mptr = (struct list_head const *)__cil_tmp20;
      l2 = (struct layer2 *)__mptr;
      __cil_tmp21 = l2->list.next;
      __mptr___0 = (struct list_head const *)__cil_tmp21;
      nl2 = (struct layer2 *)__mptr___0;
      goto ldv_38972;
      ldv_38971:
      {
      __cil_tmp22 = (u_char )6;
      __cil_tmp23 = l2->tei;
      __cil_tmp24 = (int )__cil_tmp23;
      put_tei_msg(mgr, __cil_tmp22, 0U, __cil_tmp24);
      __cil_tmp25 = mgr->ch.st;
      __cil_tmp26 = & __cil_tmp25->lmutex;
      mutex_lock_nested(__cil_tmp26, 0U);
      __cil_tmp27 = & l2->ch.list;
      list_del(__cil_tmp27);
      __cil_tmp28 = mgr->ch.st;
      __cil_tmp29 = & __cil_tmp28->lmutex;
      mutex_unlock(__cil_tmp29);
      __cil_tmp30 = l2->ch.ctrl;
      __cil_tmp31 = & l2->ch;
      __cil_tmp32 = (void *)0;
      (*__cil_tmp30)(__cil_tmp31, 512U, __cil_tmp32);
      l2 = nl2;
      __cil_tmp33 = nl2->list.next;
      __mptr___1 = (struct list_head const *)__cil_tmp33;
      nl2 = (struct layer2 *)__mptr___1;
      }
      ldv_38972: ;
      {
      __cil_tmp34 = & mgr->layer2;
      __cil_tmp35 = (unsigned long )__cil_tmp34;
      __cil_tmp36 = & l2->list;
      __cil_tmp37 = (unsigned long )__cil_tmp36;
      if (__cil_tmp37 != __cil_tmp35) {
        goto ldv_38971;
      } else {
        goto ldv_38973;
      }
      }
      ldv_38973:
      {
      __cil_tmp38 = & mgr->options;
      __cil_tmp39 = (unsigned long volatile *)__cil_tmp38;
      test_and_clear_bit(25, __cil_tmp39);
      }
    } else {
      __cil_tmp40 = mgr->layer2.next;
      __mptr___2 = (struct list_head const *)__cil_tmp40;
      l2 = (struct layer2 *)__mptr___2;
      __cil_tmp41 = l2->list.next;
      __mptr___3 = (struct list_head const *)__cil_tmp41;
      nl2 = (struct layer2 *)__mptr___3;
      goto ldv_38981;
      ldv_38980:
      l2->up = (struct mISDNchannel *)0;
      l2 = nl2;
      __cil_tmp42 = nl2->list.next;
      __mptr___4 = (struct list_head const *)__cil_tmp42;
      nl2 = (struct layer2 *)__mptr___4;
      ldv_38981: ;
      {
      __cil_tmp43 = & mgr->layer2;
      __cil_tmp44 = (unsigned long )__cil_tmp43;
      __cil_tmp45 = & l2->list;
      __cil_tmp46 = (unsigned long )__cil_tmp45;
      if (__cil_tmp46 != __cil_tmp44) {
        goto ldv_38980;
      } else {
        goto ldv_38982;
      }
      }
      ldv_38982: ;
    }
  } else {

  }
  {
  __cil_tmp47 = & mgr->options;
  __cil_tmp48 = (unsigned long const volatile *)__cil_tmp47;
  tmp___2 = constant_test_bit(24U, __cil_tmp48);
  }
  if (tmp___2 != 0) {
    {
    __cil_tmp49 = & mgr->layer2;
    __cil_tmp50 = (struct list_head const *)__cil_tmp49;
    tmp___1 = list_empty(__cil_tmp50);
    }
    if (tmp___1 != 0) {
      {
      __cil_tmp51 = & mgr->options;
      __cil_tmp52 = (unsigned long volatile *)__cil_tmp51;
      test_and_clear_bit(24, __cil_tmp52);
      }
    } else {

    }
  } else {

  }
  {
  __cil_tmp53 = mgr->ch.st;
  __cil_tmp54 = __cil_tmp53->dev;
  __cil_tmp55 = __cil_tmp54->D.ctrl;
  __cil_tmp56 = mgr->ch.st;
  __cil_tmp57 = __cil_tmp56->dev;
  __cil_tmp58 = & __cil_tmp57->D;
  __cil_tmp59 = (void *)0;
  (*__cil_tmp55)(__cil_tmp58, 512U, __cil_tmp59);
  }
  return (0);
}
}
static int ctrl_teimanager(struct manager *mgr , void *arg )
{ int *val ;
  int ret ;
  int __cil_tmp5 ;
  int __cil_tmp6 ;
  int *__cil_tmp7 ;
  int __cil_tmp8 ;
  u_long *__cil_tmp9 ;
  unsigned long volatile *__cil_tmp10 ;
  u_long *__cil_tmp11 ;
  unsigned long volatile *__cil_tmp12 ;
  int *__cil_tmp13 ;
  int __cil_tmp14 ;
  u_long *__cil_tmp15 ;
  unsigned long volatile *__cil_tmp16 ;
  u_long *__cil_tmp17 ;
  unsigned long volatile *__cil_tmp18 ;

  {
  val = (int *)arg;
  ret = 0;
  {
  __cil_tmp5 = *val;
  if (__cil_tmp5 == -2147202746) {
    goto case_neg_2147202746;
  } else {
    {
    __cil_tmp6 = *val;
    if (__cil_tmp6 == -2147202744) {
      goto case_neg_2147202744;
    } else {
      goto switch_default;
      if (0) {
        case_neg_2147202746: ;
        {
        __cil_tmp7 = val + 1UL;
        __cil_tmp8 = *__cil_tmp7;
        if (__cil_tmp8 != 0) {
          {
          __cil_tmp9 = & mgr->options;
          __cil_tmp10 = (unsigned long volatile *)__cil_tmp9;
          test_and_set_bit(4, __cil_tmp10);
          }
        } else {
          {
          __cil_tmp11 = & mgr->options;
          __cil_tmp12 = (unsigned long volatile *)__cil_tmp11;
          test_and_clear_bit(4, __cil_tmp12);
          }
        }
        }
        goto ldv_38990;
        case_neg_2147202744: ;
        {
        __cil_tmp13 = val + 1UL;
        __cil_tmp14 = *__cil_tmp13;
        if (__cil_tmp14 != 0) {
          {
          __cil_tmp15 = & mgr->options;
          __cil_tmp16 = (unsigned long volatile *)__cil_tmp15;
          test_and_set_bit(5, __cil_tmp16);
          }
        } else {
          {
          __cil_tmp17 = & mgr->options;
          __cil_tmp18 = (unsigned long volatile *)__cil_tmp17;
          test_and_clear_bit(5, __cil_tmp18);
          }
        }
        }
        goto ldv_38990;
        switch_default:
        ret = -22;
      } else {

      }
    }
    }
  }
  }
  ldv_38990: ;
  return (ret);
}
}
static int check_data(struct manager *mgr , struct sk_buff *skb )
{ struct mISDNhead *hh ;
  int ret ;
  int tei ;
  int sapi ;
  struct layer2 *l2 ;
  int tmp ;
  char (*__cil_tmp9)[48U] ;
  u_int __cil_tmp10 ;
  unsigned int __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  u_long *__cil_tmp14 ;
  unsigned long const volatile *__cil_tmp15 ;
  unsigned int __cil_tmp16 ;
  unsigned int __cil_tmp17 ;
  unsigned char *__cil_tmp18 ;
  unsigned char __cil_tmp19 ;
  int __cil_tmp20 ;
  int __cil_tmp21 ;
  unsigned char *__cil_tmp22 ;
  unsigned char __cil_tmp23 ;
  int __cil_tmp24 ;
  unsigned char *__cil_tmp25 ;
  unsigned char *__cil_tmp26 ;
  unsigned char __cil_tmp27 ;
  int __cil_tmp28 ;
  int __cil_tmp29 ;
  unsigned char *__cil_tmp30 ;
  unsigned char *__cil_tmp31 ;
  unsigned char __cil_tmp32 ;
  int __cil_tmp33 ;
  unsigned char *__cil_tmp34 ;
  unsigned char *__cil_tmp35 ;
  unsigned char __cil_tmp36 ;
  int __cil_tmp37 ;
  int __cil_tmp38 ;
  u_int __cil_tmp39 ;
  unsigned int __cil_tmp40 ;
  struct layer2 *__cil_tmp41 ;
  unsigned long __cil_tmp42 ;
  unsigned long __cil_tmp43 ;
  u_int __cil_tmp44 ;
  unsigned int __cil_tmp45 ;
  send_func_t *__cil_tmp46 ;
  struct mISDNchannel *__cil_tmp47 ;

  {
  __cil_tmp9 = & skb->cb;
  hh = (struct mISDNhead *)__cil_tmp9;
  {
  __cil_tmp10 = *debug___5;
  __cil_tmp11 = __cil_tmp10 & 262144U;
  if (__cil_tmp11 != 0U) {
    {
    __cil_tmp12 = hh->prim;
    __cil_tmp13 = hh->id;
    printk("<7>%s: prim(%x) id(%x)\n", "check_data", __cil_tmp12, __cil_tmp13);
    }
  } else {

  }
  }
  {
  __cil_tmp14 = & mgr->options;
  __cil_tmp15 = (unsigned long const volatile *)__cil_tmp14;
  tmp = constant_test_bit(24U, __cil_tmp15);
  }
  if (tmp != 0) {
    return (-107);
  } else {

  }
  {
  __cil_tmp16 = hh->prim;
  if (__cil_tmp16 != 8194U) {
    return (-107);
  } else {

  }
  }
  {
  __cil_tmp17 = skb->len;
  if (__cil_tmp17 != 3U) {
    return (-107);
  } else {

  }
  }
  {
  __cil_tmp18 = skb->data;
  __cil_tmp19 = *__cil_tmp18;
  __cil_tmp20 = (int )__cil_tmp19;
  __cil_tmp21 = __cil_tmp20 & 3;
  if (__cil_tmp21 != 0) {
    return (-22);
  } else {

  }
  }
  __cil_tmp22 = skb->data;
  __cil_tmp23 = *__cil_tmp22;
  __cil_tmp24 = (int )__cil_tmp23;
  sapi = __cil_tmp24 >> 2;
  {
  __cil_tmp25 = skb->data;
  __cil_tmp26 = __cil_tmp25 + 1UL;
  __cil_tmp27 = *__cil_tmp26;
  __cil_tmp28 = (int )__cil_tmp27;
  __cil_tmp29 = __cil_tmp28 & 1;
  if (__cil_tmp29 == 0) {
    return (-22);
  } else {

  }
  }
  __cil_tmp30 = skb->data;
  __cil_tmp31 = __cil_tmp30 + 1UL;
  __cil_tmp32 = *__cil_tmp31;
  __cil_tmp33 = (int )__cil_tmp32;
  tei = __cil_tmp33 >> 1;
  if (tei > 63) {
    return (-107);
  } else {

  }
  {
  __cil_tmp34 = skb->data;
  __cil_tmp35 = __cil_tmp34 + 2UL;
  __cil_tmp36 = *__cil_tmp35;
  __cil_tmp37 = (int )__cil_tmp36;
  __cil_tmp38 = __cil_tmp37 & -17;
  if (__cil_tmp38 != 111) {
    return (-107);
  } else {

  }
  }
  {
  __cil_tmp39 = *debug___5;
  __cil_tmp40 = __cil_tmp39 & 262144U;
  if (__cil_tmp40 != 0U) {
    {
    printk("<7>%s: SABME sapi(%d) tei(%d)\n", "check_data", sapi, tei);
    }
  } else {

  }
  }
  {
  l2 = create_new_tei(mgr, tei, sapi);
  }
  {
  __cil_tmp41 = (struct layer2 *)0;
  __cil_tmp42 = (unsigned long )__cil_tmp41;
  __cil_tmp43 = (unsigned long )l2;
  if (__cil_tmp43 == __cil_tmp42) {
    {
    __cil_tmp44 = *debug___5;
    __cil_tmp45 = __cil_tmp44 & 262144U;
    if (__cil_tmp45 != 0U) {
      {
      printk("<7>%s: failed to create new tei\n", "check_data");
      }
    } else {

    }
    }
    return (-12);
  } else {

  }
  }
  {
  __cil_tmp46 = l2->ch.send;
  __cil_tmp47 = & l2->ch;
  ret = (*__cil_tmp46)(__cil_tmp47, skb);
  }
  return (ret);
}
}
void delete_teimanager(struct mISDNchannel *ch )
{ struct manager *mgr ;
  struct layer2 *l2 ;
  struct layer2 *nl2 ;
  struct mISDNchannel const *__mptr ;
  struct list_head const *__mptr___0 ;
  struct list_head const *__mptr___1 ;
  struct list_head const *__mptr___2 ;
  struct list_head *__cil_tmp9 ;
  struct list_head *__cil_tmp10 ;
  struct mISDNstack *__cil_tmp11 ;
  struct mutex *__cil_tmp12 ;
  struct list_head *__cil_tmp13 ;
  struct mISDNstack *__cil_tmp14 ;
  struct mutex *__cil_tmp15 ;
  ctrl_func_t *__cil_tmp16 ;
  struct mISDNchannel *__cil_tmp17 ;
  void *__cil_tmp18 ;
  struct list_head *__cil_tmp19 ;
  struct list_head *__cil_tmp20 ;
  unsigned long __cil_tmp21 ;
  struct list_head *__cil_tmp22 ;
  unsigned long __cil_tmp23 ;
  struct list_head *__cil_tmp24 ;
  struct list_head *__cil_tmp25 ;
  struct sk_buff_head *__cil_tmp26 ;
  void const *__cil_tmp27 ;

  {
  __mptr = (struct mISDNchannel const *)ch;
  mgr = (struct manager *)__mptr;
  __cil_tmp9 = mgr->layer2.next;
  __mptr___0 = (struct list_head const *)__cil_tmp9;
  l2 = (struct layer2 *)__mptr___0;
  __cil_tmp10 = l2->list.next;
  __mptr___1 = (struct list_head const *)__cil_tmp10;
  nl2 = (struct layer2 *)__mptr___1;
  goto ldv_39018;
  ldv_39017:
  {
  __cil_tmp11 = mgr->ch.st;
  __cil_tmp12 = & __cil_tmp11->lmutex;
  mutex_lock_nested(__cil_tmp12, 0U);
  __cil_tmp13 = & l2->ch.list;
  list_del(__cil_tmp13);
  __cil_tmp14 = mgr->ch.st;
  __cil_tmp15 = & __cil_tmp14->lmutex;
  mutex_unlock(__cil_tmp15);
  __cil_tmp16 = l2->ch.ctrl;
  __cil_tmp17 = & l2->ch;
  __cil_tmp18 = (void *)0;
  (*__cil_tmp16)(__cil_tmp17, 512U, __cil_tmp18);
  l2 = nl2;
  __cil_tmp19 = nl2->list.next;
  __mptr___2 = (struct list_head const *)__cil_tmp19;
  nl2 = (struct layer2 *)__mptr___2;
  }
  ldv_39018: ;
  {
  __cil_tmp20 = & mgr->layer2;
  __cil_tmp21 = (unsigned long )__cil_tmp20;
  __cil_tmp22 = & l2->list;
  __cil_tmp23 = (unsigned long )__cil_tmp22;
  if (__cil_tmp23 != __cil_tmp21) {
    goto ldv_39017;
  } else {
    goto ldv_39019;
  }
  }
  ldv_39019:
  {
  __cil_tmp24 = & mgr->ch.list;
  list_del(__cil_tmp24);
  __cil_tmp25 = & mgr->bcast.list;
  list_del(__cil_tmp25);
  __cil_tmp26 = & mgr->sendq;
  skb_queue_purge(__cil_tmp26);
  __cil_tmp27 = (void const *)mgr;
  kfree(__cil_tmp27);
  }
  return;
}
}
static int mgr_ctrl(struct mISDNchannel *ch , u_int cmd , void *arg )
{ struct manager *mgr ;
  int ret ;
  struct mISDNchannel const *__mptr ;
  u_int __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  int __cil_tmp9 ;
  int __cil_tmp10 ;
  int __cil_tmp11 ;
  int __cil_tmp12 ;
  struct channel_req *__cil_tmp13 ;
  struct sk_buff *__cil_tmp14 ;

  {
  ret = -22;
  __mptr = (struct mISDNchannel const *)ch;
  mgr = (struct manager *)__mptr;
  {
  __cil_tmp7 = *debug___5;
  __cil_tmp8 = __cil_tmp7 & 262144U;
  if (__cil_tmp8 != 0U) {
    {
    printk("<7>%s(%x, %p)\n", "mgr_ctrl", cmd, arg);
    }
  } else {

  }
  }
  {
  __cil_tmp9 = (int )cmd;
  if (__cil_tmp9 == 256) {
    goto case_256;
  } else {
    {
    __cil_tmp10 = (int )cmd;
    if (__cil_tmp10 == 512) {
      goto case_512;
    } else {
      {
      __cil_tmp11 = (int )cmd;
      if (__cil_tmp11 == 768) {
        goto case_768;
      } else {
        {
        __cil_tmp12 = (int )cmd;
        if (__cil_tmp12 == 1024) {
          goto case_1024;
        } else
        if (0) {
          case_256:
          {
          __cil_tmp13 = (struct channel_req *)arg;
          ret = create_teimgr(mgr, __cil_tmp13);
          }
          goto ldv_39031;
          case_512:
          {
          ret = free_teimanager(mgr);
          }
          goto ldv_39031;
          case_768:
          {
          ret = ctrl_teimanager(mgr, arg);
          }
          goto ldv_39031;
          case_1024:
          {
          __cil_tmp14 = (struct sk_buff *)arg;
          ret = check_data(mgr, __cil_tmp14);
          }
          goto ldv_39031;
        } else {

        }
        }
      }
      }
    }
    }
  }
  }
  ldv_39031: ;
  return (ret);
}
}
static int mgr_bcast(struct mISDNchannel *ch , struct sk_buff *skb )
{ struct manager *mgr ;
  struct mISDNchannel const *__mptr ;
  struct mISDNhead *hh ;
  struct sk_buff *cskb ;
  struct layer2 *l2 ;
  u_long flags ;
  int ret ;
  struct list_head const *__mptr___0 ;
  int tmp ;
  struct list_head const *__mptr___1 ;
  struct manager *__cil_tmp13 ;
  char (*__cil_tmp14)[48U] ;
  rwlock_t *__cil_tmp15 ;
  struct list_head *__cil_tmp16 ;
  u_int __cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  unsigned int __cil_tmp19 ;
  unsigned int __cil_tmp20 ;
  struct list_head *__cil_tmp21 ;
  struct list_head const *__cil_tmp22 ;
  struct list_head *__cil_tmp23 ;
  struct list_head const *__cil_tmp24 ;
  struct sk_buff *__cil_tmp25 ;
  unsigned long __cil_tmp26 ;
  unsigned long __cil_tmp27 ;
  struct sk_buff const *__cil_tmp28 ;
  struct sk_buff *__cil_tmp29 ;
  unsigned long __cil_tmp30 ;
  unsigned long __cil_tmp31 ;
  send_func_t *__cil_tmp32 ;
  struct mISDNchannel *__cil_tmp33 ;
  u_int __cil_tmp34 ;
  unsigned int __cil_tmp35 ;
  u_int __cil_tmp36 ;
  unsigned int __cil_tmp37 ;
  u_int __cil_tmp38 ;
  u_int __cil_tmp39 ;
  u_int __cil_tmp40 ;
  struct list_head *__cil_tmp41 ;
  struct list_head *__cil_tmp42 ;
  unsigned long __cil_tmp43 ;
  struct list_head *__cil_tmp44 ;
  unsigned long __cil_tmp45 ;
  rwlock_t *__cil_tmp46 ;
  struct sk_buff *__cil_tmp47 ;
  unsigned long __cil_tmp48 ;
  unsigned long __cil_tmp49 ;
  struct sk_buff *__cil_tmp50 ;
  unsigned long __cil_tmp51 ;
  unsigned long __cil_tmp52 ;

  {
  {
  __mptr = (struct mISDNchannel const *)ch;
  __cil_tmp13 = (struct manager *)__mptr;
  mgr = __cil_tmp13 + 1152921504606846896UL;
  __cil_tmp14 = & skb->cb;
  hh = (struct mISDNhead *)__cil_tmp14;
  cskb = (struct sk_buff *)0;
  __cil_tmp15 = & mgr->lock;
  flags = _raw_read_lock_irqsave(__cil_tmp15);
  __cil_tmp16 = mgr->layer2.next;
  __mptr___0 = (struct list_head const *)__cil_tmp16;
  l2 = (struct layer2 *)__mptr___0;
  }
  goto ldv_39057;
  ldv_39056: ;
  {
  __cil_tmp17 = l2->ch.addr;
  __cil_tmp18 = hh->id;
  __cil_tmp19 = __cil_tmp18 ^ __cil_tmp17;
  __cil_tmp20 = __cil_tmp19 & 255U;
  if (__cil_tmp20 == 0U) {
    {
    __cil_tmp21 = & l2->list;
    __cil_tmp22 = (struct list_head const *)__cil_tmp21;
    __cil_tmp23 = & mgr->layer2;
    __cil_tmp24 = (struct list_head const *)__cil_tmp23;
    tmp = list_is_last(__cil_tmp22, __cil_tmp24);
    }
    if (tmp != 0) {
      cskb = skb;
      skb = (struct sk_buff *)0;
    } else {
      {
      __cil_tmp25 = (struct sk_buff *)0;
      __cil_tmp26 = (unsigned long )__cil_tmp25;
      __cil_tmp27 = (unsigned long )cskb;
      if (__cil_tmp27 == __cil_tmp26) {
        {
        __cil_tmp28 = (struct sk_buff const *)skb;
        cskb = skb_copy(__cil_tmp28, 208U);
        }
      } else {

      }
      }
    }
    {
    __cil_tmp29 = (struct sk_buff *)0;
    __cil_tmp30 = (unsigned long )__cil_tmp29;
    __cil_tmp31 = (unsigned long )cskb;
    if (__cil_tmp31 != __cil_tmp30) {
      {
      __cil_tmp32 = l2->ch.send;
      __cil_tmp33 = & l2->ch;
      ret = (*__cil_tmp32)(__cil_tmp33, cskb);
      }
      if (ret != 0) {
        {
        __cil_tmp34 = *debug___5;
        __cil_tmp35 = __cil_tmp34 & 16U;
        if (__cil_tmp35 != 0U) {
          {
          __cil_tmp36 = l2->ch.nr;
          __cil_tmp37 = hh->prim;
          __cil_tmp38 = l2->ch.addr;
          printk("<7>%s ch%d prim(%x) addr(%x) err %d\n", "mgr_bcast", __cil_tmp36,
                 __cil_tmp37, __cil_tmp38, ret);
          }
        } else {
          cskb = (struct sk_buff *)0;
        }
        }
      } else {

      }
    } else {
      {
      __cil_tmp39 = ch->nr;
      __cil_tmp40 = ch->addr;
      printk("<4>%s ch%d addr %x no mem\n", "mgr_bcast", __cil_tmp39, __cil_tmp40);
      }
      goto out;
    }
    }
  } else {

  }
  }
  __cil_tmp41 = l2->list.next;
  __mptr___1 = (struct list_head const *)__cil_tmp41;
  l2 = (struct layer2 *)__mptr___1;
  ldv_39057: ;
  {
  __cil_tmp42 = & mgr->layer2;
  __cil_tmp43 = (unsigned long )__cil_tmp42;
  __cil_tmp44 = & l2->list;
  __cil_tmp45 = (unsigned long )__cil_tmp44;
  if (__cil_tmp45 != __cil_tmp43) {
    goto ldv_39056;
  } else {
    goto ldv_39058;
  }
  }
  ldv_39058: ;
  out:
  {
  __cil_tmp46 = & mgr->lock;
  _raw_read_unlock_irqrestore(__cil_tmp46, flags);
  }
  {
  __cil_tmp47 = (struct sk_buff *)0;
  __cil_tmp48 = (unsigned long )__cil_tmp47;
  __cil_tmp49 = (unsigned long )cskb;
  if (__cil_tmp49 != __cil_tmp48) {
    {
    consume_skb(cskb);
    }
  } else {

  }
  }
  {
  __cil_tmp50 = (struct sk_buff *)0;
  __cil_tmp51 = (unsigned long )__cil_tmp50;
  __cil_tmp52 = (unsigned long )skb;
  if (__cil_tmp52 != __cil_tmp51) {
    {
    consume_skb(skb);
    }
  } else {

  }
  }
  return (0);
}
}
static int mgr_bcast_ctrl(struct mISDNchannel *ch , u_int cmd , void *arg )
{

  {
  return (-22);
}
}
int create_teimanager(struct mISDNdevice *dev )
{ struct manager *mgr ;
  void *tmp ;
  struct lock_class_key __key ;
  struct manager *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  struct list_head *__cil_tmp8 ;
  rwlock_t *__cil_tmp9 ;
  struct sk_buff_head *__cil_tmp10 ;
  struct mISDNchannel *__cil_tmp11 ;
  struct mISDNchannel *__cil_tmp12 ;
  struct mISDNstack *__cil_tmp13 ;
  struct mISDNchannel *__cil_tmp14 ;
  struct mISDNchannel *__cil_tmp15 ;
  struct mISDNstack *__cil_tmp16 ;
  u_int __cil_tmp17 ;
  int __cil_tmp18 ;
  struct FsmInst *__cil_tmp19 ;
  struct FsmTimer *__cil_tmp20 ;

  {
  {
  tmp = kzalloc(560UL, 208U);
  mgr = (struct manager *)tmp;
  }
  {
  __cil_tmp5 = (struct manager *)0;
  __cil_tmp6 = (unsigned long )__cil_tmp5;
  __cil_tmp7 = (unsigned long )mgr;
  if (__cil_tmp7 == __cil_tmp6) {
    return (-12);
  } else {

  }
  }
  {
  __cil_tmp8 = & mgr->layer2;
  INIT_LIST_HEAD(__cil_tmp8);
  __cil_tmp9 = & mgr->lock;
  __rwlock_init(__cil_tmp9, "&mgr->lock", & __key);
  __cil_tmp10 = & mgr->sendq;
  skb_queue_head_init(__cil_tmp10);
  mgr->nextid = 1U;
  mgr->lastid = 65534U;
  mgr->ch.send = & mgr_send;
  mgr->ch.ctrl = & mgr_ctrl;
  mgr->ch.st = dev->D.st;
  __cil_tmp11 = & mgr->ch;
  set_channel_address(__cil_tmp11, 63U, 127U);
  __cil_tmp12 = & mgr->ch;
  __cil_tmp13 = dev->D.st;
  add_layer2(__cil_tmp12, __cil_tmp13);
  mgr->bcast.send = & mgr_bcast;
  mgr->bcast.ctrl = & mgr_bcast_ctrl;
  mgr->bcast.st = dev->D.st;
  __cil_tmp14 = & mgr->bcast;
  set_channel_address(__cil_tmp14, 0U, 127U);
  __cil_tmp15 = & mgr->bcast;
  __cil_tmp16 = dev->D.st;
  add_layer2(__cil_tmp15, __cil_tmp16);
  __cil_tmp17 = *debug___5;
  __cil_tmp18 = (int )__cil_tmp17;
  mgr->deact.debug = __cil_tmp18 & 8;
  mgr->deact.userdata = (void *)mgr;
  mgr->deact.printdebug = & da_debug;
  mgr->deact.fsm = & deactfsm;
  mgr->deact.state = 0;
  __cil_tmp19 = & mgr->deact;
  __cil_tmp20 = & mgr->datimer;
  mISDN_FsmInitTimer(__cil_tmp19, __cil_tmp20);
  dev->teimgr = & mgr->ch;
  }
  return (0);
}
}
int TEIInit(u_int *deb )
{ struct FsmNode *__cil_tmp2 ;
  struct FsmNode *__cil_tmp3 ;
  struct FsmNode *__cil_tmp4 ;

  {
  {
  debug___5 = deb;
  teifsmu.state_count = 3;
  teifsmu.event_count = 9;
  teifsmu.strEvent = (char **)(& strTeiEvent);
  teifsmu.strState = (char **)(& strTeiState);
  __cil_tmp2 = (struct FsmNode *)(& TeiFnListUser);
  mISDN_FsmNew(& teifsmu, __cil_tmp2, 11);
  teifsmn.state_count = 3;
  teifsmn.event_count = 9;
  teifsmn.strEvent = (char **)(& strTeiEvent);
  teifsmn.strState = (char **)(& strTeiState);
  __cil_tmp3 = (struct FsmNode *)(& TeiFnListNet);
  mISDN_FsmNew(& teifsmn, __cil_tmp3, 5);
  deactfsm.state_count = 3;
  deactfsm.event_count = 6;
  deactfsm.strEvent = (char **)(& strDeactEvent);
  deactfsm.strState = (char **)(& strDeactState);
  __cil_tmp4 = (struct FsmNode *)(& DeactFnList);
  mISDN_FsmNew(& deactfsm, __cil_tmp4, 6);
  }
  return (0);
}
}
void TEIFree(void)
{

  {
  {
  mISDN_FsmFree(& teifsmu);
  mISDN_FsmFree(& teifsmn);
  mISDN_FsmFree(& deactfsm);
  }
  return;
}
}
extern void __list_del_entry(struct list_head * ) ;
__inline static void list_del_init(struct list_head *entry )
{

  {
  {
  __list_del_entry(entry);
  INIT_LIST_HEAD(entry);
  }
  return;
}
}
__inline static void list_move_tail(struct list_head *list , struct list_head *head )
{

  {
  {
  __list_del_entry(list);
  list_add_tail(list, head);
  }
  return;
}
}
extern unsigned long _raw_spin_lock_irqsave(raw_spinlock_t * ) ;
extern void _raw_spin_unlock_irqrestore(raw_spinlock_t * , unsigned long ) ;
__inline static void spin_unlock_irqrestore(spinlock_t *lock , unsigned long flags )
{ struct raw_spinlock *__cil_tmp3 ;

  {
  {
  __cil_tmp3 = & lock->ldv_6060.rlock;
  _raw_spin_unlock_irqrestore(__cil_tmp3, flags);
  }
  return;
}
}
void ldv_module_put_3(struct module *ldv_func_arg1 ) ;
extern loff_t no_llseek(struct file * , loff_t , int ) ;
int ldv_nonseekable_open_2(struct inode *ldv_func_arg1 , struct file *ldv_func_arg2 ) ;
__inline static void poll_wait(struct file *filp , wait_queue_head_t *wait_address ,
                               poll_table *p )
{ poll_table *__cil_tmp4 ;
  unsigned long __cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  wait_queue_head_t *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  void (*__cil_tmp10)(struct file * , wait_queue_head_t * , struct poll_table_struct * ) ;

  {
  {
  __cil_tmp4 = (poll_table *)0;
  __cil_tmp5 = (unsigned long )__cil_tmp4;
  __cil_tmp6 = (unsigned long )p;
  if (__cil_tmp6 != __cil_tmp5) {
    {
    __cil_tmp7 = (wait_queue_head_t *)0;
    __cil_tmp8 = (unsigned long )__cil_tmp7;
    __cil_tmp9 = (unsigned long )wait_address;
    if (__cil_tmp9 != __cil_tmp8) {
      {
      __cil_tmp10 = p->qproc;
      (*__cil_tmp10)(filp, wait_address, p);
      }
    } else {

    }
    }
  } else {

  }
  }
  return;
}
}
extern int misc_register(struct miscdevice * ) ;
extern int misc_deregister(struct miscdevice * ) ;
static struct mutex mISDN_mutex = {{1}, {{{{0U}, 3735899821U, 4294967295U, (void *)1152921504606846975UL, {(struct lock_class_key *)0,
                                                                            {(struct lock_class *)0,
                                                                             (struct lock_class *)0},
                                                                            "mISDN_mutex.wait_lock",
                                                                            0, 0UL}}}},
    {& mISDN_mutex.wait_list, & mISDN_mutex.wait_list}, (struct task_struct *)0, (char const *)0,
    (void *)(& mISDN_mutex), {(struct lock_class_key *)0, {(struct lock_class *)0,
                                                           (struct lock_class *)0},
                              "mISDN_mutex", 0, 0UL}};
static u_int *debug___6 ;
static int mISDN_open(struct inode *ino , struct file *filep )
{ struct mISDNtimerdev *dev ;
  void *tmp ;
  struct lock_class_key __key ;
  struct lock_class_key __key___0 ;
  int tmp___0 ;
  u_int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  struct mISDNtimerdev *__cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  unsigned long __cil_tmp12 ;
  struct list_head *__cil_tmp13 ;
  struct list_head *__cil_tmp14 ;
  spinlock_t *__cil_tmp15 ;
  struct raw_spinlock *__cil_tmp16 ;
  wait_queue_head_t *__cil_tmp17 ;

  {
  {
  __cil_tmp8 = *debug___6;
  __cil_tmp9 = __cil_tmp8 & 16777216U;
  if (__cil_tmp9 != 0U) {
    {
    printk("<7>%s(%p,%p)\n", "mISDN_open", ino, filep);
    }
  } else {

  }
  }
  {
  tmp = kmalloc(208UL, 208U);
  dev = (struct mISDNtimerdev *)tmp;
  }
  {
  __cil_tmp10 = (struct mISDNtimerdev *)0;
  __cil_tmp11 = (unsigned long )__cil_tmp10;
  __cil_tmp12 = (unsigned long )dev;
  if (__cil_tmp12 == __cil_tmp11) {
    return (-12);
  } else {

  }
  }
  {
  dev->next_id = 1;
  __cil_tmp13 = & dev->pending;
  INIT_LIST_HEAD(__cil_tmp13);
  __cil_tmp14 = & dev->expired;
  INIT_LIST_HEAD(__cil_tmp14);
  __cil_tmp15 = & dev->lock;
  spinlock_check(__cil_tmp15);
  __cil_tmp16 = & dev->lock.ldv_6060.rlock;
  __raw_spin_lock_init(__cil_tmp16, "&(&dev->lock)->rlock", & __key);
  dev->work = 0U;
  __cil_tmp17 = & dev->wait;
  __init_waitqueue_head(__cil_tmp17, & __key___0);
  filep->private_data = (void *)dev;
  ldv___module_get_2(& __this_module);
  tmp___0 = ldv_nonseekable_open_2(ino, filep);
  }
  return (tmp___0);
}
}
static int mISDN_close(struct inode *ino , struct file *filep )
{ struct mISDNtimerdev *dev ;
  struct mISDNtimer *timer ;
  struct mISDNtimer *next ;
  struct list_head const *__mptr ;
  struct list_head const *__mptr___0 ;
  struct list_head const *__mptr___1 ;
  struct list_head const *__mptr___2 ;
  struct list_head const *__mptr___3 ;
  struct list_head const *__mptr___4 ;
  void *__cil_tmp12 ;
  u_int __cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  struct list_head *__cil_tmp15 ;
  struct list_head *__cil_tmp16 ;
  struct timer_list *__cil_tmp17 ;
  void const *__cil_tmp18 ;
  struct list_head *__cil_tmp19 ;
  struct list_head *__cil_tmp20 ;
  unsigned long __cil_tmp21 ;
  struct list_head *__cil_tmp22 ;
  unsigned long __cil_tmp23 ;
  struct list_head *__cil_tmp24 ;
  struct list_head *__cil_tmp25 ;
  void const *__cil_tmp26 ;
  struct list_head *__cil_tmp27 ;
  struct list_head *__cil_tmp28 ;
  unsigned long __cil_tmp29 ;
  struct list_head *__cil_tmp30 ;
  unsigned long __cil_tmp31 ;
  void const *__cil_tmp32 ;

  {
  __cil_tmp12 = filep->private_data;
  dev = (struct mISDNtimerdev *)__cil_tmp12;
  {
  __cil_tmp13 = *debug___6;
  __cil_tmp14 = __cil_tmp13 & 16777216U;
  if (__cil_tmp14 != 0U) {
    {
    printk("<7>%s(%p,%p)\n", "mISDN_close", ino, filep);
    }
  } else {

  }
  }
  __cil_tmp15 = dev->pending.next;
  __mptr = (struct list_head const *)__cil_tmp15;
  timer = (struct mISDNtimer *)__mptr;
  __cil_tmp16 = timer->list.next;
  __mptr___0 = (struct list_head const *)__cil_tmp16;
  next = (struct mISDNtimer *)__mptr___0;
  goto ldv_38417;
  ldv_38416:
  {
  __cil_tmp17 = & timer->tl;
  del_timer(__cil_tmp17);
  __cil_tmp18 = (void const *)timer;
  kfree(__cil_tmp18);
  timer = next;
  __cil_tmp19 = next->list.next;
  __mptr___1 = (struct list_head const *)__cil_tmp19;
  next = (struct mISDNtimer *)__mptr___1;
  }
  ldv_38417: ;
  {
  __cil_tmp20 = & dev->pending;
  __cil_tmp21 = (unsigned long )__cil_tmp20;
  __cil_tmp22 = & timer->list;
  __cil_tmp23 = (unsigned long )__cil_tmp22;
  if (__cil_tmp23 != __cil_tmp21) {
    goto ldv_38416;
  } else {
    goto ldv_38418;
  }
  }
  ldv_38418:
  __cil_tmp24 = dev->expired.next;
  __mptr___2 = (struct list_head const *)__cil_tmp24;
  timer = (struct mISDNtimer *)__mptr___2;
  __cil_tmp25 = timer->list.next;
  __mptr___3 = (struct list_head const *)__cil_tmp25;
  next = (struct mISDNtimer *)__mptr___3;
  goto ldv_38426;
  ldv_38425:
  {
  __cil_tmp26 = (void const *)timer;
  kfree(__cil_tmp26);
  timer = next;
  __cil_tmp27 = next->list.next;
  __mptr___4 = (struct list_head const *)__cil_tmp27;
  next = (struct mISDNtimer *)__mptr___4;
  }
  ldv_38426: ;
  {
  __cil_tmp28 = & dev->expired;
  __cil_tmp29 = (unsigned long )__cil_tmp28;
  __cil_tmp30 = & timer->list;
  __cil_tmp31 = (unsigned long )__cil_tmp30;
  if (__cil_tmp31 != __cil_tmp29) {
    goto ldv_38425;
  } else {
    goto ldv_38427;
  }
  }
  ldv_38427:
  {
  __cil_tmp32 = (void const *)dev;
  kfree(__cil_tmp32);
  ldv_module_put_3(& __this_module);
  }
  return (0);
}
}
static ssize_t mISDN_read(struct file *filep , char *buf , size_t count , loff_t *off )
{ struct mISDNtimerdev *dev ;
  struct mISDNtimer *timer ;
  u_long flags ;
  int ret ;
  int __ret ;
  wait_queue_t __wait ;
  struct task_struct *tmp ;
  int tmp___0 ;
  struct task_struct *tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  struct task_struct *tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  raw_spinlock_t *tmp___7 ;
  int __ret_pu ;
  int __pu_val ;
  int tmp___8 ;
  void *__cil_tmp23 ;
  u_int __cil_tmp24 ;
  unsigned int __cil_tmp25 ;
  int __cil_tmp26 ;
  struct list_head *__cil_tmp27 ;
  struct list_head const *__cil_tmp28 ;
  u_int __cil_tmp29 ;
  unsigned int __cil_tmp30 ;
  unsigned int __cil_tmp31 ;
  u_int __cil_tmp32 ;
  struct list_head *__cil_tmp33 ;
  struct list_head const *__cil_tmp34 ;
  wait_queue_head_t *__cil_tmp35 ;
  u_int __cil_tmp36 ;
  struct list_head *__cil_tmp37 ;
  struct list_head const *__cil_tmp38 ;
  wait_queue_head_t *__cil_tmp39 ;
  u_int __cil_tmp40 ;
  struct list_head *__cil_tmp41 ;
  struct list_head const *__cil_tmp42 ;
  spinlock_t *__cil_tmp43 ;
  struct list_head *__cil_tmp44 ;
  struct list_head *__cil_tmp45 ;
  spinlock_t *__cil_tmp46 ;
  void const *__cil_tmp47 ;

  {
  __cil_tmp23 = filep->private_data;
  dev = (struct mISDNtimerdev *)__cil_tmp23;
  ret = 0;
  {
  __cil_tmp24 = *debug___6;
  __cil_tmp25 = __cil_tmp24 & 16777216U;
  if (__cil_tmp25 != 0U) {
    {
    __cil_tmp26 = (int )count;
    printk("<7>%s(%p, %p, %d, %p)\n", "mISDN_read", filep, buf, __cil_tmp26, off);
    }
  } else {

  }
  }
  {
  __cil_tmp27 = & dev->expired;
  __cil_tmp28 = (struct list_head const *)__cil_tmp27;
  tmp___6 = list_empty(__cil_tmp28);
  }
  if (tmp___6 != 0) {
    {
    __cil_tmp29 = dev->work;
    if (__cil_tmp29 == 0U) {
      {
      __cil_tmp30 = filep->f_flags;
      __cil_tmp31 = __cil_tmp30 & 2048U;
      if (__cil_tmp31 != 0U) {
        return (-11L);
      } else {

      }
      }
      __ret = 0;
      {
      __cil_tmp32 = dev->work;
      if (__cil_tmp32 == 0U) {
        {
        __cil_tmp33 = & dev->expired;
        __cil_tmp34 = (struct list_head const *)__cil_tmp33;
        tmp___3 = list_empty(__cil_tmp34);
        }
        if (tmp___3 != 0) {
          {
          tmp = get_current();
          __wait.flags = 0U;
          __wait.private = (void *)tmp;
          __wait.func = & autoremove_wake_function;
          __wait.task_list.next = & __wait.task_list;
          __wait.task_list.prev = & __wait.task_list;
          }
          ldv_38443:
          {
          __cil_tmp35 = & dev->wait;
          prepare_to_wait(__cil_tmp35, & __wait, 1);
          }
          {
          __cil_tmp36 = dev->work;
          if (__cil_tmp36 != 0U) {
            goto ldv_38441;
          } else {
            {
            __cil_tmp37 = & dev->expired;
            __cil_tmp38 = (struct list_head const *)__cil_tmp37;
            tmp___0 = list_empty(__cil_tmp38);
            }
            if (tmp___0 == 0) {
              goto ldv_38441;
            } else {

            }
          }
          }
          {
          tmp___1 = get_current();
          tmp___2 = signal_pending(tmp___1);
          }
          if (tmp___2 == 0) {
            {
            schedule();
            }
            goto ldv_38442;
          } else {

          }
          __ret = -512;
          goto ldv_38441;
          ldv_38442: ;
          goto ldv_38443;
          ldv_38441:
          {
          __cil_tmp39 = & dev->wait;
          finish_wait(__cil_tmp39, & __wait);
          }
        } else {

        }
      } else {

      }
      }
      {
      tmp___4 = get_current();
      tmp___5 = signal_pending(tmp___4);
      }
      if (tmp___5 != 0) {
        return (-512L);
      } else {

      }
    } else {

    }
    }
  } else {

  }
  if (count <= 3UL) {
    return (-28L);
  } else {

  }
  {
  __cil_tmp40 = dev->work;
  if (__cil_tmp40 != 0U) {
    dev->work = 0U;
  } else {

  }
  }
  {
  __cil_tmp41 = & dev->expired;
  __cil_tmp42 = (struct list_head const *)__cil_tmp41;
  tmp___8 = list_empty(__cil_tmp42);
  }
  if (tmp___8 == 0) {
    {
    __cil_tmp43 = & dev->lock;
    tmp___7 = spinlock_check(__cil_tmp43);
    flags = _raw_spin_lock_irqsave(tmp___7);
    __cil_tmp44 = dev->expired.next;
    timer = (struct mISDNtimer *)__cil_tmp44;
    __cil_tmp45 = & timer->list;
    list_del(__cil_tmp45);
    __cil_tmp46 = & dev->lock;
    spin_unlock_irqrestore(__cil_tmp46, flags);
    might_fault();
    __pu_val = timer->id;
    }
    if (1) {
      goto case_4;
    } else {
      goto switch_default;
      if (0) {
        __asm__ volatile ("call __put_user_1": "=a" (__ret_pu): "0" (__pu_val),
                             "c" ((int *)buf): "ebx");
        goto ldv_38451;
        __asm__ volatile ("call __put_user_2": "=a" (__ret_pu): "0" (__pu_val),
                             "c" ((int *)buf): "ebx");
        goto ldv_38451;
        case_4:
        __asm__ volatile ("call __put_user_4": "=a" (__ret_pu): "0" (__pu_val),
                             "c" ((int *)buf): "ebx");
        goto ldv_38451;
        __asm__ volatile ("call __put_user_8": "=a" (__ret_pu): "0" (__pu_val),
                             "c" ((int *)buf): "ebx");
        goto ldv_38451;
        switch_default:
        __asm__ volatile ("call __put_user_X": "=a" (__ret_pu): "0" (__pu_val),
                             "c" ((int *)buf): "ebx");
        goto ldv_38451;
      } else {

      }
    }
    ldv_38451: ;
    if (__ret_pu != 0) {
      ret = -14;
    } else {
      ret = 4;
    }
    {
    __cil_tmp47 = (void const *)timer;
    kfree(__cil_tmp47);
    }
  } else {

  }
  return ((ssize_t )ret);
}
}
static unsigned int mISDN_poll(struct file *filep , poll_table *wait )
{ struct mISDNtimerdev *dev ;
  unsigned int mask ;
  int tmp ;
  int tmp___0 ;
  void *__cil_tmp7 ;
  u_int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  struct mISDNtimerdev *__cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  unsigned long __cil_tmp12 ;
  wait_queue_head_t *__cil_tmp13 ;
  u_int __cil_tmp14 ;
  struct list_head *__cil_tmp15 ;
  struct list_head const *__cil_tmp16 ;
  u_int __cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  struct list_head *__cil_tmp19 ;
  struct list_head const *__cil_tmp20 ;
  u_int __cil_tmp21 ;

  {
  __cil_tmp7 = filep->private_data;
  dev = (struct mISDNtimerdev *)__cil_tmp7;
  mask = 8U;
  {
  __cil_tmp8 = *debug___6;
  __cil_tmp9 = __cil_tmp8 & 16777216U;
  if (__cil_tmp9 != 0U) {
    {
    printk("<7>%s(%p, %p)\n", "mISDN_poll", filep, wait);
    }
  } else {

  }
  }
  {
  __cil_tmp10 = (struct mISDNtimerdev *)0;
  __cil_tmp11 = (unsigned long )__cil_tmp10;
  __cil_tmp12 = (unsigned long )dev;
  if (__cil_tmp12 != __cil_tmp11) {
    {
    __cil_tmp13 = & dev->wait;
    poll_wait(filep, __cil_tmp13, wait);
    mask = 0U;
    }
    {
    __cil_tmp14 = dev->work;
    if (__cil_tmp14 != 0U) {
      mask = mask | 65U;
    } else {
      {
      __cil_tmp15 = & dev->expired;
      __cil_tmp16 = (struct list_head const *)__cil_tmp15;
      tmp = list_empty(__cil_tmp16);
      }
      if (tmp == 0) {
        mask = mask | 65U;
      } else {

      }
    }
    }
    {
    __cil_tmp17 = *debug___6;
    __cil_tmp18 = __cil_tmp17 & 16777216U;
    if (__cil_tmp18 != 0U) {
      {
      __cil_tmp19 = & dev->expired;
      __cil_tmp20 = (struct list_head const *)__cil_tmp19;
      tmp___0 = list_empty(__cil_tmp20);
      __cil_tmp21 = dev->work;
      printk("<7>%s work(%d) empty(%d)\n", "mISDN_poll", __cil_tmp21, tmp___0);
      }
    } else {

    }
    }
  } else {

  }
  }
  return (mask);
}
}
static void dev_expire_timer(unsigned long data )
{ struct mISDNtimer *timer ;
  u_long flags ;
  raw_spinlock_t *tmp ;
  struct mISDNtimerdev *__cil_tmp5 ;
  spinlock_t *__cil_tmp6 ;
  struct list_head *__cil_tmp7 ;
  struct mISDNtimerdev *__cil_tmp8 ;
  struct list_head *__cil_tmp9 ;
  struct mISDNtimerdev *__cil_tmp10 ;
  spinlock_t *__cil_tmp11 ;
  struct mISDNtimerdev *__cil_tmp12 ;
  wait_queue_head_t *__cil_tmp13 ;
  void *__cil_tmp14 ;

  {
  {
  timer = (struct mISDNtimer *)data;
  __cil_tmp5 = timer->dev;
  __cil_tmp6 = & __cil_tmp5->lock;
  tmp = spinlock_check(__cil_tmp6);
  flags = _raw_spin_lock_irqsave(tmp);
  __cil_tmp7 = & timer->list;
  __cil_tmp8 = timer->dev;
  __cil_tmp9 = & __cil_tmp8->expired;
  list_move_tail(__cil_tmp7, __cil_tmp9);
  __cil_tmp10 = timer->dev;
  __cil_tmp11 = & __cil_tmp10->lock;
  spin_unlock_irqrestore(__cil_tmp11, flags);
  __cil_tmp12 = timer->dev;
  __cil_tmp13 = & __cil_tmp12->wait;
  __cil_tmp14 = (void *)0;
  __wake_up(__cil_tmp13, 1U, 1, __cil_tmp14);
  }
  return;
}
}
static int misdn_add_timer(struct mISDNtimerdev *dev , int timeout )
{ int id ;
  u_long flags ;
  struct mISDNtimer *timer ;
  void *tmp ;
  raw_spinlock_t *tmp___0 ;
  int tmp___1 ;
  struct lock_class_key __key ;
  wait_queue_head_t *__cil_tmp10 ;
  void *__cil_tmp11 ;
  struct mISDNtimer *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  spinlock_t *__cil_tmp15 ;
  int __cil_tmp16 ;
  int __cil_tmp17 ;
  struct list_head *__cil_tmp18 ;
  struct list_head *__cil_tmp19 ;
  spinlock_t *__cil_tmp20 ;
  struct timer_list *__cil_tmp21 ;
  unsigned long __cil_tmp22 ;
  unsigned long __cil_tmp23 ;
  unsigned long __cil_tmp24 ;
  unsigned long __cil_tmp25 ;
  struct timer_list *__cil_tmp26 ;

  {
  if (timeout == 0) {
    {
    dev->work = 1U;
    __cil_tmp10 = & dev->wait;
    __cil_tmp11 = (void *)0;
    __wake_up(__cil_tmp10, 1U, 1, __cil_tmp11);
    id = 0;
    }
  } else {
    {
    tmp = kzalloc(160UL, 208U);
    timer = (struct mISDNtimer *)tmp;
    }
    {
    __cil_tmp12 = (struct mISDNtimer *)0;
    __cil_tmp13 = (unsigned long )__cil_tmp12;
    __cil_tmp14 = (unsigned long )timer;
    if (__cil_tmp14 == __cil_tmp13) {
      return (-12);
    } else {

    }
    }
    {
    __cil_tmp15 = & dev->lock;
    tmp___0 = spinlock_check(__cil_tmp15);
    flags = _raw_spin_lock_irqsave(tmp___0);
    tmp___1 = dev->next_id;
    __cil_tmp16 = dev->next_id;
    dev->next_id = __cil_tmp16 + 1;
    timer->id = tmp___1;
    }
    {
    __cil_tmp17 = dev->next_id;
    if (__cil_tmp17 < 0) {
      dev->next_id = 1;
    } else {

    }
    }
    {
    __cil_tmp18 = & timer->list;
    __cil_tmp19 = & dev->pending;
    list_add_tail(__cil_tmp18, __cil_tmp19);
    __cil_tmp20 = & dev->lock;
    spin_unlock_irqrestore(__cil_tmp20, flags);
    timer->dev = dev;
    timer->tl.data = (unsigned long )timer;
    timer->tl.function = & dev_expire_timer;
    __cil_tmp21 = & timer->tl;
    init_timer_key(__cil_tmp21, "&timer->tl", & __key);
    __cil_tmp22 = (unsigned long )jiffies;
    __cil_tmp23 = (unsigned long )timeout;
    __cil_tmp24 = __cil_tmp23 * 250UL;
    __cil_tmp25 = __cil_tmp24 / 1000UL;
    timer->tl.expires = __cil_tmp25 + __cil_tmp22;
    __cil_tmp26 = & timer->tl;
    add_timer(__cil_tmp26);
    id = timer->id;
    }
  }
  return (id);
}
}
static int misdn_del_timer(struct mISDNtimerdev *dev , int id )
{ u_long flags ;
  struct mISDNtimer *timer ;
  int ret ;
  raw_spinlock_t *tmp ;
  struct list_head const *__mptr ;
  struct list_head const *__mptr___0 ;
  spinlock_t *__cil_tmp9 ;
  struct list_head *__cil_tmp10 ;
  int __cil_tmp11 ;
  struct list_head *__cil_tmp12 ;
  struct timer_list *__cil_tmp13 ;
  void const *__cil_tmp14 ;
  struct list_head *__cil_tmp15 ;
  struct list_head *__cil_tmp16 ;
  unsigned long __cil_tmp17 ;
  struct list_head *__cil_tmp18 ;
  unsigned long __cil_tmp19 ;
  spinlock_t *__cil_tmp20 ;

  {
  {
  ret = 0;
  __cil_tmp9 = & dev->lock;
  tmp = spinlock_check(__cil_tmp9);
  flags = _raw_spin_lock_irqsave(tmp);
  __cil_tmp10 = dev->pending.next;
  __mptr = (struct list_head const *)__cil_tmp10;
  timer = (struct mISDNtimer *)__mptr;
  }
  goto ldv_38499;
  ldv_38498: ;
  {
  __cil_tmp11 = timer->id;
  if (__cil_tmp11 == id) {
    {
    __cil_tmp12 = & timer->list;
    list_del_init(__cil_tmp12);
    __cil_tmp13 = & timer->tl;
    del_timer(__cil_tmp13);
    ret = timer->id;
    __cil_tmp14 = (void const *)timer;
    kfree(__cil_tmp14);
    }
    goto unlock;
  } else {

  }
  }
  __cil_tmp15 = timer->list.next;
  __mptr___0 = (struct list_head const *)__cil_tmp15;
  timer = (struct mISDNtimer *)__mptr___0;
  ldv_38499: ;
  {
  __cil_tmp16 = & dev->pending;
  __cil_tmp17 = (unsigned long )__cil_tmp16;
  __cil_tmp18 = & timer->list;
  __cil_tmp19 = (unsigned long )__cil_tmp18;
  if (__cil_tmp19 != __cil_tmp17) {
    goto ldv_38498;
  } else {
    goto ldv_38500;
  }
  }
  ldv_38500: ;
  unlock:
  {
  __cil_tmp20 = & dev->lock;
  spin_unlock_irqrestore(__cil_tmp20, flags);
  }
  return (ret);
}
}
static long mISDN_ioctl(struct file *filep , unsigned int cmd , unsigned long arg )
{ struct mISDNtimerdev *dev ;
  int id ;
  int tout ;
  int ret ;
  int __ret_gu ;
  unsigned long __val_gu ;
  int __ret_pu ;
  int __pu_val ;
  int __ret_gu___0 ;
  unsigned long __val_gu___0 ;
  int __ret_pu___0 ;
  int __pu_val___0 ;
  void *__cil_tmp16 ;
  u_int __cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  int __cil_tmp19 ;
  int __cil_tmp20 ;
  u_int __cil_tmp21 ;
  unsigned int __cil_tmp22 ;
  u_int __cil_tmp23 ;
  unsigned int __cil_tmp24 ;

  {
  __cil_tmp16 = filep->private_data;
  dev = (struct mISDNtimerdev *)__cil_tmp16;
  ret = 0;
  {
  __cil_tmp17 = *debug___6;
  __cil_tmp18 = __cil_tmp17 & 16777216U;
  if (__cil_tmp18 != 0U) {
    {
    printk("<7>%s(%p, %x, %lx)\n", "mISDN_ioctl", filep, cmd, arg);
    }
  } else {

  }
  }
  {
  mutex_lock_nested(& mISDN_mutex, 0U);
  }
  {
  __cil_tmp19 = (int )cmd;
  if (__cil_tmp19 == -2147202752) {
    goto case_neg_2147202752;
  } else {
    {
    __cil_tmp20 = (int )cmd;
    if (__cil_tmp20 == -2147202751) {
      goto case_neg_2147202751;
    } else {
      goto switch_default___3;
      if (0) {
        case_neg_2147202752:
        {
        might_fault();
        }
        if (1) {
          goto case_4;
        } else {
          goto switch_default;
          if (0) {
            __asm__ volatile ("call __get_user_1": "=a" (__ret_gu), "=d" (__val_gu): "0" ((int *)arg));
            goto ldv_38515;
            __asm__ volatile ("call __get_user_2": "=a" (__ret_gu), "=d" (__val_gu): "0" ((int *)arg));
            goto ldv_38515;
            case_4:
            __asm__ volatile ("call __get_user_4": "=a" (__ret_gu), "=d" (__val_gu): "0" ((int *)arg));
            goto ldv_38515;
            __asm__ volatile ("call __get_user_8": "=a" (__ret_gu), "=d" (__val_gu): "0" ((int *)arg));
            goto ldv_38515;
            switch_default:
            __asm__ volatile ("call __get_user_X": "=a" (__ret_gu), "=d" (__val_gu): "0" ((int *)arg));
            goto ldv_38515;
          } else {

          }
        }
        ldv_38515:
        tout = (int )__val_gu;
        if (__ret_gu != 0) {
          ret = -14;
          goto ldv_38521;
        } else {

        }
        {
        id = misdn_add_timer(dev, tout);
        }
        {
        __cil_tmp21 = *debug___6;
        __cil_tmp22 = __cil_tmp21 & 16777216U;
        if (__cil_tmp22 != 0U) {
          {
          printk("<7>%s add %d id %d\n", "mISDN_ioctl", tout, id);
          }
        } else {

        }
        }
        if (id < 0) {
          ret = id;
          goto ldv_38521;
        } else {

        }
        {
        might_fault();
        __pu_val = id;
        }
        if (1) {
          goto case_4___0;
        } else {
          goto switch_default___0;
          if (0) {
            __asm__ volatile ("call __put_user_1": "=a" (__ret_pu): "0" (__pu_val),
                                 "c" ((int *)arg): "ebx");
            goto ldv_38525;
            __asm__ volatile ("call __put_user_2": "=a" (__ret_pu): "0" (__pu_val),
                                 "c" ((int *)arg): "ebx");
            goto ldv_38525;
            case_4___0:
            __asm__ volatile ("call __put_user_4": "=a" (__ret_pu): "0" (__pu_val),
                                 "c" ((int *)arg): "ebx");
            goto ldv_38525;
            __asm__ volatile ("call __put_user_8": "=a" (__ret_pu): "0" (__pu_val),
                                 "c" ((int *)arg): "ebx");
            goto ldv_38525;
            switch_default___0:
            __asm__ volatile ("call __put_user_X": "=a" (__ret_pu): "0" (__pu_val),
                                 "c" ((int *)arg): "ebx");
            goto ldv_38525;
          } else {

          }
        }
        ldv_38525: ;
        if (__ret_pu != 0) {
          ret = -14;
        } else {

        }
        goto ldv_38521;
        case_neg_2147202751:
        {
        might_fault();
        }
        if (1) {
          goto case_4___1;
        } else {
          goto switch_default___1;
          if (0) {
            __asm__ volatile ("call __get_user_1": "=a" (__ret_gu___0), "=d" (__val_gu___0): "0" ((int *)arg));
            goto ldv_38535;
            __asm__ volatile ("call __get_user_2": "=a" (__ret_gu___0), "=d" (__val_gu___0): "0" ((int *)arg));
            goto ldv_38535;
            case_4___1:
            __asm__ volatile ("call __get_user_4": "=a" (__ret_gu___0), "=d" (__val_gu___0): "0" ((int *)arg));
            goto ldv_38535;
            __asm__ volatile ("call __get_user_8": "=a" (__ret_gu___0), "=d" (__val_gu___0): "0" ((int *)arg));
            goto ldv_38535;
            switch_default___1:
            __asm__ volatile ("call __get_user_X": "=a" (__ret_gu___0), "=d" (__val_gu___0): "0" ((int *)arg));
            goto ldv_38535;
          } else {

          }
        }
        ldv_38535:
        id = (int )__val_gu___0;
        if (__ret_gu___0 != 0) {
          ret = -14;
          goto ldv_38521;
        } else {

        }
        {
        __cil_tmp23 = *debug___6;
        __cil_tmp24 = __cil_tmp23 & 16777216U;
        if (__cil_tmp24 != 0U) {
          {
          printk("<7>%s del id %d\n", "mISDN_ioctl", id);
          }
        } else {

        }
        }
        {
        id = misdn_del_timer(dev, id);
        might_fault();
        __pu_val___0 = id;
        }
        if (1) {
          goto case_4___2;
        } else {
          goto switch_default___2;
          if (0) {
            __asm__ volatile ("call __put_user_1": "=a" (__ret_pu___0): "0" (__pu_val___0),
                                 "c" ((int *)arg): "ebx");
            goto ldv_38544;
            __asm__ volatile ("call __put_user_2": "=a" (__ret_pu___0): "0" (__pu_val___0),
                                 "c" ((int *)arg): "ebx");
            goto ldv_38544;
            case_4___2:
            __asm__ volatile ("call __put_user_4": "=a" (__ret_pu___0): "0" (__pu_val___0),
                                 "c" ((int *)arg): "ebx");
            goto ldv_38544;
            __asm__ volatile ("call __put_user_8": "=a" (__ret_pu___0): "0" (__pu_val___0),
                                 "c" ((int *)arg): "ebx");
            goto ldv_38544;
            switch_default___2:
            __asm__ volatile ("call __put_user_X": "=a" (__ret_pu___0): "0" (__pu_val___0),
                                 "c" ((int *)arg): "ebx");
            goto ldv_38544;
          } else {

          }
        }
        ldv_38544: ;
        if (__ret_pu___0 != 0) {
          ret = -14;
        } else {

        }
        goto ldv_38521;
        switch_default___3:
        ret = -22;
      } else {

      }
    }
    }
  }
  }
  ldv_38521:
  {
  mutex_unlock(& mISDN_mutex);
  }
  return ((long )ret);
}
}
static struct file_operations const mISDN_fops =
     {(struct module *)0, & no_llseek, & mISDN_read, (ssize_t (*)(struct file * , char const * ,
                                                                size_t , loff_t * ))0,
    (ssize_t (*)(struct kiocb * , struct iovec const * , unsigned long , loff_t ))0,
    (ssize_t (*)(struct kiocb * , struct iovec const * , unsigned long , loff_t ))0,
    (int (*)(struct file * , void * , int (*)(void * , char const * , int , loff_t ,
                                              u64 , unsigned int ) ))0, & mISDN_poll,
    & mISDN_ioctl, (long (*)(struct file * , unsigned int , unsigned long ))0, (int (*)(struct file * ,
                                                                                          struct vm_area_struct * ))0,
    & mISDN_open, (int (*)(struct file * , fl_owner_t ))0, & mISDN_close, (int (*)(struct file * ,
                                                                                    int ))0,
    (int (*)(struct kiocb * , int ))0, (int (*)(int , struct file * , int ))0,
    (int (*)(struct file * , int , struct file_lock * ))0, (ssize_t (*)(struct file * ,
                                                                         struct page * ,
                                                                         int , size_t ,
                                                                         loff_t * ,
                                                                         int ))0,
    (unsigned long (*)(struct file * , unsigned long , unsigned long , unsigned long ,
                       unsigned long ))0, (int (*)(int ))0, (int (*)(struct file * ,
                                                                       int , struct file_lock * ))0,
    (ssize_t (*)(struct pipe_inode_info * , struct file * , loff_t * , size_t , unsigned int ))0,
    (ssize_t (*)(struct file * , loff_t * , struct pipe_inode_info * , size_t , unsigned int ))0,
    (int (*)(struct file * , long , struct file_lock ** ))0, (long (*)(struct file * ,
                                                                        int , loff_t ,
                                                                        loff_t ))0};
static struct miscdevice mISDNtimer =
     {255, "mISDNtimer", & mISDN_fops, {(struct list_head *)0, (struct list_head *)0},
    (struct device *)0, (struct device *)0, (char const *)0, 0U};
int mISDN_inittimer(u_int *deb )
{ int err ;

  {
  {
  debug___6 = deb;
  err = misc_register(& mISDNtimer);
  }
  if (err != 0) {
    {
    printk("<4>mISDN: Could not register timer device\n");
    }
  } else {

  }
  return (err);
}
}
void mISDN_timer_cleanup(void)
{

  {
  {
  misc_deregister(& mISDNtimer);
  }
  return;
}
}
extern void ldv_check_return_value(int ) ;
void main(void)
{ struct file *var_group1 ;
  char *var_mISDN_read_2_p1 ;
  size_t var_mISDN_read_2_p2 ;
  loff_t *var_mISDN_read_2_p3 ;
  ssize_t res_mISDN_read_2 ;
  poll_table *var_mISDN_poll_3_p1 ;
  unsigned int var_mISDN_ioctl_7_p1 ;
  unsigned long var_mISDN_ioctl_7_p2 ;
  struct inode *var_group2 ;
  int res_mISDN_open_0 ;
  unsigned long var_dev_expire_timer_4_p0 ;
  int ldv_s_mISDN_fops_file_operations ;
  int tmp ;
  int tmp___0 ;
  int __cil_tmp15 ;

  {
  {
  ldv_s_mISDN_fops_file_operations = 0;
  LDV_IN_INTERRUPT = 1;
  ldv_initialize();
  }
  goto ldv_38594;
  ldv_38593:
  {
  tmp = nondet_int();
  }
  if (tmp == 0) {
    goto case_0;
  } else
  if (tmp == 1) {
    goto case_1;
  } else
  if (tmp == 2) {
    goto case_2;
  } else
  if (tmp == 3) {
    goto case_3;
  } else
  if (tmp == 4) {
    goto case_4;
  } else
  if (tmp == 5) {
    goto case_5;
  } else {
    goto switch_default;
    if (0) {
      case_0: ;
      if (ldv_s_mISDN_fops_file_operations == 0) {
        {
        res_mISDN_open_0 = mISDN_open(var_group2, var_group1);
        ldv_check_return_value(res_mISDN_open_0);
        }
        if (res_mISDN_open_0 != 0) {
          goto ldv_module_exit;
        } else {

        }
        ldv_s_mISDN_fops_file_operations = ldv_s_mISDN_fops_file_operations + 1;
      } else {

      }
      goto ldv_38586;
      case_1: ;
      if (ldv_s_mISDN_fops_file_operations == 1) {
        {
        res_mISDN_read_2 = mISDN_read(var_group1, var_mISDN_read_2_p1, var_mISDN_read_2_p2,
                                      var_mISDN_read_2_p3);
        __cil_tmp15 = (int )res_mISDN_read_2;
        ldv_check_return_value(__cil_tmp15);
        }
        if (res_mISDN_read_2 < 0L) {
          goto ldv_module_exit;
        } else {

        }
        ldv_s_mISDN_fops_file_operations = ldv_s_mISDN_fops_file_operations + 1;
      } else {

      }
      goto ldv_38586;
      case_2: ;
      if (ldv_s_mISDN_fops_file_operations == 2) {
        {
        mISDN_close(var_group2, var_group1);
        ldv_s_mISDN_fops_file_operations = 0;
        }
      } else {

      }
      goto ldv_38586;
      case_3:
      {
      mISDN_poll(var_group1, var_mISDN_poll_3_p1);
      }
      goto ldv_38586;
      case_4:
      {
      mISDN_ioctl(var_group1, var_mISDN_ioctl_7_p1, var_mISDN_ioctl_7_p2);
      }
      goto ldv_38586;
      case_5:
      {
      dev_expire_timer(var_dev_expire_timer_4_p0);
      }
      goto ldv_38586;
      switch_default: ;
      goto ldv_38586;
    } else {

    }
  }
  ldv_38586: ;
  ldv_38594:
  {
  tmp___0 = nondet_int();
  }
  if (tmp___0 != 0) {
    goto ldv_38593;
  } else
  if (ldv_s_mISDN_fops_file_operations != 0) {
    goto ldv_38593;
  } else {
    goto ldv_38595;
  }
  ldv_38595: ;
  ldv_module_exit:
  {
  ldv_check_final_state();
  }
  return;
}
}
int ldv_nonseekable_open_2(struct inode *ldv_func_arg1 , struct file *ldv_func_arg2 )
{

  {
  return (0);
}
}
void ldv_module_put_3(struct module *ldv_func_arg1 )
{

  {
  {
  ldv_module_put(ldv_func_arg1);
  }
  return;
}
}
