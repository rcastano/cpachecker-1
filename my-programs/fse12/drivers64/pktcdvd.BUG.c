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
typedef __s32 int32_t;
typedef __u32 uint32_t;
typedef unsigned long sector_t;
typedef unsigned long blkcnt_t;
typedef u64 dma_addr_t;
typedef __u16 __be16;
typedef __u32 __be32;
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
typedef void (*ctor_fn_t)(void);
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
struct compat_timespec;
struct compat_timespec;
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
struct page;
struct page;
struct page;
struct page;
struct task_struct;
struct task_struct;
struct task_struct;
struct task_struct;
struct exec_domain;
struct exec_domain;
struct exec_domain;
struct exec_domain;
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
struct file;
struct file;
struct seq_file;
struct seq_file;
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
struct thread_struct;
struct thread_struct;
struct cpumask;
struct cpumask;
struct cpumask;
struct cpumask;
struct arch_spinlock;
struct arch_spinlock;
struct arch_spinlock;
struct arch_spinlock;
struct cpumask {
   unsigned long bits[64U] ;
};
typedef struct cpumask cpumask_t;
typedef struct cpumask *cpumask_var_t;
struct map_segment;
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
struct seq_operations;
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
struct kmem_cache;
struct perf_event;
struct perf_event;
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
struct __anonstruct_mm_segment_t_28 {
   unsigned long seg ;
};
typedef struct __anonstruct_mm_segment_t_28 mm_segment_t;
typedef atomic64_t atomic_long_t;
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
struct __wait_queue;
struct __wait_queue;
struct __wait_queue;
typedef struct __wait_queue wait_queue_t;
struct __wait_queue {
   unsigned int flags ;
   void *private ;
   int (*func)(wait_queue_t * , unsigned int , int , void * ) ;
   struct list_head task_list ;
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
struct ctl_table;
struct ctl_table;
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
   char start_comm[16U] ;
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
struct vm_area_struct;
struct vm_area_struct;
struct bio_vec;
struct bio_vec;
struct bio_vec;
struct bio_vec;
struct call_single_data {
   struct list_head list ;
   void (*func)(void * ) ;
   void *info ;
   u16 flags ;
   u16 priv ;
};
struct rcu_head {
   struct rcu_head *next ;
   void (*func)(struct rcu_head * ) ;
};
struct nsproxy;
struct nsproxy;
struct nsproxy;
struct nsproxy;
struct ctl_table_root;
struct ctl_table_root;
struct ctl_table_root;
struct ctl_table_root;
struct ctl_table_set {
   struct list_head list ;
   struct ctl_table_set *parent ;
   int (*is_seen)(struct ctl_table_set * ) ;
};
struct ctl_table_header;
struct ctl_table_header;
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
struct cred;
struct cred;
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
struct sysfs_dirent;
struct sysfs_dirent;
struct kref {
   atomic_t refcount ;
};
enum kobject_action {
    KOBJ_ADD = 0,
    KOBJ_REMOVE = 1,
    KOBJ_CHANGE = 2,
    KOBJ_MOVE = 3,
    KOBJ_ONLINE = 4,
    KOBJ_OFFLINE = 5,
    KOBJ_MAX = 6
} ;
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
struct kernel_param;
struct kernel_param;
struct kernel_param_ops {
   int (*set)(char const * , struct kernel_param const * ) ;
   int (*get)(char * , struct kernel_param const * ) ;
   void (*free)(void * ) ;
};
struct kparam_string;
struct kparam_string;
struct kparam_string;
struct kparam_array;
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
struct module_ref {
   unsigned int incs ;
   unsigned int decs ;
};
struct module_sect_attrs;
struct module_sect_attrs;
struct module_sect_attrs;
struct module_notes_attrs;
struct module_notes_attrs;
struct module_notes_attrs;
struct ftrace_event_call;
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
struct pkt_ctrl_command {
   __u32 command ;
   __u32 dev_index ;
   __u32 dev ;
   __u32 pkt_dev ;
   __u32 num_devices ;
   __u32 padding ;
};
struct kernel_cap_struct {
   __u32 cap[2U] ;
};
typedef struct kernel_cap_struct kernel_cap_t;
struct dentry;
struct dentry;
struct dentry;
struct dentry;
struct user_namespace;
struct user_namespace;
struct user_namespace;
struct user_namespace;
struct rb_node {
   unsigned long rb_parent_color ;
   struct rb_node *rb_right ;
   struct rb_node *rb_left ;
};
struct rb_root {
   struct rb_node *rb_node ;
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
struct address_space;
struct address_space;
struct address_space;
struct address_space;
struct __anonstruct_ldv_13933_132 {
   u16 inuse ;
   u16 objects ;
};
union __anonunion_ldv_13934_131 {
   atomic_t _mapcount ;
   struct __anonstruct_ldv_13933_132 ldv_13933 ;
};
struct __anonstruct_ldv_13939_134 {
   unsigned long private ;
   struct address_space *mapping ;
};
union __anonunion_ldv_13942_133 {
   struct __anonstruct_ldv_13939_134 ldv_13939 ;
   struct kmem_cache *slab ;
   struct page *first_page ;
};
union __anonunion_ldv_13946_135 {
   unsigned long index ;
   void *freelist ;
};
struct page {
   unsigned long flags ;
   atomic_t _count ;
   union __anonunion_ldv_13934_131 ldv_13934 ;
   union __anonunion_ldv_13942_133 ldv_13942 ;
   union __anonunion_ldv_13946_135 ldv_13946 ;
   struct list_head lru ;
};
struct __anonstruct_vm_set_137 {
   struct list_head list ;
   void *parent ;
   struct vm_area_struct *head ;
};
union __anonunion_shared_136 {
   struct __anonstruct_vm_set_137 vm_set ;
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
   union __anonunion_shared_136 shared ;
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
struct linux_binfmt;
struct mmu_notifier_mm;
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
typedef unsigned long cputime_t;
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
struct __anonstruct_sigset_t_138 {
   unsigned long sig[1U] ;
};
typedef struct __anonstruct_sigset_t_138 sigset_t;
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
struct __anonstruct__kill_140 {
   __kernel_pid_t _pid ;
   __kernel_uid32_t _uid ;
};
struct __anonstruct__timer_141 {
   __kernel_timer_t _tid ;
   int _overrun ;
   char _pad[0U] ;
   sigval_t _sigval ;
   int _sys_private ;
};
struct __anonstruct__rt_142 {
   __kernel_pid_t _pid ;
   __kernel_uid32_t _uid ;
   sigval_t _sigval ;
};
struct __anonstruct__sigchld_143 {
   __kernel_pid_t _pid ;
   __kernel_uid32_t _uid ;
   int _status ;
   __kernel_clock_t _utime ;
   __kernel_clock_t _stime ;
};
struct __anonstruct__sigfault_144 {
   void *_addr ;
   short _addr_lsb ;
};
struct __anonstruct__sigpoll_145 {
   long _band ;
   int _fd ;
};
union __anonunion__sifields_139 {
   int _pad[28U] ;
   struct __anonstruct__kill_140 _kill ;
   struct __anonstruct__timer_141 _timer ;
   struct __anonstruct__rt_142 _rt ;
   struct __anonstruct__sigchld_143 _sigchld ;
   struct __anonstruct__sigfault_144 _sigfault ;
   struct __anonstruct__sigpoll_145 _sigpoll ;
};
struct siginfo {
   int si_signo ;
   int si_errno ;
   int si_code ;
   union __anonunion__sifields_139 _sifields ;
};
typedef struct siginfo siginfo_t;
struct user_struct;
struct user_struct;
struct user_struct;
struct sigpending {
   struct list_head list ;
   sigset_t signal ;
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
   struct hlist_head tasks[3U] ;
   struct rcu_head rcu ;
   struct upid numbers[1U] ;
};
struct pid_link {
   struct hlist_node node ;
   struct pid *pid ;
};
struct percpu_counter {
   spinlock_t lock ;
   s64 count ;
   struct list_head list ;
   s32 *counters ;
};
struct prop_local_percpu {
   struct percpu_counter events ;
   int shift ;
   unsigned long period ;
   spinlock_t lock ;
};
struct prop_local_single {
   unsigned long events ;
   unsigned long period ;
   int shift ;
   spinlock_t lock ;
};
struct __anonstruct_seccomp_t_148 {
   int mode ;
};
typedef struct __anonstruct_seccomp_t_148 seccomp_t;
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
struct key;
struct key;
struct signal_struct;
struct signal_struct;
struct signal_struct;
struct signal_struct;
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
union __anonunion_ldv_15200_149 {
   time_t expiry ;
   time_t revoked_at ;
};
union __anonunion_type_data_150 {
   struct list_head link ;
   unsigned long x[2U] ;
   void *p[2U] ;
   int reject_error ;
};
union __anonunion_payload_151 {
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
   union __anonunion_ldv_15200_149 ldv_15200 ;
   uid_t uid ;
   gid_t gid ;
   key_perm_t perm ;
   unsigned short quotalen ;
   unsigned short datalen ;
   unsigned long flags ;
   char *description ;
   union __anonunion_type_data_150 type_data ;
   union __anonunion_payload_151 payload ;
};
struct audit_context;
struct audit_context;
struct audit_context;
struct audit_context;
struct inode;
struct inode;
struct inode;
struct inode;
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
struct cfs_rq;
struct cfs_rq;
struct cfs_rq;
struct cfs_rq;
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
union __anonunion_ki_obj_152 {
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
   union __anonunion_ki_obj_152 ki_obj ;
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
struct backing_dev_info;
struct backing_dev_info;
struct backing_dev_info;
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
struct pipe_inode_info;
struct pipe_inode_info;
struct pipe_inode_info;
struct pipe_inode_info;
struct rq;
struct rq;
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
struct mem_cgroup;
struct memcg_batch_info {
   int do_batch ;
   struct mem_cgroup *memcg ;
   unsigned long nr_pages ;
   unsigned long memsw_nr_pages ;
};
struct files_struct;
struct files_struct;
struct files_struct;
struct irqaction;
struct irqaction;
struct irqaction;
struct css_set;
struct css_set;
struct css_set;
struct compat_robust_list_head;
struct compat_robust_list_head;
struct compat_robust_list_head;
struct ftrace_ret_stack;
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
struct device_type;
struct device_type;
struct device_type;
struct class;
struct class;
struct class;
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
   ssize_t (*show)(struct bus_type * , char * ) ;
   ssize_t (*store)(struct bus_type * , char const * , size_t ) ;
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
struct bio;
struct bio;
struct bio;
struct bio;
struct bio_integrity_payload;
struct bio_integrity_payload;
struct bio_integrity_payload;
struct bio_integrity_payload;
struct block_device;
struct block_device;
struct block_device;
struct block_device;
typedef void bio_end_io_t(struct bio * , int );
typedef void bio_destructor_t(struct bio * );
struct bio_vec {
   struct page *bv_page ;
   unsigned int bv_len ;
   unsigned int bv_offset ;
};
struct bio {
   sector_t bi_sector ;
   struct bio *bi_next ;
   struct block_device *bi_bdev ;
   unsigned long bi_flags ;
   unsigned long bi_rw ;
   unsigned short bi_vcnt ;
   unsigned short bi_idx ;
   unsigned int bi_phys_segments ;
   unsigned int bi_size ;
   unsigned int bi_seg_front_size ;
   unsigned int bi_seg_back_size ;
   unsigned int bi_max_vecs ;
   unsigned int bi_comp_cpu ;
   atomic_t bi_cnt ;
   struct bio_vec *bi_io_vec ;
   bio_end_io_t *bi_end_io ;
   void *bi_private ;
   struct bio_integrity_payload *bi_integrity ;
   bio_destructor_t *bi_destructor ;
   struct bio_vec bi_inline_vecs[0U] ;
};
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
struct dentry_operations;
struct dentry_operations;
struct dentry_operations;
struct super_block;
struct super_block;
struct super_block;
union __anonunion_d_u_154 {
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
   union __anonunion_d_u_154 d_u ;
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
struct radix_tree_node;
struct radix_tree_root {
   unsigned int height ;
   gfp_t gfp_mask ;
   struct radix_tree_node *rnode ;
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
struct export_operations;
struct export_operations;
struct hd_geometry;
struct hd_geometry;
struct hd_geometry;
struct hd_geometry;
struct poll_table_struct;
struct poll_table_struct;
struct poll_table_struct;
struct poll_table_struct;
struct kstatfs;
struct kstatfs;
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
struct writeback_control;
struct writeback_control;
struct writeback_control;
struct writeback_control;
union __anonunion_arg_156 {
   char *buf ;
   void *data ;
};
struct __anonstruct_read_descriptor_t_155 {
   size_t written ;
   size_t count ;
   union __anonunion_arg_156 arg ;
   int error ;
};
typedef struct __anonstruct_read_descriptor_t_155 read_descriptor_t;
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
union __anonunion_ldv_19050_157 {
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
union __anonunion_ldv_19077_158 {
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
   union __anonunion_ldv_19050_157 ldv_19050 ;
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
   union __anonunion_ldv_19077_158 ldv_19077 ;
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
union __anonunion_f_u_159 {
   struct list_head fu_list ;
   struct rcu_head fu_rcuhead ;
};
struct file {
   union __anonunion_f_u_159 f_u ;
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
struct __anonstruct_afs_161 {
   struct list_head link ;
   int state ;
};
union __anonunion_fl_u_160 {
   struct nfs_lock_info nfs_fl ;
   struct nfs4_lock_info nfs4_fl ;
   struct __anonstruct_afs_161 afs ;
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
   union __anonunion_fl_u_160 fl_u ;
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
struct block_device_operations;
struct block_device_operations;
struct block_device_operations;
struct block_device_operations;
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
struct disk_stats {
   unsigned long sectors[2U] ;
   unsigned long ios[2U] ;
   unsigned long merges[2U] ;
   unsigned long ticks[2U] ;
   unsigned long io_ticks ;
   unsigned long time_in_queue ;
};
struct partition_meta_info {
   u8 uuid[16U] ;
   u8 volname[64U] ;
};
struct hd_struct {
   sector_t start_sect ;
   sector_t nr_sects ;
   sector_t alignment_offset ;
   unsigned int discard_alignment ;
   struct device __dev ;
   struct kobject *holder_dir ;
   int policy ;
   int partno ;
   struct partition_meta_info *info ;
   int make_it_fail ;
   unsigned long stamp ;
   atomic_t in_flight[2U] ;
   struct disk_stats *dkstats ;
   atomic_t ref ;
   struct rcu_head rcu_head ;
};
struct disk_part_tbl {
   struct rcu_head rcu_head ;
   int len ;
   struct hd_struct *last_lookup ;
   struct hd_struct *part[0U] ;
};
struct disk_events;
struct disk_events;
struct disk_events;
struct disk_events;
struct request_queue;
struct request_queue;
struct request_queue;
struct timer_rand_state;
struct timer_rand_state;
struct timer_rand_state;
struct blk_integrity;
struct blk_integrity;
struct blk_integrity;
struct gendisk {
   int major ;
   int first_minor ;
   int minors ;
   char disk_name[32U] ;
   char *(*devnode)(struct gendisk * , mode_t * ) ;
   unsigned int events ;
   unsigned int async_events ;
   struct disk_part_tbl *part_tbl ;
   struct hd_struct part0 ;
   struct block_device_operations const *fops ;
   struct request_queue *queue ;
   void *private_data ;
   int flags ;
   struct device *driverfs_dev ;
   struct kobject *slave_dir ;
   struct timer_rand_state *random ;
   atomic_t sync_io ;
   struct disk_events *ev ;
   struct blk_integrity *integrity ;
   int node_id ;
};
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
struct exception_table_entry {
   unsigned long insn ;
   unsigned long fixup ;
};
struct proc_dir_entry;
struct proc_dir_entry;
struct proc_dir_entry;
struct proc_dir_entry;
enum writeback_sync_modes {
    WB_SYNC_NONE = 0,
    WB_SYNC_ALL = 1
} ;
struct writeback_control {
   enum writeback_sync_modes sync_mode ;
   unsigned long *older_than_this ;
   unsigned long wb_start ;
   long nr_to_write ;
   long pages_skipped ;
   loff_t range_start ;
   loff_t range_end ;
   unsigned char nonblocking : 1 ;
   unsigned char encountered_congestion : 1 ;
   unsigned char for_kupdate : 1 ;
   unsigned char for_background : 1 ;
   unsigned char for_reclaim : 1 ;
   unsigned char range_cyclic : 1 ;
   unsigned char more_io : 1 ;
};
struct bdi_writeback;
struct bdi_writeback;
struct bdi_writeback;
struct bdi_writeback;
typedef int congested_fn(void * , int );
struct bdi_writeback {
   struct backing_dev_info *bdi ;
   unsigned int nr ;
   unsigned long last_old_flush ;
   unsigned long last_active ;
   struct task_struct *task ;
   struct timer_list wakeup_timer ;
   struct list_head b_dirty ;
   struct list_head b_io ;
   struct list_head b_more_io ;
};
struct backing_dev_info {
   struct list_head bdi_list ;
   unsigned long ra_pages ;
   unsigned long state ;
   unsigned int capabilities ;
   congested_fn *congested_fn ;
   void *congested_data ;
   char *name ;
   struct percpu_counter bdi_stat[2U] ;
   struct prop_local_percpu completions ;
   int dirty_exceeded ;
   unsigned int min_ratio ;
   unsigned int max_ratio ;
   unsigned int max_prop_frac ;
   struct bdi_writeback wb ;
   spinlock_t wb_lock ;
   struct list_head work_list ;
   struct device *dev ;
   struct timer_list laptop_mode_wb_timer ;
   struct dentry *debug_dir ;
   struct dentry *debug_stats ;
};
typedef void *mempool_alloc_t(gfp_t , void * );
typedef void mempool_free_t(void * , void * );
struct mempool_s {
   spinlock_t lock ;
   int min_nr ;
   int curr_nr ;
   void **elements ;
   void *pool_data ;
   mempool_alloc_t *alloc ;
   mempool_free_t *free ;
   wait_queue_head_t wait ;
};
typedef struct mempool_s mempool_t;
struct io_context {
   atomic_long_t refcount ;
   atomic_t nr_tasks ;
   spinlock_t lock ;
   unsigned short ioprio ;
   unsigned short ioprio_changed ;
   unsigned short cgroup_changed ;
   int nr_batch_requests ;
   unsigned long last_waited ;
   struct radix_tree_root radix_root ;
   struct hlist_head cic_list ;
   void *ioc_data ;
};
struct bio_integrity_payload {
   struct bio *bip_bio ;
   sector_t bip_sector ;
   void *bip_buf ;
   bio_end_io_t *bip_end_io ;
   unsigned int bip_size ;
   unsigned short bip_slab ;
   unsigned short bip_vcnt ;
   unsigned short bip_idx ;
   struct work_struct bip_work ;
   struct bio_vec bip_vec[0U] ;
};
struct bio_pair {
   struct bio bio1 ;
   struct bio bio2 ;
   struct bio_vec bv1 ;
   struct bio_vec bv2 ;
   struct bio_integrity_payload bip1 ;
   struct bio_integrity_payload bip2 ;
   struct bio_vec iv1 ;
   struct bio_vec iv2 ;
   atomic_t cnt ;
   int error ;
};
struct bio_list {
   struct bio *head ;
   struct bio *tail ;
};
struct bsg_class_device {
   struct device *class_dev ;
   struct device *parent ;
   int minor ;
   struct request_queue *queue ;
   struct kref ref ;
   void (*release)(struct device * ) ;
};
struct scatterlist {
   unsigned long sg_magic ;
   unsigned long page_link ;
   unsigned int offset ;
   unsigned int length ;
   dma_addr_t dma_address ;
   unsigned int dma_length ;
};
struct elevator_queue;
struct elevator_queue;
struct elevator_queue;
struct elevator_queue;
struct blk_trace;
struct blk_trace;
struct blk_trace;
struct blk_trace;
struct request;
struct request;
struct request;
struct request;
typedef void rq_end_io_fn(struct request * , int );
struct request_list {
   int count[2U] ;
   int starved[2U] ;
   int elvpriv ;
   mempool_t *rq_pool ;
   wait_queue_head_t wait[2U] ;
};
enum rq_cmd_type_bits {
    REQ_TYPE_FS = 1,
    REQ_TYPE_BLOCK_PC = 2,
    REQ_TYPE_SENSE = 3,
    REQ_TYPE_PM_SUSPEND = 4,
    REQ_TYPE_PM_RESUME = 5,
    REQ_TYPE_PM_SHUTDOWN = 6,
    REQ_TYPE_SPECIAL = 7,
    REQ_TYPE_ATA_TASKFILE = 8,
    REQ_TYPE_ATA_PC = 9
} ;
union __anonunion_ldv_26214_163 {
   struct rb_node rb_node ;
   void *completion_data ;
};
struct __anonstruct_flush_165 {
   unsigned int seq ;
   struct list_head list ;
};
union __anonunion_ldv_26221_164 {
   void *elevator_private[3U] ;
   struct __anonstruct_flush_165 flush ;
};
struct request {
   struct list_head queuelist ;
   struct call_single_data csd ;
   struct request_queue *q ;
   unsigned int cmd_flags ;
   enum rq_cmd_type_bits cmd_type ;
   unsigned long atomic_flags ;
   int cpu ;
   unsigned int __data_len ;
   sector_t __sector ;
   struct bio *bio ;
   struct bio *biotail ;
   struct hlist_node hash ;
   union __anonunion_ldv_26214_163 ldv_26214 ;
   union __anonunion_ldv_26221_164 ldv_26221 ;
   struct gendisk *rq_disk ;
   struct hd_struct *part ;
   unsigned long start_time ;
   unsigned short nr_phys_segments ;
   unsigned short nr_integrity_segments ;
   unsigned short ioprio ;
   int ref_count ;
   void *special ;
   char *buffer ;
   int tag ;
   int errors ;
   unsigned char __cmd[16U] ;
   unsigned char *cmd ;
   unsigned short cmd_len ;
   unsigned int extra_len ;
   unsigned int sense_len ;
   unsigned int resid_len ;
   void *sense ;
   unsigned long deadline ;
   struct list_head timeout_list ;
   unsigned int timeout ;
   int retries ;
   rq_end_io_fn *end_io ;
   void *end_io_data ;
   struct request *next_rq ;
};
typedef int elevator_merge_fn(struct request_queue * , struct request ** , struct bio * );
typedef void elevator_merge_req_fn(struct request_queue * , struct request * , struct request * );
typedef void elevator_merged_fn(struct request_queue * , struct request * , int );
typedef int elevator_allow_merge_fn(struct request_queue * , struct request * , struct bio * );
typedef void elevator_bio_merged_fn(struct request_queue * , struct request * , struct bio * );
typedef int elevator_dispatch_fn(struct request_queue * , int );
typedef void elevator_add_req_fn(struct request_queue * , struct request * );
typedef struct request *elevator_request_list_fn(struct request_queue * , struct request * );
typedef void elevator_completed_req_fn(struct request_queue * , struct request * );
typedef int elevator_may_queue_fn(struct request_queue * , int );
typedef int elevator_set_req_fn(struct request_queue * , struct request * , gfp_t );
typedef void elevator_put_req_fn(struct request * );
typedef void elevator_activate_req_fn(struct request_queue * , struct request * );
typedef void elevator_deactivate_req_fn(struct request_queue * , struct request * );
typedef void *elevator_init_fn(struct request_queue * );
typedef void elevator_exit_fn(struct elevator_queue * );
struct elevator_ops {
   elevator_merge_fn *elevator_merge_fn ;
   elevator_merged_fn *elevator_merged_fn ;
   elevator_merge_req_fn *elevator_merge_req_fn ;
   elevator_allow_merge_fn *elevator_allow_merge_fn ;
   elevator_bio_merged_fn *elevator_bio_merged_fn ;
   elevator_dispatch_fn *elevator_dispatch_fn ;
   elevator_add_req_fn *elevator_add_req_fn ;
   elevator_activate_req_fn *elevator_activate_req_fn ;
   elevator_deactivate_req_fn *elevator_deactivate_req_fn ;
   elevator_completed_req_fn *elevator_completed_req_fn ;
   elevator_request_list_fn *elevator_former_req_fn ;
   elevator_request_list_fn *elevator_latter_req_fn ;
   elevator_set_req_fn *elevator_set_req_fn ;
   elevator_put_req_fn *elevator_put_req_fn ;
   elevator_may_queue_fn *elevator_may_queue_fn ;
   elevator_init_fn *elevator_init_fn ;
   elevator_exit_fn *elevator_exit_fn ;
   void (*trim)(struct io_context * ) ;
};
struct elv_fs_entry {
   struct attribute attr ;
   ssize_t (*show)(struct elevator_queue * , char * ) ;
   ssize_t (*store)(struct elevator_queue * , char const * , size_t ) ;
};
struct elevator_type {
   struct list_head list ;
   struct elevator_ops ops ;
   struct elv_fs_entry *elevator_attrs ;
   char elevator_name[16U] ;
   struct module *elevator_owner ;
};
struct elevator_queue {
   struct elevator_ops *ops ;
   void *elevator_data ;
   struct kobject kobj ;
   struct elevator_type *elevator_type ;
   struct mutex sysfs_lock ;
   struct hlist_head *hash ;
   unsigned char registered : 1 ;
};
typedef void request_fn_proc(struct request_queue * );
typedef int make_request_fn(struct request_queue * , struct bio * );
typedef int prep_rq_fn(struct request_queue * , struct request * );
typedef void unprep_rq_fn(struct request_queue * , struct request * );
struct bvec_merge_data {
   struct block_device *bi_bdev ;
   sector_t bi_sector ;
   unsigned int bi_size ;
   unsigned long bi_rw ;
};
typedef int merge_bvec_fn(struct request_queue * , struct bvec_merge_data * , struct bio_vec * );
typedef void softirq_done_fn(struct request * );
typedef int dma_drain_needed_fn(struct request * );
typedef int lld_busy_fn(struct request_queue * );
enum blk_eh_timer_return {
    BLK_EH_NOT_HANDLED = 0,
    BLK_EH_HANDLED = 1,
    BLK_EH_RESET_TIMER = 2
} ;
typedef enum blk_eh_timer_return rq_timed_out_fn(struct request * );
struct blk_queue_tag {
   struct request **tag_index ;
   unsigned long *tag_map ;
   int busy ;
   int max_depth ;
   int real_max_depth ;
   atomic_t refcnt ;
};
struct queue_limits {
   unsigned long bounce_pfn ;
   unsigned long seg_boundary_mask ;
   unsigned int max_hw_sectors ;
   unsigned int max_sectors ;
   unsigned int max_segment_size ;
   unsigned int physical_block_size ;
   unsigned int alignment_offset ;
   unsigned int io_min ;
   unsigned int io_opt ;
   unsigned int max_discard_sectors ;
   unsigned int discard_granularity ;
   unsigned int discard_alignment ;
   unsigned short logical_block_size ;
   unsigned short max_segments ;
   unsigned short max_integrity_segments ;
   unsigned char misaligned ;
   unsigned char discard_misaligned ;
   unsigned char cluster ;
   unsigned char discard_zeroes_data ;
};
struct request_queue {
   struct list_head queue_head ;
   struct request *last_merge ;
   struct elevator_queue *elevator ;
   struct request_list rq ;
   request_fn_proc *request_fn ;
   make_request_fn *make_request_fn ;
   prep_rq_fn *prep_rq_fn ;
   unprep_rq_fn *unprep_rq_fn ;
   merge_bvec_fn *merge_bvec_fn ;
   softirq_done_fn *softirq_done_fn ;
   rq_timed_out_fn *rq_timed_out_fn ;
   dma_drain_needed_fn *dma_drain_needed ;
   lld_busy_fn *lld_busy_fn ;
   sector_t end_sector ;
   struct request *boundary_rq ;
   struct delayed_work delay_work ;
   struct backing_dev_info backing_dev_info ;
   void *queuedata ;
   gfp_t bounce_gfp ;
   unsigned long queue_flags ;
   spinlock_t __queue_lock ;
   spinlock_t *queue_lock ;
   struct kobject kobj ;
   unsigned long nr_requests ;
   unsigned int nr_congestion_on ;
   unsigned int nr_congestion_off ;
   unsigned int nr_batching ;
   void *dma_drain_buffer ;
   unsigned int dma_drain_size ;
   unsigned int dma_pad_mask ;
   unsigned int dma_alignment ;
   struct blk_queue_tag *queue_tags ;
   struct list_head tag_busy_list ;
   unsigned int nr_sorted ;
   unsigned int in_flight[2U] ;
   unsigned int rq_timeout ;
   struct timer_list timeout ;
   struct list_head timeout_list ;
   struct queue_limits limits ;
   unsigned int sg_timeout ;
   unsigned int sg_reserved_size ;
   int node ;
   struct blk_trace *blk_trace ;
   unsigned int flush_flags ;
   unsigned char flush_not_queueable : 1 ;
   unsigned char flush_queue_delayed : 1 ;
   unsigned char flush_pending_idx : 1 ;
   unsigned char flush_running_idx : 1 ;
   unsigned long flush_pending_since ;
   struct list_head flush_queue[2U] ;
   struct list_head flush_data_in_flight ;
   struct request flush_rq ;
   struct mutex sysfs_lock ;
   struct bsg_class_device bsg_dev ;
};
struct blk_plug {
   unsigned long magic ;
   struct list_head list ;
   struct list_head cb_list ;
   unsigned int should_sort ;
};
struct blk_integrity_exchg {
   void *prot_buf ;
   void *data_buf ;
   sector_t sector ;
   unsigned int data_size ;
   unsigned short sector_size ;
   char const *disk_name ;
};
typedef void integrity_gen_fn(struct blk_integrity_exchg * );
typedef int integrity_vrfy_fn(struct blk_integrity_exchg * );
typedef void integrity_set_tag_fn(void * , void * , unsigned int );
typedef void integrity_get_tag_fn(void * , void * , unsigned int );
struct blk_integrity {
   integrity_gen_fn *generate_fn ;
   integrity_vrfy_fn *verify_fn ;
   integrity_set_tag_fn *set_tag_fn ;
   integrity_get_tag_fn *get_tag_fn ;
   unsigned short flags ;
   unsigned short tuple_size ;
   unsigned short sector_size ;
   unsigned short tag_size ;
   char const *name ;
   struct kobject kobj ;
};
struct block_device_operations {
   int (*open)(struct block_device * , fmode_t ) ;
   int (*release)(struct gendisk * , fmode_t ) ;
   int (*ioctl)(struct block_device * , fmode_t , unsigned int , unsigned long ) ;
   int (*compat_ioctl)(struct block_device * , fmode_t , unsigned int , unsigned long ) ;
   int (*direct_access)(struct block_device * , sector_t , void ** , unsigned long * ) ;
   unsigned int (*check_events)(struct gendisk * , unsigned int ) ;
   int (*media_changed)(struct gendisk * ) ;
   void (*unlock_native_capacity)(struct gendisk * ) ;
   int (*revalidate_disk)(struct gendisk * ) ;
   int (*getgeo)(struct block_device * , struct hd_geometry * ) ;
   void (*swap_slot_free_notify)(struct block_device * , unsigned long ) ;
   struct module *owner ;
};
struct request_sense;
struct request_sense;
struct request_sense;
struct request_sense {
   unsigned char error_code : 7 ;
   unsigned char valid : 1 ;
   __u8 segment_number ;
   unsigned char sense_key : 4 ;
   unsigned char reserved2 : 1 ;
   unsigned char ili : 1 ;
   unsigned char reserved1 : 2 ;
   __u8 information[4U] ;
   __u8 add_sense_len ;
   __u8 command_info[4U] ;
   __u8 asc ;
   __u8 ascq ;
   __u8 fruc ;
   __u8 sks[3U] ;
   __u8 asb[46U] ;
};
struct __anonstruct_disc_information_169 {
   __be16 disc_information_length ;
   unsigned char disc_status : 2 ;
   unsigned char border_status : 2 ;
   unsigned char erasable : 1 ;
   unsigned char reserved1 : 3 ;
   __u8 n_first_track ;
   __u8 n_sessions_lsb ;
   __u8 first_track_lsb ;
   __u8 last_track_lsb ;
   unsigned char mrw_status : 2 ;
   unsigned char dbit : 1 ;
   unsigned char reserved2 : 2 ;
   unsigned char uru : 1 ;
   unsigned char dbc_v : 1 ;
   unsigned char did_v : 1 ;
   __u8 disc_type ;
   __u8 n_sessions_msb ;
   __u8 first_track_msb ;
   __u8 last_track_msb ;
   __u32 disc_id ;
   __u32 lead_in ;
   __u32 lead_out ;
   __u8 disc_bar_code[8U] ;
   __u8 reserved3 ;
   __u8 n_opc ;
};
typedef struct __anonstruct_disc_information_169 disc_information;
struct __anonstruct_track_information_170 {
   __be16 track_information_length ;
   __u8 track_lsb ;
   __u8 session_lsb ;
   __u8 reserved1 ;
   unsigned char track_mode : 4 ;
   unsigned char copy : 1 ;
   unsigned char damage : 1 ;
   unsigned char reserved2 : 2 ;
   unsigned char data_mode : 4 ;
   unsigned char fp : 1 ;
   unsigned char packet : 1 ;
   unsigned char blank : 1 ;
   unsigned char rt : 1 ;
   unsigned char nwa_v : 1 ;
   unsigned char lra_v : 1 ;
   unsigned char reserved3 : 6 ;
   __be32 track_start ;
   __be32 next_writable ;
   __be32 free_blocks ;
   __be32 fixed_packet_size ;
   __be32 track_size ;
   __be32 last_rec_address ;
};
typedef struct __anonstruct_track_information_170 track_information;
struct packet_command {
   unsigned char cmd[12U] ;
   unsigned char *buffer ;
   unsigned int buflen ;
   int stat ;
   struct request_sense *sense ;
   unsigned char data_direction ;
   int quiet ;
   int timeout ;
   void *reserved[1U] ;
};
struct __anonstruct_write_param_page_172 {
   unsigned char page_code : 6 ;
   unsigned char reserved1 : 1 ;
   unsigned char ps : 1 ;
   __u8 page_length ;
   unsigned char write_type : 4 ;
   unsigned char test_write : 1 ;
   unsigned char ls_v : 1 ;
   unsigned char bufe : 1 ;
   unsigned char reserved2 : 1 ;
   unsigned char track_mode : 4 ;
   unsigned char copy : 1 ;
   unsigned char fp : 1 ;
   unsigned char multi_session : 2 ;
   unsigned char data_block_type : 4 ;
   unsigned char reserved3 : 4 ;
   __u8 link_size ;
   __u8 reserved4 ;
   unsigned char app_code : 6 ;
   unsigned char reserved5 : 2 ;
   __u8 session_format ;
   __u8 reserved6 ;
   __be32 packet_size ;
   __u16 audio_pause ;
   __u8 mcn[16U] ;
   __u8 isrc[16U] ;
   __u8 subhdr0 ;
   __u8 subhdr1 ;
   __u8 subhdr2 ;
   __u8 subhdr3 ;
};
typedef struct __anonstruct_write_param_page_172 write_param_page;
struct packet_settings {
   __u32 size ;
   __u8 fp ;
   __u8 link_loss ;
   __u8 write_type ;
   __u8 track_mode ;
   __u8 block_mode ;
};
struct packet_stats {
   unsigned long pkt_started ;
   unsigned long pkt_ended ;
   unsigned long secs_w ;
   unsigned long secs_rg ;
   unsigned long secs_r ;
};
struct packet_cdrw {
   struct list_head pkt_free_list ;
   struct list_head pkt_active_list ;
   spinlock_t active_list_lock ;
   struct task_struct *thread ;
   atomic_t pending_bios ;
};
struct packet_iosched {
   atomic_t attention ;
   int writing ;
   spinlock_t lock ;
   struct bio_list read_queue ;
   struct bio_list write_queue ;
   sector_t last_write ;
   int successive_reads ;
};
enum packet_data_state {
    PACKET_IDLE_STATE = 0,
    PACKET_WAITING_STATE = 1,
    PACKET_READ_WAIT_STATE = 2,
    PACKET_WRITE_WAIT_STATE = 3,
    PACKET_RECOVERY_STATE = 4,
    PACKET_FINISHED_STATE = 5,
    PACKET_NUM_STATES = 6
} ;
struct pktcdvd_device;
struct pktcdvd_device;
struct pktcdvd_device;
struct pktcdvd_device;
struct packet_data {
   struct list_head list ;
   spinlock_t lock ;
   struct bio_list orig_bios ;
   int write_size ;
   struct bio *w_bio ;
   sector_t sector ;
   int frames ;
   enum packet_data_state state ;
   atomic_t run_sm ;
   long sleep_time ;
   atomic_t io_wait ;
   atomic_t io_errors ;
   struct bio *r_bios[128U] ;
   struct page *pages[64U] ;
   int cache_valid ;
   int id ;
   struct pktcdvd_device *pd ;
};
struct pkt_rb_node {
   struct rb_node rb_node ;
   struct bio *bio ;
};
struct packet_stacked_data {
   struct bio *bio ;
   struct pktcdvd_device *pd ;
};
struct pktcdvd_kobj {
   struct kobject kobj ;
   struct pktcdvd_device *pd ;
};
struct pktcdvd_device {
   struct block_device *bdev ;
   dev_t pkt_dev ;
   char name[20U] ;
   struct packet_settings settings ;
   struct packet_stats stats ;
   int refcnt ;
   int write_speed ;
   int read_speed ;
   unsigned long offset ;
   __u8 mode_offset ;
   __u8 type ;
   unsigned long flags ;
   __u16 mmc3_profile ;
   __u32 nwa ;
   __u32 lra ;
   struct packet_cdrw cdrw ;
   wait_queue_head_t wqueue ;
   spinlock_t lock ;
   struct rb_root bio_queue ;
   int bio_queue_size ;
   sector_t current_sector ;
   atomic_t scan_queue ;
   mempool_t *rb_pool ;
   struct packet_iosched iosched ;
   struct gendisk *disk ;
   int write_congestion_off ;
   int write_congestion_on ;
   struct device *dev ;
   struct pktcdvd_kobj *kobj_stat ;
   struct pktcdvd_kobj *kobj_wqueue ;
   struct dentry *dfs_d_root ;
   struct dentry *dfs_f_info ;
};
typedef s32 compat_time_t;
typedef s32 compat_long_t;
struct compat_timespec {
   compat_time_t tv_sec ;
   s32 tv_nsec ;
};
typedef u32 compat_uptr_t;
struct compat_robust_list {
   compat_uptr_t next ;
};
struct compat_robust_list_head {
   struct compat_robust_list list ;
   compat_long_t futex_offset ;
   compat_uptr_t list_op_pending ;
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
struct proc_ns_operations {
   char const *name ;
   int type ;
   void *(*get)(struct task_struct * ) ;
   void (*put)(void * ) ;
   int (*install)(struct nsproxy * , void * ) ;
};
union proc_op {
   int (*proc_get_link)(struct inode * , struct path * ) ;
   int (*proc_read)(struct task_struct * , char * ) ;
   int (*proc_show)(struct seq_file * , struct pid_namespace * , struct pid * , struct task_struct * ) ;
};
struct proc_inode {
   struct pid *pid ;
   int fd ;
   union proc_op op ;
   struct proc_dir_entry *pde ;
   struct ctl_table_header *sysctl ;
   struct ctl_table *sysctl_entry ;
   void *ns ;
   struct proc_ns_operations const *ns_ops ;
   struct inode vfs_inode ;
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
struct dma_attrs {
   unsigned long flags[1U] ;
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
void *__builtin_memcpy(void * , void const * , unsigned long ) ;
unsigned long __builtin_object_size(void * , int ) ;
long __builtin_expect(long , long ) ;
__inline static void INIT_LIST_HEAD(struct list_head *list )
{

  {
  list->next = list;
  list->prev = list;
  return;
}
}
extern void __list_add(struct list_head * , struct list_head * , struct list_head * ) ;
__inline static void list_add(struct list_head *new , struct list_head *head )
{ struct list_head *__cil_tmp3 ;

  {
  {
  __cil_tmp3 = head->next;
  __list_add(new, head, __cil_tmp3);
  }
  return;
}
}
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
extern void __list_del_entry(struct list_head * ) ;
extern void list_del(struct list_head * ) ;
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
__inline static void set_bit(unsigned int nr , unsigned long volatile *addr )
{ long volatile *__cil_tmp3 ;

  {
  __cil_tmp3 = (long volatile *)addr;
  __asm__ volatile (".section .smp_locks,\"a\"\n.balign 4\n.long 671f - .\n.previous\n671:\n\tlock; bts %1,%0": "+m" (*__cil_tmp3): "Ir" (nr): "memory");
  return;
}
}
__inline static void clear_bit(int nr , unsigned long volatile *addr )
{ long volatile *__cil_tmp3 ;

  {
  __cil_tmp3 = (long volatile *)addr;
  __asm__ volatile (".section .smp_locks,\"a\"\n.balign 4\n.long 671f - .\n.previous\n671:\n\tlock; btr %1,%0": "+m" (*__cil_tmp3): "Ir" (nr));
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
__inline static __u32 __arch_swab32(__u32 val )
{

  {
  __asm__ ("bswapl %0": "=r" (val): "0" (val));
  return (val);
}
}
__inline static __u16 __fswab16(__u16 val )
{ int __cil_tmp2 ;
  int __cil_tmp3 ;
  short __cil_tmp4 ;
  int __cil_tmp5 ;
  int __cil_tmp6 ;
  int __cil_tmp7 ;
  short __cil_tmp8 ;
  int __cil_tmp9 ;
  int __cil_tmp10 ;

  {
  {
  __cil_tmp2 = (int )val;
  __cil_tmp3 = __cil_tmp2 >> 8;
  __cil_tmp4 = (short )__cil_tmp3;
  __cil_tmp5 = (int )__cil_tmp4;
  __cil_tmp6 = (int )val;
  __cil_tmp7 = __cil_tmp6 << 8;
  __cil_tmp8 = (short )__cil_tmp7;
  __cil_tmp9 = (int )__cil_tmp8;
  __cil_tmp10 = __cil_tmp9 | __cil_tmp5;
  return ((__u16 )__cil_tmp10);
  }
}
}
__inline static __u32 __fswab32(__u32 val )
{ __u32 tmp ;

  {
  {
  tmp = __arch_swab32(val);
  }
  return (tmp);
}
}
extern int printk(char const * , ...) ;
extern void warn_slowpath_fmt(char const * , int , char const * , ...) ;
extern void might_fault(void) ;
extern int sprintf(char * , char const * , ...) ;
extern char *kasprintf(gfp_t , char const * , ...) ;
extern int sscanf(char const * , char const * , ...) ;
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
extern void __xchg_wrong_size(void) ;
extern void *__memcpy(void * , void const * , size_t ) ;
extern void *memset(void * , int , size_t ) ;
extern char *strcpy(char * , char const * ) ;
extern int strcmp(char const * , char const * ) ;
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
extern unsigned long kernel_stack ;
__inline static struct thread_info *current_thread_info(void)
{ struct thread_info *ti ;
  unsigned long pfo_ret__ ;
  unsigned long __cil_tmp3 ;

  {
  if (1) {
    goto case_8;
  } else {
    goto switch_default;
    if (0) {
      __asm__ ("movb %%gs:%P1,%0": "=q" (pfo_ret__): "p" (& kernel_stack));
      goto ldv_5782;
      __asm__ ("movw %%gs:%P1,%0": "=r" (pfo_ret__): "p" (& kernel_stack));
      goto ldv_5782;
      __asm__ ("movl %%gs:%P1,%0": "=r" (pfo_ret__): "p" (& kernel_stack));
      goto ldv_5782;
      case_8:
      __asm__ ("movq %%gs:%P1,%0": "=r" (pfo_ret__): "p" (& kernel_stack));
      goto ldv_5782;
      switch_default:
      {
      __bad_percpu_size();
      }
    } else {

    }
  }
  ldv_5782:
  __cil_tmp3 = pfo_ret__ - 8152UL;
  ti = (struct thread_info *)__cil_tmp3;
  return (ti);
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
extern void __raw_spin_lock_init(raw_spinlock_t * , char const * , struct lock_class_key * ) ;
extern void _raw_spin_lock(raw_spinlock_t * ) ;
extern void _raw_spin_lock_irq(raw_spinlock_t * ) ;
extern void _raw_spin_unlock(raw_spinlock_t * ) ;
extern void _raw_spin_unlock_irq(raw_spinlock_t * ) ;
__inline static raw_spinlock_t *spinlock_check(spinlock_t *lock )
{

  {
  return (& lock->ldv_6060.rlock);
}
}
__inline static void spin_lock(spinlock_t *lock )
{ struct raw_spinlock *__cil_tmp2 ;

  {
  {
  __cil_tmp2 = & lock->ldv_6060.rlock;
  _raw_spin_lock(__cil_tmp2);
  }
  return;
}
}
__inline static void spin_lock_irq(spinlock_t *lock )
{ struct raw_spinlock *__cil_tmp2 ;

  {
  {
  __cil_tmp2 = & lock->ldv_6060.rlock;
  _raw_spin_lock_irq(__cil_tmp2);
  }
  return;
}
}
__inline static void spin_unlock(spinlock_t *lock )
{ struct raw_spinlock *__cil_tmp2 ;

  {
  {
  __cil_tmp2 = & lock->ldv_6060.rlock;
  _raw_spin_unlock(__cil_tmp2);
  }
  return;
}
}
__inline static void spin_unlock_irq(spinlock_t *lock )
{ struct raw_spinlock *__cil_tmp2 ;

  {
  {
  __cil_tmp2 = & lock->ldv_6060.rlock;
  _raw_spin_unlock_irq(__cil_tmp2);
  }
  return;
}
}
extern int default_wake_function(wait_queue_t * , unsigned int , int , void * ) ;
extern void __init_waitqueue_head(wait_queue_head_t * , struct lock_class_key * ) ;
extern void add_wait_queue(wait_queue_head_t * , wait_queue_t * ) ;
extern void remove_wait_queue(wait_queue_head_t * , wait_queue_t * ) ;
extern void __wake_up(wait_queue_head_t * , unsigned int , int , void * ) ;
extern void __mutex_init(struct mutex * , char const * , struct lock_class_key * ) ;
extern void mutex_lock_nested(struct mutex * , unsigned int ) ;
extern void mutex_unlock(struct mutex * ) ;
extern struct page *alloc_pages_current(gfp_t , unsigned int ) ;
__inline static struct page *alloc_pages(gfp_t gfp_mask , unsigned int order )
{ struct page *tmp ;

  {
  {
  tmp = alloc_pages_current(gfp_mask, order);
  }
  return (tmp);
}
}
extern void __free_pages(struct page * , unsigned int ) ;
extern void kfree(void const * ) ;
extern int kobject_init_and_add(struct kobject * , struct kobj_type * , struct kobject * ,
                                char const * , ...) ;
extern void kobject_put(struct kobject * ) ;
extern int kobject_uevent(struct kobject * , enum kobject_action ) ;
extern struct module __this_module ;
__inline static void ldv___module_get_3(struct module *module ) ;
__inline static int ldv_try_module_get_1(struct module *module ) ;
void ldv_module_put_2(struct module *ldv_func_arg1 ) ;
void ldv_module_put_4(struct module *ldv_func_arg1 ) ;
void ldv_module_put_5(struct module *ldv_func_arg1 ) ;
int ldv_try_module_get(struct module *module ) ;
void ldv_module_get(struct module *module ) ;
void ldv_module_put(struct module *module ) ;
unsigned int ldv_module_refcount(void) ;
void ldv_module_put_and_exit(void) ;
extern bool capable(int ) ;
extern void rb_insert_color(struct rb_node * , struct rb_root * ) ;
extern void rb_erase(struct rb_node * , struct rb_root * ) ;
extern struct rb_node *rb_next(struct rb_node const * ) ;
extern struct rb_node *rb_first(struct rb_root const * ) ;
__inline static void rb_link_node(struct rb_node *node , struct rb_node *parent ,
                                  struct rb_node **rb_link )
{ struct rb_node *tmp ;

  {
  node->rb_parent_color = (unsigned long )parent;
  tmp = (struct rb_node *)0;
  node->rb_right = tmp;
  node->rb_left = tmp;
  *rb_link = node;
  return;
}
}
extern long schedule_timeout(long ) ;
extern void set_user_nice(struct task_struct * , long ) ;
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
__inline static u32 new_encode_dev(dev_t dev )
{ unsigned int major ;
  unsigned int minor ;
  unsigned int __cil_tmp4 ;
  unsigned int __cil_tmp5 ;
  unsigned int __cil_tmp6 ;
  unsigned int __cil_tmp7 ;
  unsigned int __cil_tmp8 ;

  {
  major = dev >> 20;
  minor = dev & 1048575U;
  {
  __cil_tmp4 = minor & 4294967040U;
  __cil_tmp5 = __cil_tmp4 << 12;
  __cil_tmp6 = major << 8;
  __cil_tmp7 = minor & 255U;
  __cil_tmp8 = __cil_tmp7 | __cil_tmp6;
  return (__cil_tmp8 | __cil_tmp5);
  }
}
}
__inline static dev_t new_decode_dev(u32 dev )
{ unsigned int major ;
  unsigned int minor ;
  unsigned int __cil_tmp4 ;
  u32 __cil_tmp5 ;
  unsigned int __cil_tmp6 ;
  unsigned int __cil_tmp7 ;
  unsigned int __cil_tmp8 ;

  {
  __cil_tmp4 = dev & 1048320U;
  major = __cil_tmp4 >> 8;
  __cil_tmp5 = dev >> 12;
  __cil_tmp6 = __cil_tmp5 & 1048320U;
  __cil_tmp7 = dev & 255U;
  minor = __cil_tmp7 | __cil_tmp6;
  {
  __cil_tmp8 = major << 20;
  return (__cil_tmp8 | minor);
  }
}
}
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
__inline static void *kcalloc(size_t n , size_t size , gfp_t flags )
{ void *tmp ;
  unsigned long __cil_tmp5 ;
  size_t __cil_tmp6 ;
  unsigned int __cil_tmp7 ;

  {
  if (size != 0UL) {
    {
    __cil_tmp5 = 1152921504606846975UL / size;
    if (__cil_tmp5 < n) {
      return ((void *)0);
    } else {

    }
    }
  } else {

  }
  {
  __cil_tmp6 = n * size;
  __cil_tmp7 = flags | 32768U;
  tmp = __kmalloc(__cil_tmp6, __cil_tmp7);
  }
  return (tmp);
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
extern int __class_register(struct class * , struct lock_class_key * ) ;
extern void class_destroy(struct class * ) ;
extern void device_unregister(struct device * ) ;
extern struct device *device_create(struct class * , struct device * , dev_t , void * ,
                                    char const * , ...) ;
extern int register_blkdev(unsigned int , char const * ) ;
extern void unregister_blkdev(unsigned int , char const * ) ;
extern struct block_device *bdget(dev_t ) ;
extern void bd_set_size(struct block_device * , loff_t ) ;
extern int blkdev_get(struct block_device * , fmode_t , void * ) ;
extern int blkdev_put(struct block_device * , fmode_t ) ;
extern char const *bdevname(struct block_device * , char * ) ;
extern int set_blocksize(struct block_device * , int ) ;
extern loff_t no_llseek(struct file * , loff_t , int ) ;
extern int nonseekable_open(struct inode * , struct file * ) ;
extern void add_disk(struct gendisk * ) ;
extern void del_gendisk(struct gendisk * ) ;
__inline static void set_capacity(struct gendisk *disk , sector_t size )
{

  {
  disk->part0.nr_sects = size;
  return;
}
}
extern struct gendisk *alloc_disk(int ) ;
extern void put_disk(struct gendisk * ) ;
__inline static void *lowmem_page_address(struct page *page )
{ long __cil_tmp2 ;
  long __cil_tmp3 ;
  long __cil_tmp4 ;
  unsigned long long __cil_tmp5 ;
  unsigned long long __cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  unsigned long __cil_tmp8 ;

  {
  {
  __cil_tmp2 = (long )page;
  __cil_tmp3 = __cil_tmp2 + 24189255811072L;
  __cil_tmp4 = __cil_tmp3 / 56L;
  __cil_tmp5 = (unsigned long long )__cil_tmp4;
  __cil_tmp6 = __cil_tmp5 << 12;
  __cil_tmp7 = (unsigned long )__cil_tmp6;
  __cil_tmp8 = __cil_tmp7 + 1152789563211513856UL;
  return ((void *)__cil_tmp8);
  }
}
}
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
__inline static void pagefault_disable(void)
{ struct thread_info *tmp ;
  int __cil_tmp2 ;

  {
  {
  tmp = current_thread_info();
  __cil_tmp2 = tmp->preempt_count;
  tmp->preempt_count = __cil_tmp2 + 1;
  __asm__ volatile ("": : : "memory");
  }
  return;
}
}
__inline static void pagefault_enable(void)
{ struct thread_info *tmp ;
  int __cil_tmp2 ;

  {
  {
  __asm__ volatile ("": : : "memory");
  tmp = current_thread_info();
  __cil_tmp2 = tmp->preempt_count;
  tmp->preempt_count = __cil_tmp2 + -1;
  __asm__ volatile ("": : : "memory");
  }
  return;
}
}
__inline static void *__kmap_atomic(struct page *page )
{ void *tmp ;

  {
  {
  pagefault_disable();
  tmp = lowmem_page_address(page);
  }
  return (tmp);
}
}
__inline static void __kunmap_atomic(void *addr )
{

  {
  {
  pagefault_enable();
  }
  return;
}
}
extern void clear_bdi_congested(struct backing_dev_info * , int ) ;
extern void set_bdi_congested(struct backing_dev_info * , int ) ;
extern long congestion_wait(int , long ) ;
extern mempool_t *mempool_create(int , mempool_alloc_t * , mempool_free_t * , void * ) ;
extern void mempool_destroy(mempool_t * ) ;
extern void *mempool_alloc(mempool_t * , gfp_t ) ;
extern void mempool_free(void * , mempool_t * ) ;
extern void *mempool_kmalloc(gfp_t , void * ) ;
extern void mempool_kfree(void * , void * ) ;
__inline static mempool_t *mempool_create_kmalloc_pool(int min_nr , size_t size )
{ mempool_t *tmp ;
  void *__cil_tmp4 ;

  {
  {
  __cil_tmp4 = (void *)size;
  tmp = mempool_create(min_nr, & mempool_kmalloc, & mempool_kfree, __cil_tmp4);
  }
  return (tmp);
}
}
extern struct bio_pair *bio_split(struct bio * , int ) ;
extern void bio_pair_release(struct bio_pair * ) ;
extern void bio_put(struct bio * ) ;
extern void bio_endio(struct bio * , int ) ;
extern struct bio *bio_clone(struct bio * , gfp_t ) ;
extern void bio_init(struct bio * ) ;
extern int bio_add_page(struct bio * , struct page * , unsigned int , unsigned int ) ;
__inline static int bio_list_empty(struct bio_list const *bl )
{ struct bio *__cil_tmp2 ;
  unsigned long __cil_tmp3 ;
  struct bio *__cil_tmp4 ;
  unsigned long __cil_tmp5 ;

  {
  {
  __cil_tmp2 = (struct bio * const )0;
  __cil_tmp3 = (unsigned long )__cil_tmp2;
  __cil_tmp4 = bl->head;
  __cil_tmp5 = (unsigned long )__cil_tmp4;
  return (__cil_tmp5 == __cil_tmp3);
  }
}
}
__inline static void bio_list_init(struct bio_list *bl )
{ struct bio *tmp ;

  {
  tmp = (struct bio *)0;
  bl->tail = tmp;
  bl->head = tmp;
  return;
}
}
__inline static void bio_list_add(struct bio_list *bl , struct bio *bio )
{ struct bio *__cil_tmp3 ;
  unsigned long __cil_tmp4 ;
  struct bio *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  struct bio *__cil_tmp7 ;

  {
  bio->bi_next = (struct bio *)0;
  {
  __cil_tmp3 = (struct bio *)0;
  __cil_tmp4 = (unsigned long )__cil_tmp3;
  __cil_tmp5 = bl->tail;
  __cil_tmp6 = (unsigned long )__cil_tmp5;
  if (__cil_tmp6 != __cil_tmp4) {
    __cil_tmp7 = bl->tail;
    __cil_tmp7->bi_next = bio;
  } else {
    bl->head = bio;
  }
  }
  bl->tail = bio;
  return;
}
}
__inline static struct bio *bio_list_peek(struct bio_list *bl )
{

  {
  return (bl->head);
}
}
__inline static struct bio *bio_list_pop(struct bio_list *bl )
{ struct bio *bio ;
  struct bio *__cil_tmp3 ;
  unsigned long __cil_tmp4 ;
  unsigned long __cil_tmp5 ;
  struct bio *__cil_tmp6 ;
  struct bio *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  struct bio *__cil_tmp9 ;
  unsigned long __cil_tmp10 ;

  {
  bio = bl->head;
  {
  __cil_tmp3 = (struct bio *)0;
  __cil_tmp4 = (unsigned long )__cil_tmp3;
  __cil_tmp5 = (unsigned long )bio;
  if (__cil_tmp5 != __cil_tmp4) {
    __cil_tmp6 = bl->head;
    bl->head = __cil_tmp6->bi_next;
    {
    __cil_tmp7 = (struct bio *)0;
    __cil_tmp8 = (unsigned long )__cil_tmp7;
    __cil_tmp9 = bl->head;
    __cil_tmp10 = (unsigned long )__cil_tmp9;
    if (__cil_tmp10 == __cil_tmp8) {
      bl->tail = (struct bio *)0;
    } else {

    }
    }
    bio->bi_next = (struct bio *)0;
  } else {

  }
  }
  return (bio);
}
}
extern void blk_queue_bounce(struct request_queue * , struct bio ** ) ;
extern void generic_make_request(struct bio * ) ;
extern void blk_put_request(struct request * ) ;
extern struct request *blk_get_request(struct request_queue * , int , gfp_t ) ;
extern int blk_rq_map_kern(struct request_queue * , struct request * , void * , unsigned int ,
                           gfp_t ) ;
extern int blk_execute_rq(struct request_queue * , struct gendisk * , struct request * ,
                          int ) ;
__inline static struct request_queue *bdev_get_queue(struct block_device *bdev )
{ struct gendisk *__cil_tmp2 ;

  {
  {
  __cil_tmp2 = bdev->bd_disk;
  return (__cil_tmp2->queue);
  }
}
}
extern void blk_cleanup_queue(struct request_queue * ) ;
extern void blk_queue_make_request(struct request_queue * , make_request_fn * ) ;
extern void blk_queue_max_hw_sectors(struct request_queue * , unsigned int ) ;
extern void blk_queue_logical_block_size(struct request_queue * , unsigned short ) ;
extern void blk_queue_merge_bvec(struct request_queue * , merge_bvec_fn * ) ;
extern struct request_queue *blk_alloc_queue(gfp_t ) ;
__inline static unsigned short queue_max_segments(struct request_queue *q )
{

  {
  return (q->limits.max_segments);
}
}
extern int __blkdev_driver_ioctl(struct block_device * , fmode_t , unsigned int ,
                                 unsigned long ) ;
extern void init_cdrom_command(struct packet_command * , void * , int , int ) ;
__inline static void *compat_ptr(compat_uptr_t uptr )
{ unsigned long __cil_tmp2 ;

  {
  {
  __cil_tmp2 = (unsigned long )uptr;
  return ((void *)__cil_tmp2);
  }
}
}
extern struct task_struct *kthread_create_on_node(int (*)(void * ) , void * , int ,
                                                  char const * , ...) ;
extern int kthread_stop(struct task_struct * ) ;
extern int kthread_should_stop(void) ;
extern struct proc_dir_entry *proc_create_data(char const * , mode_t , struct proc_dir_entry * ,
                                               struct file_operations const * ,
                                               void * ) ;
extern void remove_proc_entry(char const * , struct proc_dir_entry * ) ;
extern struct proc_dir_entry *proc_mkdir(char const * , struct proc_dir_entry * ) ;
__inline static struct proc_inode *PROC_I(struct inode const *inode )
{ struct inode const *__mptr ;
  struct proc_inode *__cil_tmp3 ;

  {
  __mptr = inode;
  {
  __cil_tmp3 = (struct proc_inode *)__mptr;
  return (__cil_tmp3 + 1152921504606846912UL);
  }
}
}
__inline static struct proc_dir_entry *PDE(struct inode const *inode )
{ struct proc_inode *tmp ;

  {
  {
  tmp = PROC_I(inode);
  }
  return (tmp->pde);
}
}
extern ssize_t seq_read(struct file * , char * , size_t , loff_t * ) ;
extern loff_t seq_lseek(struct file * , loff_t , int ) ;
extern int seq_printf(struct seq_file * , char const * , ...) ;
extern int single_open(struct file * , int (*)(struct seq_file * , void * ) , void * ) ;
extern int single_release(struct inode * , struct file * ) ;
extern int misc_register(struct miscdevice * ) ;
extern int misc_deregister(struct miscdevice * ) ;
__inline static int freezing(struct task_struct *p )
{ int tmp ;

  {
  {
  tmp = test_tsk_thread_flag(p, 23);
  }
  return (tmp);
}
}
extern void refrigerator(void) ;
__inline static int try_to_freeze(void)
{ struct task_struct *tmp ;
  int tmp___0 ;

  {
  {
  tmp = get_current();
  tmp___0 = freezing(tmp);
  }
  if (tmp___0 != 0) {
    {
    refrigerator();
    }
    return (1);
  } else {
    return (0);
  }
}
}
__inline static void set_freezable(void)
{ struct task_struct *tmp ;
  unsigned int __cil_tmp2 ;

  {
  {
  tmp = get_current();
  __cil_tmp2 = tmp->flags;
  tmp->flags = __cil_tmp2 & 4294934527U;
  }
  return;
}
}
extern unsigned char const scsi_command_size_tbl[8U] ;
extern struct dentry *debugfs_create_file(char const * , mode_t , struct dentry * ,
                                          void * , struct file_operations const * ) ;
extern struct dentry *debugfs_create_dir(char const * , struct dentry * ) ;
extern void debugfs_remove(struct dentry * ) ;
static struct mutex pktcdvd_mutex = {{1}, {{{{0U}, 3735899821U, 4294967295U, (void *)1152921504606846975UL, {(struct lock_class_key *)0,
                                                                            {(struct lock_class *)0,
                                                                             (struct lock_class *)0},
                                                                            "pktcdvd_mutex.wait_lock",
                                                                            0, 0UL}}}},
    {& pktcdvd_mutex.wait_list, & pktcdvd_mutex.wait_list}, (struct task_struct *)0,
    (char const *)0, (void *)(& pktcdvd_mutex), {(struct lock_class_key *)0, {(struct lock_class *)0,
                                                                                (struct lock_class *)0},
                                                   "pktcdvd_mutex", 0, 0UL}};
static struct pktcdvd_device *pkt_devs[8U] ;
static struct proc_dir_entry *pkt_proc ;
static int pktdev_major ;
static int write_congestion_on = 10000;
static int write_congestion_off = 9000;
static struct mutex ctl_mutex ;
static mempool_t *psd_pool ;
static struct class *class_pktcdvd = (struct class *)0;
static struct dentry *pkt_debugfs_root = (struct dentry *)0;
static int pkt_setup_dev(dev_t dev , dev_t *pkt_dev ) ;
static int pkt_remove_dev(dev_t pkt_dev ) ;
static int pkt_seq_show(struct seq_file *m , void *p ) ;
static struct pktcdvd_kobj *pkt_kobj_create(struct pktcdvd_device *pd , char const *name ,
                                            struct kobject *parent , struct kobj_type *ktype )
{ struct pktcdvd_kobj *p ;
  int error ;
  void *tmp ;
  struct pktcdvd_kobj *__cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  struct kobject *__cil_tmp11 ;
  struct kobject *__cil_tmp12 ;
  struct kobject *__cil_tmp13 ;
  enum kobject_action __cil_tmp14 ;

  {
  {
  tmp = kzalloc(72UL, 208U);
  p = (struct pktcdvd_kobj *)tmp;
  }
  {
  __cil_tmp8 = (struct pktcdvd_kobj *)0;
  __cil_tmp9 = (unsigned long )__cil_tmp8;
  __cil_tmp10 = (unsigned long )p;
  if (__cil_tmp10 == __cil_tmp9) {
    return ((struct pktcdvd_kobj *)0);
  } else {

  }
  }
  {
  p->pd = pd;
  __cil_tmp11 = & p->kobj;
  error = kobject_init_and_add(__cil_tmp11, ktype, parent, "%s", name);
  }
  if (error != 0) {
    {
    __cil_tmp12 = & p->kobj;
    kobject_put(__cil_tmp12);
    }
    return ((struct pktcdvd_kobj *)0);
  } else {

  }
  {
  __cil_tmp13 = & p->kobj;
  __cil_tmp14 = (enum kobject_action )0;
  kobject_uevent(__cil_tmp13, __cil_tmp14);
  }
  return (p);
}
}
static void pkt_kobj_remove(struct pktcdvd_kobj *p )
{ struct pktcdvd_kobj *__cil_tmp2 ;
  unsigned long __cil_tmp3 ;
  unsigned long __cil_tmp4 ;
  struct kobject *__cil_tmp5 ;

  {
  {
  __cil_tmp2 = (struct pktcdvd_kobj *)0;
  __cil_tmp3 = (unsigned long )__cil_tmp2;
  __cil_tmp4 = (unsigned long )p;
  if (__cil_tmp4 != __cil_tmp3) {
    {
    __cil_tmp5 = & p->kobj;
    kobject_put(__cil_tmp5);
    }
  } else {

  }
  }
  return;
}
}
static void pkt_kobj_release(struct kobject *kobj )
{ struct kobject const *__mptr ;
  struct pktcdvd_kobj *__cil_tmp3 ;
  void const *__cil_tmp4 ;

  {
  {
  __mptr = (struct kobject const *)kobj;
  __cil_tmp3 = (struct pktcdvd_kobj *)__mptr;
  __cil_tmp4 = (void const *)__cil_tmp3;
  kfree(__cil_tmp4);
  }
  return;
}
}
static struct attribute kobj_pkt_attr_st1 = {"reset", 128U, (struct lock_class_key *)0, {{{(char)0}, {(char)0}, {(char)0},
                                                 {(char)0}, {(char)0}, {(char)0},
                                                 {(char)0}, {(char)0}}}};
static struct attribute kobj_pkt_attr_st2 = {"packets_started", 292U, (struct lock_class_key *)0, {{{(char)0}, {(char)0}, {(char)0},
                                                           {(char)0}, {(char)0}, {(char)0},
                                                           {(char)0}, {(char)0}}}};
static struct attribute kobj_pkt_attr_st3 = {"packets_finished", 292U, (struct lock_class_key *)0, {{{(char)0}, {(char)0},
                                                            {(char)0}, {(char)0},
                                                            {(char)0}, {(char)0},
                                                            {(char)0}, {(char)0}}}};
static struct attribute kobj_pkt_attr_st4 = {"kb_written", 292U, (struct lock_class_key *)0, {{{(char)0}, {(char)0}, {(char)0},
                                                      {(char)0}, {(char)0}, {(char)0},
                                                      {(char)0}, {(char)0}}}};
static struct attribute kobj_pkt_attr_st5 = {"kb_read", 292U, (struct lock_class_key *)0, {{{(char)0}, {(char)0}, {(char)0},
                                                   {(char)0}, {(char)0}, {(char)0},
                                                   {(char)0}, {(char)0}}}};
static struct attribute kobj_pkt_attr_st6 = {"kb_read_gather", 292U, (struct lock_class_key *)0, {{{(char)0}, {(char)0}, {(char)0},
                                                          {(char)0}, {(char)0}, {(char)0},
                                                          {(char)0}, {(char)0}}}};
static struct attribute *kobj_pkt_attrs_stat[7U] = { & kobj_pkt_attr_st1, & kobj_pkt_attr_st2, & kobj_pkt_attr_st3, & kobj_pkt_attr_st4,
        & kobj_pkt_attr_st5, & kobj_pkt_attr_st6, (struct attribute *)0};
static struct attribute kobj_pkt_attr_wq1 = {"size", 292U, (struct lock_class_key *)0, {{{(char)0}, {(char)0}, {(char)0}, {(char)0},
                                                {(char)0}, {(char)0}, {(char)0}, {(char)0}}}};
static struct attribute kobj_pkt_attr_wq2 = {"congestion_off", 420U, (struct lock_class_key *)0, {{{(char)0}, {(char)0}, {(char)0},
                                                          {(char)0}, {(char)0}, {(char)0},
                                                          {(char)0}, {(char)0}}}};
static struct attribute kobj_pkt_attr_wq3 = {"congestion_on", 420U, (struct lock_class_key *)0, {{{(char)0}, {(char)0}, {(char)0},
                                                         {(char)0}, {(char)0}, {(char)0},
                                                         {(char)0}, {(char)0}}}};
static struct attribute *kobj_pkt_attrs_wqueue[4U] = { & kobj_pkt_attr_wq1, & kobj_pkt_attr_wq2, & kobj_pkt_attr_wq3, (struct attribute *)0};
static ssize_t kobj_pkt_show(struct kobject *kobj , struct attribute *attr , char *data )
{ struct pktcdvd_device *pd ;
  struct kobject const *__mptr ;
  int n ;
  int v ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  struct pktcdvd_kobj *__cil_tmp16 ;
  char const *__cil_tmp17 ;
  unsigned long __cil_tmp18 ;
  char const *__cil_tmp19 ;
  unsigned long __cil_tmp20 ;
  char const *__cil_tmp21 ;
  unsigned long __cil_tmp22 ;
  unsigned long __cil_tmp23 ;
  char const *__cil_tmp24 ;
  unsigned long __cil_tmp25 ;
  unsigned long __cil_tmp26 ;
  char const *__cil_tmp27 ;
  unsigned long __cil_tmp28 ;
  unsigned long __cil_tmp29 ;
  char const *__cil_tmp30 ;
  spinlock_t *__cil_tmp31 ;
  spinlock_t *__cil_tmp32 ;
  char const *__cil_tmp33 ;
  spinlock_t *__cil_tmp34 ;
  spinlock_t *__cil_tmp35 ;
  char const *__cil_tmp36 ;
  spinlock_t *__cil_tmp37 ;
  spinlock_t *__cil_tmp38 ;

  {
  {
  __mptr = (struct kobject const *)kobj;
  __cil_tmp16 = (struct pktcdvd_kobj *)__mptr;
  pd = __cil_tmp16->pd;
  n = 0;
  __cil_tmp17 = attr->name;
  tmp___6 = strcmp(__cil_tmp17, "packets_started");
  }
  if (tmp___6 == 0) {
    {
    __cil_tmp18 = pd->stats.pkt_started;
    n = sprintf(data, "%lu\n", __cil_tmp18);
    }
  } else {
    {
    __cil_tmp19 = attr->name;
    tmp___5 = strcmp(__cil_tmp19, "packets_finished");
    }
    if (tmp___5 == 0) {
      {
      __cil_tmp20 = pd->stats.pkt_ended;
      n = sprintf(data, "%lu\n", __cil_tmp20);
      }
    } else {
      {
      __cil_tmp21 = attr->name;
      tmp___4 = strcmp(__cil_tmp21, "kb_written");
      }
      if (tmp___4 == 0) {
        {
        __cil_tmp22 = pd->stats.secs_w;
        __cil_tmp23 = __cil_tmp22 >> 1;
        n = sprintf(data, "%lu\n", __cil_tmp23);
        }
      } else {
        {
        __cil_tmp24 = attr->name;
        tmp___3 = strcmp(__cil_tmp24, "kb_read");
        }
        if (tmp___3 == 0) {
          {
          __cil_tmp25 = pd->stats.secs_r;
          __cil_tmp26 = __cil_tmp25 >> 1;
          n = sprintf(data, "%lu\n", __cil_tmp26);
          }
        } else {
          {
          __cil_tmp27 = attr->name;
          tmp___2 = strcmp(__cil_tmp27, "kb_read_gather");
          }
          if (tmp___2 == 0) {
            {
            __cil_tmp28 = pd->stats.secs_rg;
            __cil_tmp29 = __cil_tmp28 >> 1;
            n = sprintf(data, "%lu\n", __cil_tmp29);
            }
          } else {
            {
            __cil_tmp30 = attr->name;
            tmp___1 = strcmp(__cil_tmp30, "size");
            }
            if (tmp___1 == 0) {
              {
              __cil_tmp31 = & pd->lock;
              spin_lock(__cil_tmp31);
              v = pd->bio_queue_size;
              __cil_tmp32 = & pd->lock;
              spin_unlock(__cil_tmp32);
              n = sprintf(data, "%d\n", v);
              }
            } else {
              {
              __cil_tmp33 = attr->name;
              tmp___0 = strcmp(__cil_tmp33, "congestion_off");
              }
              if (tmp___0 == 0) {
                {
                __cil_tmp34 = & pd->lock;
                spin_lock(__cil_tmp34);
                v = pd->write_congestion_off;
                __cil_tmp35 = & pd->lock;
                spin_unlock(__cil_tmp35);
                n = sprintf(data, "%d\n", v);
                }
              } else {
                {
                __cil_tmp36 = attr->name;
                tmp = strcmp(__cil_tmp36, "congestion_on");
                }
                if (tmp == 0) {
                  {
                  __cil_tmp37 = & pd->lock;
                  spin_lock(__cil_tmp37);
                  v = pd->write_congestion_on;
                  __cil_tmp38 = & pd->lock;
                  spin_unlock(__cil_tmp38);
                  n = sprintf(data, "%d\n", v);
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
  return ((ssize_t )n);
}
}
static void init_write_congestion_marks(int *lo , int *hi )
{ int _max1 ;
  int _max2 ;
  int tmp ;
  int _min1 ;
  int _min2 ;
  int tmp___0 ;
  int _min1___0 ;
  int _min2___0 ;
  int tmp___1 ;
  int _max1___0 ;
  int _max2___0 ;
  int tmp___2 ;
  int __cil_tmp15 ;
  int __cil_tmp16 ;
  int __cil_tmp17 ;
  int __cil_tmp18 ;

  {
  {
  __cil_tmp15 = *hi;
  if (__cil_tmp15 > 0) {
    _max1 = *hi;
    _max2 = 500;
    if (_max1 > _max2) {
      tmp = _max1;
    } else {
      tmp = _max2;
    }
    *hi = tmp;
    _min1 = *hi;
    _min2 = 1000000;
    if (_min1 < _min2) {
      tmp___0 = _min1;
    } else {
      tmp___0 = _min2;
    }
    *hi = tmp___0;
    {
    __cil_tmp16 = *lo;
    if (__cil_tmp16 <= 0) {
      __cil_tmp17 = *hi;
      *lo = __cil_tmp17 + -100;
    } else {
      _min1___0 = *lo;
      __cil_tmp18 = *hi;
      _min2___0 = __cil_tmp18 + -100;
      if (_min1___0 < _min2___0) {
        tmp___1 = _min1___0;
      } else {
        tmp___1 = _min2___0;
      }
      *lo = tmp___1;
      _max1___0 = *lo;
      _max2___0 = 100;
      if (_max1___0 > _max2___0) {
        tmp___2 = _max1___0;
      } else {
        tmp___2 = _max2___0;
      }
      *lo = tmp___2;
    }
    }
  } else {
    *hi = -1;
    *lo = -1;
  }
  }
  return;
}
}
static ssize_t kobj_pkt_store(struct kobject *kobj , struct attribute *attr , char const *data ,
                              size_t len )
{ struct pktcdvd_device *pd ;
  struct kobject const *__mptr ;
  int val ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  struct pktcdvd_kobj *__cil_tmp13 ;
  char const *__cil_tmp14 ;
  char const *__cil_tmp15 ;
  spinlock_t *__cil_tmp16 ;
  int *__cil_tmp17 ;
  int *__cil_tmp18 ;
  spinlock_t *__cil_tmp19 ;
  char const *__cil_tmp20 ;
  spinlock_t *__cil_tmp21 ;
  int *__cil_tmp22 ;
  int *__cil_tmp23 ;
  spinlock_t *__cil_tmp24 ;

  {
  {
  __mptr = (struct kobject const *)kobj;
  __cil_tmp13 = (struct pktcdvd_kobj *)__mptr;
  pd = __cil_tmp13->pd;
  __cil_tmp14 = attr->name;
  tmp___3 = strcmp(__cil_tmp14, "reset");
  }
  if (tmp___3 == 0) {
    if (len != 0UL) {
      pd->stats.pkt_started = 0UL;
      pd->stats.pkt_ended = 0UL;
      pd->stats.secs_w = 0UL;
      pd->stats.secs_rg = 0UL;
      pd->stats.secs_r = 0UL;
    } else {
      goto _L___0;
    }
  } else {
    _L___0:
    {
    __cil_tmp15 = attr->name;
    tmp___1 = strcmp(__cil_tmp15, "congestion_off");
    }
    if (tmp___1 == 0) {
      {
      tmp___2 = sscanf(data, "%d", & val);
      }
      if (tmp___2 == 1) {
        {
        __cil_tmp16 = & pd->lock;
        spin_lock(__cil_tmp16);
        pd->write_congestion_off = val;
        __cil_tmp17 = & pd->write_congestion_off;
        __cil_tmp18 = & pd->write_congestion_on;
        init_write_congestion_marks(__cil_tmp17, __cil_tmp18);
        __cil_tmp19 = & pd->lock;
        spin_unlock(__cil_tmp19);
        }
      } else {
        goto _L;
      }
    } else {
      _L:
      {
      __cil_tmp20 = attr->name;
      tmp = strcmp(__cil_tmp20, "congestion_on");
      }
      if (tmp == 0) {
        {
        tmp___0 = sscanf(data, "%d", & val);
        }
        if (tmp___0 == 1) {
          {
          __cil_tmp21 = & pd->lock;
          spin_lock(__cil_tmp21);
          pd->write_congestion_on = val;
          __cil_tmp22 = & pd->write_congestion_off;
          __cil_tmp23 = & pd->write_congestion_on;
          init_write_congestion_marks(__cil_tmp22, __cil_tmp23);
          __cil_tmp24 = & pd->lock;
          spin_unlock(__cil_tmp24);
          }
        } else {

        }
      } else {

      }
    }
  }
  return ((ssize_t )len);
}
}
static struct sysfs_ops const kobj_pkt_ops = {& kobj_pkt_show, & kobj_pkt_store};
static struct kobj_type kobj_pkt_type_stat = {& pkt_kobj_release, & kobj_pkt_ops, (struct attribute **)(& kobj_pkt_attrs_stat),
    (struct kobj_ns_type_operations const *(*)(struct kobject * ))0, (void const *(*)(struct kobject * ))0};
static struct kobj_type kobj_pkt_type_wqueue = {& pkt_kobj_release, & kobj_pkt_ops, (struct attribute **)(& kobj_pkt_attrs_wqueue),
    (struct kobj_ns_type_operations const *(*)(struct kobject * ))0, (void const *(*)(struct kobject * ))0};
static void pkt_sysfs_dev_new(struct pktcdvd_device *pd )
{ long tmp ;
  struct class *__cil_tmp3 ;
  unsigned long __cil_tmp4 ;
  unsigned long __cil_tmp5 ;
  struct device *__cil_tmp6 ;
  void *__cil_tmp7 ;
  char (*__cil_tmp8)[20U] ;
  char *__cil_tmp9 ;
  struct device *__cil_tmp10 ;
  void const *__cil_tmp11 ;
  struct device *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  struct device *__cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  struct device *__cil_tmp16 ;
  struct kobject *__cil_tmp17 ;
  struct device *__cil_tmp18 ;
  struct kobject *__cil_tmp19 ;

  {
  {
  __cil_tmp3 = (struct class *)0;
  __cil_tmp4 = (unsigned long )__cil_tmp3;
  __cil_tmp5 = (unsigned long )class_pktcdvd;
  if (__cil_tmp5 != __cil_tmp4) {
    {
    __cil_tmp6 = (struct device *)0;
    __cil_tmp7 = (void *)0;
    __cil_tmp8 = & pd->name;
    __cil_tmp9 = (char *)__cil_tmp8;
    pd->dev = device_create(class_pktcdvd, __cil_tmp6, 0U, __cil_tmp7, "%s", __cil_tmp9);
    __cil_tmp10 = pd->dev;
    __cil_tmp11 = (void const *)__cil_tmp10;
    tmp = IS_ERR(__cil_tmp11);
    }
    if (tmp != 0L) {
      pd->dev = (struct device *)0;
    } else {

    }
  } else {

  }
  }
  {
  __cil_tmp12 = (struct device *)0;
  __cil_tmp13 = (unsigned long )__cil_tmp12;
  __cil_tmp14 = pd->dev;
  __cil_tmp15 = (unsigned long )__cil_tmp14;
  if (__cil_tmp15 != __cil_tmp13) {
    {
    __cil_tmp16 = pd->dev;
    __cil_tmp17 = & __cil_tmp16->kobj;
    pd->kobj_stat = pkt_kobj_create(pd, "stat", __cil_tmp17, & kobj_pkt_type_stat);
    __cil_tmp18 = pd->dev;
    __cil_tmp19 = & __cil_tmp18->kobj;
    pd->kobj_wqueue = pkt_kobj_create(pd, "write_queue", __cil_tmp19, & kobj_pkt_type_wqueue);
    }
  } else {

  }
  }
  return;
}
}
static void pkt_sysfs_dev_remove(struct pktcdvd_device *pd )
{ struct pktcdvd_kobj *__cil_tmp2 ;
  struct pktcdvd_kobj *__cil_tmp3 ;
  struct class *__cil_tmp4 ;
  unsigned long __cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  struct device *__cil_tmp7 ;

  {
  {
  __cil_tmp2 = pd->kobj_stat;
  pkt_kobj_remove(__cil_tmp2);
  __cil_tmp3 = pd->kobj_wqueue;
  pkt_kobj_remove(__cil_tmp3);
  }
  {
  __cil_tmp4 = (struct class *)0;
  __cil_tmp5 = (unsigned long )__cil_tmp4;
  __cil_tmp6 = (unsigned long )class_pktcdvd;
  if (__cil_tmp6 != __cil_tmp5) {
    {
    __cil_tmp7 = pd->dev;
    device_unregister(__cil_tmp7);
    }
  } else {

  }
  }
  return;
}
}
static void class_pktcdvd_release(struct class *cls )
{ void const *__cil_tmp2 ;

  {
  {
  __cil_tmp2 = (void const *)cls;
  kfree(__cil_tmp2);
  }
  return;
}
}
static ssize_t class_pktcdvd_show_map(struct class *c , struct class_attribute *attr ,
                                      char *data )
{ int n ;
  int idx ;
  struct pktcdvd_device *pd ;
  int tmp ;
  struct pktcdvd_device *__cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  char *__cil_tmp12 ;
  char (*__cil_tmp13)[20U] ;
  char *__cil_tmp14 ;
  dev_t __cil_tmp15 ;
  dev_t __cil_tmp16 ;
  dev_t __cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  struct block_device *__cil_tmp19 ;
  dev_t __cil_tmp20 ;
  dev_t __cil_tmp21 ;
  struct block_device *__cil_tmp22 ;
  dev_t __cil_tmp23 ;
  unsigned int __cil_tmp24 ;

  {
  {
  n = 0;
  mutex_lock_nested(& ctl_mutex, 1U);
  idx = 0;
  }
  goto ldv_30602;
  ldv_30601:
  pd = pkt_devs[idx];
  {
  __cil_tmp8 = (struct pktcdvd_device *)0;
  __cil_tmp9 = (unsigned long )__cil_tmp8;
  __cil_tmp10 = (unsigned long )pd;
  if (__cil_tmp10 == __cil_tmp9) {
    goto ldv_30600;
  } else {

  }
  }
  {
  __cil_tmp11 = (unsigned long )n;
  __cil_tmp12 = data + __cil_tmp11;
  __cil_tmp13 = & pd->name;
  __cil_tmp14 = (char *)__cil_tmp13;
  __cil_tmp15 = pd->pkt_dev;
  __cil_tmp16 = __cil_tmp15 >> 20;
  __cil_tmp17 = pd->pkt_dev;
  __cil_tmp18 = __cil_tmp17 & 1048575U;
  __cil_tmp19 = pd->bdev;
  __cil_tmp20 = __cil_tmp19->bd_dev;
  __cil_tmp21 = __cil_tmp20 >> 20;
  __cil_tmp22 = pd->bdev;
  __cil_tmp23 = __cil_tmp22->bd_dev;
  __cil_tmp24 = __cil_tmp23 & 1048575U;
  tmp = sprintf(__cil_tmp12, "%s %u:%u %u:%u\n", __cil_tmp14, __cil_tmp16, __cil_tmp18,
                __cil_tmp21, __cil_tmp24);
  n = tmp + n;
  }
  ldv_30600:
  idx = idx + 1;
  ldv_30602: ;
  if (idx <= 7) {
    goto ldv_30601;
  } else {
    goto ldv_30603;
  }
  ldv_30603:
  {
  mutex_unlock(& ctl_mutex);
  }
  return ((ssize_t )n);
}
}
static ssize_t class_pktcdvd_store_add(struct class *c , struct class_attribute *attr ,
                                       char const *buf , size_t count )
{ unsigned int major ;
  unsigned int minor ;
  int tmp ;
  int tmp___0 ;
  unsigned int __cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  dev_t *__cil_tmp11 ;

  {
  {
  tmp___0 = sscanf(buf, "%u:%u", & major, & minor);
  }
  if (tmp___0 == 2) {
    {
    tmp = ldv_try_module_get_1(& __this_module);
    }
    if (tmp == 0) {
      return (-19L);
    } else {

    }
    {
    __cil_tmp9 = major << 20;
    __cil_tmp10 = __cil_tmp9 | minor;
    __cil_tmp11 = (dev_t *)0;
    pkt_setup_dev(__cil_tmp10, __cil_tmp11);
    ldv_module_put_2(& __this_module);
    }
    return ((ssize_t )count);
  } else {

  }
  return (-22L);
}
}
static ssize_t class_pktcdvd_store_remove(struct class *c , struct class_attribute *attr ,
                                          char const *buf , size_t count )
{ unsigned int major ;
  unsigned int minor ;
  int tmp ;
  unsigned int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;

  {
  {
  tmp = sscanf(buf, "%u:%u", & major, & minor);
  }
  if (tmp == 2) {
    {
    __cil_tmp8 = major << 20;
    __cil_tmp9 = __cil_tmp8 | minor;
    pkt_remove_dev(__cil_tmp9);
    }
    return ((ssize_t )count);
  } else {

  }
  return (-22L);
}
}
static struct class_attribute class_pktcdvd_attrs[4U] = { {{"add", 128U, (struct lock_class_key *)0, {{{(char)0}, {(char)0}, {(char)0},
                                                  {(char)0}, {(char)0}, {(char)0},
                                                  {(char)0}, {(char)0}}}}, (ssize_t (*)(struct class * ,
                                                                                        struct class_attribute * ,
                                                                                        char * ))0,
      & class_pktcdvd_store_add},
        {{"remove", 128U, (struct lock_class_key *)0, {{{(char)0}, {(char)0}, {(char)0},
                                                     {(char)0}, {(char)0}, {(char)0},
                                                     {(char)0}, {(char)0}}}}, (ssize_t (*)(struct class * ,
                                                                                           struct class_attribute * ,
                                                                                           char * ))0,
      & class_pktcdvd_store_remove},
        {{"device_map", 292U, (struct lock_class_key *)0, {{{(char)0}, {(char)0}, {(char)0},
                                                         {(char)0}, {(char)0}, {(char)0},
                                                         {(char)0}, {(char)0}}}},
      & class_pktcdvd_show_map, (ssize_t (*)(struct class * , struct class_attribute * ,
                                             char const * , size_t ))0},
        {{(char const *)0, 0U, (struct lock_class_key *)0, {{{(char)0}, {(char)0},
                                                            {(char)0}, {(char)0},
                                                            {(char)0}, {(char)0},
                                                            {(char)0}, {(char)0}}}},
      (ssize_t (*)(struct class * , struct class_attribute * , char * ))0, (ssize_t (*)(struct class * ,
                                                                                        struct class_attribute * ,
                                                                                        char const * ,
                                                                                        size_t ))0}};
static int pkt_sysfs_init(void)
{ int ret ;
  void *tmp ;
  struct lock_class_key __key ;
  int tmp___0 ;
  struct class *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  void const *__cil_tmp8 ;

  {
  {
  ret = 0;
  tmp = kzalloc(128UL, 208U);
  class_pktcdvd = (struct class *)tmp;
  }
  {
  __cil_tmp5 = (struct class *)0;
  __cil_tmp6 = (unsigned long )__cil_tmp5;
  __cil_tmp7 = (unsigned long )class_pktcdvd;
  if (__cil_tmp7 == __cil_tmp6) {
    return (-12);
  } else {

  }
  }
  {
  class_pktcdvd->name = "pktcdvd";
  class_pktcdvd->owner = & __this_module;
  class_pktcdvd->class_release = & class_pktcdvd_release;
  class_pktcdvd->class_attrs = (struct class_attribute *)(& class_pktcdvd_attrs);
  tmp___0 = __class_register(class_pktcdvd, & __key);
  ret = tmp___0;
  }
  if (ret != 0) {
    {
    __cil_tmp8 = (void const *)class_pktcdvd;
    kfree(__cil_tmp8);
    class_pktcdvd = (struct class *)0;
    printk("pktcdvd: failed to create class pktcdvd\n");
    }
    return (ret);
  } else {

  }
  return (0);
}
}
static void pkt_sysfs_cleanup(void)
{ struct class *__cil_tmp1 ;
  unsigned long __cil_tmp2 ;
  unsigned long __cil_tmp3 ;

  {
  {
  __cil_tmp1 = (struct class *)0;
  __cil_tmp2 = (unsigned long )__cil_tmp1;
  __cil_tmp3 = (unsigned long )class_pktcdvd;
  if (__cil_tmp3 != __cil_tmp2) {
    {
    class_destroy(class_pktcdvd);
    }
  } else {

  }
  }
  class_pktcdvd = (struct class *)0;
  return;
}
}
static int pkt_debugfs_seq_show(struct seq_file *m , void *p )
{ int tmp ;

  {
  {
  tmp = pkt_seq_show(m, p);
  }
  return (tmp);
}
}
static int pkt_debugfs_fops_open(struct inode *inode , struct file *file )
{ int tmp ;
  void *__cil_tmp4 ;

  {
  {
  __cil_tmp4 = inode->i_private;
  tmp = single_open(file, & pkt_debugfs_seq_show, __cil_tmp4);
  }
  return (tmp);
}
}
static struct file_operations const debug_fops =
     {& __this_module, & seq_lseek, & seq_read, (ssize_t (*)(struct file * , char const * ,
                                                           size_t , loff_t * ))0,
    (ssize_t (*)(struct kiocb * , struct iovec const * , unsigned long , loff_t ))0,
    (ssize_t (*)(struct kiocb * , struct iovec const * , unsigned long , loff_t ))0,
    (int (*)(struct file * , void * , int (*)(void * , char const * , int , loff_t ,
                                              u64 , unsigned int ) ))0, (unsigned int (*)(struct file * ,
                                                                                            struct poll_table_struct * ))0,
    (long (*)(struct file * , unsigned int , unsigned long ))0, (long (*)(struct file * ,
                                                                            unsigned int ,
                                                                            unsigned long ))0,
    (int (*)(struct file * , struct vm_area_struct * ))0, & pkt_debugfs_fops_open,
    (int (*)(struct file * , fl_owner_t ))0, & single_release, (int (*)(struct file * ,
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
static void pkt_debugfs_dev_new(struct pktcdvd_device *pd )
{ long tmp ;
  long tmp___0 ;
  struct dentry *__cil_tmp4 ;
  unsigned long __cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  char (*__cil_tmp7)[20U] ;
  char const *__cil_tmp8 ;
  struct dentry *__cil_tmp9 ;
  void const *__cil_tmp10 ;
  struct dentry *__cil_tmp11 ;
  void *__cil_tmp12 ;
  struct dentry *__cil_tmp13 ;
  void const *__cil_tmp14 ;

  {
  {
  __cil_tmp4 = (struct dentry *)0;
  __cil_tmp5 = (unsigned long )__cil_tmp4;
  __cil_tmp6 = (unsigned long )pkt_debugfs_root;
  if (__cil_tmp6 == __cil_tmp5) {
    return;
  } else {

  }
  }
  {
  pd->dfs_f_info = (struct dentry *)0;
  __cil_tmp7 = & pd->name;
  __cil_tmp8 = (char const *)__cil_tmp7;
  pd->dfs_d_root = debugfs_create_dir(__cil_tmp8, pkt_debugfs_root);
  __cil_tmp9 = pd->dfs_d_root;
  __cil_tmp10 = (void const *)__cil_tmp9;
  tmp = IS_ERR(__cil_tmp10);
  }
  if (tmp != 0L) {
    pd->dfs_d_root = (struct dentry *)0;
    return;
  } else {

  }
  {
  __cil_tmp11 = pd->dfs_d_root;
  __cil_tmp12 = (void *)pd;
  pd->dfs_f_info = debugfs_create_file("info", 292U, __cil_tmp11, __cil_tmp12, & debug_fops);
  __cil_tmp13 = pd->dfs_f_info;
  __cil_tmp14 = (void const *)__cil_tmp13;
  tmp___0 = IS_ERR(__cil_tmp14);
  }
  if (tmp___0 != 0L) {
    pd->dfs_f_info = (struct dentry *)0;
    return;
  } else {

  }
  return;
}
}
static void pkt_debugfs_dev_remove(struct pktcdvd_device *pd )
{ struct dentry *__cil_tmp2 ;
  unsigned long __cil_tmp3 ;
  unsigned long __cil_tmp4 ;
  struct dentry *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  struct dentry *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  struct dentry *__cil_tmp9 ;
  struct dentry *__cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  struct dentry *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  struct dentry *__cil_tmp14 ;

  {
  {
  __cil_tmp2 = (struct dentry *)0;
  __cil_tmp3 = (unsigned long )__cil_tmp2;
  __cil_tmp4 = (unsigned long )pkt_debugfs_root;
  if (__cil_tmp4 == __cil_tmp3) {
    return;
  } else {

  }
  }
  {
  __cil_tmp5 = (struct dentry *)0;
  __cil_tmp6 = (unsigned long )__cil_tmp5;
  __cil_tmp7 = pd->dfs_f_info;
  __cil_tmp8 = (unsigned long )__cil_tmp7;
  if (__cil_tmp8 != __cil_tmp6) {
    {
    __cil_tmp9 = pd->dfs_f_info;
    debugfs_remove(__cil_tmp9);
    }
  } else {

  }
  }
  pd->dfs_f_info = (struct dentry *)0;
  {
  __cil_tmp10 = (struct dentry *)0;
  __cil_tmp11 = (unsigned long )__cil_tmp10;
  __cil_tmp12 = pd->dfs_d_root;
  __cil_tmp13 = (unsigned long )__cil_tmp12;
  if (__cil_tmp13 != __cil_tmp11) {
    {
    __cil_tmp14 = pd->dfs_d_root;
    debugfs_remove(__cil_tmp14);
    }
  } else {

  }
  }
  pd->dfs_d_root = (struct dentry *)0;
  return;
}
}
static void pkt_debugfs_init(void)
{ long tmp ;
  struct dentry *__cil_tmp2 ;
  void const *__cil_tmp3 ;

  {
  {
  __cil_tmp2 = (struct dentry *)0;
  pkt_debugfs_root = debugfs_create_dir("pktcdvd", __cil_tmp2);
  __cil_tmp3 = (void const *)pkt_debugfs_root;
  tmp = IS_ERR(__cil_tmp3);
  }
  if (tmp != 0L) {
    pkt_debugfs_root = (struct dentry *)0;
    return;
  } else {

  }
  return;
}
}
static void pkt_debugfs_cleanup(void)
{ struct dentry *__cil_tmp1 ;
  unsigned long __cil_tmp2 ;
  unsigned long __cil_tmp3 ;

  {
  {
  __cil_tmp1 = (struct dentry *)0;
  __cil_tmp2 = (unsigned long )__cil_tmp1;
  __cil_tmp3 = (unsigned long )pkt_debugfs_root;
  if (__cil_tmp3 == __cil_tmp2) {
    return;
  } else {

  }
  }
  {
  debugfs_remove(pkt_debugfs_root);
  pkt_debugfs_root = (struct dentry *)0;
  }
  return;
}
}
static void pkt_bio_finished(struct pktcdvd_device *pd )
{ int tmp ;
  long tmp___0 ;
  int tmp___1 ;
  atomic_t *__cil_tmp5 ;
  atomic_t const *__cil_tmp6 ;
  int __cil_tmp7 ;
  long __cil_tmp8 ;
  atomic_t *__cil_tmp9 ;
  atomic_t *__cil_tmp10 ;
  wait_queue_head_t *__cil_tmp11 ;
  void *__cil_tmp12 ;

  {
  {
  __cil_tmp5 = & pd->cdrw.pending_bios;
  __cil_tmp6 = (atomic_t const *)__cil_tmp5;
  tmp = atomic_read(__cil_tmp6);
  __cil_tmp7 = tmp <= 0;
  __cil_tmp8 = (long )__cil_tmp7;
  tmp___0 = __builtin_expect(__cil_tmp8, 0L);
  }
  if (tmp___0 != 0L) {
    __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/block/pktcdvd.ko--X--unsafelinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/block/pktcdvd.c.p"),
                         "i" (525), "i" (12UL));
    ldv_30654: ;
    goto ldv_30654;
  } else {

  }
  {
  __cil_tmp9 = & pd->cdrw.pending_bios;
  tmp___1 = atomic_dec_and_test(__cil_tmp9);
  }
  if (tmp___1 != 0) {
    {
    __cil_tmp10 = & pd->iosched.attention;
    atomic_set(__cil_tmp10, 1);
    __cil_tmp11 = & pd->wqueue;
    __cil_tmp12 = (void *)0;
    __wake_up(__cil_tmp11, 3U, 1, __cil_tmp12);
    }
  } else {

  }
  return;
}
}
static void pkt_bio_destructor(struct bio *bio )
{ struct bio_vec *__cil_tmp2 ;
  void const *__cil_tmp3 ;
  void const *__cil_tmp4 ;

  {
  {
  __cil_tmp2 = bio->bi_io_vec;
  __cil_tmp3 = (void const *)__cil_tmp2;
  kfree(__cil_tmp3);
  __cil_tmp4 = (void const *)bio;
  kfree(__cil_tmp4);
  }
  return;
}
}
static struct bio *pkt_bio_alloc(int nr_iovecs )
{ struct bio_vec *bvl ;
  struct bio *bio ;
  void *tmp ;
  void *tmp___0 ;
  struct bio *__cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  size_t __cil_tmp9 ;
  struct bio_vec *__cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  unsigned long __cil_tmp12 ;
  void const *__cil_tmp13 ;

  {
  {
  bvl = (struct bio_vec *)0;
  tmp = kmalloc(112UL, 208U);
  bio = (struct bio *)tmp;
  }
  {
  __cil_tmp6 = (struct bio *)0;
  __cil_tmp7 = (unsigned long )__cil_tmp6;
  __cil_tmp8 = (unsigned long )bio;
  if (__cil_tmp8 == __cil_tmp7) {
    goto no_bio;
  } else {

  }
  }
  {
  bio_init(bio);
  __cil_tmp9 = (size_t )nr_iovecs;
  tmp___0 = kcalloc(__cil_tmp9, 16UL, 208U);
  bvl = (struct bio_vec *)tmp___0;
  }
  {
  __cil_tmp10 = (struct bio_vec *)0;
  __cil_tmp11 = (unsigned long )__cil_tmp10;
  __cil_tmp12 = (unsigned long )bvl;
  if (__cil_tmp12 == __cil_tmp11) {
    goto no_bvl;
  } else {

  }
  }
  bio->bi_max_vecs = (unsigned int )nr_iovecs;
  bio->bi_io_vec = bvl;
  bio->bi_destructor = & pkt_bio_destructor;
  return (bio);
  no_bvl:
  {
  __cil_tmp13 = (void const *)bio;
  kfree(__cil_tmp13);
  }
  no_bio: ;
  return ((struct bio *)0);
}
}
static struct packet_data *pkt_alloc_packet_data(int frames )
{ int i ;
  struct packet_data *pkt ;
  void *tmp ;
  struct lock_class_key __key ;
  struct bio *bio ;
  struct bio *tmp___0 ;
  struct bio *bio___0 ;
  struct packet_data *__cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  struct bio *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  struct bio *__cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  struct page *__cil_tmp16 ;
  unsigned long __cil_tmp17 ;
  struct page *__cil_tmp18 ;
  unsigned long __cil_tmp19 ;
  unsigned long __cil_tmp20 ;
  unsigned long __cil_tmp21 ;
  unsigned long __cil_tmp22 ;
  spinlock_t *__cil_tmp23 ;
  struct raw_spinlock *__cil_tmp24 ;
  struct bio_list *__cil_tmp25 ;
  struct bio *__cil_tmp26 ;
  unsigned long __cil_tmp27 ;
  unsigned long __cil_tmp28 ;
  struct bio *__cil_tmp29 ;
  unsigned long __cil_tmp30 ;
  unsigned long __cil_tmp31 ;
  struct page *__cil_tmp32 ;
  unsigned long __cil_tmp33 ;
  struct page *__cil_tmp34 ;
  unsigned long __cil_tmp35 ;
  struct page *__cil_tmp36 ;
  unsigned long __cil_tmp37 ;
  unsigned long __cil_tmp38 ;
  unsigned long __cil_tmp39 ;
  struct bio *__cil_tmp40 ;
  void const *__cil_tmp41 ;

  {
  {
  tmp = kzalloc(1712UL, 208U);
  pkt = (struct packet_data *)tmp;
  }
  {
  __cil_tmp9 = (struct packet_data *)0;
  __cil_tmp10 = (unsigned long )__cil_tmp9;
  __cil_tmp11 = (unsigned long )pkt;
  if (__cil_tmp11 == __cil_tmp10) {
    goto no_pkt;
  } else {

  }
  }
  {
  pkt->frames = frames;
  pkt->w_bio = pkt_bio_alloc(frames);
  }
  {
  __cil_tmp12 = (struct bio *)0;
  __cil_tmp13 = (unsigned long )__cil_tmp12;
  __cil_tmp14 = pkt->w_bio;
  __cil_tmp15 = (unsigned long )__cil_tmp14;
  if (__cil_tmp15 == __cil_tmp13) {
    goto no_bio;
  } else {

  }
  }
  i = 0;
  goto ldv_30674;
  ldv_30673:
  {
  pkt->pages[i] = alloc_pages(32976U, 0U);
  }
  {
  __cil_tmp16 = (struct page *)0;
  __cil_tmp17 = (unsigned long )__cil_tmp16;
  __cil_tmp18 = pkt->pages[i];
  __cil_tmp19 = (unsigned long )__cil_tmp18;
  if (__cil_tmp19 == __cil_tmp17) {
    goto no_page;
  } else {

  }
  }
  i = i + 1;
  ldv_30674: ;
  {
  __cil_tmp20 = (unsigned long )frames;
  __cil_tmp21 = __cil_tmp20 / 2UL;
  __cil_tmp22 = (unsigned long )i;
  if (__cil_tmp22 < __cil_tmp21) {
    goto ldv_30673;
  } else {
    goto ldv_30675;
  }
  }
  ldv_30675:
  {
  __cil_tmp23 = & pkt->lock;
  spinlock_check(__cil_tmp23);
  __cil_tmp24 = & pkt->lock.ldv_6060.rlock;
  __raw_spin_lock_init(__cil_tmp24, "&(&pkt->lock)->rlock", & __key);
  __cil_tmp25 = & pkt->orig_bios;
  bio_list_init(__cil_tmp25);
  i = 0;
  }
  goto ldv_30680;
  ldv_30679:
  {
  tmp___0 = pkt_bio_alloc(1);
  bio = tmp___0;
  }
  {
  __cil_tmp26 = (struct bio *)0;
  __cil_tmp27 = (unsigned long )__cil_tmp26;
  __cil_tmp28 = (unsigned long )bio;
  if (__cil_tmp28 == __cil_tmp27) {
    goto no_rd_bio;
  } else {

  }
  }
  pkt->r_bios[i] = bio;
  i = i + 1;
  ldv_30680: ;
  if (i < frames) {
    goto ldv_30679;
  } else {
    goto ldv_30681;
  }
  ldv_30681: ;
  return (pkt);
  no_rd_bio:
  i = 0;
  goto ldv_30684;
  ldv_30683:
  bio___0 = pkt->r_bios[i];
  {
  __cil_tmp29 = (struct bio *)0;
  __cil_tmp30 = (unsigned long )__cil_tmp29;
  __cil_tmp31 = (unsigned long )bio___0;
  if (__cil_tmp31 != __cil_tmp30) {
    {
    bio_put(bio___0);
    }
  } else {

  }
  }
  i = i + 1;
  ldv_30684: ;
  if (i < frames) {
    goto ldv_30683;
  } else {
    goto ldv_30685;
  }
  ldv_30685: ;
  no_page:
  i = 0;
  goto ldv_30687;
  ldv_30686: ;
  {
  __cil_tmp32 = (struct page *)0;
  __cil_tmp33 = (unsigned long )__cil_tmp32;
  __cil_tmp34 = pkt->pages[i];
  __cil_tmp35 = (unsigned long )__cil_tmp34;
  if (__cil_tmp35 != __cil_tmp33) {
    {
    __cil_tmp36 = pkt->pages[i];
    __free_pages(__cil_tmp36, 0U);
    }
  } else {

  }
  }
  i = i + 1;
  ldv_30687: ;
  {
  __cil_tmp37 = (unsigned long )frames;
  __cil_tmp38 = __cil_tmp37 / 2UL;
  __cil_tmp39 = (unsigned long )i;
  if (__cil_tmp39 < __cil_tmp38) {
    goto ldv_30686;
  } else {
    goto ldv_30688;
  }
  }
  ldv_30688:
  {
  __cil_tmp40 = pkt->w_bio;
  bio_put(__cil_tmp40);
  }
  no_bio:
  {
  __cil_tmp41 = (void const *)pkt;
  kfree(__cil_tmp41);
  }
  no_pkt: ;
  return ((struct packet_data *)0);
}
}
static void pkt_free_packet_data(struct packet_data *pkt )
{ int i ;
  struct bio *bio ;
  struct bio *__cil_tmp4 ;
  unsigned long __cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  int __cil_tmp7 ;
  struct page *__cil_tmp8 ;
  int __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  unsigned long __cil_tmp12 ;
  struct bio *__cil_tmp13 ;
  void const *__cil_tmp14 ;

  {
  i = 0;
  goto ldv_30695;
  ldv_30694:
  bio = pkt->r_bios[i];
  {
  __cil_tmp4 = (struct bio *)0;
  __cil_tmp5 = (unsigned long )__cil_tmp4;
  __cil_tmp6 = (unsigned long )bio;
  if (__cil_tmp6 != __cil_tmp5) {
    {
    bio_put(bio);
    }
  } else {

  }
  }
  i = i + 1;
  ldv_30695: ;
  {
  __cil_tmp7 = pkt->frames;
  if (__cil_tmp7 > i) {
    goto ldv_30694;
  } else {
    goto ldv_30696;
  }
  }
  ldv_30696:
  i = 0;
  goto ldv_30698;
  ldv_30697:
  {
  __cil_tmp8 = pkt->pages[i];
  __free_pages(__cil_tmp8, 0U);
  i = i + 1;
  }
  ldv_30698: ;
  {
  __cil_tmp9 = pkt->frames;
  __cil_tmp10 = (unsigned long )__cil_tmp9;
  __cil_tmp11 = __cil_tmp10 / 2UL;
  __cil_tmp12 = (unsigned long )i;
  if (__cil_tmp12 < __cil_tmp11) {
    goto ldv_30697;
  } else {
    goto ldv_30699;
  }
  }
  ldv_30699:
  {
  __cil_tmp13 = pkt->w_bio;
  bio_put(__cil_tmp13);
  __cil_tmp14 = (void const *)pkt;
  kfree(__cil_tmp14);
  }
  return;
}
}
static void pkt_shrink_pktlist(struct pktcdvd_device *pd )
{ struct packet_data *pkt ;
  struct packet_data *next ;
  int tmp ;
  long tmp___0 ;
  struct list_head const *__mptr ;
  struct list_head const *__mptr___0 ;
  struct list_head const *__mptr___1 ;
  struct list_head *__cil_tmp9 ;
  struct list_head const *__cil_tmp10 ;
  int __cil_tmp11 ;
  long __cil_tmp12 ;
  struct list_head *__cil_tmp13 ;
  struct list_head *__cil_tmp14 ;
  struct list_head *__cil_tmp15 ;
  struct list_head *__cil_tmp16 ;
  unsigned long __cil_tmp17 ;
  struct list_head *__cil_tmp18 ;
  unsigned long __cil_tmp19 ;
  struct list_head *__cil_tmp20 ;

  {
  {
  __cil_tmp9 = & pd->cdrw.pkt_active_list;
  __cil_tmp10 = (struct list_head const *)__cil_tmp9;
  tmp = list_empty(__cil_tmp10);
  __cil_tmp11 = tmp == 0;
  __cil_tmp12 = (long )__cil_tmp11;
  tmp___0 = __builtin_expect(__cil_tmp12, 0L);
  }
  if (tmp___0 != 0L) {
    __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/block/pktcdvd.ko--X--unsafelinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/block/pktcdvd.c.p"),
                         "i" (640), "i" (12UL));
    ldv_30705: ;
    goto ldv_30705;
  } else {

  }
  __cil_tmp13 = pd->cdrw.pkt_free_list.next;
  __mptr = (struct list_head const *)__cil_tmp13;
  pkt = (struct packet_data *)__mptr;
  __cil_tmp14 = pkt->list.next;
  __mptr___0 = (struct list_head const *)__cil_tmp14;
  next = (struct packet_data *)__mptr___0;
  goto ldv_30713;
  ldv_30712:
  {
  pkt_free_packet_data(pkt);
  pkt = next;
  __cil_tmp15 = next->list.next;
  __mptr___1 = (struct list_head const *)__cil_tmp15;
  next = (struct packet_data *)__mptr___1;
  }
  ldv_30713: ;
  {
  __cil_tmp16 = & pd->cdrw.pkt_free_list;
  __cil_tmp17 = (unsigned long )__cil_tmp16;
  __cil_tmp18 = & pkt->list;
  __cil_tmp19 = (unsigned long )__cil_tmp18;
  if (__cil_tmp19 != __cil_tmp17) {
    goto ldv_30712;
  } else {
    goto ldv_30714;
  }
  }
  ldv_30714:
  {
  __cil_tmp20 = & pd->cdrw.pkt_free_list;
  INIT_LIST_HEAD(__cil_tmp20);
  }
  return;
}
}
static int pkt_grow_pktlist(struct pktcdvd_device *pd , int nr_packets )
{ struct packet_data *pkt ;
  int tmp ;
  long tmp___0 ;
  struct list_head *__cil_tmp6 ;
  struct list_head const *__cil_tmp7 ;
  int __cil_tmp8 ;
  long __cil_tmp9 ;
  __u32 __cil_tmp10 ;
  __u32 __cil_tmp11 ;
  int __cil_tmp12 ;
  struct packet_data *__cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  struct list_head *__cil_tmp16 ;
  struct list_head *__cil_tmp17 ;

  {
  {
  __cil_tmp6 = & pd->cdrw.pkt_free_list;
  __cil_tmp7 = (struct list_head const *)__cil_tmp6;
  tmp = list_empty(__cil_tmp7);
  __cil_tmp8 = tmp == 0;
  __cil_tmp9 = (long )__cil_tmp8;
  tmp___0 = __builtin_expect(__cil_tmp9, 0L);
  }
  if (tmp___0 != 0L) {
    __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/block/pktcdvd.ko--X--unsafelinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/block/pktcdvd.c.p"),
                         "i" (652), "i" (12UL));
    ldv_30720: ;
    goto ldv_30720;
  } else {

  }
  goto ldv_30722;
  ldv_30721:
  {
  __cil_tmp10 = pd->settings.size;
  __cil_tmp11 = __cil_tmp10 >> 2;
  __cil_tmp12 = (int )__cil_tmp11;
  pkt = pkt_alloc_packet_data(__cil_tmp12);
  }
  {
  __cil_tmp13 = (struct packet_data *)0;
  __cil_tmp14 = (unsigned long )__cil_tmp13;
  __cil_tmp15 = (unsigned long )pkt;
  if (__cil_tmp15 == __cil_tmp14) {
    {
    pkt_shrink_pktlist(pd);
    }
    return (0);
  } else {

  }
  }
  {
  pkt->id = nr_packets;
  pkt->pd = pd;
  __cil_tmp16 = & pkt->list;
  __cil_tmp17 = & pd->cdrw.pkt_free_list;
  list_add(__cil_tmp16, __cil_tmp17);
  nr_packets = nr_packets - 1;
  }
  ldv_30722: ;
  if (nr_packets > 0) {
    goto ldv_30721;
  } else {
    goto ldv_30723;
  }
  ldv_30723: ;
  return (1);
}
}
__inline static struct pkt_rb_node *pkt_rbtree_next(struct pkt_rb_node *node )
{ struct rb_node *n ;
  struct rb_node *tmp ;
  struct rb_node const *__mptr ;
  struct rb_node *__cil_tmp5 ;
  struct rb_node const *__cil_tmp6 ;
  struct rb_node *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;

  {
  {
  __cil_tmp5 = & node->rb_node;
  __cil_tmp6 = (struct rb_node const *)__cil_tmp5;
  tmp = rb_next(__cil_tmp6);
  n = tmp;
  }
  {
  __cil_tmp7 = (struct rb_node *)0;
  __cil_tmp8 = (unsigned long )__cil_tmp7;
  __cil_tmp9 = (unsigned long )n;
  if (__cil_tmp9 == __cil_tmp8) {
    return ((struct pkt_rb_node *)0);
  } else {

  }
  }
  __mptr = (struct rb_node const *)n;
  return ((struct pkt_rb_node *)__mptr);
}
}
static void pkt_rbtree_erase(struct pktcdvd_device *pd , struct pkt_rb_node *node )
{ long tmp ;
  struct rb_node *__cil_tmp4 ;
  struct rb_root *__cil_tmp5 ;
  void *__cil_tmp6 ;
  mempool_t *__cil_tmp7 ;
  int __cil_tmp8 ;
  int __cil_tmp9 ;
  int __cil_tmp10 ;
  long __cil_tmp11 ;

  {
  {
  __cil_tmp4 = & node->rb_node;
  __cil_tmp5 = & pd->bio_queue;
  rb_erase(__cil_tmp4, __cil_tmp5);
  __cil_tmp6 = (void *)node;
  __cil_tmp7 = pd->rb_pool;
  mempool_free(__cil_tmp6, __cil_tmp7);
  __cil_tmp8 = pd->bio_queue_size;
  pd->bio_queue_size = __cil_tmp8 - 1;
  __cil_tmp9 = pd->bio_queue_size;
  __cil_tmp10 = __cil_tmp9 < 0;
  __cil_tmp11 = (long )__cil_tmp10;
  tmp = __builtin_expect(__cil_tmp11, 0L);
  }
  if (tmp != 0L) {
    __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/block/pktcdvd.ko--X--unsafelinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/block/pktcdvd.c.p"),
                         "i" (681), "i" (12UL));
    ldv_30734: ;
    goto ldv_30734;
  } else {

  }
  return;
}
}
static struct pkt_rb_node *pkt_rbtree_find(struct pktcdvd_device *pd , sector_t s )
{ struct rb_node *n ;
  struct rb_node *next ;
  struct pkt_rb_node *tmp ;
  long tmp___0 ;
  struct rb_node const *__mptr ;
  long tmp___1 ;
  struct rb_node *__cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  int __cil_tmp12 ;
  int __cil_tmp13 ;
  long __cil_tmp14 ;
  struct bio *__cil_tmp15 ;
  sector_t __cil_tmp16 ;
  struct rb_node *__cil_tmp17 ;
  unsigned long __cil_tmp18 ;
  unsigned long __cil_tmp19 ;
  struct bio *__cil_tmp20 ;
  sector_t __cil_tmp21 ;
  struct pkt_rb_node *__cil_tmp22 ;
  unsigned long __cil_tmp23 ;
  unsigned long __cil_tmp24 ;
  struct bio *__cil_tmp25 ;
  sector_t __cil_tmp26 ;
  int __cil_tmp27 ;
  long __cil_tmp28 ;

  {
  n = pd->bio_queue.rb_node;
  {
  __cil_tmp9 = (struct rb_node *)0;
  __cil_tmp10 = (unsigned long )__cil_tmp9;
  __cil_tmp11 = (unsigned long )n;
  if (__cil_tmp11 == __cil_tmp10) {
    {
    __cil_tmp12 = pd->bio_queue_size;
    __cil_tmp13 = __cil_tmp12 > 0;
    __cil_tmp14 = (long )__cil_tmp13;
    tmp___0 = __builtin_expect(__cil_tmp14, 0L);
    }
    if (tmp___0 != 0L) {
      __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/block/pktcdvd.ko--X--unsafelinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/block/pktcdvd.c.p"),
                           "i" (694), "i" (12UL));
      ldv_30742: ;
      goto ldv_30742;
    } else {

    }
    return ((struct pkt_rb_node *)0);
  } else {

  }
  }
  ldv_30746:
  __mptr = (struct rb_node const *)n;
  tmp = (struct pkt_rb_node *)__mptr;
  {
  __cil_tmp15 = tmp->bio;
  __cil_tmp16 = __cil_tmp15->bi_sector;
  if (__cil_tmp16 >= s) {
    next = n->rb_left;
  } else {
    next = n->rb_right;
  }
  }
  {
  __cil_tmp17 = (struct rb_node *)0;
  __cil_tmp18 = (unsigned long )__cil_tmp17;
  __cil_tmp19 = (unsigned long )next;
  if (__cil_tmp19 == __cil_tmp18) {
    goto ldv_30745;
  } else {

  }
  }
  n = next;
  goto ldv_30746;
  ldv_30745: ;
  {
  __cil_tmp20 = tmp->bio;
  __cil_tmp21 = __cil_tmp20->bi_sector;
  if (__cil_tmp21 < s) {
    {
    tmp = pkt_rbtree_next(tmp);
    }
    {
    __cil_tmp22 = (struct pkt_rb_node *)0;
    __cil_tmp23 = (unsigned long )__cil_tmp22;
    __cil_tmp24 = (unsigned long )tmp;
    if (__cil_tmp24 == __cil_tmp23) {
      return ((struct pkt_rb_node *)0);
    } else {

    }
    }
  } else {

  }
  }
  {
  __cil_tmp25 = tmp->bio;
  __cil_tmp26 = __cil_tmp25->bi_sector;
  __cil_tmp27 = __cil_tmp26 < s;
  __cil_tmp28 = (long )__cil_tmp27;
  tmp___1 = __builtin_expect(__cil_tmp28, 0L);
  }
  if (tmp___1 != 0L) {
    __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/block/pktcdvd.ko--X--unsafelinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/block/pktcdvd.c.p"),
                         "i" (714), "i" (12UL));
    ldv_30747: ;
    goto ldv_30747;
  } else {

  }
  return (tmp);
}
}
static void pkt_rbtree_insert(struct pktcdvd_device *pd , struct pkt_rb_node *node )
{ struct rb_node **p ;
  struct rb_node *parent ;
  sector_t s ;
  struct pkt_rb_node *tmp ;
  struct rb_node const *__mptr ;
  struct bio *__cil_tmp8 ;
  struct bio *__cil_tmp9 ;
  sector_t __cil_tmp10 ;
  struct rb_node *__cil_tmp11 ;
  struct rb_node *__cil_tmp12 ;
  struct rb_node *__cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  struct rb_node *__cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  struct rb_node *__cil_tmp17 ;
  struct rb_node *__cil_tmp18 ;
  struct rb_root *__cil_tmp19 ;
  int __cil_tmp20 ;

  {
  p = & pd->bio_queue.rb_node;
  parent = (struct rb_node *)0;
  __cil_tmp8 = node->bio;
  s = __cil_tmp8->bi_sector;
  goto ldv_30759;
  ldv_30758:
  parent = *p;
  __mptr = (struct rb_node const *)parent;
  tmp = (struct pkt_rb_node *)__mptr;
  {
  __cil_tmp9 = tmp->bio;
  __cil_tmp10 = __cil_tmp9->bi_sector;
  if (__cil_tmp10 > s) {
    __cil_tmp11 = *p;
    p = & __cil_tmp11->rb_left;
  } else {
    __cil_tmp12 = *p;
    p = & __cil_tmp12->rb_right;
  }
  }
  ldv_30759: ;
  {
  __cil_tmp13 = (struct rb_node *)0;
  __cil_tmp14 = (unsigned long )__cil_tmp13;
  __cil_tmp15 = *p;
  __cil_tmp16 = (unsigned long )__cil_tmp15;
  if (__cil_tmp16 != __cil_tmp14) {
    goto ldv_30758;
  } else {
    goto ldv_30760;
  }
  }
  ldv_30760:
  {
  __cil_tmp17 = & node->rb_node;
  rb_link_node(__cil_tmp17, parent, p);
  __cil_tmp18 = & node->rb_node;
  __cil_tmp19 = & pd->bio_queue;
  rb_insert_color(__cil_tmp18, __cil_tmp19);
  __cil_tmp20 = pd->bio_queue_size;
  pd->bio_queue_size = __cil_tmp20 + 1;
  }
  return;
}
}
static int pkt_generic_packet(struct pktcdvd_device *pd , struct packet_command *cgc )
{ struct request_queue *q ;
  struct request_queue *tmp ;
  struct request *rq ;
  int ret ;
  int tmp___0 ;
  size_t __len ;
  void *__ret ;
  struct block_device *__cil_tmp10 ;
  unsigned char __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  int __cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  unsigned char *__cil_tmp15 ;
  void *__cil_tmp16 ;
  unsigned int __cil_tmp17 ;
  unsigned char *__cil_tmp18 ;
  void *__cil_tmp19 ;
  unsigned char (*__cil_tmp20)[12U] ;
  void const *__cil_tmp21 ;
  unsigned char *__cil_tmp22 ;
  void *__cil_tmp23 ;
  unsigned char (*__cil_tmp24)[12U] ;
  void const *__cil_tmp25 ;
  int __cil_tmp26 ;
  unsigned int __cil_tmp27 ;
  struct request_queue *__cil_tmp28 ;
  struct block_device *__cil_tmp29 ;
  struct gendisk *__cil_tmp30 ;
  int __cil_tmp31 ;

  {
  {
  __cil_tmp10 = pd->bdev;
  tmp = bdev_get_queue(__cil_tmp10);
  q = tmp;
  ret = 0;
  __cil_tmp11 = cgc->data_direction;
  __cil_tmp12 = (unsigned int )__cil_tmp11;
  __cil_tmp13 = __cil_tmp12 == 1U;
  rq = blk_get_request(q, __cil_tmp13, 16U);
  }
  {
  __cil_tmp14 = cgc->buflen;
  if (__cil_tmp14 != 0U) {
    {
    __cil_tmp15 = cgc->buffer;
    __cil_tmp16 = (void *)__cil_tmp15;
    __cil_tmp17 = cgc->buflen;
    tmp___0 = blk_rq_map_kern(q, rq, __cil_tmp16, __cil_tmp17, 16U);
    }
    if (tmp___0 != 0) {
      goto out;
    } else {

    }
  } else {

  }
  }
  rq->cmd_len = (unsigned short )scsi_command_size_tbl[((int )cgc->cmd[0] >> 5) & 7];
  __len = 12UL;
  if (__len > 63UL) {
    {
    __cil_tmp18 = rq->cmd;
    __cil_tmp19 = (void *)__cil_tmp18;
    __cil_tmp20 = & cgc->cmd;
    __cil_tmp21 = (void const *)__cil_tmp20;
    __ret = __memcpy(__cil_tmp19, __cil_tmp21, __len);
    }
  } else {
    {
    __cil_tmp22 = rq->cmd;
    __cil_tmp23 = (void *)__cil_tmp22;
    __cil_tmp24 = & cgc->cmd;
    __cil_tmp25 = (void const *)__cil_tmp24;
    __ret = __builtin_memcpy(__cil_tmp23, __cil_tmp25, __len);
    }
  }
  rq->timeout = 15000U;
  rq->cmd_type = (enum rq_cmd_type_bits )2;
  {
  __cil_tmp26 = cgc->quiet;
  if (__cil_tmp26 != 0) {
    __cil_tmp27 = rq->cmd_flags;
    rq->cmd_flags = __cil_tmp27 | 524288U;
  } else {

  }
  }
  {
  __cil_tmp28 = rq->q;
  __cil_tmp29 = pd->bdev;
  __cil_tmp30 = __cil_tmp29->bd_disk;
  blk_execute_rq(__cil_tmp28, __cil_tmp30, rq, 0);
  }
  {
  __cil_tmp31 = rq->errors;
  if (__cil_tmp31 != 0) {
    ret = -5;
  } else {

  }
  }
  out:
  {
  blk_put_request(rq);
  }
  return (ret);
}
}
static void pkt_dump_sense(struct packet_command *cgc )
{ char *info[9U] ;
  int i ;
  struct request_sense *sense ;
  unsigned char __cil_tmp5 ;
  int __cil_tmp6 ;
  struct request_sense *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  unsigned char __cil_tmp10 ;
  int __cil_tmp11 ;
  __u8 __cil_tmp12 ;
  int __cil_tmp13 ;
  __u8 __cil_tmp14 ;
  int __cil_tmp15 ;
  unsigned char __cil_tmp16 ;
  int __cil_tmp17 ;

  {
  {
  info[0] = (char *)"No sense";
  info[1] = (char *)"Recovered error";
  info[2] = (char *)"Not ready";
  info[3] = (char *)"Medium error";
  info[4] = (char *)"Hardware error";
  info[5] = (char *)"Illegal request";
  info[6] = (char *)"Unit attention";
  info[7] = (char *)"Data protect";
  info[8] = (char *)"Blank check";
  sense = cgc->sense;
  printk("pktcdvd:");
  i = 0;
  }
  goto ldv_30779;
  ldv_30778:
  {
  __cil_tmp5 = cgc->cmd[i];
  __cil_tmp6 = (int )__cil_tmp5;
  printk(" %02x", __cil_tmp6);
  i = i + 1;
  }
  ldv_30779: ;
  if (i <= 11) {
    goto ldv_30778;
  } else {
    goto ldv_30780;
  }
  ldv_30780:
  {
  printk(" - ");
  }
  {
  __cil_tmp7 = (struct request_sense *)0;
  __cil_tmp8 = (unsigned long )__cil_tmp7;
  __cil_tmp9 = (unsigned long )sense;
  if (__cil_tmp9 == __cil_tmp8) {
    {
    printk("no sense\n");
    }
    return;
  } else {

  }
  }
  {
  __cil_tmp10 = sense->sense_key;
  __cil_tmp11 = (int )__cil_tmp10;
  __cil_tmp12 = sense->asc;
  __cil_tmp13 = (int )__cil_tmp12;
  __cil_tmp14 = sense->ascq;
  __cil_tmp15 = (int )__cil_tmp14;
  printk("sense %02x.%02x.%02x", __cil_tmp11, __cil_tmp13, __cil_tmp15);
  }
  {
  __cil_tmp16 = sense->sense_key;
  __cil_tmp17 = (int )__cil_tmp16;
  if (__cil_tmp17 > 8) {
    {
    printk(" (INVALID)\n");
    }
    return;
  } else {

  }
  }
  {
  printk(" (%s)\n", info[(int )sense->sense_key]);
  }
  return;
}
}
static int pkt_flush_cache(struct pktcdvd_device *pd )
{ struct packet_command cgc ;
  int tmp ;
  void *__cil_tmp4 ;

  {
  {
  __cil_tmp4 = (void *)0;
  init_cdrom_command(& cgc, __cil_tmp4, 0, 3);
  cgc.cmd[0] = (unsigned char)53;
  cgc.quiet = 1;
  tmp = pkt_generic_packet(pd, & cgc);
  }
  return (tmp);
}
}
static int pkt_set_speed(struct pktcdvd_device *pd , unsigned int write_speed , unsigned int read_speed )
{ struct packet_command cgc ;
  struct request_sense sense ;
  int ret ;
  void *__cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;

  {
  {
  __cil_tmp7 = (void *)0;
  init_cdrom_command(& cgc, __cil_tmp7, 0, 3);
  cgc.sense = & sense;
  cgc.cmd[0] = (unsigned char)187;
  __cil_tmp8 = read_speed >> 8;
  cgc.cmd[2] = (unsigned char )__cil_tmp8;
  cgc.cmd[3] = (unsigned char )read_speed;
  __cil_tmp9 = write_speed >> 8;
  cgc.cmd[4] = (unsigned char )__cil_tmp9;
  cgc.cmd[5] = (unsigned char )write_speed;
  ret = pkt_generic_packet(pd, & cgc);
  }
  if (ret != 0) {
    {
    pkt_dump_sense(& cgc);
    }
  } else {

  }
  return (ret);
}
}
static void pkt_queue_bio(struct pktcdvd_device *pd , struct bio *bio )
{ spinlock_t *__cil_tmp3 ;
  unsigned long __cil_tmp4 ;
  unsigned long __cil_tmp5 ;
  struct bio_list *__cil_tmp6 ;
  struct bio_list *__cil_tmp7 ;
  spinlock_t *__cil_tmp8 ;
  atomic_t *__cil_tmp9 ;
  wait_queue_head_t *__cil_tmp10 ;
  void *__cil_tmp11 ;

  {
  {
  __cil_tmp3 = & pd->iosched.lock;
  spin_lock(__cil_tmp3);
  }
  {
  __cil_tmp4 = bio->bi_rw;
  __cil_tmp5 = __cil_tmp4 & 1UL;
  if (__cil_tmp5 == 0UL) {
    {
    __cil_tmp6 = & pd->iosched.read_queue;
    bio_list_add(__cil_tmp6, bio);
    }
  } else {
    {
    __cil_tmp7 = & pd->iosched.write_queue;
    bio_list_add(__cil_tmp7, bio);
    }
  }
  }
  {
  __cil_tmp8 = & pd->iosched.lock;
  spin_unlock(__cil_tmp8);
  __cil_tmp9 = & pd->iosched.attention;
  atomic_set(__cil_tmp9, 1);
  __cil_tmp10 = & pd->wqueue;
  __cil_tmp11 = (void *)0;
  __wake_up(__cil_tmp10, 3U, 1, __cil_tmp11);
  }
  return;
}
}
static void pkt_iosched_process_queue(struct pktcdvd_device *pd )
{ int tmp ;
  struct bio *bio ;
  int reads_queued ;
  int writes_queued ;
  int tmp___0 ;
  int tmp___1 ;
  int need_write_seek ;
  int tmp___2 ;
  int tmp___3 ;
  atomic_t *__cil_tmp11 ;
  atomic_t const *__cil_tmp12 ;
  atomic_t *__cil_tmp13 ;
  spinlock_t *__cil_tmp14 ;
  struct bio_list *__cil_tmp15 ;
  struct bio_list const *__cil_tmp16 ;
  struct bio_list *__cil_tmp17 ;
  struct bio_list const *__cil_tmp18 ;
  spinlock_t *__cil_tmp19 ;
  int __cil_tmp20 ;
  spinlock_t *__cil_tmp21 ;
  struct bio_list *__cil_tmp22 ;
  spinlock_t *__cil_tmp23 ;
  struct bio *__cil_tmp24 ;
  unsigned long __cil_tmp25 ;
  unsigned long __cil_tmp26 ;
  sector_t __cil_tmp27 ;
  sector_t __cil_tmp28 ;
  atomic_t *__cil_tmp29 ;
  atomic_t const *__cil_tmp30 ;
  atomic_t *__cil_tmp31 ;
  atomic_t const *__cil_tmp32 ;
  spinlock_t *__cil_tmp33 ;
  int __cil_tmp34 ;
  struct bio_list *__cil_tmp35 ;
  struct bio_list *__cil_tmp36 ;
  spinlock_t *__cil_tmp37 ;
  struct bio *__cil_tmp38 ;
  unsigned long __cil_tmp39 ;
  unsigned long __cil_tmp40 ;
  unsigned long __cil_tmp41 ;
  unsigned long __cil_tmp42 ;
  unsigned int __cil_tmp43 ;
  unsigned int __cil_tmp44 ;
  int __cil_tmp45 ;
  unsigned int __cil_tmp46 ;
  unsigned int __cil_tmp47 ;
  unsigned int __cil_tmp48 ;
  unsigned int __cil_tmp49 ;
  sector_t __cil_tmp50 ;
  sector_t __cil_tmp51 ;
  int __cil_tmp52 ;
  int __cil_tmp53 ;
  int __cil_tmp54 ;
  int __cil_tmp55 ;
  unsigned int __cil_tmp56 ;
  int __cil_tmp57 ;
  unsigned int __cil_tmp58 ;
  int __cil_tmp59 ;
  int __cil_tmp60 ;
  int __cil_tmp61 ;
  unsigned int __cil_tmp62 ;
  int __cil_tmp63 ;
  unsigned int __cil_tmp64 ;
  atomic_t *__cil_tmp65 ;

  {
  {
  __cil_tmp11 = & pd->iosched.attention;
  __cil_tmp12 = (atomic_t const *)__cil_tmp11;
  tmp = atomic_read(__cil_tmp12);
  }
  if (tmp == 0) {
    return;
  } else {

  }
  {
  __cil_tmp13 = & pd->iosched.attention;
  atomic_set(__cil_tmp13, 0);
  }
  ldv_30806:
  {
  __cil_tmp14 = & pd->iosched.lock;
  spin_lock(__cil_tmp14);
  __cil_tmp15 = & pd->iosched.read_queue;
  __cil_tmp16 = (struct bio_list const *)__cil_tmp15;
  tmp___0 = bio_list_empty(__cil_tmp16);
  reads_queued = tmp___0 == 0;
  __cil_tmp17 = & pd->iosched.write_queue;
  __cil_tmp18 = (struct bio_list const *)__cil_tmp17;
  tmp___1 = bio_list_empty(__cil_tmp18);
  writes_queued = tmp___1 == 0;
  __cil_tmp19 = & pd->iosched.lock;
  spin_unlock(__cil_tmp19);
  }
  if (reads_queued == 0) {
    if (writes_queued == 0) {
      goto ldv_30803;
    } else {

    }
  } else {

  }
  {
  __cil_tmp20 = pd->iosched.writing;
  if (__cil_tmp20 != 0) {
    {
    need_write_seek = 1;
    __cil_tmp21 = & pd->iosched.lock;
    spin_lock(__cil_tmp21);
    __cil_tmp22 = & pd->iosched.write_queue;
    bio = bio_list_peek(__cil_tmp22);
    __cil_tmp23 = & pd->iosched.lock;
    spin_unlock(__cil_tmp23);
    }
    {
    __cil_tmp24 = (struct bio *)0;
    __cil_tmp25 = (unsigned long )__cil_tmp24;
    __cil_tmp26 = (unsigned long )bio;
    if (__cil_tmp26 != __cil_tmp25) {
      {
      __cil_tmp27 = pd->iosched.last_write;
      __cil_tmp28 = bio->bi_sector;
      if (__cil_tmp28 == __cil_tmp27) {
        need_write_seek = 0;
      } else {

      }
      }
    } else {

    }
    }
    if (need_write_seek != 0) {
      if (reads_queued != 0) {
        {
        __cil_tmp29 = & pd->cdrw.pending_bios;
        __cil_tmp30 = (atomic_t const *)__cil_tmp29;
        tmp___2 = atomic_read(__cil_tmp30);
        }
        if (tmp___2 > 0) {
          goto ldv_30803;
        } else {

        }
        {
        pkt_flush_cache(pd);
        pd->iosched.writing = 0;
        }
      } else {

      }
    } else {

    }
  } else
  if (reads_queued == 0) {
    if (writes_queued != 0) {
      {
      __cil_tmp31 = & pd->cdrw.pending_bios;
      __cil_tmp32 = (atomic_t const *)__cil_tmp31;
      tmp___3 = atomic_read(__cil_tmp32);
      }
      if (tmp___3 > 0) {
        goto ldv_30803;
      } else {

      }
      pd->iosched.writing = 1;
    } else {

    }
  } else {

  }
  }
  {
  __cil_tmp33 = & pd->iosched.lock;
  spin_lock(__cil_tmp33);
  }
  {
  __cil_tmp34 = pd->iosched.writing;
  if (__cil_tmp34 != 0) {
    {
    __cil_tmp35 = & pd->iosched.write_queue;
    bio = bio_list_pop(__cil_tmp35);
    }
  } else {
    {
    __cil_tmp36 = & pd->iosched.read_queue;
    bio = bio_list_pop(__cil_tmp36);
    }
  }
  }
  {
  __cil_tmp37 = & pd->iosched.lock;
  spin_unlock(__cil_tmp37);
  }
  {
  __cil_tmp38 = (struct bio *)0;
  __cil_tmp39 = (unsigned long )__cil_tmp38;
  __cil_tmp40 = (unsigned long )bio;
  if (__cil_tmp40 == __cil_tmp39) {
    goto ldv_30805;
  } else {

  }
  }
  {
  __cil_tmp41 = bio->bi_rw;
  __cil_tmp42 = __cil_tmp41 & 1UL;
  if (__cil_tmp42 == 0UL) {
    __cil_tmp43 = bio->bi_size;
    __cil_tmp44 = __cil_tmp43 >> 10;
    __cil_tmp45 = pd->iosched.successive_reads;
    __cil_tmp46 = (unsigned int )__cil_tmp45;
    __cil_tmp47 = __cil_tmp46 + __cil_tmp44;
    pd->iosched.successive_reads = (int )__cil_tmp47;
  } else {
    pd->iosched.successive_reads = 0;
    __cil_tmp48 = bio->bi_size;
    __cil_tmp49 = __cil_tmp48 >> 9;
    __cil_tmp50 = (sector_t )__cil_tmp49;
    __cil_tmp51 = bio->bi_sector;
    pd->iosched.last_write = __cil_tmp51 + __cil_tmp50;
  }
  }
  {
  __cil_tmp52 = pd->iosched.successive_reads;
  if (__cil_tmp52 > 511) {
    {
    __cil_tmp53 = pd->write_speed;
    __cil_tmp54 = pd->read_speed;
    if (__cil_tmp54 == __cil_tmp53) {
      {
      pd->read_speed = 65535;
      __cil_tmp55 = pd->write_speed;
      __cil_tmp56 = (unsigned int )__cil_tmp55;
      __cil_tmp57 = pd->read_speed;
      __cil_tmp58 = (unsigned int )__cil_tmp57;
      pkt_set_speed(pd, __cil_tmp56, __cil_tmp58);
      }
    } else {
      {
      __cil_tmp59 = pd->write_speed;
      __cil_tmp60 = pd->read_speed;
      if (__cil_tmp60 != __cil_tmp59) {
        {
        pd->read_speed = pd->write_speed;
        __cil_tmp61 = pd->write_speed;
        __cil_tmp62 = (unsigned int )__cil_tmp61;
        __cil_tmp63 = pd->read_speed;
        __cil_tmp64 = (unsigned int )__cil_tmp63;
        pkt_set_speed(pd, __cil_tmp62, __cil_tmp64);
        }
      } else {

      }
      }
    }
    }
  } else {

  }
  }
  {
  __cil_tmp65 = & pd->cdrw.pending_bios;
  atomic_inc(__cil_tmp65);
  generic_make_request(bio);
  }
  ldv_30805: ;
  goto ldv_30806;
  ldv_30803: ;
  return;
}
}
static int pkt_set_segment_merging(struct pktcdvd_device *pd , struct request_queue *q )
{ unsigned short tmp ;
  unsigned short tmp___0 ;
  __u32 __cil_tmp5 ;
  __u32 __cil_tmp6 ;
  __u32 __cil_tmp7 ;
  __u32 __cil_tmp8 ;
  unsigned long *__cil_tmp9 ;
  unsigned long volatile *__cil_tmp10 ;
  unsigned int __cil_tmp11 ;
  __u32 __cil_tmp12 ;
  __u32 __cil_tmp13 ;
  __u32 __cil_tmp14 ;
  unsigned long *__cil_tmp15 ;
  unsigned long volatile *__cil_tmp16 ;

  {
  {
  tmp___0 = queue_max_segments(q);
  }
  {
  __cil_tmp5 = (__u32 )tmp___0;
  __cil_tmp6 = pd->settings.size;
  __cil_tmp7 = __cil_tmp6 << 9;
  __cil_tmp8 = __cil_tmp7 / 2048U;
  if (__cil_tmp8 <= __cil_tmp5) {
    {
    __cil_tmp9 = & pd->flags;
    __cil_tmp10 = (unsigned long volatile *)__cil_tmp9;
    clear_bit(4, __cil_tmp10);
    }
    return (0);
  } else {
    {
    tmp = queue_max_segments(q);
    }
    {
    __cil_tmp11 = (unsigned int )tmp;
    __cil_tmp12 = pd->settings.size;
    __cil_tmp13 = __cil_tmp12 << 9;
    __cil_tmp14 = __cil_tmp13 / 4096U;
    if (__cil_tmp14 <= __cil_tmp11) {
      {
      __cil_tmp15 = & pd->flags;
      __cil_tmp16 = (unsigned long volatile *)__cil_tmp15;
      set_bit(4U, __cil_tmp16);
      }
      return (0);
    } else {
      {
      printk("pktcdvd: cdrom max_phys_segments too small\n");
      }
      return (-5);
    }
    }
  }
  }
}
}
static void pkt_copy_bio_data(struct bio *src_bio , int seg , int offs , struct page *dst_page ,
                              int dst_offs )
{ unsigned int copy_size ;
  struct bio_vec *src_bvl ;
  void *vfrom ;
  void *tmp ;
  void *vto ;
  void *tmp___0 ;
  int len ;
  int __min1 ;
  int __min2 ;
  int tmp___1 ;
  long tmp___2 ;
  size_t __len ;
  void *__ret ;
  unsigned long __cil_tmp19 ;
  struct bio_vec *__cil_tmp20 ;
  struct page *__cil_tmp21 ;
  unsigned long __cil_tmp22 ;
  unsigned int __cil_tmp23 ;
  unsigned long __cil_tmp24 ;
  unsigned long __cil_tmp25 ;
  unsigned long __cil_tmp26 ;
  unsigned int __cil_tmp27 ;
  unsigned int __cil_tmp28 ;
  unsigned int __cil_tmp29 ;
  int __cil_tmp30 ;
  long __cil_tmp31 ;
  void const *__cil_tmp32 ;
  unsigned int __cil_tmp33 ;

  {
  copy_size = 2048U;
  goto ldv_30831;
  ldv_30830:
  {
  __cil_tmp19 = (unsigned long )seg;
  __cil_tmp20 = src_bio->bi_io_vec;
  src_bvl = __cil_tmp20 + __cil_tmp19;
  __cil_tmp21 = src_bvl->bv_page;
  tmp = __kmap_atomic(__cil_tmp21);
  __cil_tmp22 = (unsigned long )offs;
  __cil_tmp23 = src_bvl->bv_offset;
  __cil_tmp24 = (unsigned long )__cil_tmp23;
  __cil_tmp25 = __cil_tmp24 + __cil_tmp22;
  vfrom = tmp + __cil_tmp25;
  tmp___0 = lowmem_page_address(dst_page);
  __cil_tmp26 = (unsigned long )dst_offs;
  vto = tmp___0 + __cil_tmp26;
  __min1 = (int )copy_size;
  __cil_tmp27 = (unsigned int )offs;
  __cil_tmp28 = src_bvl->bv_len;
  __cil_tmp29 = __cil_tmp28 - __cil_tmp27;
  __min2 = (int )__cil_tmp29;
  }
  if (__min1 < __min2) {
    tmp___1 = __min1;
  } else {
    tmp___1 = __min2;
  }
  {
  len = tmp___1;
  __cil_tmp30 = len < 0;
  __cil_tmp31 = (long )__cil_tmp30;
  tmp___2 = __builtin_expect(__cil_tmp31, 0L);
  }
  if (tmp___2 != 0L) {
    __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/block/pktcdvd.ko--X--unsafelinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/block/pktcdvd.c.p"),
                         "i" (1003), "i" (12UL));
    ldv_30826: ;
    goto ldv_30826;
  } else {

  }
  {
  __len = (size_t )len;
  __cil_tmp32 = (void const *)vfrom;
  __ret = __builtin_memcpy(vto, __cil_tmp32, __len);
  __kunmap_atomic(vfrom);
  seg = seg + 1;
  offs = 0;
  dst_offs = dst_offs + len;
  __cil_tmp33 = (unsigned int )len;
  copy_size = copy_size - __cil_tmp33;
  }
  ldv_30831: ;
  if (copy_size != 0U) {
    goto ldv_30830;
  } else {
    goto ldv_30832;
  }
  ldv_30832: ;
  return;
}
}
static void pkt_make_local_copy(struct packet_data *pkt , struct bio_vec *bvec )
{ int f ;
  int p ;
  int offs ;
  void *vfrom ;
  void *tmp ;
  void *vto ;
  void *tmp___0 ;
  size_t __len ;
  void *__ret ;
  long tmp___1 ;
  struct page *__cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  struct bio_vec *__cil_tmp16 ;
  struct page *__cil_tmp17 ;
  unsigned long __cil_tmp18 ;
  unsigned long __cil_tmp19 ;
  struct bio_vec *__cil_tmp20 ;
  struct page *__cil_tmp21 ;
  unsigned long __cil_tmp22 ;
  struct bio_vec *__cil_tmp23 ;
  unsigned int __cil_tmp24 ;
  unsigned long __cil_tmp25 ;
  struct page *__cil_tmp26 ;
  unsigned long __cil_tmp27 ;
  void const *__cil_tmp28 ;
  void const *__cil_tmp29 ;
  unsigned long __cil_tmp30 ;
  struct bio_vec *__cil_tmp31 ;
  unsigned long __cil_tmp32 ;
  struct bio_vec *__cil_tmp33 ;
  unsigned int __cil_tmp34 ;
  unsigned long __cil_tmp35 ;
  struct bio_vec *__cil_tmp36 ;
  unsigned int __cil_tmp37 ;
  int __cil_tmp38 ;
  long __cil_tmp39 ;
  unsigned int __cil_tmp40 ;
  int __cil_tmp41 ;

  {
  p = 0;
  offs = 0;
  f = 0;
  goto ldv_30847;
  ldv_30846: ;
  {
  __cil_tmp13 = pkt->pages[p];
  __cil_tmp14 = (unsigned long )__cil_tmp13;
  __cil_tmp15 = (unsigned long )f;
  __cil_tmp16 = bvec + __cil_tmp15;
  __cil_tmp17 = __cil_tmp16->bv_page;
  __cil_tmp18 = (unsigned long )__cil_tmp17;
  if (__cil_tmp18 != __cil_tmp14) {
    {
    __cil_tmp19 = (unsigned long )f;
    __cil_tmp20 = bvec + __cil_tmp19;
    __cil_tmp21 = __cil_tmp20->bv_page;
    tmp = __kmap_atomic(__cil_tmp21);
    __cil_tmp22 = (unsigned long )f;
    __cil_tmp23 = bvec + __cil_tmp22;
    __cil_tmp24 = __cil_tmp23->bv_offset;
    __cil_tmp25 = (unsigned long )__cil_tmp24;
    vfrom = tmp + __cil_tmp25;
    __cil_tmp26 = pkt->pages[p];
    tmp___0 = lowmem_page_address(__cil_tmp26);
    __cil_tmp27 = (unsigned long )offs;
    vto = tmp___0 + __cil_tmp27;
    __len = 2048UL;
    }
    if (__len > 63UL) {
      {
      __cil_tmp28 = (void const *)vfrom;
      __ret = __memcpy(vto, __cil_tmp28, __len);
      }
    } else {
      {
      __cil_tmp29 = (void const *)vfrom;
      __ret = __builtin_memcpy(vto, __cil_tmp29, __len);
      }
    }
    {
    __kunmap_atomic(vfrom);
    __cil_tmp30 = (unsigned long )f;
    __cil_tmp31 = bvec + __cil_tmp30;
    __cil_tmp31->bv_page = pkt->pages[p];
    __cil_tmp32 = (unsigned long )f;
    __cil_tmp33 = bvec + __cil_tmp32;
    __cil_tmp33->bv_offset = (unsigned int )offs;
    }
  } else {
    {
    __cil_tmp34 = (unsigned int )offs;
    __cil_tmp35 = (unsigned long )f;
    __cil_tmp36 = bvec + __cil_tmp35;
    __cil_tmp37 = __cil_tmp36->bv_offset;
    __cil_tmp38 = __cil_tmp37 != __cil_tmp34;
    __cil_tmp39 = (long )__cil_tmp38;
    tmp___1 = __builtin_expect(__cil_tmp39, 0L);
    }
    if (tmp___1 != 0L) {
      __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/block/pktcdvd.ko--X--unsafelinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/block/pktcdvd.c.p"),
                           "i" (1037), "i" (12UL));
      ldv_30845: ;
      goto ldv_30845;
    } else {

    }
  }
  }
  offs = offs + 2048;
  {
  __cil_tmp40 = (unsigned int )offs;
  if (__cil_tmp40 > 4095U) {
    offs = 0;
    p = p + 1;
  } else {

  }
  }
  f = f + 1;
  ldv_30847: ;
  {
  __cil_tmp41 = pkt->frames;
  if (__cil_tmp41 > f) {
    goto ldv_30846;
  } else {
    goto ldv_30848;
  }
  }
  ldv_30848: ;
  return;
}
}
static void pkt_end_io_read(struct bio *bio , int err )
{ struct packet_data *pkt ;
  struct pktcdvd_device *pd ;
  long tmp ;
  int tmp___0 ;
  void *__cil_tmp7 ;
  struct pktcdvd_device *__cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  int __cil_tmp11 ;
  long __cil_tmp12 ;
  atomic_t *__cil_tmp13 ;
  atomic_t *__cil_tmp14 ;
  atomic_t *__cil_tmp15 ;
  wait_queue_head_t *__cil_tmp16 ;
  void *__cil_tmp17 ;

  {
  {
  __cil_tmp7 = bio->bi_private;
  pkt = (struct packet_data *)__cil_tmp7;
  pd = pkt->pd;
  __cil_tmp8 = (struct pktcdvd_device *)0;
  __cil_tmp9 = (unsigned long )__cil_tmp8;
  __cil_tmp10 = (unsigned long )pd;
  __cil_tmp11 = __cil_tmp10 == __cil_tmp9;
  __cil_tmp12 = (long )__cil_tmp11;
  tmp = __builtin_expect(__cil_tmp12, 0L);
  }
  if (tmp != 0L) {
    __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/block/pktcdvd.ko--X--unsafelinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/block/pktcdvd.c.p"),
                         "i" (1051), "i" (12UL));
    ldv_30855: ;
    goto ldv_30855;
  } else {

  }
  if (err != 0) {
    {
    __cil_tmp13 = & pkt->io_errors;
    atomic_inc(__cil_tmp13);
    }
  } else {

  }
  {
  __cil_tmp14 = & pkt->io_wait;
  tmp___0 = atomic_dec_and_test(__cil_tmp14);
  }
  if (tmp___0 != 0) {
    {
    __cil_tmp15 = & pkt->run_sm;
    atomic_inc(__cil_tmp15);
    __cil_tmp16 = & pd->wqueue;
    __cil_tmp17 = (void *)0;
    __wake_up(__cil_tmp16, 3U, 1, __cil_tmp17);
    }
  } else {

  }
  {
  pkt_bio_finished(pd);
  }
  return;
}
}
static void pkt_end_io_packet_write(struct bio *bio , int err )
{ struct packet_data *pkt ;
  struct pktcdvd_device *pd ;
  long tmp ;
  void *__cil_tmp6 ;
  struct pktcdvd_device *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  int __cil_tmp10 ;
  long __cil_tmp11 ;
  unsigned long __cil_tmp12 ;
  atomic_t *__cil_tmp13 ;
  atomic_t *__cil_tmp14 ;
  wait_queue_head_t *__cil_tmp15 ;
  void *__cil_tmp16 ;

  {
  {
  __cil_tmp6 = bio->bi_private;
  pkt = (struct packet_data *)__cil_tmp6;
  pd = pkt->pd;
  __cil_tmp7 = (struct pktcdvd_device *)0;
  __cil_tmp8 = (unsigned long )__cil_tmp7;
  __cil_tmp9 = (unsigned long )pd;
  __cil_tmp10 = __cil_tmp9 == __cil_tmp8;
  __cil_tmp11 = (long )__cil_tmp10;
  tmp = __builtin_expect(__cil_tmp11, 0L);
  }
  if (tmp != 0L) {
    __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/block/pktcdvd.ko--X--unsafelinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/block/pktcdvd.c.p"),
                         "i" (1069), "i" (12UL));
    ldv_30862: ;
    goto ldv_30862;
  } else {

  }
  {
  __cil_tmp12 = pd->stats.pkt_ended;
  pd->stats.pkt_ended = __cil_tmp12 + 1UL;
  pkt_bio_finished(pd);
  __cil_tmp13 = & pkt->io_wait;
  atomic_dec(__cil_tmp13);
  __cil_tmp14 = & pkt->run_sm;
  atomic_inc(__cil_tmp14);
  __cil_tmp15 = & pd->wqueue;
  __cil_tmp16 = (void *)0;
  __wake_up(__cil_tmp15, 3U, 1, __cil_tmp16);
  }
  return;
}
}
static void pkt_gather_data(struct pktcdvd_device *pd , struct packet_data *pkt )
{ int frames_read ;
  struct bio *bio ;
  int f ;
  char written[128U] ;
  int tmp ;
  long tmp___0 ;
  int first_frame ;
  int num_frames ;
  long tmp___1 ;
  long tmp___2 ;
  struct bio_vec *vec ;
  int p ;
  int offset ;
  int tmp___3 ;
  struct bio_list *__cil_tmp17 ;
  struct bio_list const *__cil_tmp18 ;
  int __cil_tmp19 ;
  long __cil_tmp20 ;
  atomic_t *__cil_tmp21 ;
  atomic_t *__cil_tmp22 ;
  void *__cil_tmp23 ;
  spinlock_t *__cil_tmp24 ;
  sector_t __cil_tmp25 ;
  sector_t __cil_tmp26 ;
  sector_t __cil_tmp27 ;
  sector_t __cil_tmp28 ;
  unsigned int __cil_tmp29 ;
  unsigned int __cil_tmp30 ;
  int __cil_tmp31 ;
  unsigned long __cil_tmp32 ;
  unsigned long __cil_tmp33 ;
  int __cil_tmp34 ;
  long __cil_tmp35 ;
  int __cil_tmp36 ;
  int __cil_tmp37 ;
  int __cil_tmp38 ;
  long __cil_tmp39 ;
  int __cil_tmp40 ;
  struct bio *__cil_tmp41 ;
  unsigned long __cil_tmp42 ;
  unsigned long __cil_tmp43 ;
  spinlock_t *__cil_tmp44 ;
  int __cil_tmp45 ;
  signed char __cil_tmp46 ;
  int __cil_tmp47 ;
  int __cil_tmp48 ;
  sector_t __cil_tmp49 ;
  sector_t __cil_tmp50 ;
  int __cil_tmp51 ;
  unsigned long __cil_tmp52 ;
  unsigned long __cil_tmp53 ;
  int __cil_tmp54 ;
  struct page *__cil_tmp55 ;
  unsigned int __cil_tmp56 ;
  atomic_t *__cil_tmp57 ;
  int __cil_tmp58 ;
  unsigned long __cil_tmp59 ;
  int __cil_tmp60 ;
  unsigned long __cil_tmp61 ;
  unsigned long __cil_tmp62 ;

  {
  {
  frames_read = 0;
  __cil_tmp17 = & pkt->orig_bios;
  __cil_tmp18 = (struct bio_list const *)__cil_tmp17;
  tmp = bio_list_empty(__cil_tmp18);
  __cil_tmp19 = tmp != 0;
  __cil_tmp20 = (long )__cil_tmp19;
  tmp___0 = __builtin_expect(__cil_tmp20, 0L);
  }
  if (tmp___0 != 0L) {
    __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/block/pktcdvd.ko--X--unsafelinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/block/pktcdvd.c.p"),
                         "i" (1091), "i" (12UL));
    ldv_30871: ;
    goto ldv_30871;
  } else {

  }
  {
  __cil_tmp21 = & pkt->io_wait;
  atomic_set(__cil_tmp21, 0);
  __cil_tmp22 = & pkt->io_errors;
  atomic_set(__cil_tmp22, 0);
  __cil_tmp23 = (void *)(& written);
  memset(__cil_tmp23, 0, 128UL);
  __cil_tmp24 = & pkt->lock;
  spin_lock(__cil_tmp24);
  bio = pkt->orig_bios.head;
  }
  goto ldv_30880;
  ldv_30879:
  {
  __cil_tmp25 = pkt->sector;
  __cil_tmp26 = bio->bi_sector;
  __cil_tmp27 = __cil_tmp26 - __cil_tmp25;
  __cil_tmp28 = __cil_tmp27 / 4UL;
  first_frame = (int )__cil_tmp28;
  __cil_tmp29 = bio->bi_size;
  __cil_tmp30 = __cil_tmp29 / 2048U;
  num_frames = (int )__cil_tmp30;
  __cil_tmp31 = num_frames * 4;
  __cil_tmp32 = (unsigned long )__cil_tmp31;
  __cil_tmp33 = pd->stats.secs_w;
  pd->stats.secs_w = __cil_tmp33 + __cil_tmp32;
  __cil_tmp34 = first_frame < 0;
  __cil_tmp35 = (long )__cil_tmp34;
  tmp___1 = __builtin_expect(__cil_tmp35, 0L);
  }
  if (tmp___1 != 0L) {
    __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/block/pktcdvd.ko--X--unsafelinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/block/pktcdvd.c.p"),
                         "i" (1105), "i" (12UL));
    ldv_30874: ;
    goto ldv_30874;
  } else {

  }
  {
  __cil_tmp36 = pkt->frames;
  __cil_tmp37 = first_frame + num_frames;
  __cil_tmp38 = __cil_tmp37 > __cil_tmp36;
  __cil_tmp39 = (long )__cil_tmp38;
  tmp___2 = __builtin_expect(__cil_tmp39, 0L);
  }
  if (tmp___2 != 0L) {
    __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/block/pktcdvd.ko--X--unsafelinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/block/pktcdvd.c.p"),
                         "i" (1106), "i" (12UL));
    ldv_30875: ;
    goto ldv_30875;
  } else {

  }
  f = first_frame;
  goto ldv_30877;
  ldv_30876:
  written[f] = (char)1;
  f = f + 1;
  ldv_30877: ;
  {
  __cil_tmp40 = first_frame + num_frames;
  if (__cil_tmp40 > f) {
    goto ldv_30876;
  } else {
    goto ldv_30878;
  }
  }
  ldv_30878:
  bio = bio->bi_next;
  ldv_30880: ;
  {
  __cil_tmp41 = (struct bio *)0;
  __cil_tmp42 = (unsigned long )__cil_tmp41;
  __cil_tmp43 = (unsigned long )bio;
  if (__cil_tmp43 != __cil_tmp42) {
    goto ldv_30879;
  } else {
    goto ldv_30881;
  }
  }
  ldv_30881:
  {
  __cil_tmp44 = & pkt->lock;
  spin_unlock(__cil_tmp44);
  }
  {
  __cil_tmp45 = pkt->cache_valid;
  if (__cil_tmp45 != 0) {
    goto out_account;
  } else {

  }
  }
  f = 0;
  goto ldv_30889;
  ldv_30888: ;
  {
  __cil_tmp46 = (signed char )written[f];
  __cil_tmp47 = (int )__cil_tmp46;
  if (__cil_tmp47 != 0) {
    goto ldv_30886;
  } else {

  }
  }
  {
  bio = pkt->r_bios[f];
  vec = bio->bi_io_vec;
  bio_init(bio);
  bio->bi_max_vecs = 1U;
  __cil_tmp48 = f * 4;
  __cil_tmp49 = (sector_t )__cil_tmp48;
  __cil_tmp50 = pkt->sector;
  bio->bi_sector = __cil_tmp50 + __cil_tmp49;
  bio->bi_bdev = pd->bdev;
  bio->bi_end_io = & pkt_end_io_read;
  bio->bi_private = (void *)pkt;
  bio->bi_io_vec = vec;
  bio->bi_destructor = & pkt_bio_destructor;
  __cil_tmp51 = f * 2048;
  __cil_tmp52 = (unsigned long )__cil_tmp51;
  __cil_tmp53 = __cil_tmp52 / 4096UL;
  p = (int )__cil_tmp53;
  __cil_tmp54 = f * 2048;
  offset = __cil_tmp54 & 4095;
  __cil_tmp55 = pkt->pages[p];
  __cil_tmp56 = (unsigned int )offset;
  tmp___3 = bio_add_page(bio, __cil_tmp55, 2048U, __cil_tmp56);
  }
  if (tmp___3 == 0) {
    __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/block/pktcdvd.ko--X--unsafelinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/block/pktcdvd.c.p"),
                         "i" (1143), "i" (12UL));
    ldv_30887: ;
    goto ldv_30887;
  } else {

  }
  {
  __cil_tmp57 = & pkt->io_wait;
  atomic_inc(__cil_tmp57);
  bio->bi_rw = 0UL;
  pkt_queue_bio(pd, bio);
  frames_read = frames_read + 1;
  }
  ldv_30886:
  f = f + 1;
  ldv_30889: ;
  {
  __cil_tmp58 = pkt->frames;
  if (__cil_tmp58 > f) {
    goto ldv_30888;
  } else {
    goto ldv_30890;
  }
  }
  ldv_30890: ;
  out_account:
  __cil_tmp59 = pd->stats.pkt_started;
  pd->stats.pkt_started = __cil_tmp59 + 1UL;
  __cil_tmp60 = frames_read * 4;
  __cil_tmp61 = (unsigned long )__cil_tmp60;
  __cil_tmp62 = pd->stats.secs_rg;
  pd->stats.secs_rg = __cil_tmp62 + __cil_tmp61;
  return;
}
}
static struct packet_data *pkt_get_packet_data(struct pktcdvd_device *pd , int zone )
{ struct packet_data *pkt ;
  struct list_head const *__mptr ;
  struct list_head const *__mptr___0 ;
  struct list_head *__cil_tmp6 ;
  sector_t __cil_tmp7 ;
  sector_t __cil_tmp8 ;
  struct list_head *__cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  struct list_head *__cil_tmp11 ;
  unsigned long __cil_tmp12 ;
  struct list_head *__cil_tmp13 ;
  sector_t __cil_tmp14 ;
  sector_t __cil_tmp15 ;
  struct list_head *__cil_tmp16 ;
  struct list_head *__cil_tmp17 ;
  unsigned long __cil_tmp18 ;
  struct list_head *__cil_tmp19 ;
  unsigned long __cil_tmp20 ;

  {
  __cil_tmp6 = pd->cdrw.pkt_free_list.next;
  __mptr = (struct list_head const *)__cil_tmp6;
  pkt = (struct packet_data *)__mptr;
  goto ldv_30901;
  ldv_30900: ;
  {
  __cil_tmp7 = (sector_t )zone;
  __cil_tmp8 = pkt->sector;
  if (__cil_tmp8 == __cil_tmp7) {
    goto _L;
  } else {
    {
    __cil_tmp9 = & pd->cdrw.pkt_free_list;
    __cil_tmp10 = (unsigned long )__cil_tmp9;
    __cil_tmp11 = pkt->list.next;
    __cil_tmp12 = (unsigned long )__cil_tmp11;
    if (__cil_tmp12 == __cil_tmp10) {
      _L:
      {
      __cil_tmp13 = & pkt->list;
      list_del_init(__cil_tmp13);
      }
      {
      __cil_tmp14 = (sector_t )zone;
      __cil_tmp15 = pkt->sector;
      if (__cil_tmp15 != __cil_tmp14) {
        pkt->cache_valid = 0;
      } else {

      }
      }
      return (pkt);
    } else {

    }
    }
  }
  }
  __cil_tmp16 = pkt->list.next;
  __mptr___0 = (struct list_head const *)__cil_tmp16;
  pkt = (struct packet_data *)__mptr___0;
  ldv_30901: ;
  {
  __cil_tmp17 = & pd->cdrw.pkt_free_list;
  __cil_tmp18 = (unsigned long )__cil_tmp17;
  __cil_tmp19 = & pkt->list;
  __cil_tmp20 = (unsigned long )__cil_tmp19;
  if (__cil_tmp20 != __cil_tmp18) {
    goto ldv_30900;
  } else {
    goto ldv_30902;
  }
  }
  ldv_30902:
  __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/block/pktcdvd.ko--X--unsafelinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/block/pktcdvd.c.p"),
                       "i" (1174), "i" (12UL));
  ldv_30903: ;
  goto ldv_30903;
  return ((struct packet_data *)0);
}
}
static void pkt_put_packet_data(struct pktcdvd_device *pd , struct packet_data *pkt )
{ int __cil_tmp3 ;
  struct list_head *__cil_tmp4 ;
  struct list_head *__cil_tmp5 ;
  struct list_head *__cil_tmp6 ;
  struct list_head *__cil_tmp7 ;

  {
  {
  __cil_tmp3 = pkt->cache_valid;
  if (__cil_tmp3 != 0) {
    {
    __cil_tmp4 = & pkt->list;
    __cil_tmp5 = & pd->cdrw.pkt_free_list;
    list_add(__cil_tmp4, __cil_tmp5);
    }
  } else {
    {
    __cil_tmp6 = & pkt->list;
    __cil_tmp7 = & pd->cdrw.pkt_free_list;
    list_add_tail(__cil_tmp6, __cil_tmp7);
    }
  }
  }
  return;
}
}
static int pkt_start_recovery(struct packet_data *pkt )
{

  {
  return (0);
}
}
__inline static void pkt_set_state(struct packet_data *pkt , enum packet_data_state state )
{

  {
  pkt->state = state;
  return;
}
}
static int pkt_handle_queue(struct pktcdvd_device *pd )
{ struct packet_data *pkt ;
  struct packet_data *p ;
  struct bio *bio ;
  sector_t zone ;
  struct pkt_rb_node *node ;
  struct pkt_rb_node *first_node ;
  struct rb_node *n ;
  int wakeup ;
  int tmp ;
  struct rb_node const *__mptr ;
  struct list_head const *__mptr___0 ;
  struct list_head const *__mptr___1 ;
  struct rb_node const *__mptr___2 ;
  long tmp___0 ;
  int tmp___1 ;
  int _max1 ;
  int _max2 ;
  int tmp___2 ;
  atomic_t *__cil_tmp20 ;
  struct list_head *__cil_tmp21 ;
  struct list_head const *__cil_tmp22 ;
  spinlock_t *__cil_tmp23 ;
  sector_t __cil_tmp24 ;
  struct pkt_rb_node *__cil_tmp25 ;
  unsigned long __cil_tmp26 ;
  unsigned long __cil_tmp27 ;
  struct rb_root *__cil_tmp28 ;
  struct rb_root const *__cil_tmp29 ;
  struct rb_node *__cil_tmp30 ;
  unsigned long __cil_tmp31 ;
  unsigned long __cil_tmp32 ;
  __u32 __cil_tmp33 ;
  __u32 __cil_tmp34 ;
  unsigned long __cil_tmp35 ;
  unsigned long __cil_tmp36 ;
  sector_t __cil_tmp37 ;
  sector_t __cil_tmp38 ;
  struct list_head *__cil_tmp39 ;
  sector_t __cil_tmp40 ;
  struct list_head *__cil_tmp41 ;
  struct list_head *__cil_tmp42 ;
  unsigned long __cil_tmp43 ;
  struct list_head *__cil_tmp44 ;
  unsigned long __cil_tmp45 ;
  struct pkt_rb_node *__cil_tmp46 ;
  unsigned long __cil_tmp47 ;
  unsigned long __cil_tmp48 ;
  struct rb_root *__cil_tmp49 ;
  struct rb_root const *__cil_tmp50 ;
  struct rb_node *__cil_tmp51 ;
  unsigned long __cil_tmp52 ;
  unsigned long __cil_tmp53 ;
  unsigned long __cil_tmp54 ;
  unsigned long __cil_tmp55 ;
  struct pkt_rb_node *__cil_tmp56 ;
  unsigned long __cil_tmp57 ;
  unsigned long __cil_tmp58 ;
  spinlock_t *__cil_tmp59 ;
  struct bio *__cil_tmp60 ;
  unsigned long __cil_tmp61 ;
  unsigned long __cil_tmp62 ;
  int __cil_tmp63 ;
  __u32 __cil_tmp64 ;
  sector_t __cil_tmp65 ;
  __u32 __cil_tmp66 ;
  __u32 __cil_tmp67 ;
  int __cil_tmp68 ;
  __u32 __cil_tmp69 ;
  int __cil_tmp70 ;
  long __cil_tmp71 ;
  spinlock_t *__cil_tmp72 ;
  __u32 __cil_tmp73 ;
  __u32 __cil_tmp74 ;
  unsigned long __cil_tmp75 ;
  unsigned long __cil_tmp76 ;
  sector_t __cil_tmp77 ;
  sector_t __cil_tmp78 ;
  unsigned long __cil_tmp79 ;
  spinlock_t *__cil_tmp80 ;
  struct bio_list *__cil_tmp81 ;
  unsigned int __cil_tmp82 ;
  unsigned int __cil_tmp83 ;
  int __cil_tmp84 ;
  unsigned int __cil_tmp85 ;
  unsigned int __cil_tmp86 ;
  spinlock_t *__cil_tmp87 ;
  struct pkt_rb_node *__cil_tmp88 ;
  unsigned long __cil_tmp89 ;
  unsigned long __cil_tmp90 ;
  int __cil_tmp91 ;
  int __cil_tmp92 ;
  int __cil_tmp93 ;
  spinlock_t *__cil_tmp94 ;
  struct gendisk *__cil_tmp95 ;
  struct request_queue *__cil_tmp96 ;
  struct backing_dev_info *__cil_tmp97 ;
  enum packet_data_state __cil_tmp98 ;
  atomic_t *__cil_tmp99 ;
  spinlock_t *__cil_tmp100 ;
  struct list_head *__cil_tmp101 ;
  struct list_head *__cil_tmp102 ;
  spinlock_t *__cil_tmp103 ;

  {
  {
  bio = (struct bio *)0;
  zone = 0UL;
  __cil_tmp20 = & pd->scan_queue;
  atomic_set(__cil_tmp20, 0);
  __cil_tmp21 = & pd->cdrw.pkt_free_list;
  __cil_tmp22 = (struct list_head const *)__cil_tmp21;
  tmp = list_empty(__cil_tmp22);
  }
  if (tmp != 0) {
    return (0);
  } else {

  }
  {
  __cil_tmp23 = & pd->lock;
  spin_lock(__cil_tmp23);
  __cil_tmp24 = pd->current_sector;
  first_node = pkt_rbtree_find(pd, __cil_tmp24);
  }
  {
  __cil_tmp25 = (struct pkt_rb_node *)0;
  __cil_tmp26 = (unsigned long )__cil_tmp25;
  __cil_tmp27 = (unsigned long )first_node;
  if (__cil_tmp27 == __cil_tmp26) {
    {
    __cil_tmp28 = & pd->bio_queue;
    __cil_tmp29 = (struct rb_root const *)__cil_tmp28;
    n = rb_first(__cil_tmp29);
    }
    {
    __cil_tmp30 = (struct rb_node *)0;
    __cil_tmp31 = (unsigned long )__cil_tmp30;
    __cil_tmp32 = (unsigned long )n;
    if (__cil_tmp32 != __cil_tmp31) {
      __mptr = (struct rb_node const *)n;
      first_node = (struct pkt_rb_node *)__mptr;
    } else {

    }
    }
  } else {

  }
  }
  node = first_node;
  goto ldv_30940;
  ldv_30939:
  bio = node->bio;
  __cil_tmp33 = pd->settings.size;
  __cil_tmp34 = - __cil_tmp33;
  __cil_tmp35 = (unsigned long )__cil_tmp34;
  __cil_tmp36 = pd->offset;
  __cil_tmp37 = bio->bi_sector;
  __cil_tmp38 = __cil_tmp37 + __cil_tmp36;
  zone = __cil_tmp38 & __cil_tmp35;
  __cil_tmp39 = pd->cdrw.pkt_active_list.next;
  __mptr___0 = (struct list_head const *)__cil_tmp39;
  p = (struct packet_data *)__mptr___0;
  goto ldv_30934;
  ldv_30933: ;
  {
  __cil_tmp40 = p->sector;
  if (__cil_tmp40 == zone) {
    bio = (struct bio *)0;
    goto try_next_bio;
  } else {

  }
  }
  __cil_tmp41 = p->list.next;
  __mptr___1 = (struct list_head const *)__cil_tmp41;
  p = (struct packet_data *)__mptr___1;
  ldv_30934: ;
  {
  __cil_tmp42 = & pd->cdrw.pkt_active_list;
  __cil_tmp43 = (unsigned long )__cil_tmp42;
  __cil_tmp44 = & p->list;
  __cil_tmp45 = (unsigned long )__cil_tmp44;
  if (__cil_tmp45 != __cil_tmp43) {
    goto ldv_30933;
  } else {
    goto ldv_30935;
  }
  }
  ldv_30935: ;
  goto ldv_30936;
  try_next_bio:
  {
  node = pkt_rbtree_next(node);
  }
  {
  __cil_tmp46 = (struct pkt_rb_node *)0;
  __cil_tmp47 = (unsigned long )__cil_tmp46;
  __cil_tmp48 = (unsigned long )node;
  if (__cil_tmp48 == __cil_tmp47) {
    {
    __cil_tmp49 = & pd->bio_queue;
    __cil_tmp50 = (struct rb_root const *)__cil_tmp49;
    n = rb_first(__cil_tmp50);
    }
    {
    __cil_tmp51 = (struct rb_node *)0;
    __cil_tmp52 = (unsigned long )__cil_tmp51;
    __cil_tmp53 = (unsigned long )n;
    if (__cil_tmp53 != __cil_tmp52) {
      __mptr___2 = (struct rb_node const *)n;
      node = (struct pkt_rb_node *)__mptr___2;
    } else {

    }
    }
  } else {

  }
  }
  {
  __cil_tmp54 = (unsigned long )first_node;
  __cil_tmp55 = (unsigned long )node;
  if (__cil_tmp55 == __cil_tmp54) {
    node = (struct pkt_rb_node *)0;
  } else {

  }
  }
  ldv_30940: ;
  {
  __cil_tmp56 = (struct pkt_rb_node *)0;
  __cil_tmp57 = (unsigned long )__cil_tmp56;
  __cil_tmp58 = (unsigned long )node;
  if (__cil_tmp58 != __cil_tmp57) {
    goto ldv_30939;
  } else {
    goto ldv_30936;
  }
  }
  ldv_30936:
  {
  __cil_tmp59 = & pd->lock;
  spin_unlock(__cil_tmp59);
  }
  {
  __cil_tmp60 = (struct bio *)0;
  __cil_tmp61 = (unsigned long )__cil_tmp60;
  __cil_tmp62 = (unsigned long )bio;
  if (__cil_tmp62 == __cil_tmp61) {
    return (0);
  } else {

  }
  }
  {
  __cil_tmp63 = (int )zone;
  pkt = pkt_get_packet_data(pd, __cil_tmp63);
  __cil_tmp64 = pd->settings.size;
  __cil_tmp65 = (sector_t )__cil_tmp64;
  pd->current_sector = __cil_tmp65 + zone;
  pkt->sector = zone;
  __cil_tmp66 = pd->settings.size;
  __cil_tmp67 = __cil_tmp66 >> 2;
  __cil_tmp68 = pkt->frames;
  __cil_tmp69 = (__u32 )__cil_tmp68;
  __cil_tmp70 = __cil_tmp69 != __cil_tmp67;
  __cil_tmp71 = (long )__cil_tmp70;
  tmp___0 = __builtin_expect(__cil_tmp71, 0L);
  }
  if (tmp___0 != 0L) {
    __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/block/pktcdvd.ko--X--unsafelinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/block/pktcdvd.c.p"),
                         "i" (1323), "i" (12UL));
    ldv_30941: ;
    goto ldv_30941;
  } else {

  }
  {
  pkt->write_size = 0;
  __cil_tmp72 = & pd->lock;
  spin_lock(__cil_tmp72);
  }
  goto ldv_30944;
  ldv_30943:
  bio = node->bio;
  {
  __cil_tmp73 = pd->settings.size;
  __cil_tmp74 = - __cil_tmp73;
  __cil_tmp75 = (unsigned long )__cil_tmp74;
  __cil_tmp76 = pd->offset;
  __cil_tmp77 = bio->bi_sector;
  __cil_tmp78 = __cil_tmp77 + __cil_tmp76;
  __cil_tmp79 = __cil_tmp78 & __cil_tmp75;
  if (__cil_tmp79 != zone) {
    goto ldv_30942;
  } else {

  }
  }
  {
  pkt_rbtree_erase(pd, node);
  __cil_tmp80 = & pkt->lock;
  spin_lock(__cil_tmp80);
  __cil_tmp81 = & pkt->orig_bios;
  bio_list_add(__cil_tmp81, bio);
  __cil_tmp82 = bio->bi_size;
  __cil_tmp83 = __cil_tmp82 / 2048U;
  __cil_tmp84 = pkt->write_size;
  __cil_tmp85 = (unsigned int )__cil_tmp84;
  __cil_tmp86 = __cil_tmp85 + __cil_tmp83;
  pkt->write_size = (int )__cil_tmp86;
  __cil_tmp87 = & pkt->lock;
  spin_unlock(__cil_tmp87);
  }
  ldv_30944:
  {
  node = pkt_rbtree_find(pd, zone);
  }
  {
  __cil_tmp88 = (struct pkt_rb_node *)0;
  __cil_tmp89 = (unsigned long )__cil_tmp88;
  __cil_tmp90 = (unsigned long )node;
  if (__cil_tmp90 != __cil_tmp89) {
    goto ldv_30943;
  } else {
    goto ldv_30942;
  }
  }
  ldv_30942: ;
  {
  __cil_tmp91 = pd->write_congestion_on;
  if (__cil_tmp91 > 0) {
    {
    __cil_tmp92 = pd->write_congestion_off;
    __cil_tmp93 = pd->bio_queue_size;
    if (__cil_tmp93 <= __cil_tmp92) {
      tmp___1 = 1;
    } else {
      tmp___1 = 0;
    }
    }
  } else {
    tmp___1 = 0;
  }
  }
  {
  wakeup = tmp___1;
  __cil_tmp94 = & pd->lock;
  spin_unlock(__cil_tmp94);
  }
  if (wakeup != 0) {
    {
    __cil_tmp95 = pd->disk;
    __cil_tmp96 = __cil_tmp95->queue;
    __cil_tmp97 = & __cil_tmp96->backing_dev_info;
    clear_bdi_congested(__cil_tmp97, 0);
    }
  } else {

  }
  _max1 = 1;
  _max2 = 1;
  if (_max1 > _max2) {
    tmp___2 = _max1;
  } else {
    tmp___2 = _max2;
  }
  {
  pkt->sleep_time = (long )tmp___2;
  __cil_tmp98 = (enum packet_data_state )1;
  pkt_set_state(pkt, __cil_tmp98);
  __cil_tmp99 = & pkt->run_sm;
  atomic_set(__cil_tmp99, 1);
  __cil_tmp100 = & pd->cdrw.active_list_lock;
  spin_lock(__cil_tmp100);
  __cil_tmp101 = & pkt->list;
  __cil_tmp102 = & pd->cdrw.pkt_active_list;
  list_add(__cil_tmp101, __cil_tmp102);
  __cil_tmp103 = & pd->cdrw.active_list_lock;
  spin_unlock(__cil_tmp103);
  }
  return (1);
}
}
static void pkt_start_write(struct pktcdvd_device *pd , struct packet_data *pkt )
{ struct bio *bio ;
  int f ;
  int frames_write ;
  struct bio_vec *bvec ;
  int segment ;
  int src_offs ;
  int first_frame ;
  int num_frames ;
  long tmp ;
  long tmp___0 ;
  struct bio_vec *src_bvl ;
  long tmp___1 ;
  long tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  struct bio *__cil_tmp18 ;
  unsigned long __cil_tmp19 ;
  struct bio_vec *__cil_tmp20 ;
  unsigned long __cil_tmp21 ;
  struct bio_vec *__cil_tmp22 ;
  int __cil_tmp23 ;
  unsigned int __cil_tmp24 ;
  int __cil_tmp25 ;
  spinlock_t *__cil_tmp26 ;
  unsigned short __cil_tmp27 ;
  sector_t __cil_tmp28 ;
  sector_t __cil_tmp29 ;
  sector_t __cil_tmp30 ;
  sector_t __cil_tmp31 ;
  unsigned int __cil_tmp32 ;
  unsigned int __cil_tmp33 ;
  int __cil_tmp34 ;
  long __cil_tmp35 ;
  int __cil_tmp36 ;
  int __cil_tmp37 ;
  int __cil_tmp38 ;
  long __cil_tmp39 ;
  unsigned long __cil_tmp40 ;
  struct bio_vec *__cil_tmp41 ;
  unsigned int __cil_tmp42 ;
  unsigned int __cil_tmp43 ;
  unsigned int __cil_tmp44 ;
  unsigned short __cil_tmp45 ;
  int __cil_tmp46 ;
  int __cil_tmp47 ;
  long __cil_tmp48 ;
  unsigned long __cil_tmp49 ;
  struct bio_vec *__cil_tmp50 ;
  unsigned int __cil_tmp51 ;
  unsigned int __cil_tmp52 ;
  unsigned int __cil_tmp53 ;
  unsigned int __cil_tmp54 ;
  unsigned int __cil_tmp55 ;
  unsigned long __cil_tmp56 ;
  struct bio_vec *__cil_tmp57 ;
  unsigned long __cil_tmp58 ;
  struct bio_vec *__cil_tmp59 ;
  unsigned int __cil_tmp60 ;
  unsigned int __cil_tmp61 ;
  unsigned long __cil_tmp62 ;
  struct bio_vec *__cil_tmp63 ;
  struct page *__cil_tmp64 ;
  unsigned long __cil_tmp65 ;
  struct bio_vec *__cil_tmp66 ;
  unsigned int __cil_tmp67 ;
  int __cil_tmp68 ;
  int __cil_tmp69 ;
  struct bio *__cil_tmp70 ;
  unsigned long __cil_tmp71 ;
  unsigned long __cil_tmp72 ;
  enum packet_data_state __cil_tmp73 ;
  spinlock_t *__cil_tmp74 ;
  int __cil_tmp75 ;
  int __cil_tmp76 ;
  long __cil_tmp77 ;
  unsigned long *__cil_tmp78 ;
  unsigned long const volatile *__cil_tmp79 ;
  int __cil_tmp80 ;
  int __cil_tmp81 ;
  struct bio *__cil_tmp82 ;
  struct bio *__cil_tmp83 ;
  struct bio *__cil_tmp84 ;
  struct bio *__cil_tmp85 ;
  struct bio *__cil_tmp86 ;
  struct bio *__cil_tmp87 ;
  struct bio *__cil_tmp88 ;
  struct bio *__cil_tmp89 ;
  struct bio *__cil_tmp90 ;
  unsigned long __cil_tmp91 ;
  struct bio_vec *__cil_tmp92 ;
  struct page *__cil_tmp93 ;
  unsigned long __cil_tmp94 ;
  struct bio_vec *__cil_tmp95 ;
  unsigned int __cil_tmp96 ;
  int __cil_tmp97 ;
  atomic_t *__cil_tmp98 ;
  struct bio *__cil_tmp99 ;
  struct bio *__cil_tmp100 ;

  {
  __cil_tmp18 = pkt->w_bio;
  bvec = __cil_tmp18->bi_io_vec;
  f = 0;
  goto ldv_30957;
  ldv_30956:
  __cil_tmp19 = (unsigned long )f;
  __cil_tmp20 = bvec + __cil_tmp19;
  __cil_tmp20->bv_page = pkt->pages[(unsigned long )(f * 2048) / 4096UL];
  __cil_tmp21 = (unsigned long )f;
  __cil_tmp22 = bvec + __cil_tmp21;
  __cil_tmp23 = f * 2048;
  __cil_tmp24 = (unsigned int )__cil_tmp23;
  __cil_tmp22->bv_offset = __cil_tmp24 & 4095U;
  f = f + 1;
  ldv_30957: ;
  {
  __cil_tmp25 = pkt->frames;
  if (__cil_tmp25 > f) {
    goto ldv_30956;
  } else {
    goto ldv_30958;
  }
  }
  ldv_30958:
  {
  frames_write = 0;
  __cil_tmp26 = & pkt->lock;
  spin_lock(__cil_tmp26);
  bio = pkt->orig_bios.head;
  }
  goto ldv_30974;
  ldv_30973:
  {
  __cil_tmp27 = bio->bi_idx;
  segment = (int )__cil_tmp27;
  src_offs = 0;
  __cil_tmp28 = pkt->sector;
  __cil_tmp29 = bio->bi_sector;
  __cil_tmp30 = __cil_tmp29 - __cil_tmp28;
  __cil_tmp31 = __cil_tmp30 / 4UL;
  first_frame = (int )__cil_tmp31;
  __cil_tmp32 = bio->bi_size;
  __cil_tmp33 = __cil_tmp32 / 2048U;
  num_frames = (int )__cil_tmp33;
  __cil_tmp34 = first_frame < 0;
  __cil_tmp35 = (long )__cil_tmp34;
  tmp = __builtin_expect(__cil_tmp35, 0L);
  }
  if (tmp != 0L) {
    __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/block/pktcdvd.ko--X--unsafelinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/block/pktcdvd.c.p"),
                         "i" (1391), "i" (12UL));
    ldv_30963: ;
    goto ldv_30963;
  } else {

  }
  {
  __cil_tmp36 = pkt->frames;
  __cil_tmp37 = first_frame + num_frames;
  __cil_tmp38 = __cil_tmp37 > __cil_tmp36;
  __cil_tmp39 = (long )__cil_tmp38;
  tmp___0 = __builtin_expect(__cil_tmp39, 0L);
  }
  if (tmp___0 != 0L) {
    __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/block/pktcdvd.ko--X--unsafelinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/block/pktcdvd.c.p"),
                         "i" (1392), "i" (12UL));
    ldv_30964: ;
    goto ldv_30964;
  } else {

  }
  f = first_frame;
  goto ldv_30971;
  ldv_30970:
  __cil_tmp40 = (unsigned long )segment;
  __cil_tmp41 = bio->bi_io_vec;
  src_bvl = __cil_tmp41 + __cil_tmp40;
  goto ldv_30968;
  ldv_30967:
  {
  __cil_tmp42 = src_bvl->bv_len;
  __cil_tmp43 = (unsigned int )src_offs;
  __cil_tmp44 = __cil_tmp43 - __cil_tmp42;
  src_offs = (int )__cil_tmp44;
  segment = segment + 1;
  __cil_tmp45 = bio->bi_vcnt;
  __cil_tmp46 = (int )__cil_tmp45;
  __cil_tmp47 = __cil_tmp46 <= segment;
  __cil_tmp48 = (long )__cil_tmp47;
  tmp___1 = __builtin_expect(__cil_tmp48, 0L);
  }
  if (tmp___1 != 0L) {
    __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/block/pktcdvd.ko--X--unsafelinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/block/pktcdvd.c.p"),
                         "i" (1399), "i" (12UL));
    ldv_30966: ;
    goto ldv_30966;
  } else {

  }
  __cil_tmp49 = (unsigned long )segment;
  __cil_tmp50 = bio->bi_io_vec;
  src_bvl = __cil_tmp50 + __cil_tmp49;
  ldv_30968: ;
  {
  __cil_tmp51 = src_bvl->bv_len;
  __cil_tmp52 = (unsigned int )src_offs;
  if (__cil_tmp52 >= __cil_tmp51) {
    goto ldv_30967;
  } else {
    goto ldv_30969;
  }
  }
  ldv_30969: ;
  {
  __cil_tmp53 = (unsigned int )src_offs;
  __cil_tmp54 = src_bvl->bv_len;
  __cil_tmp55 = __cil_tmp54 - __cil_tmp53;
  if (__cil_tmp55 > 2047U) {
    __cil_tmp56 = (unsigned long )f;
    __cil_tmp57 = bvec + __cil_tmp56;
    __cil_tmp57->bv_page = src_bvl->bv_page;
    __cil_tmp58 = (unsigned long )f;
    __cil_tmp59 = bvec + __cil_tmp58;
    __cil_tmp60 = (unsigned int )src_offs;
    __cil_tmp61 = src_bvl->bv_offset;
    __cil_tmp59->bv_offset = __cil_tmp61 + __cil_tmp60;
  } else {
    {
    __cil_tmp62 = (unsigned long )f;
    __cil_tmp63 = bvec + __cil_tmp62;
    __cil_tmp64 = __cil_tmp63->bv_page;
    __cil_tmp65 = (unsigned long )f;
    __cil_tmp66 = bvec + __cil_tmp65;
    __cil_tmp67 = __cil_tmp66->bv_offset;
    __cil_tmp68 = (int )__cil_tmp67;
    pkt_copy_bio_data(bio, segment, src_offs, __cil_tmp64, __cil_tmp68);
    }
  }
  }
  src_offs = src_offs + 2048;
  frames_write = frames_write + 1;
  f = f + 1;
  ldv_30971: ;
  {
  __cil_tmp69 = first_frame + num_frames;
  if (__cil_tmp69 > f) {
    goto ldv_30970;
  } else {
    goto ldv_30972;
  }
  }
  ldv_30972:
  bio = bio->bi_next;
  ldv_30974: ;
  {
  __cil_tmp70 = (struct bio *)0;
  __cil_tmp71 = (unsigned long )__cil_tmp70;
  __cil_tmp72 = (unsigned long )bio;
  if (__cil_tmp72 != __cil_tmp71) {
    goto ldv_30973;
  } else {
    goto ldv_30975;
  }
  }
  ldv_30975:
  {
  __cil_tmp73 = (enum packet_data_state )3;
  pkt_set_state(pkt, __cil_tmp73);
  __cil_tmp74 = & pkt->lock;
  spin_unlock(__cil_tmp74);
  __cil_tmp75 = pkt->write_size;
  __cil_tmp76 = __cil_tmp75 != frames_write;
  __cil_tmp77 = (long )__cil_tmp76;
  tmp___2 = __builtin_expect(__cil_tmp77, 0L);
  }
  if (tmp___2 != 0L) {
    __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/block/pktcdvd.ko--X--unsafelinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/block/pktcdvd.c.p"),
                         "i" (1419), "i" (12UL));
    ldv_30976: ;
    goto ldv_30976;
  } else {

  }
  {
  __cil_tmp78 = & pd->flags;
  __cil_tmp79 = (unsigned long const volatile *)__cil_tmp78;
  tmp___3 = constant_test_bit(4U, __cil_tmp79);
  }
  if (tmp___3 != 0) {
    {
    pkt_make_local_copy(pkt, bvec);
    pkt->cache_valid = 1;
    }
  } else {
    {
    __cil_tmp80 = pkt->frames;
    __cil_tmp81 = pkt->write_size;
    if (__cil_tmp81 < __cil_tmp80) {
      {
      pkt_make_local_copy(pkt, bvec);
      pkt->cache_valid = 1;
      }
    } else {
      pkt->cache_valid = 0;
    }
    }
  }
  {
  __cil_tmp82 = pkt->w_bio;
  bio_init(__cil_tmp82);
  __cil_tmp83 = pkt->w_bio;
  __cil_tmp83->bi_max_vecs = 128U;
  __cil_tmp84 = pkt->w_bio;
  __cil_tmp84->bi_sector = pkt->sector;
  __cil_tmp85 = pkt->w_bio;
  __cil_tmp85->bi_bdev = pd->bdev;
  __cil_tmp86 = pkt->w_bio;
  __cil_tmp86->bi_end_io = & pkt_end_io_packet_write;
  __cil_tmp87 = pkt->w_bio;
  __cil_tmp87->bi_private = (void *)pkt;
  __cil_tmp88 = pkt->w_bio;
  __cil_tmp88->bi_io_vec = bvec;
  __cil_tmp89 = pkt->w_bio;
  __cil_tmp89->bi_destructor = & pkt_bio_destructor;
  f = 0;
  }
  goto ldv_30979;
  ldv_30978:
  {
  __cil_tmp90 = pkt->w_bio;
  __cil_tmp91 = (unsigned long )f;
  __cil_tmp92 = bvec + __cil_tmp91;
  __cil_tmp93 = __cil_tmp92->bv_page;
  __cil_tmp94 = (unsigned long )f;
  __cil_tmp95 = bvec + __cil_tmp94;
  __cil_tmp96 = __cil_tmp95->bv_offset;
  tmp___4 = bio_add_page(__cil_tmp90, __cil_tmp93, 2048U, __cil_tmp96);
  }
  if (tmp___4 == 0) {
    __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/block/pktcdvd.ko--X--unsafelinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/block/pktcdvd.c.p"),
                         "i" (1439), "i" (12UL));
    ldv_30977: ;
    goto ldv_30977;
  } else {

  }
  f = f + 1;
  ldv_30979: ;
  {
  __cil_tmp97 = pkt->frames;
  if (__cil_tmp97 > f) {
    goto ldv_30978;
  } else {
    goto ldv_30980;
  }
  }
  ldv_30980:
  {
  __cil_tmp98 = & pkt->io_wait;
  atomic_set(__cil_tmp98, 1);
  __cil_tmp99 = pkt->w_bio;
  __cil_tmp99->bi_rw = 1UL;
  __cil_tmp100 = pkt->w_bio;
  pkt_queue_bio(pd, __cil_tmp100);
  }
  return;
}
}
static void pkt_finish_packet(struct packet_data *pkt , int uptodate )
{ struct bio *bio ;
  int tmp ;
  struct bio_list *__cil_tmp5 ;
  struct bio *__cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  unsigned long __cil_tmp8 ;

  {
  if (uptodate == 0) {
    pkt->cache_valid = 0;
  } else {

  }
  goto ldv_30987;
  ldv_30986: ;
  if (uptodate != 0) {
    tmp = 0;
  } else {
    tmp = -5;
  }
  {
  bio_endio(bio, tmp);
  }
  ldv_30987:
  {
  __cil_tmp5 = & pkt->orig_bios;
  bio = bio_list_pop(__cil_tmp5);
  }
  {
  __cil_tmp6 = (struct bio *)0;
  __cil_tmp7 = (unsigned long )__cil_tmp6;
  __cil_tmp8 = (unsigned long )bio;
  if (__cil_tmp8 != __cil_tmp7) {
    goto ldv_30986;
  } else {
    goto ldv_30988;
  }
  }
  ldv_30988: ;
  return;
}
}
static void pkt_run_state_machine(struct pktcdvd_device *pd , struct packet_data *pkt )
{ int uptodate ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  enum packet_data_state __cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  int __cil_tmp11 ;
  enum packet_data_state __cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  int __cil_tmp14 ;
  enum packet_data_state __cil_tmp15 ;
  unsigned int __cil_tmp16 ;
  int __cil_tmp17 ;
  enum packet_data_state __cil_tmp18 ;
  unsigned int __cil_tmp19 ;
  int __cil_tmp20 ;
  enum packet_data_state __cil_tmp21 ;
  unsigned int __cil_tmp22 ;
  int __cil_tmp23 ;
  int __cil_tmp24 ;
  int __cil_tmp25 ;
  long __cil_tmp26 ;
  enum packet_data_state __cil_tmp27 ;
  atomic_t *__cil_tmp28 ;
  atomic_t const *__cil_tmp29 ;
  atomic_t *__cil_tmp30 ;
  atomic_t const *__cil_tmp31 ;
  enum packet_data_state __cil_tmp32 ;
  atomic_t *__cil_tmp33 ;
  atomic_t const *__cil_tmp34 ;
  struct bio *__cil_tmp35 ;
  unsigned long *__cil_tmp36 ;
  unsigned long const volatile *__cil_tmp37 ;
  enum packet_data_state __cil_tmp38 ;
  enum packet_data_state __cil_tmp39 ;
  enum packet_data_state __cil_tmp40 ;
  struct bio *__cil_tmp41 ;
  unsigned long *__cil_tmp42 ;
  unsigned long const volatile *__cil_tmp43 ;

  {
  ldv_31002: ;
  {
  __cil_tmp9 = pkt->state;
  __cil_tmp10 = (unsigned int )__cil_tmp9;
  __cil_tmp11 = (int )__cil_tmp10;
  if (__cil_tmp11 == 1) {
    goto case_1;
  } else {
    {
    __cil_tmp12 = pkt->state;
    __cil_tmp13 = (unsigned int )__cil_tmp12;
    __cil_tmp14 = (int )__cil_tmp13;
    if (__cil_tmp14 == 2) {
      goto case_2;
    } else {
      {
      __cil_tmp15 = pkt->state;
      __cil_tmp16 = (unsigned int )__cil_tmp15;
      __cil_tmp17 = (int )__cil_tmp16;
      if (__cil_tmp17 == 3) {
        goto case_3;
      } else {
        {
        __cil_tmp18 = pkt->state;
        __cil_tmp19 = (unsigned int )__cil_tmp18;
        __cil_tmp20 = (int )__cil_tmp19;
        if (__cil_tmp20 == 4) {
          goto case_4;
        } else {
          {
          __cil_tmp21 = pkt->state;
          __cil_tmp22 = (unsigned int )__cil_tmp21;
          __cil_tmp23 = (int )__cil_tmp22;
          if (__cil_tmp23 == 5) {
            goto case_5;
          } else {
            goto switch_default;
            if (0) {
              case_1: ;
              {
              __cil_tmp24 = pkt->frames;
              __cil_tmp25 = pkt->write_size;
              if (__cil_tmp25 < __cil_tmp24) {
                {
                __cil_tmp26 = pkt->sleep_time;
                if (__cil_tmp26 > 0L) {
                  return;
                } else {

                }
                }
              } else {

              }
              }
              {
              pkt->sleep_time = 0L;
              pkt_gather_data(pd, pkt);
              __cil_tmp27 = (enum packet_data_state )2;
              pkt_set_state(pkt, __cil_tmp27);
              }
              goto ldv_30995;
              case_2:
              {
              __cil_tmp28 = & pkt->io_wait;
              __cil_tmp29 = (atomic_t const *)__cil_tmp28;
              tmp = atomic_read(__cil_tmp29);
              }
              if (tmp > 0) {
                return;
              } else {

              }
              {
              __cil_tmp30 = & pkt->io_errors;
              __cil_tmp31 = (atomic_t const *)__cil_tmp30;
              tmp___0 = atomic_read(__cil_tmp31);
              }
              if (tmp___0 > 0) {
                {
                __cil_tmp32 = (enum packet_data_state )4;
                pkt_set_state(pkt, __cil_tmp32);
                }
              } else {
                {
                pkt_start_write(pd, pkt);
                }
              }
              goto ldv_30995;
              case_3:
              {
              __cil_tmp33 = & pkt->io_wait;
              __cil_tmp34 = (atomic_t const *)__cil_tmp33;
              tmp___1 = atomic_read(__cil_tmp34);
              }
              if (tmp___1 > 0) {
                return;
              } else {

              }
              {
              __cil_tmp35 = pkt->w_bio;
              __cil_tmp36 = & __cil_tmp35->bi_flags;
              __cil_tmp37 = (unsigned long const volatile *)__cil_tmp36;
              tmp___2 = constant_test_bit(0U, __cil_tmp37);
              }
              if (tmp___2 != 0) {
                {
                __cil_tmp38 = (enum packet_data_state )5;
                pkt_set_state(pkt, __cil_tmp38);
                }
              } else {
                {
                __cil_tmp39 = (enum packet_data_state )4;
                pkt_set_state(pkt, __cil_tmp39);
                }
              }
              goto ldv_30995;
              case_4:
              {
              tmp___3 = pkt_start_recovery(pkt);
              }
              if (tmp___3 != 0) {
                {
                pkt_start_write(pd, pkt);
                }
              } else {
                {
                __cil_tmp40 = (enum packet_data_state )5;
                pkt_set_state(pkt, __cil_tmp40);
                }
              }
              goto ldv_30995;
              case_5:
              {
              __cil_tmp41 = pkt->w_bio;
              __cil_tmp42 = & __cil_tmp41->bi_flags;
              __cil_tmp43 = (unsigned long const volatile *)__cil_tmp42;
              uptodate = constant_test_bit(0U, __cil_tmp43);
              pkt_finish_packet(pkt, uptodate);
              }
              return;
              switch_default:
              __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/block/pktcdvd.ko--X--unsafelinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/block/pktcdvd.c.p"),
                                   "i" (1513), "i" (12UL));
              ldv_31001: ;
              goto ldv_31001;
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
  ldv_30995: ;
  goto ldv_31002;
}
}
static void pkt_handle_packets(struct pktcdvd_device *pd )
{ struct packet_data *pkt ;
  struct packet_data *next ;
  struct list_head const *__mptr ;
  int tmp ;
  struct list_head const *__mptr___0 ;
  struct list_head const *__mptr___1 ;
  struct list_head const *__mptr___2 ;
  struct list_head const *__mptr___3 ;
  struct list_head *__cil_tmp10 ;
  atomic_t *__cil_tmp11 ;
  atomic_t const *__cil_tmp12 ;
  atomic_t *__cil_tmp13 ;
  struct list_head *__cil_tmp14 ;
  struct list_head *__cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  struct list_head *__cil_tmp17 ;
  unsigned long __cil_tmp18 ;
  spinlock_t *__cil_tmp19 ;
  struct list_head *__cil_tmp20 ;
  struct list_head *__cil_tmp21 ;
  enum packet_data_state __cil_tmp22 ;
  unsigned int __cil_tmp23 ;
  struct list_head *__cil_tmp24 ;
  enum packet_data_state __cil_tmp25 ;
  atomic_t *__cil_tmp26 ;
  struct list_head *__cil_tmp27 ;
  struct list_head *__cil_tmp28 ;
  unsigned long __cil_tmp29 ;
  struct list_head *__cil_tmp30 ;
  unsigned long __cil_tmp31 ;
  spinlock_t *__cil_tmp32 ;

  {
  __cil_tmp10 = pd->cdrw.pkt_active_list.next;
  __mptr = (struct list_head const *)__cil_tmp10;
  pkt = (struct packet_data *)__mptr;
  goto ldv_31013;
  ldv_31012:
  {
  __cil_tmp11 = & pkt->run_sm;
  __cil_tmp12 = (atomic_t const *)__cil_tmp11;
  tmp = atomic_read(__cil_tmp12);
  }
  if (tmp > 0) {
    {
    __cil_tmp13 = & pkt->run_sm;
    atomic_set(__cil_tmp13, 0);
    pkt_run_state_machine(pd, pkt);
    }
  } else {

  }
  __cil_tmp14 = pkt->list.next;
  __mptr___0 = (struct list_head const *)__cil_tmp14;
  pkt = (struct packet_data *)__mptr___0;
  ldv_31013: ;
  {
  __cil_tmp15 = & pd->cdrw.pkt_active_list;
  __cil_tmp16 = (unsigned long )__cil_tmp15;
  __cil_tmp17 = & pkt->list;
  __cil_tmp18 = (unsigned long )__cil_tmp17;
  if (__cil_tmp18 != __cil_tmp16) {
    goto ldv_31012;
  } else {
    goto ldv_31014;
  }
  }
  ldv_31014:
  {
  __cil_tmp19 = & pd->cdrw.active_list_lock;
  spin_lock(__cil_tmp19);
  __cil_tmp20 = pd->cdrw.pkt_active_list.next;
  __mptr___1 = (struct list_head const *)__cil_tmp20;
  pkt = (struct packet_data *)__mptr___1;
  __cil_tmp21 = pkt->list.next;
  __mptr___2 = (struct list_head const *)__cil_tmp21;
  next = (struct packet_data *)__mptr___2;
  }
  goto ldv_31022;
  ldv_31021: ;
  {
  __cil_tmp22 = pkt->state;
  __cil_tmp23 = (unsigned int )__cil_tmp22;
  if (__cil_tmp23 == 5U) {
    {
    __cil_tmp24 = & pkt->list;
    list_del(__cil_tmp24);
    pkt_put_packet_data(pd, pkt);
    __cil_tmp25 = (enum packet_data_state )0;
    pkt_set_state(pkt, __cil_tmp25);
    __cil_tmp26 = & pd->scan_queue;
    atomic_set(__cil_tmp26, 1);
    }
  } else {

  }
  }
  pkt = next;
  __cil_tmp27 = next->list.next;
  __mptr___3 = (struct list_head const *)__cil_tmp27;
  next = (struct packet_data *)__mptr___3;
  ldv_31022: ;
  {
  __cil_tmp28 = & pd->cdrw.pkt_active_list;
  __cil_tmp29 = (unsigned long )__cil_tmp28;
  __cil_tmp30 = & pkt->list;
  __cil_tmp31 = (unsigned long )__cil_tmp30;
  if (__cil_tmp31 != __cil_tmp29) {
    goto ldv_31021;
  } else {
    goto ldv_31023;
  }
  }
  ldv_31023:
  {
  __cil_tmp32 = & pd->cdrw.active_list_lock;
  spin_unlock(__cil_tmp32);
  }
  return;
}
}
static void pkt_count_states(struct pktcdvd_device *pd , int *states )
{ struct packet_data *pkt ;
  int i ;
  struct list_head const *__mptr ;
  struct list_head const *__mptr___0 ;
  unsigned long __cil_tmp7 ;
  int *__cil_tmp8 ;
  spinlock_t *__cil_tmp9 ;
  struct list_head *__cil_tmp10 ;
  enum packet_data_state __cil_tmp11 ;
  unsigned long __cil_tmp12 ;
  int *__cil_tmp13 ;
  enum packet_data_state __cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  int *__cil_tmp16 ;
  int __cil_tmp17 ;
  struct list_head *__cil_tmp18 ;
  struct list_head *__cil_tmp19 ;
  unsigned long __cil_tmp20 ;
  struct list_head *__cil_tmp21 ;
  unsigned long __cil_tmp22 ;
  spinlock_t *__cil_tmp23 ;

  {
  i = 0;
  goto ldv_31031;
  ldv_31030:
  __cil_tmp7 = (unsigned long )i;
  __cil_tmp8 = states + __cil_tmp7;
  *__cil_tmp8 = 0;
  i = i + 1;
  ldv_31031: ;
  if (i <= 5) {
    goto ldv_31030;
  } else {
    goto ldv_31032;
  }
  ldv_31032:
  {
  __cil_tmp9 = & pd->cdrw.active_list_lock;
  spin_lock(__cil_tmp9);
  __cil_tmp10 = pd->cdrw.pkt_active_list.next;
  __mptr = (struct list_head const *)__cil_tmp10;
  pkt = (struct packet_data *)__mptr;
  }
  goto ldv_31038;
  ldv_31037:
  __cil_tmp11 = pkt->state;
  __cil_tmp12 = (unsigned long )__cil_tmp11;
  __cil_tmp13 = states + __cil_tmp12;
  __cil_tmp14 = pkt->state;
  __cil_tmp15 = (unsigned long )__cil_tmp14;
  __cil_tmp16 = states + __cil_tmp15;
  __cil_tmp17 = *__cil_tmp16;
  *__cil_tmp13 = __cil_tmp17 + 1;
  __cil_tmp18 = pkt->list.next;
  __mptr___0 = (struct list_head const *)__cil_tmp18;
  pkt = (struct packet_data *)__mptr___0;
  ldv_31038: ;
  {
  __cil_tmp19 = & pd->cdrw.pkt_active_list;
  __cil_tmp20 = (unsigned long )__cil_tmp19;
  __cil_tmp21 = & pkt->list;
  __cil_tmp22 = (unsigned long )__cil_tmp21;
  if (__cil_tmp22 != __cil_tmp20) {
    goto ldv_31037;
  } else {
    goto ldv_31039;
  }
  }
  ldv_31039:
  {
  __cil_tmp23 = & pd->cdrw.active_list_lock;
  spin_unlock(__cil_tmp23);
  }
  return;
}
}
static int kcdrwd(void *foobar )
{ struct pktcdvd_device *pd ;
  struct packet_data *pkt ;
  long min_sleep_time ;
  long residue ;
  struct task_struct *tmp ;
  wait_queue_t wait ;
  struct task_struct *tmp___0 ;
  long volatile __x ;
  u8 volatile *__ptr ;
  struct task_struct *tmp___1 ;
  u16 volatile *__ptr___0 ;
  struct task_struct *tmp___2 ;
  u32 volatile *__ptr___1 ;
  struct task_struct *tmp___3 ;
  u64 volatile *__ptr___2 ;
  struct task_struct *tmp___4 ;
  int tmp___5 ;
  struct list_head const *__mptr ;
  int tmp___6 ;
  struct list_head const *__mptr___0 ;
  int tmp___7 ;
  struct list_head const *__mptr___1 ;
  struct list_head const *__mptr___2 ;
  struct list_head const *__mptr___3 ;
  struct list_head const *__mptr___4 ;
  int tmp___8 ;
  long volatile __x___0 ;
  u8 volatile *__ptr___3 ;
  struct task_struct *tmp___9 ;
  u16 volatile *__ptr___4 ;
  struct task_struct *tmp___10 ;
  u32 volatile *__ptr___5 ;
  struct task_struct *tmp___11 ;
  u64 volatile *__ptr___6 ;
  struct task_struct *tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  wait_queue_head_t *__cil_tmp39 ;
  long volatile *__cil_tmp40 ;
  long volatile *__cil_tmp41 ;
  long volatile *__cil_tmp42 ;
  long volatile *__cil_tmp43 ;
  atomic_t *__cil_tmp44 ;
  atomic_t const *__cil_tmp45 ;
  struct list_head *__cil_tmp46 ;
  atomic_t *__cil_tmp47 ;
  atomic_t const *__cil_tmp48 ;
  struct list_head *__cil_tmp49 ;
  struct list_head *__cil_tmp50 ;
  unsigned long __cil_tmp51 ;
  struct list_head *__cil_tmp52 ;
  unsigned long __cil_tmp53 ;
  atomic_t *__cil_tmp54 ;
  atomic_t const *__cil_tmp55 ;
  struct list_head *__cil_tmp56 ;
  long __cil_tmp57 ;
  long __cil_tmp58 ;
  struct list_head *__cil_tmp59 ;
  struct list_head *__cil_tmp60 ;
  unsigned long __cil_tmp61 ;
  struct list_head *__cil_tmp62 ;
  unsigned long __cil_tmp63 ;
  struct list_head *__cil_tmp64 ;
  long __cil_tmp65 ;
  long __cil_tmp66 ;
  long __cil_tmp67 ;
  long __cil_tmp68 ;
  atomic_t *__cil_tmp69 ;
  struct list_head *__cil_tmp70 ;
  struct list_head *__cil_tmp71 ;
  unsigned long __cil_tmp72 ;
  struct list_head *__cil_tmp73 ;
  unsigned long __cil_tmp74 ;
  long volatile *__cil_tmp75 ;
  long volatile *__cil_tmp76 ;
  long volatile *__cil_tmp77 ;
  long volatile *__cil_tmp78 ;
  wait_queue_head_t *__cil_tmp79 ;

  {
  {
  pd = (struct pktcdvd_device *)foobar;
  tmp = get_current();
  set_user_nice(tmp, -20L);
  set_freezable();
  }
  ldv_31102:
  {
  tmp___0 = get_current();
  wait.flags = 0U;
  wait.private = (void *)tmp___0;
  wait.func = & default_wake_function;
  wait.task_list.next = (struct list_head *)0;
  wait.task_list.prev = (struct list_head *)0;
  __cil_tmp39 = & pd->wqueue;
  add_wait_queue(__cil_tmp39, & wait);
  }
  ldv_31085:
  __x = (long volatile )1L;
  if (1) {
    goto case_8;
  } else {
    goto switch_default;
    if (0) {
      {
      tmp___1 = get_current();
      __cil_tmp40 = & tmp___1->state;
      __ptr = (u8 volatile *)__cil_tmp40;
      __asm__ volatile ("xchgb %0,%1": "=q" (__x), "+m" (*__ptr): "0" (__x): "memory");
      }
      goto ldv_31051;
      {
      tmp___2 = get_current();
      __cil_tmp41 = & tmp___2->state;
      __ptr___0 = (u16 volatile *)__cil_tmp41;
      __asm__ volatile ("xchgw %0,%1": "=r" (__x), "+m" (*__ptr___0): "0" (__x): "memory");
      }
      goto ldv_31051;
      {
      tmp___3 = get_current();
      __cil_tmp42 = & tmp___3->state;
      __ptr___1 = (u32 volatile *)__cil_tmp42;
      __asm__ volatile ("xchgl %0,%1": "=r" (__x), "+m" (*__ptr___1): "0" (__x): "memory");
      }
      goto ldv_31051;
      case_8:
      {
      tmp___4 = get_current();
      __cil_tmp43 = & tmp___4->state;
      __ptr___2 = (u64 volatile *)__cil_tmp43;
      __asm__ volatile ("xchgq %0,%1": "=r" (__x), "+m" (*__ptr___2): "0" (__x): "memory");
      }
      goto ldv_31051;
      switch_default:
      {
      __xchg_wrong_size();
      }
    } else {

    }
  }
  ldv_31051:
  {
  __cil_tmp44 = & pd->scan_queue;
  __cil_tmp45 = (atomic_t const *)__cil_tmp44;
  tmp___5 = atomic_read(__cil_tmp45);
  }
  if (tmp___5 > 0) {
    goto work_to_do;
  } else {

  }
  __cil_tmp46 = pd->cdrw.pkt_active_list.next;
  __mptr = (struct list_head const *)__cil_tmp46;
  pkt = (struct packet_data *)__mptr;
  goto ldv_31066;
  ldv_31065:
  {
  __cil_tmp47 = & pkt->run_sm;
  __cil_tmp48 = (atomic_t const *)__cil_tmp47;
  tmp___6 = atomic_read(__cil_tmp48);
  }
  if (tmp___6 > 0) {
    goto work_to_do;
  } else {

  }
  __cil_tmp49 = pkt->list.next;
  __mptr___0 = (struct list_head const *)__cil_tmp49;
  pkt = (struct packet_data *)__mptr___0;
  ldv_31066: ;
  {
  __cil_tmp50 = & pd->cdrw.pkt_active_list;
  __cil_tmp51 = (unsigned long )__cil_tmp50;
  __cil_tmp52 = & pkt->list;
  __cil_tmp53 = (unsigned long )__cil_tmp52;
  if (__cil_tmp53 != __cil_tmp51) {
    goto ldv_31065;
  } else {
    goto ldv_31067;
  }
  }
  ldv_31067:
  {
  __cil_tmp54 = & pd->iosched.attention;
  __cil_tmp55 = (atomic_t const *)__cil_tmp54;
  tmp___7 = atomic_read(__cil_tmp55);
  }
  if (tmp___7 != 0) {
    goto work_to_do;
  } else {

  }
  min_sleep_time = 9223372036854775807L;
  __cil_tmp56 = pd->cdrw.pkt_active_list.next;
  __mptr___1 = (struct list_head const *)__cil_tmp56;
  pkt = (struct packet_data *)__mptr___1;
  goto ldv_31074;
  ldv_31073: ;
  {
  __cil_tmp57 = pkt->sleep_time;
  if (__cil_tmp57 != 0L) {
    {
    __cil_tmp58 = pkt->sleep_time;
    if (__cil_tmp58 < min_sleep_time) {
      min_sleep_time = pkt->sleep_time;
    } else {

    }
    }
  } else {

  }
  }
  __cil_tmp59 = pkt->list.next;
  __mptr___2 = (struct list_head const *)__cil_tmp59;
  pkt = (struct packet_data *)__mptr___2;
  ldv_31074: ;
  {
  __cil_tmp60 = & pd->cdrw.pkt_active_list;
  __cil_tmp61 = (unsigned long )__cil_tmp60;
  __cil_tmp62 = & pkt->list;
  __cil_tmp63 = (unsigned long )__cil_tmp62;
  if (__cil_tmp63 != __cil_tmp61) {
    goto ldv_31073;
  } else {
    goto ldv_31075;
  }
  }
  ldv_31075:
  {
  residue = schedule_timeout(min_sleep_time);
  try_to_freeze();
  __cil_tmp64 = pd->cdrw.pkt_active_list.next;
  __mptr___3 = (struct list_head const *)__cil_tmp64;
  pkt = (struct packet_data *)__mptr___3;
  }
  goto ldv_31082;
  ldv_31081: ;
  {
  __cil_tmp65 = pkt->sleep_time;
  if (__cil_tmp65 == 0L) {
    goto ldv_31080;
  } else {

  }
  }
  __cil_tmp66 = residue - min_sleep_time;
  __cil_tmp67 = pkt->sleep_time;
  pkt->sleep_time = __cil_tmp67 + __cil_tmp66;
  {
  __cil_tmp68 = pkt->sleep_time;
  if (__cil_tmp68 <= 0L) {
    {
    pkt->sleep_time = 0L;
    __cil_tmp69 = & pkt->run_sm;
    atomic_inc(__cil_tmp69);
    }
  } else {

  }
  }
  ldv_31080:
  __cil_tmp70 = pkt->list.next;
  __mptr___4 = (struct list_head const *)__cil_tmp70;
  pkt = (struct packet_data *)__mptr___4;
  ldv_31082: ;
  {
  __cil_tmp71 = & pd->cdrw.pkt_active_list;
  __cil_tmp72 = (unsigned long )__cil_tmp71;
  __cil_tmp73 = & pkt->list;
  __cil_tmp74 = (unsigned long )__cil_tmp73;
  if (__cil_tmp74 != __cil_tmp72) {
    goto ldv_31081;
  } else {
    goto ldv_31083;
  }
  }
  ldv_31083:
  {
  tmp___8 = kthread_should_stop();
  }
  if (tmp___8 != 0) {
    goto ldv_31084;
  } else {

  }
  goto ldv_31085;
  ldv_31084: ;
  work_to_do:
  __x___0 = (long volatile )0L;
  if (1) {
    goto case_8___0;
  } else {
    goto switch_default___0;
    if (0) {
      {
      tmp___9 = get_current();
      __cil_tmp75 = & tmp___9->state;
      __ptr___3 = (u8 volatile *)__cil_tmp75;
      __asm__ volatile ("xchgb %0,%1": "=q" (__x___0), "+m" (*__ptr___3): "0" (__x___0): "memory");
      }
      goto ldv_31089;
      {
      tmp___10 = get_current();
      __cil_tmp76 = & tmp___10->state;
      __ptr___4 = (u16 volatile *)__cil_tmp76;
      __asm__ volatile ("xchgw %0,%1": "=r" (__x___0), "+m" (*__ptr___4): "0" (__x___0): "memory");
      }
      goto ldv_31089;
      {
      tmp___11 = get_current();
      __cil_tmp77 = & tmp___11->state;
      __ptr___5 = (u32 volatile *)__cil_tmp77;
      __asm__ volatile ("xchgl %0,%1": "=r" (__x___0), "+m" (*__ptr___5): "0" (__x___0): "memory");
      }
      goto ldv_31089;
      case_8___0:
      {
      tmp___12 = get_current();
      __cil_tmp78 = & tmp___12->state;
      __ptr___6 = (u64 volatile *)__cil_tmp78;
      __asm__ volatile ("xchgq %0,%1": "=r" (__x___0), "+m" (*__ptr___6): "0" (__x___0): "memory");
      }
      goto ldv_31089;
      switch_default___0:
      {
      __xchg_wrong_size();
      }
    } else {

    }
  }
  ldv_31089:
  {
  __cil_tmp79 = & pd->wqueue;
  remove_wait_queue(__cil_tmp79, & wait);
  tmp___13 = kthread_should_stop();
  }
  if (tmp___13 != 0) {
    goto ldv_31098;
  } else {

  }
  goto ldv_31100;
  ldv_31099: ;
  ldv_31100:
  {
  tmp___14 = pkt_handle_queue(pd);
  }
  if (tmp___14 != 0) {
    goto ldv_31099;
  } else {
    goto ldv_31101;
  }
  ldv_31101:
  {
  pkt_handle_packets(pd);
  pkt_iosched_process_queue(pd);
  }
  goto ldv_31102;
  ldv_31098: ;
  return (0);
}
}
static void pkt_print_settings(struct pktcdvd_device *pd )
{ char *tmp ;
  int tmp___0 ;
  __u8 __cil_tmp4 ;
  unsigned int __cil_tmp5 ;
  __u32 __cil_tmp6 ;
  __u32 __cil_tmp7 ;
  __u8 __cil_tmp8 ;
  unsigned int __cil_tmp9 ;

  {
  {
  __cil_tmp4 = pd->settings.fp;
  __cil_tmp5 = (unsigned int )__cil_tmp4;
  if (__cil_tmp5 != 0U) {
    tmp = (char *)"Fixed";
  } else {
    tmp = (char *)"Variable";
  }
  }
  {
  printk("pktcdvd: %s packets, ", tmp);
  __cil_tmp6 = pd->settings.size;
  __cil_tmp7 = __cil_tmp6 >> 2;
  printk("%u blocks, ", __cil_tmp7);
  }
  {
  __cil_tmp8 = pd->settings.block_mode;
  __cil_tmp9 = (unsigned int )__cil_tmp8;
  if (__cil_tmp9 == 8U) {
    tmp___0 = 49;
  } else {
    tmp___0 = 50;
  }
  }
  {
  printk("Mode-%c disc\n", tmp___0);
  }
  return;
}
}
static int pkt_mode_sense(struct pktcdvd_device *pd , struct packet_command *cgc ,
                          int page_code , int page_control )
{ int tmp ;
  unsigned char (*__cil_tmp6)[12U] ;
  void *__cil_tmp7 ;
  signed char __cil_tmp8 ;
  int __cil_tmp9 ;
  int __cil_tmp10 ;
  signed char __cil_tmp11 ;
  int __cil_tmp12 ;
  int __cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  unsigned int __cil_tmp15 ;
  unsigned int __cil_tmp16 ;

  {
  {
  __cil_tmp6 = & cgc->cmd;
  __cil_tmp7 = (void *)__cil_tmp6;
  memset(__cil_tmp7, 0, 12UL);
  cgc->cmd[0] = (unsigned char)90;
  __cil_tmp8 = (signed char )page_code;
  __cil_tmp9 = (int )__cil_tmp8;
  __cil_tmp10 = page_control << 6;
  __cil_tmp11 = (signed char )__cil_tmp10;
  __cil_tmp12 = (int )__cil_tmp11;
  __cil_tmp13 = __cil_tmp12 | __cil_tmp9;
  cgc->cmd[2] = (unsigned char )__cil_tmp13;
  __cil_tmp14 = cgc->buflen;
  __cil_tmp15 = __cil_tmp14 >> 8;
  cgc->cmd[7] = (unsigned char )__cil_tmp15;
  __cil_tmp16 = cgc->buflen;
  cgc->cmd[8] = (unsigned char )__cil_tmp16;
  cgc->data_direction = (unsigned char)2;
  tmp = pkt_generic_packet(pd, cgc);
  }
  return (tmp);
}
}
static int pkt_mode_select(struct pktcdvd_device *pd , struct packet_command *cgc )
{ int tmp ;
  unsigned char (*__cil_tmp4)[12U] ;
  void *__cil_tmp5 ;
  unsigned char *__cil_tmp6 ;
  void *__cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  unsigned int __cil_tmp10 ;

  {
  {
  __cil_tmp4 = & cgc->cmd;
  __cil_tmp5 = (void *)__cil_tmp4;
  memset(__cil_tmp5, 0, 12UL);
  __cil_tmp6 = cgc->buffer;
  __cil_tmp7 = (void *)__cil_tmp6;
  memset(__cil_tmp7, 0, 2UL);
  cgc->cmd[0] = (unsigned char)85;
  cgc->cmd[1] = (unsigned char)16;
  __cil_tmp8 = cgc->buflen;
  __cil_tmp9 = __cil_tmp8 >> 8;
  cgc->cmd[7] = (unsigned char )__cil_tmp9;
  __cil_tmp10 = cgc->buflen;
  cgc->cmd[8] = (unsigned char )__cil_tmp10;
  cgc->data_direction = (unsigned char)1;
  tmp = pkt_generic_packet(pd, cgc);
  }
  return (tmp);
}
}
static int pkt_get_disc_info(struct pktcdvd_device *pd , disc_information *di )
{ struct packet_command cgc ;
  int ret ;
  __u16 tmp ;
  int tmp___0 ;
  void *__cil_tmp7 ;
  __be16 __cil_tmp8 ;
  int __cil_tmp9 ;
  __u16 __cil_tmp10 ;
  unsigned int __cil_tmp11 ;

  {
  {
  __cil_tmp7 = (void *)di;
  init_cdrom_command(& cgc, __cil_tmp7, 36, 2);
  cgc.cmd[0] = (unsigned char)81;
  cgc.buflen = 2U;
  cgc.cmd[8] = (unsigned char)2;
  cgc.quiet = 1;
  ret = pkt_generic_packet(pd, & cgc);
  }
  if (ret != 0) {
    return (ret);
  } else {

  }
  {
  __cil_tmp8 = di->disc_information_length;
  __cil_tmp9 = (int )__cil_tmp8;
  __cil_tmp10 = (__u16 )__cil_tmp9;
  tmp = __fswab16(__cil_tmp10);
  __cil_tmp11 = (unsigned int )tmp;
  cgc.buflen = __cil_tmp11 + 2U;
  }
  if (cgc.buflen > 36U) {
    cgc.buflen = 36U;
  } else {

  }
  {
  cgc.cmd[8] = (unsigned char )cgc.buflen;
  tmp___0 = pkt_generic_packet(pd, & cgc);
  }
  return (tmp___0);
}
}
static int pkt_get_track_info(struct pktcdvd_device *pd , __u16 track , __u8 type ,
                              track_information *ti )
{ struct packet_command cgc ;
  int ret ;
  __u16 tmp ;
  int tmp___0 ;
  void *__cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  unsigned int __cil_tmp11 ;
  int __cil_tmp12 ;
  int __cil_tmp13 ;
  __be16 __cil_tmp14 ;
  int __cil_tmp15 ;
  __u16 __cil_tmp16 ;
  unsigned int __cil_tmp17 ;

  {
  {
  __cil_tmp9 = (void *)ti;
  init_cdrom_command(& cgc, __cil_tmp9, 8, 2);
  cgc.cmd[0] = (unsigned char)82;
  __cil_tmp10 = (unsigned int )type;
  __cil_tmp11 = __cil_tmp10 & 3U;
  cgc.cmd[1] = (unsigned char )__cil_tmp11;
  __cil_tmp12 = (int )track;
  __cil_tmp13 = __cil_tmp12 >> 8;
  cgc.cmd[4] = (unsigned char )__cil_tmp13;
  cgc.cmd[5] = (unsigned char )track;
  cgc.cmd[8] = (unsigned char)8;
  cgc.quiet = 1;
  ret = pkt_generic_packet(pd, & cgc);
  }
  if (ret != 0) {
    return (ret);
  } else {

  }
  {
  __cil_tmp14 = ti->track_information_length;
  __cil_tmp15 = (int )__cil_tmp14;
  __cil_tmp16 = (__u16 )__cil_tmp15;
  tmp = __fswab16(__cil_tmp16);
  __cil_tmp17 = (unsigned int )tmp;
  cgc.buflen = __cil_tmp17 + 2U;
  }
  if (cgc.buflen > 32U) {
    cgc.buflen = 32U;
  } else {

  }
  {
  cgc.cmd[8] = (unsigned char )cgc.buflen;
  tmp___0 = pkt_generic_packet(pd, & cgc);
  }
  return (tmp___0);
}
}
static int pkt_get_last_written(struct pktcdvd_device *pd , long *last_written )
{ disc_information di ;
  track_information ti ;
  __u32 last_track ;
  int ret ;
  __u32 tmp ;
  __u32 tmp___0 ;
  __u32 tmp___1 ;
  __u32 tmp___2 ;
  int __cil_tmp11 ;
  int __cil_tmp12 ;
  int __cil_tmp13 ;
  int __cil_tmp14 ;
  __u16 __cil_tmp15 ;
  int __cil_tmp16 ;
  __u16 __cil_tmp17 ;
  __u8 __cil_tmp18 ;
  unsigned char *__cil_tmp19 ;
  unsigned char *__cil_tmp20 ;
  unsigned char __cil_tmp21 ;
  unsigned int __cil_tmp22 ;
  __u16 __cil_tmp23 ;
  int __cil_tmp24 ;
  __u16 __cil_tmp25 ;
  __u8 __cil_tmp26 ;
  unsigned char *__cil_tmp27 ;
  unsigned char *__cil_tmp28 ;
  unsigned char __cil_tmp29 ;
  unsigned int __cil_tmp30 ;
  __u32 __cil_tmp31 ;
  __u32 __cil_tmp32 ;
  long __cil_tmp33 ;
  long __cil_tmp34 ;

  {
  {
  ret = -1;
  ret = pkt_get_disc_info(pd, & di);
  }
  if (ret != 0) {
    return (ret);
  } else {

  }
  {
  __cil_tmp11 = (int )di.last_track_lsb;
  __cil_tmp12 = (int )di.last_track_msb;
  __cil_tmp13 = __cil_tmp12 << 8;
  __cil_tmp14 = __cil_tmp13 | __cil_tmp11;
  last_track = (__u32 )__cil_tmp14;
  __cil_tmp15 = (__u16 )last_track;
  __cil_tmp16 = (int )__cil_tmp15;
  __cil_tmp17 = (__u16 )__cil_tmp16;
  __cil_tmp18 = (__u8 )1;
  ret = pkt_get_track_info(pd, __cil_tmp17, __cil_tmp18, & ti);
  }
  if (ret != 0) {
    return (ret);
  } else {

  }
  {
  __cil_tmp19 = (unsigned char *)(& ti);
  __cil_tmp20 = __cil_tmp19 + 6UL;
  __cil_tmp21 = *__cil_tmp20;
  __cil_tmp22 = (unsigned int )__cil_tmp21;
  if (__cil_tmp22 != 0U) {
    {
    last_track = last_track - 1U;
    __cil_tmp23 = (__u16 )last_track;
    __cil_tmp24 = (int )__cil_tmp23;
    __cil_tmp25 = (__u16 )__cil_tmp24;
    __cil_tmp26 = (__u8 )1;
    ret = pkt_get_track_info(pd, __cil_tmp25, __cil_tmp26, & ti);
    }
    if (ret != 0) {
      return (ret);
    } else {

    }
  } else {

  }
  }
  {
  __cil_tmp27 = (unsigned char *)(& ti);
  __cil_tmp28 = __cil_tmp27 + 7UL;
  __cil_tmp29 = *__cil_tmp28;
  __cil_tmp30 = (unsigned int )__cil_tmp29;
  if (__cil_tmp30 != 0U) {
    {
    tmp = __fswab32(ti.last_rec_address);
    *last_written = (long )tmp;
    }
  } else {
    {
    tmp___0 = __fswab32(ti.track_start);
    tmp___1 = __fswab32(ti.track_size);
    __cil_tmp31 = tmp___0 + tmp___1;
    *last_written = (long )__cil_tmp31;
    }
    if (ti.free_blocks != 0U) {
      {
      tmp___2 = __fswab32(ti.free_blocks);
      __cil_tmp32 = tmp___2 + 7U;
      __cil_tmp33 = (long )__cil_tmp32;
      __cil_tmp34 = *last_written;
      *last_written = __cil_tmp34 - __cil_tmp33;
      }
    } else {

    }
  }
  }
  return (0);
}
}
static int pkt_set_write_settings(struct pktcdvd_device *pd )
{ struct packet_command cgc ;
  struct request_sense sense ;
  write_param_page *wp ;
  char buffer[128U] ;
  int ret ;
  int size ;
  __u16 __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  __u16 __cil_tmp10 ;
  unsigned int __cil_tmp11 ;
  void *__cil_tmp12 ;
  void *__cil_tmp13 ;
  int __cil_tmp14 ;
  int __cil_tmp15 ;
  int __cil_tmp16 ;
  int __cil_tmp17 ;
  int __cil_tmp18 ;
  signed char __cil_tmp19 ;
  int __cil_tmp20 ;
  int __cil_tmp21 ;
  int __cil_tmp22 ;
  signed char __cil_tmp23 ;
  int __cil_tmp24 ;
  int __cil_tmp25 ;
  unsigned int __cil_tmp26 ;
  void *__cil_tmp27 ;
  __u8 __cil_tmp28 ;
  unsigned long __cil_tmp29 ;
  unsigned long __cil_tmp30 ;
  write_param_page *__cil_tmp31 ;
  unsigned char *__cil_tmp32 ;
  unsigned char *__cil_tmp33 ;
  unsigned char __cil_tmp34 ;
  unsigned int __cil_tmp35 ;
  unsigned char *__cil_tmp36 ;
  unsigned char *__cil_tmp37 ;
  unsigned char __cil_tmp38 ;
  unsigned int __cil_tmp39 ;
  unsigned char __cil_tmp40 ;
  int __cil_tmp41 ;
  __u32 __cil_tmp42 ;
  __u32 __cil_tmp43 ;

  {
  {
  __cil_tmp8 = pd->mmc3_profile;
  __cil_tmp9 = (unsigned int )__cil_tmp8;
  if (__cil_tmp9 == 26U) {
    return (0);
  } else {
    {
    __cil_tmp10 = pd->mmc3_profile;
    __cil_tmp11 = (unsigned int )__cil_tmp10;
    if (__cil_tmp11 == 18U) {
      return (0);
    } else {

    }
    }
  }
  }
  {
  __cil_tmp12 = (void *)(& buffer);
  memset(__cil_tmp12, 0, 128UL);
  __cil_tmp13 = (void *)(& buffer);
  init_cdrom_command(& cgc, __cil_tmp13, 52, 2);
  cgc.sense = & sense;
  ret = pkt_mode_sense(pd, & cgc, 5, 0);
  }
  if (ret != 0) {
    {
    pkt_dump_sense(& cgc);
    }
    return (ret);
  } else {

  }
  __cil_tmp14 = (int )buffer[1];
  __cil_tmp15 = __cil_tmp14 & 255;
  __cil_tmp16 = (int )buffer[0];
  __cil_tmp17 = __cil_tmp16 << 8;
  __cil_tmp18 = __cil_tmp17 | __cil_tmp15;
  size = __cil_tmp18 + 2;
  __cil_tmp19 = (signed char )buffer[7];
  __cil_tmp20 = (int )__cil_tmp19;
  __cil_tmp21 = (int )buffer[6];
  __cil_tmp22 = __cil_tmp21 << 8;
  __cil_tmp23 = (signed char )__cil_tmp22;
  __cil_tmp24 = (int )__cil_tmp23;
  __cil_tmp25 = __cil_tmp24 | __cil_tmp20;
  pd->mode_offset = (__u8 )__cil_tmp25;
  {
  __cil_tmp26 = (unsigned int )size;
  if (__cil_tmp26 > 128U) {
    size = 128;
  } else {

  }
  }
  {
  __cil_tmp27 = (void *)(& buffer);
  init_cdrom_command(& cgc, __cil_tmp27, size, 2);
  cgc.sense = & sense;
  ret = pkt_mode_sense(pd, & cgc, 5, 0);
  }
  if (ret != 0) {
    {
    pkt_dump_sense(& cgc);
    }
    return (ret);
  } else {

  }
  __cil_tmp28 = pd->mode_offset;
  __cil_tmp29 = (unsigned long )__cil_tmp28;
  __cil_tmp30 = __cil_tmp29 + 8UL;
  __cil_tmp31 = (write_param_page *)(& buffer);
  wp = __cil_tmp31 + __cil_tmp30;
  wp->fp = pd->settings.fp;
  wp->track_mode = pd->settings.track_mode;
  wp->write_type = pd->settings.write_type;
  wp->data_block_type = pd->settings.block_mode;
  wp->multi_session = (unsigned char)0;
  {
  __cil_tmp32 = (unsigned char *)wp;
  __cil_tmp33 = __cil_tmp32 + 4UL;
  __cil_tmp34 = *__cil_tmp33;
  __cil_tmp35 = (unsigned int )__cil_tmp34;
  if (__cil_tmp35 == 8U) {
    wp->session_format = (__u8 )0U;
    wp->subhdr2 = (__u8 )32U;
  } else {
    {
    __cil_tmp36 = (unsigned char *)wp;
    __cil_tmp37 = __cil_tmp36 + 4UL;
    __cil_tmp38 = *__cil_tmp37;
    __cil_tmp39 = (unsigned int )__cil_tmp38;
    if (__cil_tmp39 == 10U) {
      wp->session_format = (__u8 )32U;
      wp->subhdr2 = (__u8 )8U;
    } else {
      {
      __cil_tmp40 = wp->data_block_type;
      __cil_tmp41 = (int )__cil_tmp40;
      printk("pktcdvd: write mode wrong %d\n", __cil_tmp41);
      }
      return (1);
    }
    }
  }
  }
  {
  __cil_tmp42 = pd->settings.size;
  __cil_tmp43 = __cil_tmp42 >> 2;
  wp->packet_size = __fswab32(__cil_tmp43);
  cgc.cmd[8] = (unsigned char )size;
  cgc.buflen = (unsigned int )cgc.cmd[8];
  ret = pkt_mode_select(pd, & cgc);
  }
  if (ret != 0) {
    {
    pkt_dump_sense(& cgc);
    }
    return (ret);
  } else {

  }
  {
  pkt_print_settings(pd);
  }
  return (0);
}
}
static int pkt_writable_track(struct pktcdvd_device *pd , track_information *ti )
{ __u16 __cil_tmp3 ;
  int __cil_tmp4 ;
  __u16 __cil_tmp5 ;
  int __cil_tmp6 ;
  unsigned char *__cil_tmp7 ;
  unsigned char *__cil_tmp8 ;
  unsigned char __cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  unsigned char *__cil_tmp11 ;
  unsigned char *__cil_tmp12 ;
  unsigned char __cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  unsigned char *__cil_tmp15 ;
  unsigned char *__cil_tmp16 ;
  unsigned char __cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  unsigned char *__cil_tmp19 ;
  unsigned char *__cil_tmp20 ;
  unsigned char __cil_tmp21 ;
  unsigned int __cil_tmp22 ;
  unsigned char *__cil_tmp23 ;
  unsigned char *__cil_tmp24 ;
  unsigned char __cil_tmp25 ;
  unsigned int __cil_tmp26 ;
  unsigned char *__cil_tmp27 ;
  unsigned char *__cil_tmp28 ;
  unsigned char __cil_tmp29 ;
  unsigned int __cil_tmp30 ;
  unsigned char *__cil_tmp31 ;
  unsigned char *__cil_tmp32 ;
  unsigned char __cil_tmp33 ;
  unsigned int __cil_tmp34 ;
  unsigned char *__cil_tmp35 ;
  unsigned char *__cil_tmp36 ;
  unsigned char __cil_tmp37 ;
  unsigned int __cil_tmp38 ;
  unsigned char __cil_tmp39 ;
  int __cil_tmp40 ;
  unsigned char __cil_tmp41 ;
  int __cil_tmp42 ;
  unsigned char __cil_tmp43 ;
  int __cil_tmp44 ;

  {
  {
  __cil_tmp3 = pd->mmc3_profile;
  __cil_tmp4 = (int )__cil_tmp3;
  if (__cil_tmp4 == 26) {
    goto case_26;
  } else {
    {
    __cil_tmp5 = pd->mmc3_profile;
    __cil_tmp6 = (int )__cil_tmp5;
    if (__cil_tmp6 == 18) {
      goto case_18;
    } else {
      goto switch_default;
      if (0) {
        case_26: ;
        case_18: ;
        return (1);
        switch_default: ;
        goto ldv_31154;
      } else {

      }
    }
    }
  }
  }
  ldv_31154: ;
  {
  __cil_tmp7 = (unsigned char *)ti;
  __cil_tmp8 = __cil_tmp7 + 6UL;
  __cil_tmp9 = *__cil_tmp8;
  __cil_tmp10 = (unsigned int )__cil_tmp9;
  if (__cil_tmp10 == 0U) {
    return (0);
  } else {
    {
    __cil_tmp11 = (unsigned char *)ti;
    __cil_tmp12 = __cil_tmp11 + 6UL;
    __cil_tmp13 = *__cil_tmp12;
    __cil_tmp14 = (unsigned int )__cil_tmp13;
    if (__cil_tmp14 == 0U) {
      return (0);
    } else {

    }
    }
  }
  }
  {
  __cil_tmp15 = (unsigned char *)ti;
  __cil_tmp16 = __cil_tmp15 + 6UL;
  __cil_tmp17 = *__cil_tmp16;
  __cil_tmp18 = (unsigned int )__cil_tmp17;
  if (__cil_tmp18 == 0U) {
    {
    __cil_tmp19 = (unsigned char *)ti;
    __cil_tmp20 = __cil_tmp19 + 6UL;
    __cil_tmp21 = *__cil_tmp20;
    __cil_tmp22 = (unsigned int )__cil_tmp21;
    if (__cil_tmp22 == 0U) {
      return (1);
    } else {

    }
    }
  } else {

  }
  }
  {
  __cil_tmp23 = (unsigned char *)ti;
  __cil_tmp24 = __cil_tmp23 + 6UL;
  __cil_tmp25 = *__cil_tmp24;
  __cil_tmp26 = (unsigned int )__cil_tmp25;
  if (__cil_tmp26 == 0U) {
    {
    __cil_tmp27 = (unsigned char *)ti;
    __cil_tmp28 = __cil_tmp27 + 6UL;
    __cil_tmp29 = *__cil_tmp28;
    __cil_tmp30 = (unsigned int )__cil_tmp29;
    if (__cil_tmp30 != 0U) {
      return (1);
    } else {

    }
    }
  } else {

  }
  }
  {
  __cil_tmp31 = (unsigned char *)ti;
  __cil_tmp32 = __cil_tmp31 + 6UL;
  __cil_tmp33 = *__cil_tmp32;
  __cil_tmp34 = (unsigned int )__cil_tmp33;
  if (__cil_tmp34 != 0U) {
    {
    __cil_tmp35 = (unsigned char *)ti;
    __cil_tmp36 = __cil_tmp35 + 6UL;
    __cil_tmp37 = *__cil_tmp36;
    __cil_tmp38 = (unsigned int )__cil_tmp37;
    if (__cil_tmp38 == 0U) {
      return (1);
    } else {

    }
    }
  } else {

  }
  }
  {
  __cil_tmp39 = ti->rt;
  __cil_tmp40 = (int )__cil_tmp39;
  __cil_tmp41 = ti->blank;
  __cil_tmp42 = (int )__cil_tmp41;
  __cil_tmp43 = ti->packet;
  __cil_tmp44 = (int )__cil_tmp43;
  printk("pktcdvd: bad state %d-%d-%d\n", __cil_tmp40, __cil_tmp42, __cil_tmp44);
  }
  return (0);
}
}
static int pkt_writable_disc(struct pktcdvd_device *pd , disc_information *di )
{ __u16 __cil_tmp3 ;
  int __cil_tmp4 ;
  __u16 __cil_tmp5 ;
  int __cil_tmp6 ;
  __u16 __cil_tmp7 ;
  int __cil_tmp8 ;
  __u16 __cil_tmp9 ;
  int __cil_tmp10 ;
  __u16 __cil_tmp11 ;
  int __cil_tmp12 ;
  __u8 __cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  __u8 __cil_tmp15 ;
  unsigned int __cil_tmp16 ;
  __u8 __cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  __u8 __cil_tmp19 ;
  int __cil_tmp20 ;
  unsigned char *__cil_tmp21 ;
  unsigned char *__cil_tmp22 ;
  unsigned char __cil_tmp23 ;
  unsigned int __cil_tmp24 ;
  unsigned char *__cil_tmp25 ;
  unsigned char *__cil_tmp26 ;
  unsigned char __cil_tmp27 ;
  unsigned int __cil_tmp28 ;

  {
  {
  __cil_tmp3 = pd->mmc3_profile;
  __cil_tmp4 = (int )__cil_tmp3;
  if (__cil_tmp4 == 10) {
    goto case_10;
  } else {
    {
    __cil_tmp5 = pd->mmc3_profile;
    __cil_tmp6 = (int )__cil_tmp5;
    if (__cil_tmp6 == 65535) {
      goto case_65535;
    } else {
      {
      __cil_tmp7 = pd->mmc3_profile;
      __cil_tmp8 = (int )__cil_tmp7;
      if (__cil_tmp8 == 26) {
        goto case_26;
      } else {
        {
        __cil_tmp9 = pd->mmc3_profile;
        __cil_tmp10 = (int )__cil_tmp9;
        if (__cil_tmp10 == 19) {
          goto case_19;
        } else {
          {
          __cil_tmp11 = pd->mmc3_profile;
          __cil_tmp12 = (int )__cil_tmp11;
          if (__cil_tmp12 == 18) {
            goto case_18;
          } else {
            goto switch_default;
            if (0) {
              case_10: ;
              case_65535: ;
              goto ldv_31161;
              case_26: ;
              case_19: ;
              case_18: ;
              return (1);
              switch_default: ;
              return (0);
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
  ldv_31161: ;
  {
  __cil_tmp13 = di->disc_type;
  __cil_tmp14 = (unsigned int )__cil_tmp13;
  if (__cil_tmp14 == 255U) {
    {
    printk("pktcdvd: Unknown disc. No track?\n");
    }
    return (0);
  } else {

  }
  }
  {
  __cil_tmp15 = di->disc_type;
  __cil_tmp16 = (unsigned int )__cil_tmp15;
  if (__cil_tmp16 != 32U) {
    {
    __cil_tmp17 = di->disc_type;
    __cil_tmp18 = (unsigned int )__cil_tmp17;
    if (__cil_tmp18 != 0U) {
      {
      __cil_tmp19 = di->disc_type;
      __cil_tmp20 = (int )__cil_tmp19;
      printk("pktcdvd: Wrong disc type (%x)\n", __cil_tmp20);
      }
      return (0);
    } else {

    }
    }
  } else {

  }
  }
  {
  __cil_tmp21 = (unsigned char *)di;
  __cil_tmp22 = __cil_tmp21 + 2UL;
  __cil_tmp23 = *__cil_tmp22;
  __cil_tmp24 = (unsigned int )__cil_tmp23;
  if (__cil_tmp24 == 0U) {
    {
    printk("pktcdvd: Disc not erasable\n");
    }
    return (0);
  } else {

  }
  }
  {
  __cil_tmp25 = (unsigned char *)di;
  __cil_tmp26 = __cil_tmp25 + 2UL;
  __cil_tmp27 = *__cil_tmp26;
  __cil_tmp28 = (unsigned int )__cil_tmp27;
  if (__cil_tmp28 == 8U) {
    {
    printk("pktcdvd: Can\'t write to last track (reserved)\n");
    }
    return (0);
  } else {

  }
  }
  return (1);
}
}
static int pkt_probe_settings(struct pktcdvd_device *pd )
{ struct packet_command cgc ;
  unsigned char buf[12U] ;
  disc_information di ;
  track_information ti ;
  int ret ;
  int track ;
  int tmp ;
  int tmp___0 ;
  __u32 tmp___1 ;
  __u32 tmp___2 ;
  __u32 tmp___3 ;
  __u32 tmp___4 ;
  void *__cil_tmp14 ;
  short __cil_tmp15 ;
  int __cil_tmp16 ;
  int __cil_tmp17 ;
  int __cil_tmp18 ;
  short __cil_tmp19 ;
  int __cil_tmp20 ;
  int __cil_tmp21 ;
  void *__cil_tmp22 ;
  void *__cil_tmp23 ;
  unsigned char *__cil_tmp24 ;
  unsigned char *__cil_tmp25 ;
  unsigned char __cil_tmp26 ;
  unsigned int __cil_tmp27 ;
  __u16 __cil_tmp28 ;
  int __cil_tmp29 ;
  __u16 __cil_tmp30 ;
  __u8 __cil_tmp31 ;
  __u32 __cil_tmp32 ;
  __u32 __cil_tmp33 ;
  __u32 __cil_tmp34 ;
  __u32 __cil_tmp35 ;
  __u32 __cil_tmp36 ;
  unsigned int __cil_tmp37 ;
  unsigned char *__cil_tmp38 ;
  unsigned char *__cil_tmp39 ;
  unsigned char __cil_tmp40 ;
  unsigned int __cil_tmp41 ;
  unsigned long *__cil_tmp42 ;
  unsigned long volatile *__cil_tmp43 ;
  unsigned char *__cil_tmp44 ;
  unsigned char *__cil_tmp45 ;
  unsigned char __cil_tmp46 ;
  unsigned int __cil_tmp47 ;
  unsigned long *__cil_tmp48 ;
  unsigned long volatile *__cil_tmp49 ;
  unsigned long *__cil_tmp50 ;
  unsigned long volatile *__cil_tmp51 ;
  int __cil_tmp52 ;
  int __cil_tmp53 ;

  {
  {
  __cil_tmp14 = (void *)(& buf);
  init_cdrom_command(& cgc, __cil_tmp14, 12, 2);
  cgc.cmd[0] = (unsigned char)70;
  cgc.cmd[8] = (unsigned char)8;
  ret = pkt_generic_packet(pd, & cgc);
  }
  if (ret == 0) {
    __cil_tmp15 = (short )buf[7];
    __cil_tmp16 = (int )__cil_tmp15;
    __cil_tmp17 = (int )buf[6];
    __cil_tmp18 = __cil_tmp17 << 8;
    __cil_tmp19 = (short )__cil_tmp18;
    __cil_tmp20 = (int )__cil_tmp19;
    __cil_tmp21 = __cil_tmp20 | __cil_tmp16;
    pd->mmc3_profile = (__u16 )__cil_tmp21;
  } else {
    pd->mmc3_profile = (__u16 )65535U;
  }
  {
  __cil_tmp22 = (void *)(& di);
  memset(__cil_tmp22, 0, 36UL);
  __cil_tmp23 = (void *)(& ti);
  memset(__cil_tmp23, 0, 32UL);
  ret = pkt_get_disc_info(pd, & di);
  }
  if (ret != 0) {
    {
    printk("failed get_disc\n");
    }
    return (ret);
  } else {

  }
  {
  tmp = pkt_writable_disc(pd, & di);
  }
  if (tmp == 0) {
    return (-30);
  } else {

  }
  {
  __cil_tmp24 = (unsigned char *)(& di);
  __cil_tmp25 = __cil_tmp24 + 2UL;
  __cil_tmp26 = *__cil_tmp25;
  __cil_tmp27 = (unsigned int )__cil_tmp26;
  if (__cil_tmp27 != 0U) {
    pd->type = (__u8 )2U;
  } else {
    pd->type = (__u8 )1U;
  }
  }
  {
  track = 1;
  __cil_tmp28 = (__u16 )track;
  __cil_tmp29 = (int )__cil_tmp28;
  __cil_tmp30 = (__u16 )__cil_tmp29;
  __cil_tmp31 = (__u8 )1;
  ret = pkt_get_track_info(pd, __cil_tmp30, __cil_tmp31, & ti);
  }
  if (ret != 0) {
    {
    printk("pktcdvd: failed get_track\n");
    }
    return (ret);
  } else {

  }
  {
  tmp___0 = pkt_writable_track(pd, & ti);
  }
  if (tmp___0 == 0) {
    {
    printk("pktcdvd: can\'t write to this track\n");
    }
    return (-30);
  } else {

  }
  {
  tmp___1 = __fswab32(ti.fixed_packet_size);
  pd->settings.size = tmp___1 << 2;
  }
  {
  __cil_tmp32 = pd->settings.size;
  if (__cil_tmp32 == 0U) {
    {
    printk("pktcdvd: detected zero packet size!\n");
    }
    return (-6);
  } else {

  }
  }
  {
  __cil_tmp33 = pd->settings.size;
  if (__cil_tmp33 > 512U) {
    {
    printk("pktcdvd: packet size is too big\n");
    }
    return (-30);
  } else {

  }
  }
  {
  pd->settings.fp = ti.fp;
  tmp___2 = __fswab32(ti.track_start);
  __cil_tmp34 = pd->settings.size;
  __cil_tmp35 = __cil_tmp34 - 1U;
  __cil_tmp36 = tmp___2 << 2;
  __cil_tmp37 = __cil_tmp36 & __cil_tmp35;
  pd->offset = (unsigned long )__cil_tmp37;
  }
  {
  __cil_tmp38 = (unsigned char *)(& ti);
  __cil_tmp39 = __cil_tmp38 + 7UL;
  __cil_tmp40 = *__cil_tmp39;
  __cil_tmp41 = (unsigned int )__cil_tmp40;
  if (__cil_tmp41 != 0U) {
    {
    tmp___3 = __fswab32(ti.next_writable);
    pd->nwa = tmp___3;
    __cil_tmp42 = & pd->flags;
    __cil_tmp43 = (unsigned long volatile *)__cil_tmp42;
    set_bit(2U, __cil_tmp43);
    }
  } else {

  }
  }
  {
  __cil_tmp44 = (unsigned char *)(& ti);
  __cil_tmp45 = __cil_tmp44 + 7UL;
  __cil_tmp46 = *__cil_tmp45;
  __cil_tmp47 = (unsigned int )__cil_tmp46;
  if (__cil_tmp47 != 0U) {
    {
    tmp___4 = __fswab32(ti.last_rec_address);
    pd->lra = tmp___4;
    __cil_tmp48 = & pd->flags;
    __cil_tmp49 = (unsigned long volatile *)__cil_tmp48;
    set_bit(3U, __cil_tmp49);
    }
  } else {
    {
    pd->lra = 4294967295U;
    __cil_tmp50 = & pd->flags;
    __cil_tmp51 = (unsigned long volatile *)__cil_tmp50;
    set_bit(3U, __cil_tmp51);
    }
  }
  }
  pd->settings.link_loss = (__u8 )7U;
  pd->settings.write_type = (__u8 )0U;
  pd->settings.track_mode = ti.track_mode;
  {
  __cil_tmp52 = (int )ti.data_mode;
  if (__cil_tmp52 == 1) {
    goto case_1;
  } else {
    {
    __cil_tmp53 = (int )ti.data_mode;
    if (__cil_tmp53 == 2) {
      goto case_2;
    } else {
      goto switch_default;
      if (0) {
        case_1:
        pd->settings.block_mode = (__u8 )8U;
        goto ldv_31176;
        case_2:
        pd->settings.block_mode = (__u8 )10U;
        goto ldv_31176;
        switch_default:
        {
        printk("pktcdvd: unknown data mode\n");
        }
        return (-30);
      } else {

      }
    }
    }
  }
  }
  ldv_31176: ;
  return (0);
}
}
static int pkt_write_caching(struct pktcdvd_device *pd , int set )
{ struct packet_command cgc ;
  struct request_sense sense ;
  unsigned char buf[64U] ;
  int ret ;
  int tmp ;
  void *__cil_tmp8 ;
  __u8 __cil_tmp9 ;
  int __cil_tmp10 ;
  int __cil_tmp11 ;
  signed char __cil_tmp12 ;
  int __cil_tmp13 ;
  int __cil_tmp14 ;
  signed char __cil_tmp15 ;
  int __cil_tmp16 ;
  int __cil_tmp17 ;
  int __cil_tmp18 ;
  signed char __cil_tmp19 ;
  int __cil_tmp20 ;
  int __cil_tmp21 ;
  unsigned char __cil_tmp22 ;
  unsigned int __cil_tmp23 ;
  unsigned int __cil_tmp24 ;
  char (*__cil_tmp25)[20U] ;
  char *__cil_tmp26 ;

  {
  {
  __cil_tmp8 = (void *)(& buf);
  init_cdrom_command(& cgc, __cil_tmp8, 64, 2);
  cgc.sense = & sense;
  __cil_tmp9 = pd->mode_offset;
  __cil_tmp10 = (int )__cil_tmp9;
  __cil_tmp11 = __cil_tmp10 + 12;
  cgc.buflen = (unsigned int )__cil_tmp11;
  cgc.quiet = 1;
  ret = pkt_mode_sense(pd, & cgc, 8, 0);
  }
  if (ret != 0) {
    return (ret);
  } else {

  }
  if (set != 0) {
    tmp = 4;
  } else {
    tmp = 0;
  }
  {
  __cil_tmp12 = (signed char )buf[(int )pd->mode_offset + 10];
  __cil_tmp13 = (int )__cil_tmp12;
  __cil_tmp14 = __cil_tmp13 | tmp;
  buf[(int )pd->mode_offset + 10] = (unsigned char )__cil_tmp14;
  __cil_tmp15 = (signed char )buf[1];
  __cil_tmp16 = (int )__cil_tmp15;
  __cil_tmp17 = (int )buf[0];
  __cil_tmp18 = __cil_tmp17 << 8;
  __cil_tmp19 = (signed char )__cil_tmp18;
  __cil_tmp20 = (int )__cil_tmp19;
  __cil_tmp21 = __cil_tmp20 | __cil_tmp16;
  __cil_tmp22 = (unsigned char )__cil_tmp21;
  __cil_tmp23 = (unsigned int )__cil_tmp22;
  __cil_tmp24 = __cil_tmp23 + 2U;
  cgc.cmd[8] = (unsigned char )__cil_tmp24;
  cgc.buflen = (unsigned int )cgc.cmd[8];
  ret = pkt_mode_select(pd, & cgc);
  }
  if (ret != 0) {
    {
    printk("pktcdvd: write caching control failed\n");
    pkt_dump_sense(& cgc);
    }
  } else
  if (ret == 0) {
    if (set != 0) {
      {
      __cil_tmp25 = & pd->name;
      __cil_tmp26 = (char *)__cil_tmp25;
      printk("pktcdvd: enabled write caching on %s\n", __cil_tmp26);
      }
    } else {

    }
  } else {

  }
  return (ret);
}
}
static int pkt_lock_door(struct pktcdvd_device *pd , int lockflag )
{ struct packet_command cgc ;
  int tmp ;
  void *__cil_tmp5 ;
  int __cil_tmp6 ;

  {
  {
  __cil_tmp5 = (void *)0;
  init_cdrom_command(& cgc, __cil_tmp5, 0, 3);
  cgc.cmd[0] = (unsigned char)30;
  __cil_tmp6 = lockflag != 0;
  cgc.cmd[4] = (unsigned char )__cil_tmp6;
  tmp = pkt_generic_packet(pd, & cgc);
  }
  return (tmp);
}
}
static int pkt_get_max_speed(struct pktcdvd_device *pd , unsigned int *write_speed )
{ struct packet_command cgc ;
  struct request_sense sense ;
  unsigned char buf[274U] ;
  unsigned char *cap_buf ;
  int ret ;
  int offset ;
  int num_spdb ;
  __u8 __cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  unsigned long __cil_tmp12 ;
  unsigned char *__cil_tmp13 ;
  void *__cil_tmp14 ;
  unsigned char *__cil_tmp15 ;
  unsigned char __cil_tmp16 ;
  int __cil_tmp17 ;
  __u8 __cil_tmp18 ;
  int __cil_tmp19 ;
  int __cil_tmp20 ;
  unsigned int __cil_tmp21 ;
  unsigned char *__cil_tmp22 ;
  unsigned char __cil_tmp23 ;
  unsigned int __cil_tmp24 ;
  unsigned char *__cil_tmp25 ;
  unsigned char __cil_tmp26 ;
  unsigned int __cil_tmp27 ;
  unsigned char *__cil_tmp28 ;
  unsigned char __cil_tmp29 ;
  int __cil_tmp30 ;
  unsigned char *__cil_tmp31 ;
  unsigned char __cil_tmp32 ;
  int __cil_tmp33 ;
  int __cil_tmp34 ;
  unsigned long __cil_tmp35 ;
  unsigned long __cil_tmp36 ;
  unsigned char *__cil_tmp37 ;
  unsigned char __cil_tmp38 ;
  int __cil_tmp39 ;
  unsigned long __cil_tmp40 ;
  unsigned char *__cil_tmp41 ;
  unsigned char __cil_tmp42 ;
  int __cil_tmp43 ;
  int __cil_tmp44 ;
  int __cil_tmp45 ;

  {
  {
  __cil_tmp10 = pd->mode_offset;
  __cil_tmp11 = (unsigned long )__cil_tmp10;
  __cil_tmp12 = __cil_tmp11 + 8UL;
  __cil_tmp13 = (unsigned char *)(& buf);
  cap_buf = __cil_tmp13 + __cil_tmp12;
  __cil_tmp14 = (void *)(& buf);
  init_cdrom_command(& cgc, __cil_tmp14, 274, 0);
  cgc.sense = & sense;
  ret = pkt_mode_sense(pd, & cgc, 42, 0);
  }
  if (ret != 0) {
    {
    __cil_tmp15 = cap_buf + 1UL;
    __cil_tmp16 = *__cil_tmp15;
    __cil_tmp17 = (int )__cil_tmp16;
    __cil_tmp18 = pd->mode_offset;
    __cil_tmp19 = (int )__cil_tmp18;
    __cil_tmp20 = __cil_tmp19 + __cil_tmp17;
    __cil_tmp21 = (unsigned int )__cil_tmp20;
    cgc.buflen = __cil_tmp21 + 10U;
    ret = pkt_mode_sense(pd, & cgc, 42, 0);
    }
    if (ret != 0) {
      {
      pkt_dump_sense(& cgc);
      }
      return (ret);
    } else {

    }
  } else {

  }
  offset = 20;
  {
  __cil_tmp22 = cap_buf + 1UL;
  __cil_tmp23 = *__cil_tmp22;
  __cil_tmp24 = (unsigned int )__cil_tmp23;
  if (__cil_tmp24 > 27U) {
    offset = 28;
  } else {

  }
  }
  {
  __cil_tmp25 = cap_buf + 1UL;
  __cil_tmp26 = *__cil_tmp25;
  __cil_tmp27 = (unsigned int )__cil_tmp26;
  if (__cil_tmp27 > 29U) {
    __cil_tmp28 = cap_buf + 31UL;
    __cil_tmp29 = *__cil_tmp28;
    __cil_tmp30 = (int )__cil_tmp29;
    __cil_tmp31 = cap_buf + 30UL;
    __cil_tmp32 = *__cil_tmp31;
    __cil_tmp33 = (int )__cil_tmp32;
    __cil_tmp34 = __cil_tmp33 << 8;
    num_spdb = __cil_tmp34 + __cil_tmp30;
    if (num_spdb > 0) {
      offset = 34;
    } else {

    }
  } else {

  }
  }
  __cil_tmp35 = (unsigned long )offset;
  __cil_tmp36 = __cil_tmp35 + 1UL;
  __cil_tmp37 = cap_buf + __cil_tmp36;
  __cil_tmp38 = *__cil_tmp37;
  __cil_tmp39 = (int )__cil_tmp38;
  __cil_tmp40 = (unsigned long )offset;
  __cil_tmp41 = cap_buf + __cil_tmp40;
  __cil_tmp42 = *__cil_tmp41;
  __cil_tmp43 = (int )__cil_tmp42;
  __cil_tmp44 = __cil_tmp43 << 8;
  __cil_tmp45 = __cil_tmp44 | __cil_tmp39;
  *write_speed = (unsigned int )__cil_tmp45;
  return (0);
}
}
static char clv_to_speed[16U] =
  { (char)0, (char)2, (char)4, (char)6,
        (char)8, (char)0, (char)0, (char)0,
        (char)0, (char)0, (char)0, (char)0,
        (char)0, (char)0, (char)0, (char)0};
static char hs_clv_to_speed[16U] =
  { (char)0, (char)2, (char)4, (char)6,
        (char)10, (char)0, (char)0, (char)0,
        (char)0, (char)0, (char)0, (char)0,
        (char)0, (char)0, (char)0, (char)0};
static char us_clv_to_speed[16U] =
  { (char)0, (char)2, (char)4, (char)8,
        (char)0, (char)0, (char)16, (char)0,
        (char)24, (char)32, (char)40, (char)48,
        (char)0, (char)0, (char)0, (char)0};
static int pkt_media_speed(struct pktcdvd_device *pd , unsigned int *speed )
{ struct packet_command cgc ;
  struct request_sense sense ;
  unsigned char buf[64U] ;
  unsigned int size ;
  unsigned int st ;
  unsigned int sp ;
  int ret ;
  void *__cil_tmp10 ;
  unsigned int __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  void *__cil_tmp15 ;
  int __cil_tmp16 ;
  int __cil_tmp17 ;
  int __cil_tmp18 ;
  int __cil_tmp19 ;
  int __cil_tmp20 ;
  int __cil_tmp21 ;
  int __cil_tmp22 ;
  unsigned int __cil_tmp23 ;
  unsigned int __cil_tmp24 ;
  int __cil_tmp25 ;
  int __cil_tmp26 ;
  int __cil_tmp27 ;
  unsigned int __cil_tmp28 ;
  unsigned int __cil_tmp29 ;

  {
  {
  __cil_tmp10 = (void *)(& buf);
  init_cdrom_command(& cgc, __cil_tmp10, 2, 2);
  cgc.sense = & sense;
  cgc.cmd[0] = (unsigned char)67;
  cgc.cmd[1] = (unsigned char)2;
  cgc.cmd[2] = (unsigned char)4;
  cgc.cmd[8] = (unsigned char)2;
  ret = pkt_generic_packet(pd, & cgc);
  }
  if (ret != 0) {
    {
    pkt_dump_sense(& cgc);
    }
    return (ret);
  } else {

  }
  __cil_tmp11 = (unsigned int )buf[1];
  __cil_tmp12 = (unsigned int )buf[0];
  __cil_tmp13 = __cil_tmp12 << 8;
  __cil_tmp14 = __cil_tmp13 + __cil_tmp11;
  size = __cil_tmp14 + 2U;
  if (size > 64U) {
    size = 64U;
  } else {

  }
  {
  __cil_tmp15 = (void *)(& buf);
  __cil_tmp16 = (int )size;
  init_cdrom_command(& cgc, __cil_tmp15, __cil_tmp16, 2);
  cgc.sense = & sense;
  cgc.cmd[0] = (unsigned char)67;
  cgc.cmd[1] = (unsigned char)2;
  cgc.cmd[2] = (unsigned char)4;
  cgc.cmd[8] = (unsigned char )size;
  ret = pkt_generic_packet(pd, & cgc);
  }
  if (ret != 0) {
    {
    pkt_dump_sense(& cgc);
    }
    return (ret);
  } else {

  }
  {
  __cil_tmp17 = (int )buf[6];
  __cil_tmp18 = __cil_tmp17 & 64;
  if (__cil_tmp18 == 0) {
    {
    printk("pktcdvd: Disc type is not CD-RW\n");
    }
    return (1);
  } else {

  }
  }
  {
  __cil_tmp19 = (int )buf[6];
  __cil_tmp20 = __cil_tmp19 & 4;
  if (__cil_tmp20 == 0) {
    {
    printk("pktcdvd: A1 values on media are not valid, maybe not CDRW?\n");
    }
    return (1);
  } else {

  }
  }
  __cil_tmp21 = (int )buf[6];
  __cil_tmp22 = __cil_tmp21 >> 3;
  __cil_tmp23 = (unsigned int )__cil_tmp22;
  st = __cil_tmp23 & 7U;
  __cil_tmp24 = (unsigned int )buf[16];
  sp = __cil_tmp24 & 15U;
  {
  __cil_tmp25 = (int )st;
  if (__cil_tmp25 == 0) {
    goto case_0;
  } else {
    {
    __cil_tmp26 = (int )st;
    if (__cil_tmp26 == 1) {
      goto case_1;
    } else {
      {
      __cil_tmp27 = (int )st;
      if (__cil_tmp27 == 2) {
        goto case_2;
      } else {
        goto switch_default;
        if (0) {
          case_0:
          *speed = (unsigned int )clv_to_speed[sp];
          goto ldv_31218;
          case_1:
          *speed = (unsigned int )hs_clv_to_speed[sp];
          goto ldv_31218;
          case_2:
          *speed = (unsigned int )us_clv_to_speed[sp];
          goto ldv_31218;
          switch_default:
          {
          printk("pktcdvd: Unknown disc sub-type %d\n", st);
          }
          return (1);
        } else {

        }
      }
      }
    }
    }
  }
  }
  ldv_31218: ;
  {
  __cil_tmp28 = *speed;
  if (__cil_tmp28 != 0U) {
    {
    __cil_tmp29 = *speed;
    printk("pktcdvd: Max. media speed: %d\n", __cil_tmp29);
    }
    return (0);
  } else {
    {
    printk("pktcdvd: Unknown speed %d for sub-type %d\n", sp, st);
    }
    return (1);
  }
  }
}
}
static int pkt_perform_opc(struct pktcdvd_device *pd )
{ struct packet_command cgc ;
  struct request_sense sense ;
  int ret ;
  void *__cil_tmp5 ;

  {
  {
  __cil_tmp5 = (void *)0;
  init_cdrom_command(& cgc, __cil_tmp5, 0, 3);
  cgc.sense = & sense;
  cgc.timeout = 15000;
  cgc.cmd[0] = (unsigned char)84;
  cgc.cmd[1] = (unsigned char)1;
  ret = pkt_generic_packet(pd, & cgc);
  }
  if (ret != 0) {
    {
    pkt_dump_sense(& cgc);
    }
  } else {

  }
  return (ret);
}
}
static int pkt_open_write(struct pktcdvd_device *pd )
{ int ret ;
  unsigned int write_speed ;
  unsigned int media_write_speed ;
  unsigned int read_speed ;
  unsigned int _min1 ;
  unsigned int _min2 ;
  unsigned int tmp ;
  char (*__cil_tmp9)[20U] ;
  char *__cil_tmp10 ;
  __u16 __cil_tmp11 ;
  int __cil_tmp12 ;
  __u16 __cil_tmp13 ;
  int __cil_tmp14 ;
  __u16 __cil_tmp15 ;
  int __cil_tmp16 ;
  unsigned int __cil_tmp17 ;
  char (*__cil_tmp18)[20U] ;
  char *__cil_tmp19 ;
  char (*__cil_tmp20)[20U] ;
  char *__cil_tmp21 ;

  {
  {
  ret = pkt_probe_settings(pd);
  }
  if (ret != 0) {
    return (ret);
  } else {

  }
  {
  ret = pkt_set_write_settings(pd);
  }
  if (ret != 0) {
    {
    __cil_tmp9 = & pd->name;
    __cil_tmp10 = (char *)__cil_tmp9;
    printk("<5>pktcdvd: %s failed saving write settings\n", __cil_tmp10);
    }
    return (-5);
  } else {

  }
  {
  pkt_write_caching(pd, 1);
  ret = pkt_get_max_speed(pd, & write_speed);
  }
  if (ret != 0) {
    write_speed = 2832U;
  } else {

  }
  {
  __cil_tmp11 = pd->mmc3_profile;
  __cil_tmp12 = (int )__cil_tmp11;
  if (__cil_tmp12 == 19) {
    goto case_19;
  } else {
    {
    __cil_tmp13 = pd->mmc3_profile;
    __cil_tmp14 = (int )__cil_tmp13;
    if (__cil_tmp14 == 26) {
      goto case_26;
    } else {
      {
      __cil_tmp15 = pd->mmc3_profile;
      __cil_tmp16 = (int )__cil_tmp15;
      if (__cil_tmp16 == 18) {
        goto case_18;
      } else {
        goto switch_default;
        if (0) {
          case_19: ;
          case_26: ;
          case_18:
          {
          printk("<5>pktcdvd: write speed %ukB/s\n", write_speed);
          }
          goto ldv_31238;
          switch_default:
          {
          ret = pkt_media_speed(pd, & media_write_speed);
          }
          if (ret != 0) {
            media_write_speed = 16U;
          } else {

          }
          _min1 = write_speed;
          _min2 = media_write_speed * 177U;
          if (_min1 < _min2) {
            tmp = _min1;
          } else {
            tmp = _min2;
          }
          {
          write_speed = tmp;
          __cil_tmp17 = write_speed / 176U;
          printk("<5>pktcdvd: write speed %ux\n", __cil_tmp17);
          }
          goto ldv_31238;
        } else {

        }
      }
      }
    }
    }
  }
  }
  ldv_31238:
  {
  read_speed = write_speed;
  ret = pkt_set_speed(pd, write_speed, read_speed);
  }
  if (ret != 0) {
    {
    __cil_tmp18 = & pd->name;
    __cil_tmp19 = (char *)__cil_tmp18;
    printk("<5>pktcdvd: %s couldn\'t set write speed\n", __cil_tmp19);
    }
    return (-5);
  } else {

  }
  {
  pd->write_speed = (int )write_speed;
  pd->read_speed = (int )read_speed;
  ret = pkt_perform_opc(pd);
  }
  if (ret != 0) {
    {
    __cil_tmp20 = & pd->name;
    __cil_tmp21 = (char *)__cil_tmp20;
    printk("<5>pktcdvd: %s Optimum Power Calibration failed\n", __cil_tmp21);
    }
  } else {

  }
  return (0);
}
}
static int pkt_open_dev(struct pktcdvd_device *pd , fmode_t write )
{ int ret ;
  long lba ;
  struct request_queue *q ;
  int tmp ;
  struct block_device *__cil_tmp7 ;
  dev_t __cil_tmp8 ;
  struct block_device *__cil_tmp9 ;
  void *__cil_tmp10 ;
  struct gendisk *__cil_tmp11 ;
  long __cil_tmp12 ;
  sector_t __cil_tmp13 ;
  struct block_device *__cil_tmp14 ;
  struct gendisk *__cil_tmp15 ;
  long __cil_tmp16 ;
  sector_t __cil_tmp17 ;
  struct block_device *__cil_tmp18 ;
  long long __cil_tmp19 ;
  long long __cil_tmp20 ;
  struct block_device *__cil_tmp21 ;
  spinlock_t *__cil_tmp22 ;
  __u32 __cil_tmp23 ;
  spinlock_t *__cil_tmp24 ;
  unsigned long *__cil_tmp25 ;
  unsigned long volatile *__cil_tmp26 ;
  unsigned long *__cil_tmp27 ;
  unsigned long volatile *__cil_tmp28 ;
  long __cil_tmp29 ;
  struct block_device *__cil_tmp30 ;

  {
  {
  __cil_tmp7 = pd->bdev;
  __cil_tmp8 = __cil_tmp7->bd_dev;
  bdget(__cil_tmp8);
  __cil_tmp9 = pd->bdev;
  __cil_tmp10 = (void *)pd;
  ret = blkdev_get(__cil_tmp9, 129U, __cil_tmp10);
  }
  if (ret != 0) {
    goto out;
  } else {

  }
  {
  ret = pkt_get_last_written(pd, & lba);
  }
  if (ret != 0) {
    {
    printk("pktcdvd: pkt_get_last_written failed\n");
    }
    goto out_putdev;
  } else {

  }
  {
  __cil_tmp11 = pd->disk;
  __cil_tmp12 = lba << 2;
  __cil_tmp13 = (sector_t )__cil_tmp12;
  set_capacity(__cil_tmp11, __cil_tmp13);
  __cil_tmp14 = pd->bdev;
  __cil_tmp15 = __cil_tmp14->bd_disk;
  __cil_tmp16 = lba << 2;
  __cil_tmp17 = (sector_t )__cil_tmp16;
  set_capacity(__cil_tmp15, __cil_tmp17);
  __cil_tmp18 = pd->bdev;
  __cil_tmp19 = (long long )lba;
  __cil_tmp20 = __cil_tmp19 << 11;
  bd_set_size(__cil_tmp18, __cil_tmp20);
  __cil_tmp21 = pd->bdev;
  q = bdev_get_queue(__cil_tmp21);
  }
  if (write != 0U) {
    {
    ret = pkt_open_write(pd);
    }
    if (ret != 0) {
      goto out_putdev;
    } else {

    }
    {
    __cil_tmp22 = q->queue_lock;
    spin_lock_irq(__cil_tmp22);
    __cil_tmp23 = pd->settings.size;
    blk_queue_max_hw_sectors(q, __cil_tmp23);
    __cil_tmp24 = q->queue_lock;
    spin_unlock_irq(__cil_tmp24);
    __cil_tmp25 = & pd->flags;
    __cil_tmp26 = (unsigned long volatile *)__cil_tmp25;
    set_bit(1U, __cil_tmp26);
    }
  } else {
    {
    pkt_set_speed(pd, 65535U, 65535U);
    __cil_tmp27 = & pd->flags;
    __cil_tmp28 = (unsigned long volatile *)__cil_tmp27;
    clear_bit(1, __cil_tmp28);
    }
  }
  {
  ret = pkt_set_segment_merging(pd, q);
  }
  if (ret != 0) {
    goto out_putdev;
  } else {

  }
  if (write != 0U) {
    {
    tmp = pkt_grow_pktlist(pd, 8);
    }
    if (tmp == 0) {
      {
      printk("pktcdvd: not enough memory for buffers\n");
      ret = -12;
      }
      goto out_putdev;
    } else {

    }
    {
    __cil_tmp29 = lba << 1;
    printk("pktcdvd: %lukB available on disc\n", __cil_tmp29);
    }
  } else {

  }
  return (0);
  out_putdev:
  {
  __cil_tmp30 = pd->bdev;
  blkdev_put(__cil_tmp30, 129U);
  }
  out: ;
  return (ret);
}
}
static void pkt_release_dev(struct pktcdvd_device *pd , int flush )
{ int tmp ;
  char (*__cil_tmp4)[20U] ;
  char *__cil_tmp5 ;
  struct block_device *__cil_tmp6 ;

  {
  if (flush != 0) {
    {
    tmp = pkt_flush_cache(pd);
    }
    if (tmp != 0) {
      {
      __cil_tmp4 = & pd->name;
      __cil_tmp5 = (char *)__cil_tmp4;
      printk("<5>pktcdvd: %s not flushing cache\n", __cil_tmp5);
      }
    } else {

    }
  } else {

  }
  {
  pkt_lock_door(pd, 0);
  pkt_set_speed(pd, 65535U, 65535U);
  __cil_tmp6 = pd->bdev;
  blkdev_put(__cil_tmp6, 129U);
  pkt_shrink_pktlist(pd);
  }
  return;
}
}
static struct pktcdvd_device *pkt_find_dev_from_minor(unsigned int dev_minor )
{

  {
  if (dev_minor > 7U) {
    return ((struct pktcdvd_device *)0);
  } else {

  }
  return (pkt_devs[dev_minor]);
}
}
static int pkt_open(struct block_device *bdev , fmode_t mode )
{ struct pktcdvd_device *pd ;
  int ret ;
  long tmp ;
  int tmp___0 ;
  dev_t __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  struct pktcdvd_device *__cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  int __cil_tmp12 ;
  int __cil_tmp13 ;
  long __cil_tmp14 ;
  int __cil_tmp15 ;
  int __cil_tmp16 ;
  unsigned int __cil_tmp17 ;
  unsigned long *__cil_tmp18 ;
  unsigned long const volatile *__cil_tmp19 ;
  unsigned int __cil_tmp20 ;
  int __cil_tmp21 ;

  {
  {
  pd = (struct pktcdvd_device *)0;
  mutex_lock_nested(& pktcdvd_mutex, 0U);
  mutex_lock_nested(& ctl_mutex, 0U);
  __cil_tmp7 = bdev->bd_dev;
  __cil_tmp8 = __cil_tmp7 & 1048575U;
  pd = pkt_find_dev_from_minor(__cil_tmp8);
  }
  {
  __cil_tmp9 = (struct pktcdvd_device *)0;
  __cil_tmp10 = (unsigned long )__cil_tmp9;
  __cil_tmp11 = (unsigned long )pd;
  if (__cil_tmp11 == __cil_tmp10) {
    ret = -19;
    goto out;
  } else {

  }
  }
  {
  __cil_tmp12 = pd->refcnt;
  __cil_tmp13 = __cil_tmp12 < 0;
  __cil_tmp14 = (long )__cil_tmp13;
  tmp = __builtin_expect(__cil_tmp14, 0L);
  }
  if (tmp != 0L) {
    __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/block/pktcdvd.ko--X--unsafelinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/block/pktcdvd.c.p"),
                         "i" (2392), "i" (12UL));
    ldv_31266: ;
    goto ldv_31266;
  } else {

  }
  __cil_tmp15 = pd->refcnt;
  pd->refcnt = __cil_tmp15 + 1;
  {
  __cil_tmp16 = pd->refcnt;
  if (__cil_tmp16 > 1) {
    {
    __cil_tmp17 = mode & 2U;
    if (__cil_tmp17 != 0U) {
      {
      __cil_tmp18 = & pd->flags;
      __cil_tmp19 = (unsigned long const volatile *)__cil_tmp18;
      tmp___0 = constant_test_bit(1U, __cil_tmp19);
      }
      if (tmp___0 == 0) {
        ret = -16;
        goto out_dec;
      } else {
        goto _L;
      }
    } else {
      _L:
      {
      __cil_tmp20 = mode & 2U;
      ret = pkt_open_dev(pd, __cil_tmp20);
      }
      if (ret != 0) {
        goto out_dec;
      } else {

      }
      {
      set_blocksize(bdev, 2048);
      }
    }
    }
  } else {

  }
  }
  {
  mutex_unlock(& ctl_mutex);
  mutex_unlock(& pktcdvd_mutex);
  }
  return (0);
  out_dec:
  __cil_tmp21 = pd->refcnt;
  pd->refcnt = __cil_tmp21 - 1;
  out:
  {
  mutex_unlock(& ctl_mutex);
  mutex_unlock(& pktcdvd_mutex);
  }
  return (ret);
}
}
static int pkt_close(struct gendisk *disk , fmode_t mode )
{ struct pktcdvd_device *pd ;
  int ret ;
  long tmp ;
  int flush ;
  int tmp___0 ;
  void *__cil_tmp8 ;
  int __cil_tmp9 ;
  int __cil_tmp10 ;
  int __cil_tmp11 ;
  long __cil_tmp12 ;
  int __cil_tmp13 ;
  unsigned long *__cil_tmp14 ;
  unsigned long const volatile *__cil_tmp15 ;

  {
  {
  __cil_tmp8 = disk->private_data;
  pd = (struct pktcdvd_device *)__cil_tmp8;
  ret = 0;
  mutex_lock_nested(& pktcdvd_mutex, 0U);
  mutex_lock_nested(& ctl_mutex, 0U);
  __cil_tmp9 = pd->refcnt;
  pd->refcnt = __cil_tmp9 - 1;
  __cil_tmp10 = pd->refcnt;
  __cil_tmp11 = __cil_tmp10 < 0;
  __cil_tmp12 = (long )__cil_tmp11;
  tmp = __builtin_expect(__cil_tmp12, 0L);
  }
  if (tmp != 0L) {
    __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/block/pktcdvd.ko--X--unsafelinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/block/pktcdvd.c.p"),
                         "i" (2433), "i" (12UL));
    ldv_31274: ;
    goto ldv_31274;
  } else {

  }
  {
  __cil_tmp13 = pd->refcnt;
  if (__cil_tmp13 == 0) {
    {
    __cil_tmp14 = & pd->flags;
    __cil_tmp15 = (unsigned long const volatile *)__cil_tmp14;
    tmp___0 = constant_test_bit(1U, __cil_tmp15);
    flush = tmp___0;
    pkt_release_dev(pd, flush);
    }
  } else {

  }
  }
  {
  mutex_unlock(& ctl_mutex);
  mutex_unlock(& pktcdvd_mutex);
  }
  return (ret);
}
}
static void pkt_end_io_read_cloned(struct bio *bio , int err )
{ struct packet_stacked_data *psd ;
  struct pktcdvd_device *pd ;
  void *__cil_tmp5 ;
  struct bio *__cil_tmp6 ;
  void *__cil_tmp7 ;

  {
  {
  __cil_tmp5 = bio->bi_private;
  psd = (struct packet_stacked_data *)__cil_tmp5;
  pd = psd->pd;
  bio_put(bio);
  __cil_tmp6 = psd->bio;
  bio_endio(__cil_tmp6, err);
  __cil_tmp7 = (void *)psd;
  mempool_free(__cil_tmp7, psd_pool);
  pkt_bio_finished(pd);
  }
  return;
}
}
static int pkt_make_request(struct request_queue *q , struct bio *bio )
{ struct pktcdvd_device *pd ;
  char b[32U] ;
  sector_t zone ;
  struct packet_data *pkt ;
  int was_empty ;
  int blocked_bio ;
  struct pkt_rb_node *node ;
  char const *tmp ;
  struct bio *cloned_bio ;
  struct bio *tmp___0 ;
  struct packet_stacked_data *psd ;
  void *tmp___1 ;
  int tmp___2 ;
  struct bio_pair *bp ;
  sector_t last_zone ;
  int first_sectors ;
  long tmp___3 ;
  long tmp___4 ;
  struct list_head const *__mptr ;
  struct list_head const *__mptr___0 ;
  void *tmp___5 ;
  long tmp___6 ;
  int tmp___7 ;
  void *__cil_tmp26 ;
  struct pktcdvd_device *__cil_tmp27 ;
  unsigned long __cil_tmp28 ;
  unsigned long __cil_tmp29 ;
  struct block_device *__cil_tmp30 ;
  char *__cil_tmp31 ;
  unsigned long __cil_tmp32 ;
  unsigned long __cil_tmp33 ;
  unsigned int __cil_tmp34 ;
  unsigned int __cil_tmp35 ;
  unsigned long __cil_tmp36 ;
  unsigned long __cil_tmp37 ;
  unsigned long *__cil_tmp38 ;
  unsigned long const volatile *__cil_tmp39 ;
  char (*__cil_tmp40)[20U] ;
  char *__cil_tmp41 ;
  sector_t __cil_tmp42 ;
  unsigned long long __cil_tmp43 ;
  unsigned int __cil_tmp44 ;
  unsigned int __cil_tmp45 ;
  unsigned int __cil_tmp46 ;
  __u32 __cil_tmp47 ;
  __u32 __cil_tmp48 ;
  unsigned long __cil_tmp49 ;
  unsigned long __cil_tmp50 ;
  sector_t __cil_tmp51 ;
  sector_t __cil_tmp52 ;
  __u32 __cil_tmp53 ;
  __u32 __cil_tmp54 ;
  unsigned long __cil_tmp55 ;
  unsigned long __cil_tmp56 ;
  unsigned int __cil_tmp57 ;
  unsigned int __cil_tmp58 ;
  sector_t __cil_tmp59 ;
  sector_t __cil_tmp60 ;
  sector_t __cil_tmp61 ;
  sector_t __cil_tmp62 ;
  sector_t __cil_tmp63 ;
  __u32 __cil_tmp64 ;
  sector_t __cil_tmp65 ;
  sector_t __cil_tmp66 ;
  int __cil_tmp67 ;
  long __cil_tmp68 ;
  sector_t __cil_tmp69 ;
  unsigned int __cil_tmp70 ;
  unsigned int __cil_tmp71 ;
  unsigned int __cil_tmp72 ;
  struct bio_pair *__cil_tmp73 ;
  unsigned long __cil_tmp74 ;
  unsigned long __cil_tmp75 ;
  int __cil_tmp76 ;
  long __cil_tmp77 ;
  struct bio *__cil_tmp78 ;
  struct bio *__cil_tmp79 ;
  spinlock_t *__cil_tmp80 ;
  struct list_head *__cil_tmp81 ;
  sector_t __cil_tmp82 ;
  spinlock_t *__cil_tmp83 ;
  enum packet_data_state __cil_tmp84 ;
  unsigned int __cil_tmp85 ;
  enum packet_data_state __cil_tmp86 ;
  unsigned int __cil_tmp87 ;
  struct bio_list *__cil_tmp88 ;
  unsigned int __cil_tmp89 ;
  unsigned int __cil_tmp90 ;
  int __cil_tmp91 ;
  unsigned int __cil_tmp92 ;
  unsigned int __cil_tmp93 ;
  int __cil_tmp94 ;
  int __cil_tmp95 ;
  enum packet_data_state __cil_tmp96 ;
  unsigned int __cil_tmp97 ;
  atomic_t *__cil_tmp98 ;
  wait_queue_head_t *__cil_tmp99 ;
  void *__cil_tmp100 ;
  spinlock_t *__cil_tmp101 ;
  spinlock_t *__cil_tmp102 ;
  spinlock_t *__cil_tmp103 ;
  struct list_head *__cil_tmp104 ;
  struct list_head *__cil_tmp105 ;
  unsigned long __cil_tmp106 ;
  struct list_head *__cil_tmp107 ;
  unsigned long __cil_tmp108 ;
  spinlock_t *__cil_tmp109 ;
  spinlock_t *__cil_tmp110 ;
  int __cil_tmp111 ;
  int __cil_tmp112 ;
  int __cil_tmp113 ;
  struct backing_dev_info *__cil_tmp114 ;
  spinlock_t *__cil_tmp115 ;
  spinlock_t *__cil_tmp116 ;
  int __cil_tmp117 ;
  int __cil_tmp118 ;
  spinlock_t *__cil_tmp119 ;
  mempool_t *__cil_tmp120 ;
  spinlock_t *__cil_tmp121 ;
  int __cil_tmp122 ;
  int __cil_tmp123 ;
  long __cil_tmp124 ;
  int __cil_tmp125 ;
  spinlock_t *__cil_tmp126 ;
  atomic_t *__cil_tmp127 ;
  wait_queue_head_t *__cil_tmp128 ;
  void *__cil_tmp129 ;
  struct list_head *__cil_tmp130 ;
  struct list_head const *__cil_tmp131 ;
  wait_queue_head_t *__cil_tmp132 ;
  void *__cil_tmp133 ;

  {
  __cil_tmp26 = q->queuedata;
  pd = (struct pktcdvd_device *)__cil_tmp26;
  {
  __cil_tmp27 = (struct pktcdvd_device *)0;
  __cil_tmp28 = (unsigned long )__cil_tmp27;
  __cil_tmp29 = (unsigned long )pd;
  if (__cil_tmp29 == __cil_tmp28) {
    {
    __cil_tmp30 = bio->bi_bdev;
    __cil_tmp31 = (char *)(& b);
    tmp = bdevname(__cil_tmp30, __cil_tmp31);
    printk("pktcdvd: %s incorrect request queue\n", tmp);
    }
    goto end_io;
  } else {

  }
  }
  {
  __cil_tmp32 = bio->bi_rw;
  __cil_tmp33 = __cil_tmp32 & 1UL;
  if (__cil_tmp33 == 0UL) {
    {
    tmp___0 = bio_clone(bio, 16U);
    cloned_bio = tmp___0;
    tmp___1 = mempool_alloc(psd_pool, 16U);
    psd = (struct packet_stacked_data *)tmp___1;
    psd->pd = pd;
    psd->bio = bio;
    cloned_bio->bi_bdev = pd->bdev;
    cloned_bio->bi_private = (void *)psd;
    cloned_bio->bi_end_io = & pkt_end_io_read_cloned;
    __cil_tmp34 = bio->bi_size;
    __cil_tmp35 = __cil_tmp34 >> 9;
    __cil_tmp36 = (unsigned long )__cil_tmp35;
    __cil_tmp37 = pd->stats.secs_r;
    pd->stats.secs_r = __cil_tmp37 + __cil_tmp36;
    pkt_queue_bio(pd, cloned_bio);
    }
    return (0);
  } else {

  }
  }
  {
  __cil_tmp38 = & pd->flags;
  __cil_tmp39 = (unsigned long const volatile *)__cil_tmp38;
  tmp___2 = constant_test_bit(1U, __cil_tmp39);
  }
  if (tmp___2 == 0) {
    {
    __cil_tmp40 = & pd->name;
    __cil_tmp41 = (char *)__cil_tmp40;
    __cil_tmp42 = bio->bi_sector;
    __cil_tmp43 = (unsigned long long )__cil_tmp42;
    printk("pktcdvd: WRITE for ro device %s (%llu)\n", __cil_tmp41, __cil_tmp43);
    }
    goto end_io;
  } else {

  }
  {
  __cil_tmp44 = bio->bi_size;
  if (__cil_tmp44 == 0U) {
    {
    printk("pktcdvd: wrong bio size\n");
    }
    goto end_io;
  } else {
    {
    __cil_tmp45 = bio->bi_size;
    __cil_tmp46 = __cil_tmp45 & 2047U;
    if (__cil_tmp46 != 0U) {
      {
      printk("pktcdvd: wrong bio size\n");
      }
      goto end_io;
    } else {

    }
    }
  }
  }
  {
  blk_queue_bounce(q, & bio);
  __cil_tmp47 = pd->settings.size;
  __cil_tmp48 = - __cil_tmp47;
  __cil_tmp49 = (unsigned long )__cil_tmp48;
  __cil_tmp50 = pd->offset;
  __cil_tmp51 = bio->bi_sector;
  __cil_tmp52 = __cil_tmp51 + __cil_tmp50;
  zone = __cil_tmp52 & __cil_tmp49;
  __cil_tmp53 = pd->settings.size;
  __cil_tmp54 = - __cil_tmp53;
  __cil_tmp55 = (unsigned long )__cil_tmp54;
  __cil_tmp56 = pd->offset;
  __cil_tmp57 = bio->bi_size;
  __cil_tmp58 = __cil_tmp57 >> 9;
  __cil_tmp59 = (sector_t )__cil_tmp58;
  __cil_tmp60 = bio->bi_sector;
  __cil_tmp61 = __cil_tmp60 + __cil_tmp59;
  __cil_tmp62 = __cil_tmp61 + __cil_tmp56;
  __cil_tmp63 = __cil_tmp62 - 1UL;
  last_zone = __cil_tmp63 & __cil_tmp55;
  }
  if (last_zone != zone) {
    {
    __cil_tmp64 = pd->settings.size;
    __cil_tmp65 = (sector_t )__cil_tmp64;
    __cil_tmp66 = __cil_tmp65 + zone;
    __cil_tmp67 = __cil_tmp66 != last_zone;
    __cil_tmp68 = (long )__cil_tmp67;
    tmp___3 = __builtin_expect(__cil_tmp68, 0L);
    }
    if (tmp___3 != 0L) {
      __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/block/pktcdvd.ko--X--unsafelinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/block/pktcdvd.c.p"),
                           "i" (2513), "i" (12UL));
      ldv_31299: ;
      goto ldv_31299;
    } else {

    }
    {
    __cil_tmp69 = bio->bi_sector;
    __cil_tmp70 = (unsigned int )__cil_tmp69;
    __cil_tmp71 = (unsigned int )last_zone;
    __cil_tmp72 = __cil_tmp71 - __cil_tmp70;
    first_sectors = (int )__cil_tmp72;
    bp = bio_split(bio, first_sectors);
    __cil_tmp73 = (struct bio_pair *)0;
    __cil_tmp74 = (unsigned long )__cil_tmp73;
    __cil_tmp75 = (unsigned long )bp;
    __cil_tmp76 = __cil_tmp75 == __cil_tmp74;
    __cil_tmp77 = (long )__cil_tmp76;
    tmp___4 = __builtin_expect(__cil_tmp77, 0L);
    }
    if (tmp___4 != 0L) {
      __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/block/pktcdvd.ko--X--unsafelinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/block/pktcdvd.c.p"),
                           "i" (2516), "i" (12UL));
      ldv_31300: ;
      goto ldv_31300;
    } else {

    }
    {
    __cil_tmp78 = & bp->bio1;
    pkt_make_request(q, __cil_tmp78);
    __cil_tmp79 = & bp->bio2;
    pkt_make_request(q, __cil_tmp79);
    bio_pair_release(bp);
    }
    return (0);
  } else {

  }
  {
  __cil_tmp80 = & pd->cdrw.active_list_lock;
  spin_lock(__cil_tmp80);
  blocked_bio = 0;
  __cil_tmp81 = pd->cdrw.pkt_active_list.next;
  __mptr = (struct list_head const *)__cil_tmp81;
  pkt = (struct packet_data *)__mptr;
  }
  goto ldv_31306;
  ldv_31305: ;
  {
  __cil_tmp82 = pkt->sector;
  if (__cil_tmp82 == zone) {
    {
    __cil_tmp83 = & pkt->lock;
    spin_lock(__cil_tmp83);
    }
    {
    __cil_tmp84 = pkt->state;
    __cil_tmp85 = (unsigned int )__cil_tmp84;
    if (__cil_tmp85 == 1U) {
      goto _L;
    } else {
      {
      __cil_tmp86 = pkt->state;
      __cil_tmp87 = (unsigned int )__cil_tmp86;
      if (__cil_tmp87 == 2U) {
        _L:
        {
        __cil_tmp88 = & pkt->orig_bios;
        bio_list_add(__cil_tmp88, bio);
        __cil_tmp89 = bio->bi_size;
        __cil_tmp90 = __cil_tmp89 / 2048U;
        __cil_tmp91 = pkt->write_size;
        __cil_tmp92 = (unsigned int )__cil_tmp91;
        __cil_tmp93 = __cil_tmp92 + __cil_tmp90;
        pkt->write_size = (int )__cil_tmp93;
        }
        {
        __cil_tmp94 = pkt->frames;
        __cil_tmp95 = pkt->write_size;
        if (__cil_tmp95 >= __cil_tmp94) {
          {
          __cil_tmp96 = pkt->state;
          __cil_tmp97 = (unsigned int )__cil_tmp96;
          if (__cil_tmp97 == 1U) {
            {
            __cil_tmp98 = & pkt->run_sm;
            atomic_inc(__cil_tmp98);
            __cil_tmp99 = & pd->wqueue;
            __cil_tmp100 = (void *)0;
            __wake_up(__cil_tmp99, 3U, 1, __cil_tmp100);
            }
          } else {

          }
          }
        } else {

        }
        }
        {
        __cil_tmp101 = & pkt->lock;
        spin_unlock(__cil_tmp101);
        __cil_tmp102 = & pd->cdrw.active_list_lock;
        spin_unlock(__cil_tmp102);
        }
        return (0);
      } else {
        blocked_bio = 1;
      }
      }
    }
    }
    {
    __cil_tmp103 = & pkt->lock;
    spin_unlock(__cil_tmp103);
    }
  } else {

  }
  }
  __cil_tmp104 = pkt->list.next;
  __mptr___0 = (struct list_head const *)__cil_tmp104;
  pkt = (struct packet_data *)__mptr___0;
  ldv_31306: ;
  {
  __cil_tmp105 = & pd->cdrw.pkt_active_list;
  __cil_tmp106 = (unsigned long )__cil_tmp105;
  __cil_tmp107 = & pkt->list;
  __cil_tmp108 = (unsigned long )__cil_tmp107;
  if (__cil_tmp108 != __cil_tmp106) {
    goto ldv_31305;
  } else {
    goto ldv_31307;
  }
  }
  ldv_31307:
  {
  __cil_tmp109 = & pd->cdrw.active_list_lock;
  spin_unlock(__cil_tmp109);
  __cil_tmp110 = & pd->lock;
  spin_lock(__cil_tmp110);
  }
  {
  __cil_tmp111 = pd->write_congestion_on;
  if (__cil_tmp111 > 0) {
    {
    __cil_tmp112 = pd->write_congestion_on;
    __cil_tmp113 = pd->bio_queue_size;
    if (__cil_tmp113 >= __cil_tmp112) {
      {
      __cil_tmp114 = & q->backing_dev_info;
      set_bdi_congested(__cil_tmp114, 0);
      }
      ldv_31308:
      {
      __cil_tmp115 = & pd->lock;
      spin_unlock(__cil_tmp115);
      congestion_wait(0, 250L);
      __cil_tmp116 = & pd->lock;
      spin_lock(__cil_tmp116);
      }
      {
      __cil_tmp117 = pd->write_congestion_off;
      __cil_tmp118 = pd->bio_queue_size;
      if (__cil_tmp118 > __cil_tmp117) {
        goto ldv_31308;
      } else {
        goto ldv_31309;
      }
      }
      ldv_31309: ;
    } else {

    }
    }
  } else {

  }
  }
  {
  __cil_tmp119 = & pd->lock;
  spin_unlock(__cil_tmp119);
  __cil_tmp120 = pd->rb_pool;
  tmp___5 = mempool_alloc(__cil_tmp120, 16U);
  node = (struct pkt_rb_node *)tmp___5;
  node->bio = bio;
  __cil_tmp121 = & pd->lock;
  spin_lock(__cil_tmp121);
  __cil_tmp122 = pd->bio_queue_size;
  __cil_tmp123 = __cil_tmp122 < 0;
  __cil_tmp124 = (long )__cil_tmp123;
  tmp___6 = __builtin_expect(__cil_tmp124, 0L);
  }
  if (tmp___6 != 0L) {
    __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/block/pktcdvd.ko--X--unsafelinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/block/pktcdvd.c.p"),
                         "i" (2576), "i" (12UL));
    ldv_31310: ;
    goto ldv_31310;
  } else {

  }
  {
  __cil_tmp125 = pd->bio_queue_size;
  was_empty = __cil_tmp125 == 0;
  pkt_rbtree_insert(pd, node);
  __cil_tmp126 = & pd->lock;
  spin_unlock(__cil_tmp126);
  __cil_tmp127 = & pd->scan_queue;
  atomic_set(__cil_tmp127, 1);
  }
  if (was_empty != 0) {
    {
    __cil_tmp128 = & pd->wqueue;
    __cil_tmp129 = (void *)0;
    __wake_up(__cil_tmp128, 3U, 1, __cil_tmp129);
    }
  } else {
    {
    __cil_tmp130 = & pd->cdrw.pkt_free_list;
    __cil_tmp131 = (struct list_head const *)__cil_tmp130;
    tmp___7 = list_empty(__cil_tmp131);
    }
    if (tmp___7 == 0) {
      if (blocked_bio == 0) {
        {
        __cil_tmp132 = & pd->wqueue;
        __cil_tmp133 = (void *)0;
        __wake_up(__cil_tmp132, 3U, 1, __cil_tmp133);
        }
      } else {

      }
    } else {

    }
  }
  return (0);
  end_io:
  {
  bio_endio(bio, -5);
  }
  return (0);
}
}
static int pkt_merge_bvec(struct request_queue *q , struct bvec_merge_data *bmd ,
                          struct bio_vec *bvec )
{ struct pktcdvd_device *pd ;
  sector_t zone ;
  int used ;
  int remaining ;
  int remaining2 ;
  int _max1 ;
  int _max2 ;
  int tmp ;
  long tmp___0 ;
  void *__cil_tmp13 ;
  __u32 __cil_tmp14 ;
  __u32 __cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  unsigned long __cil_tmp17 ;
  sector_t __cil_tmp18 ;
  sector_t __cil_tmp19 ;
  unsigned int __cil_tmp20 ;
  unsigned int __cil_tmp21 ;
  sector_t __cil_tmp22 ;
  unsigned int __cil_tmp23 ;
  unsigned int __cil_tmp24 ;
  unsigned int __cil_tmp25 ;
  unsigned int __cil_tmp26 ;
  __u32 __cil_tmp27 ;
  __u32 __cil_tmp28 ;
  __u32 __cil_tmp29 ;
  __u32 __cil_tmp30 ;
  unsigned int __cil_tmp31 ;
  unsigned int __cil_tmp32 ;
  int __cil_tmp33 ;
  long __cil_tmp34 ;

  {
  __cil_tmp13 = q->queuedata;
  pd = (struct pktcdvd_device *)__cil_tmp13;
  __cil_tmp14 = pd->settings.size;
  __cil_tmp15 = - __cil_tmp14;
  __cil_tmp16 = (unsigned long )__cil_tmp15;
  __cil_tmp17 = pd->offset;
  __cil_tmp18 = bmd->bi_sector;
  __cil_tmp19 = __cil_tmp18 + __cil_tmp17;
  zone = __cil_tmp19 & __cil_tmp16;
  __cil_tmp20 = bmd->bi_size;
  __cil_tmp21 = (unsigned int )zone;
  __cil_tmp22 = bmd->bi_sector;
  __cil_tmp23 = (unsigned int )__cil_tmp22;
  __cil_tmp24 = __cil_tmp23 - __cil_tmp21;
  __cil_tmp25 = __cil_tmp24 << 9U;
  __cil_tmp26 = __cil_tmp25 + __cil_tmp20;
  used = (int )__cil_tmp26;
  __cil_tmp27 = (__u32 )used;
  __cil_tmp28 = pd->settings.size;
  __cil_tmp29 = __cil_tmp28 << 9;
  __cil_tmp30 = __cil_tmp29 - __cil_tmp27;
  remaining = (int )__cil_tmp30;
  __cil_tmp31 = bmd->bi_size;
  __cil_tmp32 = 4096U - __cil_tmp31;
  remaining2 = (int )__cil_tmp32;
  _max1 = remaining;
  _max2 = remaining2;
  if (_max1 > _max2) {
    tmp = _max1;
  } else {
    tmp = _max2;
  }
  {
  remaining = tmp;
  __cil_tmp33 = remaining < 0;
  __cil_tmp34 = (long )__cil_tmp33;
  tmp___0 = __builtin_expect(__cil_tmp34, 0L);
  }
  if (tmp___0 != 0L) {
    __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/block/pktcdvd.ko--X--unsafelinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/block/pktcdvd.c.p"),
                         "i" (2619), "i" (12UL));
    ldv_31324: ;
    goto ldv_31324;
  } else {

  }
  return (remaining);
}
}
static void pkt_init_queue(struct pktcdvd_device *pd )
{ struct request_queue *q ;
  struct gendisk *__cil_tmp3 ;

  {
  {
  __cil_tmp3 = pd->disk;
  q = __cil_tmp3->queue;
  blk_queue_make_request(q, & pkt_make_request);
  blk_queue_logical_block_size(q, (unsigned short)2048);
  blk_queue_max_hw_sectors(q, 512U);
  blk_queue_merge_bvec(q, & pkt_merge_bvec);
  q->queuedata = (void *)pd;
  }
  return;
}
}
static int pkt_seq_show(struct seq_file *m , void *p )
{ struct pktcdvd_device *pd ;
  char *msg ;
  char bdev_buf[32U] ;
  int states[6U] ;
  char const *tmp ;
  char *tmp___0 ;
  int tmp___1 ;
  void *__cil_tmp10 ;
  struct block_device *__cil_tmp11 ;
  char *__cil_tmp12 ;
  char (*__cil_tmp13)[20U] ;
  char *__cil_tmp14 ;
  __u32 __cil_tmp15 ;
  __u32 __cil_tmp16 ;
  __u8 __cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  __u8 __cil_tmp19 ;
  unsigned int __cil_tmp20 ;
  __u8 __cil_tmp21 ;
  int __cil_tmp22 ;
  __u8 __cil_tmp23 ;
  int __cil_tmp24 ;
  __u8 __cil_tmp25 ;
  unsigned int __cil_tmp26 ;
  __u8 __cil_tmp27 ;
  unsigned int __cil_tmp28 ;
  unsigned long __cil_tmp29 ;
  unsigned long __cil_tmp30 ;
  unsigned long __cil_tmp31 ;
  unsigned long __cil_tmp32 ;
  unsigned long __cil_tmp33 ;
  unsigned long __cil_tmp34 ;
  unsigned long __cil_tmp35 ;
  unsigned long __cil_tmp36 ;
  int __cil_tmp37 ;
  unsigned long __cil_tmp38 ;
  int __cil_tmp39 ;
  int __cil_tmp40 ;
  unsigned long __cil_tmp41 ;
  __u8 __cil_tmp42 ;
  int __cil_tmp43 ;
  int __cil_tmp44 ;
  atomic_t *__cil_tmp45 ;
  atomic_t const *__cil_tmp46 ;
  sector_t __cil_tmp47 ;
  unsigned long long __cil_tmp48 ;
  int *__cil_tmp49 ;
  int __cil_tmp50 ;
  int __cil_tmp51 ;

  {
  {
  __cil_tmp10 = m->private;
  pd = (struct pktcdvd_device *)__cil_tmp10;
  __cil_tmp11 = pd->bdev;
  __cil_tmp12 = (char *)(& bdev_buf);
  tmp = bdevname(__cil_tmp11, __cil_tmp12);
  __cil_tmp13 = & pd->name;
  __cil_tmp14 = (char *)__cil_tmp13;
  seq_printf(m, "Writer %s mapped to %s:\n", __cil_tmp14, tmp);
  seq_printf(m, "\nSettings:\n");
  __cil_tmp15 = pd->settings.size;
  __cil_tmp16 = __cil_tmp15 / 2U;
  seq_printf(m, "\tpacket size:\t\t%dkB\n", __cil_tmp16);
  }
  {
  __cil_tmp17 = pd->settings.write_type;
  __cil_tmp18 = (unsigned int )__cil_tmp17;
  if (__cil_tmp18 == 0U) {
    msg = (char *)"Packet";
  } else {
    msg = (char *)"Unknown";
  }
  }
  {
  seq_printf(m, "\twrite type:\t\t%s\n", msg);
  }
  {
  __cil_tmp19 = pd->settings.fp;
  __cil_tmp20 = (unsigned int )__cil_tmp19;
  if (__cil_tmp20 != 0U) {
    tmp___0 = (char *)"Fixed";
  } else {
    tmp___0 = (char *)"Variable";
  }
  }
  {
  seq_printf(m, "\tpacket type:\t\t%s\n", tmp___0);
  __cil_tmp21 = pd->settings.link_loss;
  __cil_tmp22 = (int )__cil_tmp21;
  seq_printf(m, "\tlink loss:\t\t%d\n", __cil_tmp22);
  __cil_tmp23 = pd->settings.track_mode;
  __cil_tmp24 = (int )__cil_tmp23;
  seq_printf(m, "\ttrack mode:\t\t%d\n", __cil_tmp24);
  }
  {
  __cil_tmp25 = pd->settings.block_mode;
  __cil_tmp26 = (unsigned int )__cil_tmp25;
  if (__cil_tmp26 == 8U) {
    msg = (char *)"Mode 1";
  } else {
    {
    __cil_tmp27 = pd->settings.block_mode;
    __cil_tmp28 = (unsigned int )__cil_tmp27;
    if (__cil_tmp28 == 10U) {
      msg = (char *)"Mode 2";
    } else {
      msg = (char *)"Unknown";
    }
    }
  }
  }
  {
  seq_printf(m, "\tblock mode:\t\t%s\n", msg);
  seq_printf(m, "\nStatistics:\n");
  __cil_tmp29 = pd->stats.pkt_started;
  seq_printf(m, "\tpackets started:\t%lu\n", __cil_tmp29);
  __cil_tmp30 = pd->stats.pkt_ended;
  seq_printf(m, "\tpackets ended:\t\t%lu\n", __cil_tmp30);
  __cil_tmp31 = pd->stats.secs_w;
  __cil_tmp32 = __cil_tmp31 >> 1;
  seq_printf(m, "\twritten:\t\t%lukB\n", __cil_tmp32);
  __cil_tmp33 = pd->stats.secs_rg;
  __cil_tmp34 = __cil_tmp33 >> 1;
  seq_printf(m, "\tread gather:\t\t%lukB\n", __cil_tmp34);
  __cil_tmp35 = pd->stats.secs_r;
  __cil_tmp36 = __cil_tmp35 >> 1;
  seq_printf(m, "\tread:\t\t\t%lukB\n", __cil_tmp36);
  seq_printf(m, "\nMisc:\n");
  __cil_tmp37 = pd->refcnt;
  seq_printf(m, "\treference count:\t%d\n", __cil_tmp37);
  __cil_tmp38 = pd->flags;
  seq_printf(m, "\tflags:\t\t\t0x%lx\n", __cil_tmp38);
  __cil_tmp39 = pd->read_speed;
  seq_printf(m, "\tread speed:\t\t%ukB/s\n", __cil_tmp39);
  __cil_tmp40 = pd->write_speed;
  seq_printf(m, "\twrite speed:\t\t%ukB/s\n", __cil_tmp40);
  __cil_tmp41 = pd->offset;
  seq_printf(m, "\tstart offset:\t\t%lu\n", __cil_tmp41);
  __cil_tmp42 = pd->mode_offset;
  __cil_tmp43 = (int )__cil_tmp42;
  seq_printf(m, "\tmode page offset:\t%u\n", __cil_tmp43);
  seq_printf(m, "\nQueue state:\n");
  __cil_tmp44 = pd->bio_queue_size;
  seq_printf(m, "\tbios queued:\t\t%d\n", __cil_tmp44);
  __cil_tmp45 = & pd->cdrw.pending_bios;
  __cil_tmp46 = (atomic_t const *)__cil_tmp45;
  tmp___1 = atomic_read(__cil_tmp46);
  seq_printf(m, "\tbios pending:\t\t%d\n", tmp___1);
  __cil_tmp47 = pd->current_sector;
  __cil_tmp48 = (unsigned long long )__cil_tmp47;
  seq_printf(m, "\tcurrent sector:\t\t0x%llx\n", __cil_tmp48);
  __cil_tmp49 = (int *)(& states);
  pkt_count_states(pd, __cil_tmp49);
  seq_printf(m, "\tstate:\t\t\ti:%d ow:%d rw:%d ww:%d rec:%d fin:%d\n", states[0],
             states[1], states[2], states[3], states[4], states[5]);
  __cil_tmp50 = pd->write_congestion_off;
  __cil_tmp51 = pd->write_congestion_on;
  seq_printf(m, "\twrite congestion marks:\toff=%d on=%d\n", __cil_tmp50, __cil_tmp51);
  }
  return (0);
}
}
static int pkt_seq_open(struct inode *inode , struct file *file )
{ struct proc_dir_entry *tmp ;
  int tmp___0 ;
  struct inode const *__cil_tmp5 ;
  void *__cil_tmp6 ;

  {
  {
  __cil_tmp5 = (struct inode const *)inode;
  tmp = PDE(__cil_tmp5);
  __cil_tmp6 = tmp->data;
  tmp___0 = single_open(file, & pkt_seq_show, __cil_tmp6);
  }
  return (tmp___0);
}
}
static struct file_operations const pkt_proc_fops =
     {(struct module *)0, & seq_lseek, & seq_read, (ssize_t (*)(struct file * , char const * ,
                                                              size_t , loff_t * ))0,
    (ssize_t (*)(struct kiocb * , struct iovec const * , unsigned long , loff_t ))0,
    (ssize_t (*)(struct kiocb * , struct iovec const * , unsigned long , loff_t ))0,
    (int (*)(struct file * , void * , int (*)(void * , char const * , int , loff_t ,
                                              u64 , unsigned int ) ))0, (unsigned int (*)(struct file * ,
                                                                                            struct poll_table_struct * ))0,
    (long (*)(struct file * , unsigned int , unsigned long ))0, (long (*)(struct file * ,
                                                                            unsigned int ,
                                                                            unsigned long ))0,
    (int (*)(struct file * , struct vm_area_struct * ))0, & pkt_seq_open, (int (*)(struct file * ,
                                                                                   fl_owner_t ))0,
    & single_release, (int (*)(struct file * , int ))0, (int (*)(struct kiocb * ,
                                                                  int ))0, (int (*)(int ,
                                                                                     struct file * ,
                                                                                     int ))0,
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
static int pkt_new_dev(struct pktcdvd_device *pd , dev_t dev )
{ int i ;
  int ret ;
  char b[32U] ;
  struct block_device *bdev ;
  struct pktcdvd_device *pd2 ;
  char const *tmp ;
  struct task_struct *__k ;
  struct task_struct *tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  char const *tmp___3 ;
  dev_t __cil_tmp14 ;
  struct pktcdvd_device *__cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  unsigned long __cil_tmp17 ;
  struct block_device *__cil_tmp18 ;
  dev_t __cil_tmp19 ;
  struct block_device *__cil_tmp20 ;
  char *__cil_tmp21 ;
  dev_t __cil_tmp22 ;
  struct block_device *__cil_tmp23 ;
  unsigned long __cil_tmp24 ;
  unsigned long __cil_tmp25 ;
  void *__cil_tmp26 ;
  atomic_t *__cil_tmp27 ;
  void *__cil_tmp28 ;
  char (*__cil_tmp29)[20U] ;
  char *__cil_tmp30 ;
  void const *__cil_tmp31 ;
  struct task_struct *__cil_tmp32 ;
  void const *__cil_tmp33 ;
  char (*__cil_tmp34)[20U] ;
  char const *__cil_tmp35 ;
  void *__cil_tmp36 ;
  char *__cil_tmp37 ;
  char (*__cil_tmp38)[20U] ;
  char *__cil_tmp39 ;

  {
  ret = 0;
  {
  __cil_tmp14 = pd->pkt_dev;
  if (__cil_tmp14 == dev) {
    {
    printk("pktcdvd: Recursive setup not allowed\n");
    }
    return (-16);
  } else {

  }
  }
  i = 0;
  goto ldv_31353;
  ldv_31352:
  pd2 = pkt_devs[i];
  {
  __cil_tmp15 = (struct pktcdvd_device *)0;
  __cil_tmp16 = (unsigned long )__cil_tmp15;
  __cil_tmp17 = (unsigned long )pd2;
  if (__cil_tmp17 == __cil_tmp16) {
    goto ldv_31351;
  } else {

  }
  }
  {
  __cil_tmp18 = pd2->bdev;
  __cil_tmp19 = __cil_tmp18->bd_dev;
  if (__cil_tmp19 == dev) {
    {
    __cil_tmp20 = pd2->bdev;
    __cil_tmp21 = (char *)(& b);
    tmp = bdevname(__cil_tmp20, __cil_tmp21);
    printk("pktcdvd: %s already setup\n", tmp);
    }
    return (-16);
  } else {

  }
  }
  {
  __cil_tmp22 = pd2->pkt_dev;
  if (__cil_tmp22 == dev) {
    {
    printk("pktcdvd: Can\'t chain pktcdvd devices\n");
    }
    return (-16);
  } else {

  }
  }
  ldv_31351:
  i = i + 1;
  ldv_31353: ;
  if (i <= 7) {
    goto ldv_31352;
  } else {
    goto ldv_31354;
  }
  ldv_31354:
  {
  bdev = bdget(dev);
  }
  {
  __cil_tmp23 = (struct block_device *)0;
  __cil_tmp24 = (unsigned long )__cil_tmp23;
  __cil_tmp25 = (unsigned long )bdev;
  if (__cil_tmp25 == __cil_tmp24) {
    return (-12);
  } else {

  }
  }
  {
  __cil_tmp26 = (void *)0;
  ret = blkdev_get(bdev, 65U, __cil_tmp26);
  }
  if (ret != 0) {
    return (ret);
  } else {

  }
  {
  ldv___module_get_3(& __this_module);
  pd->bdev = bdev;
  set_blocksize(bdev, 2048);
  pkt_init_queue(pd);
  __cil_tmp27 = & pd->cdrw.pending_bios;
  atomic_set(__cil_tmp27, 0);
  __cil_tmp28 = (void *)pd;
  __cil_tmp29 = & pd->name;
  __cil_tmp30 = (char *)__cil_tmp29;
  tmp___0 = kthread_create_on_node(& kcdrwd, __cil_tmp28, -1, "%s", __cil_tmp30);
  __k = tmp___0;
  __cil_tmp31 = (void const *)__k;
  tmp___1 = IS_ERR(__cil_tmp31);
  }
  if (tmp___1 == 0L) {
    {
    wake_up_process(__k);
    }
  } else {

  }
  {
  pd->cdrw.thread = __k;
  __cil_tmp32 = pd->cdrw.thread;
  __cil_tmp33 = (void const *)__cil_tmp32;
  tmp___2 = IS_ERR(__cil_tmp33);
  }
  if (tmp___2 != 0L) {
    {
    printk("pktcdvd: can\'t start kernel thread\n");
    ret = -12;
    }
    goto out_mem;
  } else {

  }
  {
  __cil_tmp34 = & pd->name;
  __cil_tmp35 = (char const *)__cil_tmp34;
  __cil_tmp36 = (void *)pd;
  proc_create_data(__cil_tmp35, 0U, pkt_proc, & pkt_proc_fops, __cil_tmp36);
  __cil_tmp37 = (char *)(& b);
  tmp___3 = bdevname(bdev, __cil_tmp37);
  __cil_tmp38 = & pd->name;
  __cil_tmp39 = (char *)__cil_tmp38;
  printk("<5>pktcdvd: writer %s mapped to %s\n", __cil_tmp39, tmp___3);
  }
  return (0);
  out_mem:
  {
  blkdev_put(bdev, 65U);
  ldv_module_put_4(& __this_module);
  }
  return (ret);
}
}
static int pkt_ioctl(struct block_device *bdev , fmode_t mode , unsigned int cmd ,
                     unsigned long arg )
{ struct pktcdvd_device *pd ;
  int ret ;
  struct gendisk *__cil_tmp7 ;
  void *__cil_tmp8 ;
  int __cil_tmp9 ;
  int __cil_tmp10 ;
  int __cil_tmp11 ;
  int __cil_tmp12 ;
  int __cil_tmp13 ;
  int __cil_tmp14 ;
  int __cil_tmp15 ;
  struct block_device *__cil_tmp16 ;

  {
  {
  __cil_tmp7 = bdev->bd_disk;
  __cil_tmp8 = __cil_tmp7->private_data;
  pd = (struct pktcdvd_device *)__cil_tmp8;
  mutex_lock_nested(& pktcdvd_mutex, 0U);
  }
  {
  __cil_tmp9 = (int )cmd;
  if (__cil_tmp9 == 21257) {
    goto case_21257;
  } else {
    {
    __cil_tmp10 = (int )cmd;
    if (__cil_tmp10 == 21264) {
      goto case_21264;
    } else {
      {
      __cil_tmp11 = (int )cmd;
      if (__cil_tmp11 == 21254) {
        goto case_21254;
      } else {
        {
        __cil_tmp12 = (int )cmd;
        if (__cil_tmp12 == 21397) {
          goto case_21397;
        } else {
          {
          __cil_tmp13 = (int )cmd;
          if (__cil_tmp13 == 21395) {
            goto case_21395;
          } else {
            {
            __cil_tmp14 = (int )cmd;
            if (__cil_tmp14 == 1) {
              goto case_1;
            } else {
              goto switch_default;
              if (0) {
                case_21257: ;
                {
                __cil_tmp15 = pd->refcnt;
                if (__cil_tmp15 == 1) {
                  {
                  pkt_lock_door(pd, 0);
                  }
                } else {

                }
                }
                case_21264: ;
                case_21254: ;
                case_21397: ;
                case_21395: ;
                case_1:
                {
                __cil_tmp16 = pd->bdev;
                ret = __blkdev_driver_ioctl(__cil_tmp16, mode, cmd, arg);
                }
                goto ldv_31372;
                switch_default:
                ret = -25;
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
  ldv_31372:
  {
  mutex_unlock(& pktcdvd_mutex);
  }
  return (ret);
}
}
static unsigned int pkt_check_events(struct gendisk *disk , unsigned int clearing )
{ struct pktcdvd_device *pd ;
  struct gendisk *attached_disk ;
  unsigned int tmp ;
  void *__cil_tmp6 ;
  struct pktcdvd_device *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  struct block_device *__cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  struct block_device *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  struct block_device *__cil_tmp14 ;
  struct gendisk *__cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  unsigned long __cil_tmp17 ;
  unsigned int (*__cil_tmp18)(struct gendisk * , unsigned int ) ;
  unsigned long __cil_tmp19 ;
  struct block_device_operations const *__cil_tmp20 ;
  unsigned int (*__cil_tmp21)(struct gendisk * , unsigned int ) ;
  unsigned long __cil_tmp22 ;
  struct block_device_operations const *__cil_tmp23 ;
  unsigned int (*__cil_tmp24)(struct gendisk * , unsigned int ) ;

  {
  __cil_tmp6 = disk->private_data;
  pd = (struct pktcdvd_device *)__cil_tmp6;
  {
  __cil_tmp7 = (struct pktcdvd_device *)0;
  __cil_tmp8 = (unsigned long )__cil_tmp7;
  __cil_tmp9 = (unsigned long )pd;
  if (__cil_tmp9 == __cil_tmp8) {
    return (0U);
  } else {

  }
  }
  {
  __cil_tmp10 = (struct block_device *)0;
  __cil_tmp11 = (unsigned long )__cil_tmp10;
  __cil_tmp12 = pd->bdev;
  __cil_tmp13 = (unsigned long )__cil_tmp12;
  if (__cil_tmp13 == __cil_tmp11) {
    return (0U);
  } else {

  }
  }
  __cil_tmp14 = pd->bdev;
  attached_disk = __cil_tmp14->bd_disk;
  {
  __cil_tmp15 = (struct gendisk *)0;
  __cil_tmp16 = (unsigned long )__cil_tmp15;
  __cil_tmp17 = (unsigned long )attached_disk;
  if (__cil_tmp17 == __cil_tmp16) {
    return (0U);
  } else {
    {
    __cil_tmp18 = (unsigned int (* const )(struct gendisk * , unsigned int ))0;
    __cil_tmp19 = (unsigned long )__cil_tmp18;
    __cil_tmp20 = attached_disk->fops;
    __cil_tmp21 = __cil_tmp20->check_events;
    __cil_tmp22 = (unsigned long )__cil_tmp21;
    if (__cil_tmp22 == __cil_tmp19) {
      return (0U);
    } else {

    }
    }
  }
  }
  {
  __cil_tmp23 = attached_disk->fops;
  __cil_tmp24 = __cil_tmp23->check_events;
  tmp = (*__cil_tmp24)(attached_disk, clearing);
  }
  return (tmp);
}
}
static struct block_device_operations const pktcdvd_ops =
     {& pkt_open, & pkt_close, & pkt_ioctl, (int (*)(struct block_device * , fmode_t ,
                                                   unsigned int , unsigned long ))0,
    (int (*)(struct block_device * , sector_t , void ** , unsigned long * ))0, & pkt_check_events,
    (int (*)(struct gendisk * ))0, (void (*)(struct gendisk * ))0, (int (*)(struct gendisk * ))0,
    (int (*)(struct block_device * , struct hd_geometry * ))0, (void (*)(struct block_device * ,
                                                                         unsigned long ))0,
    & __this_module};
static char *pktcdvd_devnode(struct gendisk *gd , mode_t *mode )
{ char *tmp ;
  char (*__cil_tmp4)[32U] ;
  char *__cil_tmp5 ;

  {
  {
  __cil_tmp4 = & gd->disk_name;
  __cil_tmp5 = (char *)__cil_tmp4;
  tmp = kasprintf(208U, "pktcdvd/%s", __cil_tmp5);
  }
  return (tmp);
}
}
static int pkt_setup_dev(dev_t dev , dev_t *pkt_dev )
{ int idx ;
  int ret ;
  struct pktcdvd_device *pd ;
  struct gendisk *disk ;
  void *tmp ;
  struct lock_class_key __key ;
  struct lock_class_key __key___0 ;
  struct lock_class_key __key___1 ;
  struct lock_class_key __key___2 ;
  struct rb_root __constr_expr_0 ;
  struct pktcdvd_device *__cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  struct pktcdvd_device *__cil_tmp16 ;
  unsigned long __cil_tmp17 ;
  unsigned long __cil_tmp18 ;
  mempool_t *__cil_tmp19 ;
  unsigned long __cil_tmp20 ;
  mempool_t *__cil_tmp21 ;
  unsigned long __cil_tmp22 ;
  struct list_head *__cil_tmp23 ;
  struct list_head *__cil_tmp24 ;
  spinlock_t *__cil_tmp25 ;
  struct raw_spinlock *__cil_tmp26 ;
  spinlock_t *__cil_tmp27 ;
  struct raw_spinlock *__cil_tmp28 ;
  spinlock_t *__cil_tmp29 ;
  struct raw_spinlock *__cil_tmp30 ;
  struct bio_list *__cil_tmp31 ;
  struct bio_list *__cil_tmp32 ;
  char (*__cil_tmp33)[20U] ;
  char *__cil_tmp34 ;
  wait_queue_head_t *__cil_tmp35 ;
  struct gendisk *__cil_tmp36 ;
  unsigned long __cil_tmp37 ;
  unsigned long __cil_tmp38 ;
  char (*__cil_tmp39)[32U] ;
  char *__cil_tmp40 ;
  char (*__cil_tmp41)[20U] ;
  char const *__cil_tmp42 ;
  struct request_queue *__cil_tmp43 ;
  unsigned long __cil_tmp44 ;
  struct request_queue *__cil_tmp45 ;
  unsigned long __cil_tmp46 ;
  int __cil_tmp47 ;
  int __cil_tmp48 ;
  struct block_device *__cil_tmp49 ;
  struct gendisk *__cil_tmp50 ;
  struct block_device *__cil_tmp51 ;
  struct gendisk *__cil_tmp52 ;
  dev_t *__cil_tmp53 ;
  unsigned long __cil_tmp54 ;
  unsigned long __cil_tmp55 ;
  struct request_queue *__cil_tmp56 ;
  mempool_t *__cil_tmp57 ;
  unsigned long __cil_tmp58 ;
  mempool_t *__cil_tmp59 ;
  unsigned long __cil_tmp60 ;
  mempool_t *__cil_tmp61 ;
  void const *__cil_tmp62 ;

  {
  {
  ret = -12;
  mutex_lock_nested(& ctl_mutex, 1U);
  idx = 0;
  }
  goto ldv_31395;
  ldv_31394: ;
  {
  __cil_tmp13 = (struct pktcdvd_device *)0;
  __cil_tmp14 = (unsigned long )__cil_tmp13;
  __cil_tmp15 = (unsigned long )pkt_devs[idx];
  if (__cil_tmp15 == __cil_tmp14) {
    goto ldv_31393;
  } else {

  }
  }
  idx = idx + 1;
  ldv_31395: ;
  if (idx <= 7) {
    goto ldv_31394;
  } else {
    goto ldv_31393;
  }
  ldv_31393: ;
  if (idx == 8) {
    {
    printk("pktcdvd: max %d writers supported\n", 8);
    ret = -16;
    }
    goto out_mutex;
  } else {

  }
  {
  tmp = kzalloc(648UL, 208U);
  pd = (struct pktcdvd_device *)tmp;
  }
  {
  __cil_tmp16 = (struct pktcdvd_device *)0;
  __cil_tmp17 = (unsigned long )__cil_tmp16;
  __cil_tmp18 = (unsigned long )pd;
  if (__cil_tmp18 == __cil_tmp17) {
    goto out_mutex;
  } else {

  }
  }
  {
  pd->rb_pool = mempool_create_kmalloc_pool(512, 32UL);
  }
  {
  __cil_tmp19 = (mempool_t *)0;
  __cil_tmp20 = (unsigned long )__cil_tmp19;
  __cil_tmp21 = pd->rb_pool;
  __cil_tmp22 = (unsigned long )__cil_tmp21;
  if (__cil_tmp22 == __cil_tmp20) {
    goto out_mem;
  } else {

  }
  }
  {
  __cil_tmp23 = & pd->cdrw.pkt_free_list;
  INIT_LIST_HEAD(__cil_tmp23);
  __cil_tmp24 = & pd->cdrw.pkt_active_list;
  INIT_LIST_HEAD(__cil_tmp24);
  __cil_tmp25 = & pd->cdrw.active_list_lock;
  spinlock_check(__cil_tmp25);
  __cil_tmp26 = & pd->cdrw.active_list_lock.ldv_6060.rlock;
  __raw_spin_lock_init(__cil_tmp26, "&(&pd->cdrw.active_list_lock)->rlock", & __key);
  __cil_tmp27 = & pd->lock;
  spinlock_check(__cil_tmp27);
  __cil_tmp28 = & pd->lock.ldv_6060.rlock;
  __raw_spin_lock_init(__cil_tmp28, "&(&pd->lock)->rlock", & __key___0);
  __cil_tmp29 = & pd->iosched.lock;
  spinlock_check(__cil_tmp29);
  __cil_tmp30 = & pd->iosched.lock.ldv_6060.rlock;
  __raw_spin_lock_init(__cil_tmp30, "&(&pd->iosched.lock)->rlock", & __key___1);
  __cil_tmp31 = & pd->iosched.read_queue;
  bio_list_init(__cil_tmp31);
  __cil_tmp32 = & pd->iosched.write_queue;
  bio_list_init(__cil_tmp32);
  __cil_tmp33 = & pd->name;
  __cil_tmp34 = (char *)__cil_tmp33;
  sprintf(__cil_tmp34, "pktcdvd%d", idx);
  __cil_tmp35 = & pd->wqueue;
  __init_waitqueue_head(__cil_tmp35, & __key___2);
  __constr_expr_0.rb_node = (struct rb_node *)0;
  pd->bio_queue = __constr_expr_0;
  pd->write_congestion_on = write_congestion_on;
  pd->write_congestion_off = write_congestion_off;
  disk = alloc_disk(1);
  }
  {
  __cil_tmp36 = (struct gendisk *)0;
  __cil_tmp37 = (unsigned long )__cil_tmp36;
  __cil_tmp38 = (unsigned long )disk;
  if (__cil_tmp38 == __cil_tmp37) {
    goto out_mem;
  } else {

  }
  }
  {
  pd->disk = disk;
  disk->major = pktdev_major;
  disk->first_minor = idx;
  disk->fops = & pktcdvd_ops;
  disk->flags = 1;
  __cil_tmp39 = & disk->disk_name;
  __cil_tmp40 = (char *)__cil_tmp39;
  __cil_tmp41 = & pd->name;
  __cil_tmp42 = (char const *)__cil_tmp41;
  strcpy(__cil_tmp40, __cil_tmp42);
  disk->devnode = & pktcdvd_devnode;
  disk->private_data = (void *)pd;
  disk->queue = blk_alloc_queue(208U);
  }
  {
  __cil_tmp43 = (struct request_queue *)0;
  __cil_tmp44 = (unsigned long )__cil_tmp43;
  __cil_tmp45 = disk->queue;
  __cil_tmp46 = (unsigned long )__cil_tmp45;
  if (__cil_tmp46 == __cil_tmp44) {
    goto out_mem2;
  } else {

  }
  }
  {
  __cil_tmp47 = pktdev_major << 20;
  __cil_tmp48 = __cil_tmp47 | idx;
  pd->pkt_dev = (dev_t )__cil_tmp48;
  ret = pkt_new_dev(pd, dev);
  }
  if (ret != 0) {
    goto out_new_dev;
  } else {

  }
  {
  __cil_tmp49 = pd->bdev;
  __cil_tmp50 = __cil_tmp49->bd_disk;
  disk->events = __cil_tmp50->events;
  __cil_tmp51 = pd->bdev;
  __cil_tmp52 = __cil_tmp51->bd_disk;
  disk->async_events = __cil_tmp52->async_events;
  add_disk(disk);
  pkt_sysfs_dev_new(pd);
  pkt_debugfs_dev_new(pd);
  pkt_devs[idx] = pd;
  }
  {
  __cil_tmp53 = (dev_t *)0;
  __cil_tmp54 = (unsigned long )__cil_tmp53;
  __cil_tmp55 = (unsigned long )pkt_dev;
  if (__cil_tmp55 != __cil_tmp54) {
    *pkt_dev = pd->pkt_dev;
  } else {

  }
  }
  {
  mutex_unlock(& ctl_mutex);
  }
  return (0);
  out_new_dev:
  {
  __cil_tmp56 = disk->queue;
  blk_cleanup_queue(__cil_tmp56);
  }
  out_mem2:
  {
  put_disk(disk);
  }
  out_mem: ;
  {
  __cil_tmp57 = (mempool_t *)0;
  __cil_tmp58 = (unsigned long )__cil_tmp57;
  __cil_tmp59 = pd->rb_pool;
  __cil_tmp60 = (unsigned long )__cil_tmp59;
  if (__cil_tmp60 != __cil_tmp58) {
    {
    __cil_tmp61 = pd->rb_pool;
    mempool_destroy(__cil_tmp61);
    }
  } else {

  }
  }
  {
  __cil_tmp62 = (void const *)pd;
  kfree(__cil_tmp62);
  }
  out_mutex:
  {
  mutex_unlock(& ctl_mutex);
  printk("pktcdvd: setup of pktcdvd device failed\n");
  }
  return (ret);
}
}
static int pkt_remove_dev(dev_t pkt_dev )
{ struct pktcdvd_device *pd ;
  int idx ;
  int ret ;
  long tmp ;
  struct pktcdvd_device *__cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  dev_t __cil_tmp9 ;
  int __cil_tmp10 ;
  struct task_struct *__cil_tmp11 ;
  void const *__cil_tmp12 ;
  struct task_struct *__cil_tmp13 ;
  struct block_device *__cil_tmp14 ;
  char (*__cil_tmp15)[20U] ;
  char const *__cil_tmp16 ;
  char (*__cil_tmp17)[20U] ;
  char *__cil_tmp18 ;
  struct gendisk *__cil_tmp19 ;
  struct gendisk *__cil_tmp20 ;
  struct request_queue *__cil_tmp21 ;
  struct gendisk *__cil_tmp22 ;
  mempool_t *__cil_tmp23 ;
  void const *__cil_tmp24 ;

  {
  {
  ret = 0;
  mutex_lock_nested(& ctl_mutex, 1U);
  idx = 0;
  }
  goto ldv_31413;
  ldv_31412:
  pd = pkt_devs[idx];
  {
  __cil_tmp6 = (struct pktcdvd_device *)0;
  __cil_tmp7 = (unsigned long )__cil_tmp6;
  __cil_tmp8 = (unsigned long )pd;
  if (__cil_tmp8 != __cil_tmp7) {
    {
    __cil_tmp9 = pd->pkt_dev;
    if (__cil_tmp9 == pkt_dev) {
      goto ldv_31411;
    } else {

    }
    }
  } else {

  }
  }
  idx = idx + 1;
  ldv_31413: ;
  if (idx <= 7) {
    goto ldv_31412;
  } else {
    goto ldv_31411;
  }
  ldv_31411: ;
  if (idx == 8) {
    {
    printk("<5>pktcdvd: dev not setup\n");
    ret = -6;
    }
    goto out;
  } else {

  }
  {
  __cil_tmp10 = pd->refcnt;
  if (__cil_tmp10 > 0) {
    ret = -16;
    goto out;
  } else {

  }
  }
  {
  __cil_tmp11 = pd->cdrw.thread;
  __cil_tmp12 = (void const *)__cil_tmp11;
  tmp = IS_ERR(__cil_tmp12);
  }
  if (tmp == 0L) {
    {
    __cil_tmp13 = pd->cdrw.thread;
    kthread_stop(__cil_tmp13);
    }
  } else {

  }
  {
  pkt_devs[idx] = (struct pktcdvd_device *)0;
  pkt_debugfs_dev_remove(pd);
  pkt_sysfs_dev_remove(pd);
  __cil_tmp14 = pd->bdev;
  blkdev_put(__cil_tmp14, 65U);
  __cil_tmp15 = & pd->name;
  __cil_tmp16 = (char const *)__cil_tmp15;
  remove_proc_entry(__cil_tmp16, pkt_proc);
  __cil_tmp17 = & pd->name;
  __cil_tmp18 = (char *)__cil_tmp17;
  printk("<5>pktcdvd: writer %s unmapped\n", __cil_tmp18);
  __cil_tmp19 = pd->disk;
  del_gendisk(__cil_tmp19);
  __cil_tmp20 = pd->disk;
  __cil_tmp21 = __cil_tmp20->queue;
  blk_cleanup_queue(__cil_tmp21);
  __cil_tmp22 = pd->disk;
  put_disk(__cil_tmp22);
  __cil_tmp23 = pd->rb_pool;
  mempool_destroy(__cil_tmp23);
  __cil_tmp24 = (void const *)pd;
  kfree(__cil_tmp24);
  ldv_module_put_5(& __this_module);
  }
  out:
  {
  mutex_unlock(& ctl_mutex);
  }
  return (ret);
}
}
static void pkt_get_status(struct pkt_ctrl_command *ctrl_cmd )
{ struct pktcdvd_device *pd ;
  __u32 __cil_tmp3 ;
  struct pktcdvd_device *__cil_tmp4 ;
  unsigned long __cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  struct block_device *__cil_tmp7 ;
  dev_t __cil_tmp8 ;
  dev_t __cil_tmp9 ;

  {
  {
  mutex_lock_nested(& ctl_mutex, 1U);
  __cil_tmp3 = ctrl_cmd->dev_index;
  pd = pkt_find_dev_from_minor(__cil_tmp3);
  }
  {
  __cil_tmp4 = (struct pktcdvd_device *)0;
  __cil_tmp5 = (unsigned long )__cil_tmp4;
  __cil_tmp6 = (unsigned long )pd;
  if (__cil_tmp6 != __cil_tmp5) {
    {
    __cil_tmp7 = pd->bdev;
    __cil_tmp8 = __cil_tmp7->bd_dev;
    ctrl_cmd->dev = new_encode_dev(__cil_tmp8);
    __cil_tmp9 = pd->pkt_dev;
    ctrl_cmd->pkt_dev = new_encode_dev(__cil_tmp9);
    }
  } else {
    ctrl_cmd->dev = 0U;
    ctrl_cmd->pkt_dev = 0U;
  }
  }
  {
  ctrl_cmd->num_devices = 8U;
  mutex_unlock(& ctl_mutex);
  }
  return;
}
}
static long pkt_ctl_ioctl(struct file *file , unsigned int cmd , unsigned long arg )
{ void *argp ;
  struct pkt_ctrl_command ctrl_cmd ;
  int ret ;
  dev_t pkt_dev ;
  unsigned long tmp ;
  bool tmp___0 ;
  int tmp___1 ;
  dev_t tmp___2 ;
  bool tmp___3 ;
  int tmp___4 ;
  dev_t tmp___5 ;
  int tmp___6 ;
  void *__cil_tmp16 ;
  void const *__cil_tmp17 ;
  int __cil_tmp18 ;
  int __cil_tmp19 ;
  int __cil_tmp20 ;
  void const *__cil_tmp21 ;

  {
  argp = (void *)arg;
  ret = 0;
  pkt_dev = 0U;
  if (cmd != 3222820865U) {
    return (-25L);
  } else {

  }
  {
  __cil_tmp16 = (void *)(& ctrl_cmd);
  __cil_tmp17 = (void const *)argp;
  tmp = copy_from_user(__cil_tmp16, __cil_tmp17, 24UL);
  }
  if (tmp != 0UL) {
    return (-14L);
  } else {

  }
  {
  __cil_tmp18 = (int )ctrl_cmd.command;
  if (__cil_tmp18 == 0) {
    goto case_0;
  } else {
    {
    __cil_tmp19 = (int )ctrl_cmd.command;
    if (__cil_tmp19 == 1) {
      goto case_1;
    } else {
      {
      __cil_tmp20 = (int )ctrl_cmd.command;
      if (__cil_tmp20 == 2) {
        goto case_2;
      } else {
        goto switch_default;
        if (0) {
          case_0:
          {
          tmp___0 = capable(21);
          }
          if (tmp___0) {
            tmp___1 = 0;
          } else {
            tmp___1 = 1;
          }
          if (tmp___1) {
            return (-1L);
          } else {

          }
          {
          tmp___2 = new_decode_dev(ctrl_cmd.dev);
          ret = pkt_setup_dev(tmp___2, & pkt_dev);
          ctrl_cmd.pkt_dev = new_encode_dev(pkt_dev);
          }
          goto ldv_31429;
          case_1:
          {
          tmp___3 = capable(21);
          }
          if (tmp___3) {
            tmp___4 = 0;
          } else {
            tmp___4 = 1;
          }
          if (tmp___4) {
            return (-1L);
          } else {

          }
          {
          tmp___5 = new_decode_dev(ctrl_cmd.pkt_dev);
          ret = pkt_remove_dev(tmp___5);
          }
          goto ldv_31429;
          case_2:
          {
          pkt_get_status(& ctrl_cmd);
          }
          goto ldv_31429;
          switch_default: ;
          return (-25L);
        } else {

        }
      }
      }
    }
    }
  }
  }
  ldv_31429:
  {
  __cil_tmp21 = (void const *)(& ctrl_cmd);
  tmp___6 = copy_to_user(argp, __cil_tmp21, 24U);
  }
  if (tmp___6 != 0) {
    return (-14L);
  } else {

  }
  return ((long )ret);
}
}
static long pkt_ctl_compat_ioctl(struct file *file , unsigned int cmd , unsigned long arg )
{ void *tmp ;
  long tmp___0 ;
  compat_uptr_t __cil_tmp6 ;
  unsigned long __cil_tmp7 ;

  {
  {
  __cil_tmp6 = (compat_uptr_t )arg;
  tmp = compat_ptr(__cil_tmp6);
  __cil_tmp7 = (unsigned long )tmp;
  tmp___0 = pkt_ctl_ioctl(file, cmd, __cil_tmp7);
  }
  return (tmp___0);
}
}
static struct file_operations const pkt_ctl_fops =
     {& __this_module, & no_llseek, (ssize_t (*)(struct file * , char * , size_t ,
                                               loff_t * ))0, (ssize_t (*)(struct file * ,
                                                                          char const * ,
                                                                          size_t ,
                                                                          loff_t * ))0,
    (ssize_t (*)(struct kiocb * , struct iovec const * , unsigned long , loff_t ))0,
    (ssize_t (*)(struct kiocb * , struct iovec const * , unsigned long , loff_t ))0,
    (int (*)(struct file * , void * , int (*)(void * , char const * , int , loff_t ,
                                              u64 , unsigned int ) ))0, (unsigned int (*)(struct file * ,
                                                                                            struct poll_table_struct * ))0,
    & pkt_ctl_ioctl, & pkt_ctl_compat_ioctl, (int (*)(struct file * , struct vm_area_struct * ))0,
    & nonseekable_open, (int (*)(struct file * , fl_owner_t ))0, (int (*)(struct inode * ,
                                                                           struct file * ))0,
    (int (*)(struct file * , int ))0, (int (*)(struct kiocb * , int ))0, (int (*)(int ,
                                                                                    struct file * ,
                                                                                    int ))0,
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
static struct miscdevice pkt_misc =
     {255, "pktcdvd", & pkt_ctl_fops, {(struct list_head *)0, (struct list_head *)0},
    (struct device *)0, (struct device *)0, "pktcdvd/control", 0U};
static int pkt_init(void)
{ int ret ;
  struct lock_class_key __key ;
  mempool_t *__cil_tmp3 ;
  unsigned long __cil_tmp4 ;
  unsigned long __cil_tmp5 ;
  unsigned int __cil_tmp6 ;
  struct proc_dir_entry *__cil_tmp7 ;
  unsigned int __cil_tmp8 ;

  {
  {
  __mutex_init(& ctl_mutex, "&ctl_mutex", & __key);
  psd_pool = mempool_create_kmalloc_pool(64, 16UL);
  }
  {
  __cil_tmp3 = (mempool_t *)0;
  __cil_tmp4 = (unsigned long )__cil_tmp3;
  __cil_tmp5 = (unsigned long )psd_pool;
  if (__cil_tmp5 == __cil_tmp4) {
    return (-12);
  } else {

  }
  }
  {
  __cil_tmp6 = (unsigned int )pktdev_major;
  ret = register_blkdev(__cil_tmp6, "pktcdvd");
  }
  if (ret < 0) {
    {
    printk("pktcdvd: Unable to register block device\n");
    }
    goto out2;
  } else {

  }
  if (pktdev_major == 0) {
    pktdev_major = ret;
  } else {

  }
  {
  ret = pkt_sysfs_init();
  }
  if (ret != 0) {
    goto out;
  } else {

  }
  {
  pkt_debugfs_init();
  ret = misc_register(& pkt_misc);
  }
  if (ret != 0) {
    {
    printk("pktcdvd: Unable to register misc device\n");
    }
    goto out_misc;
  } else {

  }
  {
  __cil_tmp7 = (struct proc_dir_entry *)0;
  pkt_proc = proc_mkdir("driver/pktcdvd", __cil_tmp7);
  }
  return (0);
  out_misc:
  {
  pkt_debugfs_cleanup();
  pkt_sysfs_cleanup();
  }
  out:
  {
  __cil_tmp8 = (unsigned int )pktdev_major;
  unregister_blkdev(__cil_tmp8, "pktcdvd");
  }
  out2:
  {
  mempool_destroy(psd_pool);
  }
  return (ret);
}
}
static void pkt_exit(void)
{ struct proc_dir_entry *__cil_tmp1 ;
  unsigned int __cil_tmp2 ;

  {
  {
  __cil_tmp1 = (struct proc_dir_entry *)0;
  remove_proc_entry("driver/pktcdvd", __cil_tmp1);
  misc_deregister(& pkt_misc);
  pkt_debugfs_cleanup();
  pkt_sysfs_cleanup();
  __cil_tmp2 = (unsigned int )pktdev_major;
  unregister_blkdev(__cil_tmp2, "pktcdvd");
  mempool_destroy(psd_pool);
  }
  return;
}
}
void ldv_check_final_state(void) ;
extern void ldv_check_return_value(int ) ;
extern void ldv_initialize(void) ;
extern int nondet_int(void) ;
int LDV_IN_INTERRUPT ;
void main(void)
{ struct kobject *var_group1 ;
  struct attribute *var_group2 ;
  char *var_kobj_pkt_show_3_p2 ;
  char const *var_kobj_pkt_store_5_p2 ;
  size_t var_kobj_pkt_store_5_p3 ;
  struct inode *var_group3 ;
  struct file *var_group4 ;
  int res_pkt_debugfs_fops_open_15 ;
  int res_pkt_seq_open_80 ;
  struct block_device *var_group5 ;
  fmode_t var_pkt_open_73_p1 ;
  int res_pkt_open_73 ;
  struct gendisk *var_group6 ;
  fmode_t var_pkt_close_74_p1 ;
  fmode_t var_pkt_ioctl_82_p1 ;
  unsigned int var_pkt_ioctl_82_p2 ;
  unsigned long var_pkt_ioctl_82_p3 ;
  unsigned int var_pkt_check_events_83_p1 ;
  unsigned int var_pkt_ctl_ioctl_88_p1 ;
  unsigned long var_pkt_ctl_ioctl_88_p2 ;
  unsigned int var_pkt_ctl_compat_ioctl_89_p1 ;
  unsigned long var_pkt_ctl_compat_ioctl_89_p2 ;
  int ldv_s_kobj_pkt_type_stat_kobj_type ;
  int ldv_s_kobj_pkt_type_wqueue_kobj_type ;
  int ldv_s_debug_fops_file_operations ;
  int ldv_s_pkt_proc_fops_file_operations ;
  int ldv_s_pktcdvd_ops_block_device_operations ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  {
  ldv_s_kobj_pkt_type_stat_kobj_type = 0;
  ldv_s_kobj_pkt_type_wqueue_kobj_type = 0;
  ldv_s_debug_fops_file_operations = 0;
  ldv_s_pkt_proc_fops_file_operations = 0;
  ldv_s_pktcdvd_ops_block_device_operations = 0;
  LDV_IN_INTERRUPT = 1;
  ldv_initialize();
  tmp = pkt_init();
  }
  if (tmp != 0) {
    goto ldv_final;
  } else {

  }
  goto ldv_31520;
  ldv_31519:
  {
  tmp___0 = nondet_int();
  }
  if (tmp___0 == 0) {
    goto case_0;
  } else
  if (tmp___0 == 1) {
    goto case_1;
  } else
  if (tmp___0 == 2) {
    goto case_2;
  } else
  if (tmp___0 == 3) {
    goto case_3;
  } else
  if (tmp___0 == 4) {
    goto case_4;
  } else
  if (tmp___0 == 5) {
    goto case_5;
  } else
  if (tmp___0 == 6) {
    goto case_6;
  } else
  if (tmp___0 == 7) {
    goto case_7;
  } else
  if (tmp___0 == 8) {
    goto case_8;
  } else
  if (tmp___0 == 9) {
    goto case_9;
  } else
  if (tmp___0 == 10) {
    goto case_10;
  } else
  if (tmp___0 == 11) {
    goto case_11;
  } else {
    goto switch_default;
    if (0) {
      case_0:
      {
      kobj_pkt_show(var_group1, var_group2, var_kobj_pkt_show_3_p2);
      }
      goto ldv_31505;
      case_1:
      {
      kobj_pkt_store(var_group1, var_group2, var_kobj_pkt_store_5_p2, var_kobj_pkt_store_5_p3);
      }
      goto ldv_31505;
      case_2: ;
      if (ldv_s_kobj_pkt_type_stat_kobj_type == 0) {
        {
        pkt_kobj_release(var_group1);
        ldv_s_kobj_pkt_type_stat_kobj_type = 0;
        }
      } else {

      }
      goto ldv_31505;
      case_3: ;
      if (ldv_s_kobj_pkt_type_wqueue_kobj_type == 0) {
        {
        pkt_kobj_release(var_group1);
        ldv_s_kobj_pkt_type_wqueue_kobj_type = 0;
        }
      } else {

      }
      goto ldv_31505;
      case_4: ;
      if (ldv_s_debug_fops_file_operations == 0) {
        {
        res_pkt_debugfs_fops_open_15 = pkt_debugfs_fops_open(var_group3, var_group4);
        ldv_check_return_value(res_pkt_debugfs_fops_open_15);
        }
        if (res_pkt_debugfs_fops_open_15 != 0) {
          goto ldv_module_exit;
        } else {

        }
        ldv_s_debug_fops_file_operations = 0;
      } else {

      }
      goto ldv_31505;
      case_5: ;
      if (ldv_s_pkt_proc_fops_file_operations == 0) {
        {
        res_pkt_seq_open_80 = pkt_seq_open(var_group3, var_group4);
        ldv_check_return_value(res_pkt_seq_open_80);
        }
        if (res_pkt_seq_open_80 != 0) {
          goto ldv_module_exit;
        } else {

        }
        ldv_s_pkt_proc_fops_file_operations = 0;
      } else {

      }
      goto ldv_31505;
      case_6: ;
      if (ldv_s_pktcdvd_ops_block_device_operations == 0) {
        {
        res_pkt_open_73 = pkt_open(var_group5, var_pkt_open_73_p1);
        ldv_check_return_value(res_pkt_open_73);
        }
        if (res_pkt_open_73 != 0) {
          goto ldv_module_exit;
        } else {

        }
        ldv_s_pktcdvd_ops_block_device_operations = ldv_s_pktcdvd_ops_block_device_operations + 1;
      } else {

      }
      goto ldv_31505;
      case_7: ;
      if (ldv_s_pktcdvd_ops_block_device_operations == 1) {
        {
        pkt_close(var_group6, var_pkt_close_74_p1);
        ldv_s_pktcdvd_ops_block_device_operations = 0;
        }
      } else {

      }
      goto ldv_31505;
      case_8:
      {
      pkt_ioctl(var_group5, var_pkt_ioctl_82_p1, var_pkt_ioctl_82_p2, var_pkt_ioctl_82_p3);
      }
      goto ldv_31505;
      case_9:
      {
      pkt_check_events(var_group6, var_pkt_check_events_83_p1);
      }
      goto ldv_31505;
      case_10:
      {
      pkt_ctl_ioctl(var_group4, var_pkt_ctl_ioctl_88_p1, var_pkt_ctl_ioctl_88_p2);
      }
      goto ldv_31505;
      case_11:
      {
      pkt_ctl_compat_ioctl(var_group4, var_pkt_ctl_compat_ioctl_89_p1, var_pkt_ctl_compat_ioctl_89_p2);
      }
      goto ldv_31505;
      switch_default: ;
      goto ldv_31505;
    } else {

    }
  }
  ldv_31505: ;
  ldv_31520:
  {
  tmp___1 = nondet_int();
  }
  if (tmp___1 != 0) {
    goto ldv_31519;
  } else
  if (ldv_s_kobj_pkt_type_stat_kobj_type != 0) {
    goto ldv_31519;
  } else
  if (ldv_s_kobj_pkt_type_wqueue_kobj_type != 0) {
    goto ldv_31519;
  } else
  if (ldv_s_debug_fops_file_operations != 0) {
    goto ldv_31519;
  } else
  if (ldv_s_pkt_proc_fops_file_operations != 0) {
    goto ldv_31519;
  } else
  if (ldv_s_pktcdvd_ops_block_device_operations != 0) {
    goto ldv_31519;
  } else {
    goto ldv_31521;
  }
  ldv_31521: ;
  ldv_module_exit:
  {
  pkt_exit();
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
__inline static int ldv_try_module_get_1(struct module *module )
{ int tmp ;

  {
  {
  tmp = ldv_try_module_get(module);
  }
  return (tmp);
}
}
void ldv_module_put_2(struct module *ldv_func_arg1 )
{

  {
  {
  ldv_module_put(ldv_func_arg1);
  }
  return;
}
}
__inline static void ldv___module_get_3(struct module *module )
{

  {
  {
  ldv_module_get(module);
  }
  return;
}
}
void ldv_module_put_4(struct module *ldv_func_arg1 )
{

  {
  {
  ldv_module_put(ldv_func_arg1);
  }
  return;
}
}
void ldv_module_put_5(struct module *ldv_func_arg1 )
{

  {
  {
  ldv_module_put(ldv_func_arg1);
  }
  return;
}
}
