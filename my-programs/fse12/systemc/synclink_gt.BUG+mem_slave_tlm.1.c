
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
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u32 __wsum;
typedef unsigned int gfp_t;
typedef unsigned int fmode_t;
typedef u64 phys_addr_t;
typedef phys_addr_t resource_size_t;
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
struct paravirt_callee_save {
   void *func ;
};
struct pv_irq_ops {
   struct paravirt_callee_save save_fl ;
   struct paravirt_callee_save restore_fl ;
   struct paravirt_callee_save irq_disable ;
   struct paravirt_callee_save irq_enable ;
   void (*safe_halt)(void) ;
   void (*halt)(void) ;
   void (*adjust_exception_frame)(void) ;
};
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
struct resource {
   resource_size_t start ;
   resource_size_t end ;
   char const *name ;
   unsigned long flags ;
   struct resource *parent ;
   struct resource *sibling ;
   struct resource *child ;
};
struct pci_dev;
struct pci_dev;
struct pci_dev;
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
struct pci_bus;
struct pci_bus;
struct pci_bus;
struct pci_bus;
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
struct siginfo;
struct siginfo;
struct siginfo;
struct siginfo;
struct __anonstruct_sigset_t_130 {
   unsigned long sig[1U] ;
};
typedef struct __anonstruct_sigset_t_130 sigset_t;
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
struct __anonstruct__kill_132 {
   __kernel_pid_t _pid ;
   __kernel_uid32_t _uid ;
};
struct __anonstruct__timer_133 {
   __kernel_timer_t _tid ;
   int _overrun ;
   char _pad[0U] ;
   sigval_t _sigval ;
   int _sys_private ;
};
struct __anonstruct__rt_134 {
   __kernel_pid_t _pid ;
   __kernel_uid32_t _uid ;
   sigval_t _sigval ;
};
struct __anonstruct__sigchld_135 {
   __kernel_pid_t _pid ;
   __kernel_uid32_t _uid ;
   int _status ;
   __kernel_clock_t _utime ;
   __kernel_clock_t _stime ;
};
struct __anonstruct__sigfault_136 {
   void *_addr ;
   short _addr_lsb ;
};
struct __anonstruct__sigpoll_137 {
   long _band ;
   int _fd ;
};
union __anonunion__sifields_131 {
   int _pad[28U] ;
   struct __anonstruct__kill_132 _kill ;
   struct __anonstruct__timer_133 _timer ;
   struct __anonstruct__rt_134 _rt ;
   struct __anonstruct__sigchld_135 _sigchld ;
   struct __anonstruct__sigfault_136 _sigfault ;
   struct __anonstruct__sigpoll_137 _sigpoll ;
};
struct siginfo {
   int si_signo ;
   int si_errno ;
   int si_code ;
   union __anonunion__sifields_131 _sifields ;
};
typedef struct siginfo siginfo_t;
struct user_struct;
struct user_struct;
struct user_struct;
struct sigpending {
   struct list_head list ;
   sigset_t signal ;
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
struct __anonstruct_ldv_14221_142 {
   u16 inuse ;
   u16 objects ;
};
union __anonunion_ldv_14222_141 {
   atomic_t _mapcount ;
   struct __anonstruct_ldv_14221_142 ldv_14221 ;
};
struct __anonstruct_ldv_14227_144 {
   unsigned long private ;
   struct address_space *mapping ;
};
union __anonunion_ldv_14230_143 {
   struct __anonstruct_ldv_14227_144 ldv_14227 ;
   struct kmem_cache *slab ;
   struct page *first_page ;
};
union __anonunion_ldv_14234_145 {
   unsigned long index ;
   void *freelist ;
};
struct page {
   unsigned long flags ;
   atomic_t _count ;
   union __anonunion_ldv_14222_141 ldv_14222 ;
   union __anonunion_ldv_14230_143 ldv_14230 ;
   union __anonunion_ldv_14234_145 ldv_14234 ;
   struct list_head lru ;
};
struct __anonstruct_vm_set_147 {
   struct list_head list ;
   void *parent ;
   struct vm_area_struct *head ;
};
union __anonunion_shared_146 {
   struct __anonstruct_vm_set_147 vm_set ;
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
   union __anonunion_shared_146 shared ;
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
union __anonunion_ldv_15180_149 {
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
   union __anonunion_ldv_15180_149 ldv_15180 ;
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
enum irqreturn {
    IRQ_NONE = 0,
    IRQ_HANDLED = 1,
    IRQ_WAKE_THREAD = 2
} ;
typedef enum irqreturn irqreturn_t;
struct proc_dir_entry;
struct proc_dir_entry;
struct proc_dir_entry;
struct proc_dir_entry;
struct exception_table_entry {
   unsigned long insn ;
   unsigned long fixup ;
};
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
typedef unsigned long kernel_ulong_t;
struct pci_device_id {
   __u32 vendor ;
   __u32 device ;
   __u32 subvendor ;
   __u32 subdevice ;
   __u32 class ;
   __u32 class_mask ;
   kernel_ulong_t driver_data ;
};
struct of_device_id {
   char name[32U] ;
   char type[32U] ;
   char compatible[128U] ;
   void *data ;
};
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
struct device_type;
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
struct hotplug_slot;
struct hotplug_slot;
struct hotplug_slot;
struct pci_slot {
   struct pci_bus *bus ;
   struct list_head list ;
   struct hotplug_slot *hotplug ;
   unsigned char number ;
   struct kobject kobj ;
};
typedef int pci_power_t;
typedef unsigned int pci_channel_state_t;
enum pci_channel_state {
    pci_channel_io_normal = 1,
    pci_channel_io_frozen = 2,
    pci_channel_io_perm_failure = 3
} ;
typedef unsigned short pci_dev_flags_t;
typedef unsigned short pci_bus_flags_t;
struct pcie_link_state;
struct pcie_link_state;
struct pcie_link_state;
struct pcie_link_state;
struct pci_vpd;
struct pci_vpd;
struct pci_vpd;
struct pci_vpd;
struct pci_sriov;
struct pci_sriov;
struct pci_sriov;
struct pci_sriov;
struct pci_ats;
struct pci_ats;
struct pci_ats;
struct pci_ats;
struct pci_driver;
struct pci_driver;
struct pci_driver;
union __anonunion_ldv_19516_156 {
   struct pci_sriov *sriov ;
   struct pci_dev *physfn ;
};
struct pci_dev {
   struct list_head bus_list ;
   struct pci_bus *bus ;
   struct pci_bus *subordinate ;
   void *sysdata ;
   struct proc_dir_entry *procent ;
   struct pci_slot *slot ;
   unsigned int devfn ;
   unsigned short vendor ;
   unsigned short device ;
   unsigned short subsystem_vendor ;
   unsigned short subsystem_device ;
   unsigned int class ;
   u8 revision ;
   u8 hdr_type ;
   u8 pcie_cap ;
   u8 pcie_type ;
   u8 rom_base_reg ;
   u8 pin ;
   struct pci_driver *driver ;
   u64 dma_mask ;
   struct device_dma_parameters dma_parms ;
   pci_power_t current_state ;
   int pm_cap ;
   unsigned char pme_support : 5 ;
   unsigned char pme_interrupt : 1 ;
   unsigned char d1_support : 1 ;
   unsigned char d2_support : 1 ;
   unsigned char no_d1d2 : 1 ;
   unsigned char mmio_always_on : 1 ;
   unsigned char wakeup_prepared : 1 ;
   unsigned int d3_delay ;
   struct pcie_link_state *link_state ;
   pci_channel_state_t error_state ;
   struct device dev ;
   int cfg_size ;
   unsigned int irq ;
   struct resource resource[18U] ;
   resource_size_t fw_addr[18U] ;
   unsigned char transparent : 1 ;
   unsigned char multifunction : 1 ;
   unsigned char is_added : 1 ;
   unsigned char is_busmaster : 1 ;
   unsigned char no_msi : 1 ;
   unsigned char block_ucfg_access : 1 ;
   unsigned char broken_parity_status : 1 ;
   unsigned char irq_reroute_variant : 2 ;
   unsigned char msi_enabled : 1 ;
   unsigned char msix_enabled : 1 ;
   unsigned char ari_enabled : 1 ;
   unsigned char is_managed : 1 ;
   unsigned char is_pcie : 1 ;
   unsigned char needs_freset : 1 ;
   unsigned char state_saved : 1 ;
   unsigned char is_physfn : 1 ;
   unsigned char is_virtfn : 1 ;
   unsigned char reset_fn : 1 ;
   unsigned char is_hotplug_bridge : 1 ;
   unsigned char __aer_firmware_first_valid : 1 ;
   unsigned char __aer_firmware_first : 1 ;
   pci_dev_flags_t dev_flags ;
   atomic_t enable_cnt ;
   u32 saved_config_space[16U] ;
   struct hlist_head saved_cap_space ;
   struct bin_attribute *rom_attr ;
   int rom_attr_enabled ;
   struct bin_attribute *res_attr[18U] ;
   struct bin_attribute *res_attr_wc[18U] ;
   struct list_head msi_list ;
   struct pci_vpd *vpd ;
   union __anonunion_ldv_19516_156 ldv_19516 ;
   struct pci_ats *ats ;
};
struct pci_ops;
struct pci_ops;
struct pci_ops;
struct pci_bus {
   struct list_head node ;
   struct pci_bus *parent ;
   struct list_head children ;
   struct list_head devices ;
   struct pci_dev *self ;
   struct list_head slots ;
   struct resource *resource[4U] ;
   struct list_head resources ;
   struct pci_ops *ops ;
   void *sysdata ;
   struct proc_dir_entry *procdir ;
   unsigned char number ;
   unsigned char primary ;
   unsigned char secondary ;
   unsigned char subordinate ;
   unsigned char max_bus_speed ;
   unsigned char cur_bus_speed ;
   char name[48U] ;
   unsigned short bridge_ctl ;
   pci_bus_flags_t bus_flags ;
   struct device *bridge ;
   struct device dev ;
   struct bin_attribute *legacy_io ;
   struct bin_attribute *legacy_mem ;
   unsigned char is_added : 1 ;
};
struct pci_ops {
   int (*read)(struct pci_bus * , unsigned int , int , int , u32 * ) ;
   int (*write)(struct pci_bus * , unsigned int , int , int , u32 ) ;
};
struct pci_dynids {
   spinlock_t lock ;
   struct list_head list ;
};
typedef unsigned int pci_ers_result_t;
struct pci_error_handlers {
   pci_ers_result_t (*error_detected)(struct pci_dev * , enum pci_channel_state ) ;
   pci_ers_result_t (*mmio_enabled)(struct pci_dev * ) ;
   pci_ers_result_t (*link_reset)(struct pci_dev * ) ;
   pci_ers_result_t (*slot_reset)(struct pci_dev * ) ;
   void (*resume)(struct pci_dev * ) ;
};
struct pci_driver {
   struct list_head node ;
   char const *name ;
   struct pci_device_id const *id_table ;
   int (*probe)(struct pci_dev * , struct pci_device_id const * ) ;
   void (*remove)(struct pci_dev * ) ;
   int (*suspend)(struct pci_dev * , pm_message_t ) ;
   int (*suspend_late)(struct pci_dev * , pm_message_t ) ;
   int (*resume_early)(struct pci_dev * ) ;
   int (*resume)(struct pci_dev * ) ;
   void (*shutdown)(struct pci_dev * ) ;
   struct pci_error_handlers *err_handler ;
   struct device_driver driver ;
   struct pci_dynids dynids ;
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
struct file_ra_state;
struct file_ra_state;
struct writeback_control;
struct writeback_control;
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
struct dentry_operations;
struct dentry_operations;
struct dentry_operations;
struct super_block;
struct super_block;
struct super_block;
union __anonunion_d_u_157 {
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
   union __anonunion_d_u_157 d_u ;
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
union __anonunion_arg_159 {
   char *buf ;
   void *data ;
};
struct __anonstruct_read_descriptor_t_158 {
   size_t written ;
   size_t count ;
   union __anonunion_arg_159 arg ;
   int error ;
};
typedef struct __anonstruct_read_descriptor_t_158 read_descriptor_t;
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
union __anonunion_ldv_25093_160 {
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
union __anonunion_ldv_25120_161 {
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
   union __anonunion_ldv_25093_160 ldv_25093 ;
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
   union __anonunion_ldv_25120_161 ldv_25120 ;
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
union __anonunion_f_u_162 {
   struct list_head fu_list ;
   struct rcu_head fu_rcuhead ;
};
struct file {
   union __anonunion_f_u_162 f_u ;
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
struct __anonstruct_afs_164 {
   struct list_head link ;
   int state ;
};
union __anonunion_fl_u_163 {
   struct nfs_lock_info nfs_fl ;
   struct nfs4_lock_info nfs4_fl ;
   struct __anonstruct_afs_164 afs ;
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
   union __anonunion_fl_u_163 fl_u ;
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
typedef unsigned char cc_t;
typedef unsigned int speed_t;
typedef unsigned int tcflag_t;
struct ktermios {
   tcflag_t c_iflag ;
   tcflag_t c_oflag ;
   tcflag_t c_cflag ;
   tcflag_t c_lflag ;
   cc_t c_line ;
   cc_t c_cc[19U] ;
   speed_t c_ispeed ;
   speed_t c_ospeed ;
};
struct winsize {
   unsigned short ws_row ;
   unsigned short ws_col ;
   unsigned short ws_xpixel ;
   unsigned short ws_ypixel ;
};
struct termiox {
   __u16 x_hflag ;
   __u16 x_cflag ;
   __u16 x_rflag[5U] ;
   __u16 x_sflag ;
};
struct cdev {
   struct kobject kobj ;
   struct module *owner ;
   struct file_operations const *ops ;
   struct list_head list ;
   dev_t dev ;
   unsigned int count ;
};
struct tty_driver;
struct tty_driver;
struct tty_driver;
struct tty_driver;
struct serial_icounter_struct;
struct serial_icounter_struct;
struct serial_icounter_struct;
struct serial_icounter_struct;
struct tty_operations {
   struct tty_struct *(*lookup)(struct tty_driver * , struct inode * , int ) ;
   int (*install)(struct tty_driver * , struct tty_struct * ) ;
   void (*remove)(struct tty_driver * , struct tty_struct * ) ;
   int (*open)(struct tty_struct * , struct file * ) ;
   void (*close)(struct tty_struct * , struct file * ) ;
   void (*shutdown)(struct tty_struct * ) ;
   void (*cleanup)(struct tty_struct * ) ;
   int (*write)(struct tty_struct * , unsigned char const * , int ) ;
   int (*put_char)(struct tty_struct * , unsigned char ) ;
   void (*flush_chars)(struct tty_struct * ) ;
   int (*write_room)(struct tty_struct * ) ;
   int (*chars_in_buffer)(struct tty_struct * ) ;
   int (*ioctl)(struct tty_struct * , unsigned int , unsigned long ) ;
   long (*compat_ioctl)(struct tty_struct * , unsigned int , unsigned long ) ;
   void (*set_termios)(struct tty_struct * , struct ktermios * ) ;
   void (*throttle)(struct tty_struct * ) ;
   void (*unthrottle)(struct tty_struct * ) ;
   void (*stop)(struct tty_struct * ) ;
   void (*start)(struct tty_struct * ) ;
   void (*hangup)(struct tty_struct * ) ;
   int (*break_ctl)(struct tty_struct * , int ) ;
   void (*flush_buffer)(struct tty_struct * ) ;
   void (*set_ldisc)(struct tty_struct * ) ;
   void (*wait_until_sent)(struct tty_struct * , int ) ;
   void (*send_xchar)(struct tty_struct * , char ) ;
   int (*tiocmget)(struct tty_struct * ) ;
   int (*tiocmset)(struct tty_struct * , unsigned int , unsigned int ) ;
   int (*resize)(struct tty_struct * , struct winsize * ) ;
   int (*set_termiox)(struct tty_struct * , struct termiox * ) ;
   int (*get_icount)(struct tty_struct * , struct serial_icounter_struct * ) ;
   int (*poll_init)(struct tty_driver * , int , char * ) ;
   int (*poll_get_char)(struct tty_driver * , int ) ;
   void (*poll_put_char)(struct tty_driver * , int , char ) ;
   struct file_operations const *proc_fops ;
};
struct tty_driver {
   int magic ;
   struct kref kref ;
   struct cdev cdev ;
   struct module *owner ;
   char const *driver_name ;
   char const *name ;
   int name_base ;
   int major ;
   int minor_start ;
   int minor_num ;
   int num ;
   short type ;
   short subtype ;
   struct ktermios init_termios ;
   int flags ;
   struct proc_dir_entry *proc_entry ;
   struct tty_driver *other ;
   struct tty_struct **ttys ;
   struct ktermios **termios ;
   struct ktermios **termios_locked ;
   void *driver_state ;
   struct tty_operations const *ops ;
   struct list_head tty_drivers ;
};
struct pps_event_time {
   struct timespec ts_real ;
};
struct tty_ldisc_ops {
   int magic ;
   char *name ;
   int num ;
   int flags ;
   int (*open)(struct tty_struct * ) ;
   void (*close)(struct tty_struct * ) ;
   void (*flush_buffer)(struct tty_struct * ) ;
   ssize_t (*chars_in_buffer)(struct tty_struct * ) ;
   ssize_t (*read)(struct tty_struct * , struct file * , unsigned char * , size_t ) ;
   ssize_t (*write)(struct tty_struct * , struct file * , unsigned char const * ,
                    size_t ) ;
   int (*ioctl)(struct tty_struct * , struct file * , unsigned int , unsigned long ) ;
   long (*compat_ioctl)(struct tty_struct * , struct file * , unsigned int , unsigned long ) ;
   void (*set_termios)(struct tty_struct * , struct ktermios * ) ;
   unsigned int (*poll)(struct tty_struct * , struct file * , struct poll_table_struct * ) ;
   int (*hangup)(struct tty_struct * ) ;
   void (*receive_buf)(struct tty_struct * , unsigned char const * , char * , int ) ;
   void (*write_wakeup)(struct tty_struct * ) ;
   void (*dcd_change)(struct tty_struct * , unsigned int , struct pps_event_time * ) ;
   struct module *owner ;
   int refcount ;
};
struct tty_ldisc {
   struct tty_ldisc_ops *ops ;
   atomic_t users ;
};
struct tty_buffer {
   struct tty_buffer *next ;
   char *char_buf_ptr ;
   unsigned char *flag_buf_ptr ;
   int used ;
   int size ;
   int commit ;
   int read ;
   unsigned long data[0U] ;
};
struct tty_bufhead {
   struct work_struct work ;
   spinlock_t lock ;
   struct tty_buffer *head ;
   struct tty_buffer *tail ;
   struct tty_buffer *free ;
   int memory_used ;
};
struct tty_port;
struct tty_port;
struct tty_port;
struct tty_port;
struct tty_port_operations {
   int (*carrier_raised)(struct tty_port * ) ;
   void (*dtr_rts)(struct tty_port * , int ) ;
   void (*shutdown)(struct tty_port * ) ;
   void (*drop)(struct tty_port * ) ;
   int (*activate)(struct tty_port * , struct tty_struct * ) ;
   void (*destruct)(struct tty_port * ) ;
};
struct tty_port {
   struct tty_struct *tty ;
   struct tty_port_operations const *ops ;
   spinlock_t lock ;
   int blocked_open ;
   int count ;
   wait_queue_head_t open_wait ;
   wait_queue_head_t close_wait ;
   wait_queue_head_t delta_msr_wait ;
   unsigned long flags ;
   unsigned char console : 1 ;
   struct mutex mutex ;
   struct mutex buf_mutex ;
   unsigned char *xmit_buf ;
   unsigned int close_delay ;
   unsigned int closing_wait ;
   int drain_delay ;
   struct kref kref ;
};
struct tty_struct {
   int magic ;
   struct kref kref ;
   struct device *dev ;
   struct tty_driver *driver ;
   struct tty_operations const *ops ;
   int index ;
   struct mutex ldisc_mutex ;
   struct tty_ldisc *ldisc ;
   struct mutex termios_mutex ;
   spinlock_t ctrl_lock ;
   struct ktermios *termios ;
   struct ktermios *termios_locked ;
   struct termiox *termiox ;
   char name[64U] ;
   struct pid *pgrp ;
   struct pid *session ;
   unsigned long flags ;
   int count ;
   struct winsize winsize ;
   unsigned char stopped : 1 ;
   unsigned char hw_stopped : 1 ;
   unsigned char flow_stopped : 1 ;
   unsigned char packet : 1 ;
   unsigned char low_latency : 1 ;
   unsigned char warned : 1 ;
   unsigned char ctrl_status ;
   unsigned int receive_room ;
   struct tty_struct *link ;
   struct fasync_struct *fasync ;
   struct tty_bufhead buf ;
   int alt_speed ;
   wait_queue_head_t write_wait ;
   wait_queue_head_t read_wait ;
   struct work_struct hangup_work ;
   void *disc_data ;
   void *driver_data ;
   struct list_head tty_files ;
   unsigned int column ;
   unsigned char lnext : 1 ;
   unsigned char erasing : 1 ;
   unsigned char raw : 1 ;
   unsigned char real_raw : 1 ;
   unsigned char icanon : 1 ;
   unsigned char closing : 1 ;
   unsigned char echo_overrun : 1 ;
   unsigned short minimum_to_wake ;
   unsigned long overrun_time ;
   int num_overrun ;
   unsigned long process_char_map[4U] ;
   char *read_buf ;
   int read_head ;
   int read_tail ;
   int read_cnt ;
   unsigned long read_flags[64U] ;
   unsigned char *echo_buf ;
   unsigned int echo_pos ;
   unsigned int echo_cnt ;
   int canon_data ;
   unsigned long canon_head ;
   unsigned int canon_column ;
   struct mutex atomic_read_lock ;
   struct mutex atomic_write_lock ;
   struct mutex output_lock ;
   struct mutex echo_lock ;
   unsigned char *write_buf ;
   int write_cnt ;
   spinlock_t read_lock ;
   struct work_struct SAK_work ;
   struct tty_port *port ;
};
struct serial_icounter_struct {
   int cts ;
   int dsr ;
   int rng ;
   int dcd ;
   int rx ;
   int tx ;
   int frame ;
   int overrun ;
   int parity ;
   int brk ;
   int buf_overrun ;
   int reserved[9U] ;
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
typedef unsigned short sa_family_t;
struct sockaddr {
   sa_family_t sa_family ;
   char sa_data[14U] ;
};
struct __anonstruct_sync_serial_settings_165 {
   unsigned int clock_rate ;
   unsigned int clock_type ;
   unsigned short loopback ;
};
typedef struct __anonstruct_sync_serial_settings_165 sync_serial_settings;
struct __anonstruct_te1_settings_166 {
   unsigned int clock_rate ;
   unsigned int clock_type ;
   unsigned short loopback ;
   unsigned int slot_map ;
};
typedef struct __anonstruct_te1_settings_166 te1_settings;
struct __anonstruct_raw_hdlc_proto_167 {
   unsigned short encoding ;
   unsigned short parity ;
};
typedef struct __anonstruct_raw_hdlc_proto_167 raw_hdlc_proto;
struct __anonstruct_fr_proto_168 {
   unsigned int t391 ;
   unsigned int t392 ;
   unsigned int n391 ;
   unsigned int n392 ;
   unsigned int n393 ;
   unsigned short lmi ;
   unsigned short dce ;
};
typedef struct __anonstruct_fr_proto_168 fr_proto;
struct __anonstruct_fr_proto_pvc_169 {
   unsigned int dlci ;
};
typedef struct __anonstruct_fr_proto_pvc_169 fr_proto_pvc;
struct __anonstruct_fr_proto_pvc_info_170 {
   unsigned int dlci ;
   char master[16U] ;
};
typedef struct __anonstruct_fr_proto_pvc_info_170 fr_proto_pvc_info;
struct __anonstruct_cisco_proto_171 {
   unsigned int interval ;
   unsigned int timeout ;
};
typedef struct __anonstruct_cisco_proto_171 cisco_proto;
struct ifmap {
   unsigned long mem_start ;
   unsigned long mem_end ;
   unsigned short base_addr ;
   unsigned char irq ;
   unsigned char dma ;
   unsigned char port ;
};
union __anonunion_ifs_ifsu_172 {
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
   union __anonunion_ifs_ifsu_172 ifs_ifsu ;
};
union __anonunion_ifr_ifrn_173 {
   char ifrn_name[16U] ;
};
union __anonunion_ifr_ifru_174 {
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
   union __anonunion_ifr_ifrn_173 ifr_ifrn ;
   union __anonunion_ifr_ifru_174 ifr_ifru ;
};
struct ethhdr {
   unsigned char h_dest[6U] ;
   unsigned char h_source[6U] ;
   __be16 h_proto ;
};
struct net;
struct net;
struct net;
struct net;
struct sk_buff;
struct sk_buff;
struct sk_buff;
struct sk_buff;
typedef s32 dma_cookie_t;
struct net_device;
struct net_device;
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
struct sec_path;
struct __anonstruct_ldv_29530_178 {
   __u16 csum_start ;
   __u16 csum_offset ;
};
union __anonunion_ldv_29531_177 {
   __wsum csum ;
   struct __anonstruct_ldv_29530_178 ldv_29530 ;
};
union __anonunion_ldv_29561_179 {
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
   union __anonunion_ldv_29531_177 ldv_29531 ;
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
   union __anonunion_ldv_29561_179 ldv_29561 ;
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
struct dst_entry;
struct nlattr {
   __u16 nla_len ;
   __u16 nla_type ;
};
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
struct pm_qos_request_list {
   struct plist_node list ;
   int pm_qos_class ;
};
typedef s32 compat_time_t;
typedef s32 compat_long_t;
typedef u32 compat_ulong_t;
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
union __anonunion_h_u_185 {
   struct ethtool_tcpip4_spec tcp_ip4_spec ;
   struct ethtool_tcpip4_spec udp_ip4_spec ;
   struct ethtool_tcpip4_spec sctp_ip4_spec ;
   struct ethtool_ah_espip4_spec ah_ip4_spec ;
   struct ethtool_ah_espip4_spec esp_ip4_spec ;
   struct ethtool_usrip4_spec usr_ip4_spec ;
   struct ethhdr ether_spec ;
   __u8 hdata[72U] ;
};
union __anonunion_m_u_186 {
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
   union __anonunion_h_u_185 h_u ;
   union __anonunion_m_u_186 m_u ;
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
struct ipv4_devconf;
struct ipv4_devconf;
struct fib_rules_ops;
struct fib_rules_ops;
struct fib_rules_ops;
struct fib_rules_ops;
struct xt_table;
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
struct ipv6_devconf;
struct rt6_info;
struct rt6_info;
struct rt6_info;
struct rt6_statistics;
struct rt6_statistics;
struct rt6_statistics;
struct fib6_table;
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
struct ebt_table;
struct ebt_table;
struct netns_xt {
   struct list_head tables[13U] ;
   struct ebt_table *broute_table ;
   struct ebt_table *frame_filter ;
   struct ebt_table *frame_nat ;
};
struct hlist_nulls_node;
struct hlist_nulls_node;
struct hlist_nulls_node;
struct hlist_nulls_head {
   struct hlist_nulls_node *first ;
};
struct hlist_nulls_node {
   struct hlist_nulls_node *next ;
   struct hlist_nulls_node **pprev ;
};
struct ip_conntrack_stat;
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
struct net_generic;
struct net_generic;
struct netns_ipvs;
struct netns_ipvs;
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
struct vlan_group;
struct vlan_group;
struct netpoll_info;
struct netpoll_info;
struct netpoll_info;
struct netpoll_info;
struct phy_device;
struct phy_device;
struct phy_device;
struct phy_device;
struct wireless_dev;
struct wireless_dev;
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
struct neighbour;
struct neighbour;
struct neigh_parms;
struct neigh_parms;
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
struct iw_handler_def;
struct iw_public_data;
struct iw_public_data;
struct iw_public_data;
struct in_device;
struct in_device;
struct in_device;
struct dn_dev;
struct dn_dev;
struct dn_dev;
struct inet6_dev;
struct inet6_dev;
struct inet6_dev;
struct cpu_rmap;
struct cpu_rmap;
struct cpu_rmap;
struct pcpu_lstats;
struct pcpu_lstats;
struct pcpu_lstats;
struct pcpu_tstats;
struct pcpu_tstats;
struct pcpu_tstats;
struct pcpu_dstats;
struct pcpu_dstats;
struct pcpu_dstats;
union __anonunion_ldv_34794_194 {
   void *ml_priv ;
   struct pcpu_lstats *lstats ;
   struct pcpu_tstats *tstats ;
   struct pcpu_dstats *dstats ;
};
struct garp_port;
struct garp_port;
struct garp_port;
struct rtnl_link_ops;
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
   union __anonunion_ldv_34794_194 ldv_34794 ;
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
struct hdlc_proto {
   int (*open)(struct net_device * ) ;
   void (*close)(struct net_device * ) ;
   void (*start)(struct net_device * ) ;
   void (*stop)(struct net_device * ) ;
   void (*detach)(struct net_device * ) ;
   int (*ioctl)(struct net_device * , struct ifreq * ) ;
   __be16 (*type_trans)(struct sk_buff * , struct net_device * ) ;
   int (*netif_rx)(struct sk_buff * ) ;
   netdev_tx_t (*xmit)(struct sk_buff * , struct net_device * ) ;
   struct module *module ;
   struct hdlc_proto *next ;
};
struct hdlc_device {
   int (*attach)(struct net_device * , unsigned short , unsigned short ) ;
   netdev_tx_t (*xmit)(struct sk_buff * , struct net_device * ) ;
   struct hdlc_proto const *proto ;
   int carrier ;
   int open ;
   spinlock_t state_lock ;
   void *state ;
   void *priv ;
};
typedef struct hdlc_device hdlc_device;
struct _MGSL_PARAMS {
   unsigned long mode ;
   unsigned char loopback ;
   unsigned short flags ;
   unsigned char encoding ;
   unsigned long clock_speed ;
   unsigned char addr_filter ;
   unsigned short crc_type ;
   unsigned char preamble_length ;
   unsigned char preamble ;
   unsigned long data_rate ;
   unsigned char data_bits ;
   unsigned char stop_bits ;
   unsigned char parity ;
};
typedef struct _MGSL_PARAMS MGSL_PARAMS;
struct mgsl_icount {
   __u32 cts ;
   __u32 dsr ;
   __u32 rng ;
   __u32 dcd ;
   __u32 tx ;
   __u32 rx ;
   __u32 frame ;
   __u32 parity ;
   __u32 overrun ;
   __u32 brk ;
   __u32 buf_overrun ;
   __u32 txok ;
   __u32 txunder ;
   __u32 txabort ;
   __u32 txtimeout ;
   __u32 rxshort ;
   __u32 rxlong ;
   __u32 rxabort ;
   __u32 rxover ;
   __u32 rxcrc ;
   __u32 rxok ;
   __u32 exithunt ;
   __u32 rxidle ;
};
struct gpio_desc {
   __u32 state ;
   __u32 smask ;
   __u32 dir ;
   __u32 dmask ;
};
struct MGSL_PARAMS32 {
   compat_ulong_t mode ;
   unsigned char loopback ;
   unsigned short flags ;
   unsigned char encoding ;
   compat_ulong_t clock_speed ;
   unsigned char addr_filter ;
   unsigned short crc_type ;
   unsigned char preamble_length ;
   unsigned char preamble ;
   compat_ulong_t data_rate ;
   unsigned char data_bits ;
   unsigned char stop_bits ;
   unsigned char parity ;
};
struct slgt_info;
struct slgt_info;
struct slgt_info;
struct cond_wait {
   struct cond_wait *next ;
   wait_queue_head_t q ;
   wait_queue_t wait ;
   unsigned int data ;
};
struct slgt_desc {
   __le16 count ;
   __le16 status ;
   __le32 pbuf ;
   __le32 next ;
   char *buf ;
   unsigned int pdesc ;
   dma_addr_t buf_dma_addr ;
   unsigned short buf_count ;
};
struct _input_signal_events {
   int ri_up ;
   int ri_down ;
   int dsr_up ;
   int dsr_down ;
   int dcd_up ;
   int dcd_down ;
   int cts_up ;
   int cts_down ;
};
struct slgt_info {
   void *if_ptr ;
   struct tty_port port ;
   struct slgt_info *next_device ;
   int magic ;
   char device_name[25U] ;
   struct pci_dev *pdev ;
   int port_count ;
   int adapter_num ;
   int port_num ;
   struct slgt_info *port_array[4U] ;
   int line ;
   struct mgsl_icount icount ;
   int timeout ;
   int x_char ;
   unsigned int read_status_mask ;
   unsigned int ignore_status_mask ;
   wait_queue_head_t status_event_wait_q ;
   wait_queue_head_t event_wait_q ;
   struct timer_list tx_timer ;
   struct timer_list rx_timer ;
   unsigned int gpio_present ;
   struct cond_wait *gpio_wait_q ;
   spinlock_t lock ;
   struct work_struct task ;
   u32 pending_bh ;
   bool bh_requested ;
   bool bh_running ;
   int isr_overflow ;
   bool irq_requested ;
   bool irq_occurred ;
   unsigned int bus_type ;
   unsigned int irq_level ;
   unsigned long irq_flags ;
   unsigned char *reg_addr ;
   u32 phys_reg_addr ;
   bool reg_addr_requested ;
   MGSL_PARAMS params ;
   u32 idle_mode ;
   u32 max_frame_size ;
   unsigned int rbuf_fill_level ;
   unsigned int rx_pio ;
   unsigned int if_mode ;
   unsigned int base_clock ;
   unsigned int xsync ;
   unsigned int xctrl ;
   bool rx_enabled ;
   bool rx_restart ;
   bool tx_enabled ;
   bool tx_active ;
   unsigned char signals ;
   int init_error ;
   unsigned char *tx_buf ;
   int tx_count ;
   char flag_buf[4096U] ;
   char char_buf[4096U] ;
   bool drop_rts_on_tx_done ;
   struct _input_signal_events input_signal_events ;
   int dcd_chkcount ;
   int cts_chkcount ;
   int dsr_chkcount ;
   int ri_chkcount ;
   char *bufs ;
   dma_addr_t bufs_dma_addr ;
   unsigned int rbuf_count ;
   struct slgt_desc *rbufs ;
   unsigned int rbuf_current ;
   unsigned int rbuf_index ;
   unsigned int rbuf_fill_index ;
   unsigned short rbuf_fill_count ;
   unsigned int tbuf_count ;
   struct slgt_desc *tbufs ;
   unsigned int tbuf_current ;
   unsigned int tbuf_start ;
   unsigned char *tmp_rbuf ;
   unsigned int tmp_rbuf_count ;
   int netcount ;
   spinlock_t netlock ;
   struct net_device *netdev ;
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
extern int printk(char const * , ...) ;
extern void warn_slowpath_fmt(char const * , int , char const * , ...) ;
extern void warn_slowpath_null(char const * , int ) ;
extern void might_fault(void) ;
extern int sprintf(char * , char const * , ...) ;
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
extern struct pv_irq_ops pv_irq_ops ;
extern void *__memcpy(void * , void const * , size_t ) ;
extern void *memset(void * , int , size_t ) ;
extern int memcmp(void const * , void const * , size_t ) ;
extern char *strcat(char * , char const * ) ;
__inline static unsigned long arch_local_save_flags(void)
{ unsigned long __ret ;
  unsigned long __edi ;
  unsigned long __esi ;
  unsigned long __edx ;
  unsigned long __ecx ;
  unsigned long __eax ;
  long tmp ;
  void *__cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  int __cil_tmp11 ;
  long __cil_tmp12 ;

  {
  {
  __edi = __edi;
  __esi = __esi;
  __edx = __edx;
  __ecx = __ecx;
  __eax = __eax;
  __cil_tmp8 = (void *)0;
  __cil_tmp9 = (unsigned long )__cil_tmp8;
  __cil_tmp10 = (unsigned long )pv_irq_ops.save_fl.func;
  __cil_tmp11 = __cil_tmp10 == __cil_tmp9;
  __cil_tmp12 = (long )__cil_tmp11;
  tmp = __builtin_expect(__cil_tmp12, 0L);
  }
  if (tmp != 0L) {
    __asm__ volatile ("1:\tud2\n.pushsection __bug_table,\"a\"\n2:\t.long 1b - 2b, %c0 - 2b\n\t.word %c1, 0\n\t.org 2b+%c2\n.popsection": : "i" ((char *)"/anthill/stuff/tacas-comp/inst/current/envs/linux-3.0.1/linux-3.0.1/arch/x86/include/asm/paravirt.h"),
                         "i" (853), "i" (12UL));
    ldv_4705: ;
    goto ldv_4705;
  } else {

  }
  __asm__ volatile ("771:\n\tcall *%c2;\n772:\n.pushsection .parainstructions,\"a\"\n .balign 8 \n .quad  771b\n  .byte %c1\n  .byte 772b-771b\n  .short %c3\n.popsection\n": "=a" (__eax): [paravirt_typenum] "i" (46UL),
                       [paravirt_opptr] "i" (& pv_irq_ops.save_fl.func), [paravirt_clobber] "i" (1): "memory",
                       "cc");
  __ret = __eax;
  return (__ret);
}
}
__inline static int arch_irqs_disabled_flags(unsigned long flags )
{ unsigned long __cil_tmp2 ;

  {
  {
  __cil_tmp2 = flags & 512UL;
  return (__cil_tmp2 == 0UL);
  }
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
extern void lockdep_init_map(struct lockdep_map * , char const * , struct lock_class_key * ,
                             int ) ;
extern void __raw_spin_lock_init(raw_spinlock_t * , char const * , struct lock_class_key * ) ;
extern void _raw_spin_lock(raw_spinlock_t * ) ;
extern unsigned long _raw_spin_lock_irqsave(raw_spinlock_t * ) ;
extern void _raw_spin_unlock(raw_spinlock_t * ) ;
extern void _raw_spin_unlock_irqrestore(raw_spinlock_t * , unsigned long ) ;
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
extern int default_wake_function(wait_queue_t * , unsigned int , int , void * ) ;
extern void __init_waitqueue_head(wait_queue_head_t * , struct lock_class_key * ) ;
__inline static void init_waitqueue_entry(wait_queue_t *q , struct task_struct *p )
{

  {
  q->flags = 0U;
  q->private = (void *)p;
  q->func = & default_wake_function;
  return;
}
}
__inline static int waitqueue_active(wait_queue_head_t *q )
{ int tmp ;
  struct list_head *__cil_tmp3 ;
  struct list_head const *__cil_tmp4 ;

  {
  {
  __cil_tmp3 = & q->task_list;
  __cil_tmp4 = (struct list_head const *)__cil_tmp3;
  tmp = list_empty(__cil_tmp4);
  }
  return (tmp == 0);
}
}
extern void add_wait_queue(wait_queue_head_t * , wait_queue_t * ) ;
extern void remove_wait_queue(wait_queue_head_t * , wait_queue_t * ) ;
extern void __wake_up(wait_queue_head_t * , unsigned int , int , void * ) ;
extern void interruptible_sleep_on(wait_queue_head_t * ) ;
extern void mutex_lock_nested(struct mutex * , unsigned int ) ;
extern void mutex_unlock(struct mutex * ) ;
extern struct resource iomem_resource ;
extern struct resource *__request_region(struct resource * , resource_size_t , resource_size_t ,
                                         char const * , int ) ;
extern void __release_region(struct resource * , resource_size_t , resource_size_t ) ;
extern unsigned long volatile jiffies ;
extern unsigned int jiffies_to_msecs(unsigned long ) ;
extern unsigned long msecs_to_jiffies(unsigned int ) ;
extern void init_timer_key(struct timer_list * , char const * , struct lock_class_key * ) ;
__inline static void setup_timer_key(struct timer_list *timer , char const *name ,
                                     struct lock_class_key *key , void (*function)(unsigned long ) ,
                                     unsigned long data )
{

  {
  {
  timer->function = function;
  timer->data = data;
  init_timer_key(timer, name, key);
  }
  return;
}
}
extern int del_timer(struct timer_list * ) ;
extern int mod_timer(struct timer_list * , unsigned long ) ;
extern int del_timer_sync(struct timer_list * ) ;
extern void __init_work(struct work_struct * , int ) ;
extern int schedule_work(struct work_struct * ) ;
__inline static unsigned char readb(void const volatile *addr )
{ unsigned char ret ;
  unsigned char volatile *__cil_tmp3 ;

  {
  __cil_tmp3 = (unsigned char volatile *)addr;
  __asm__ volatile ("movb %1,%0": "=q" (ret): "m" (*__cil_tmp3): "memory");
  return (ret);
}
}
__inline static unsigned short readw(void const volatile *addr )
{ unsigned short ret ;
  unsigned short volatile *__cil_tmp3 ;

  {
  __cil_tmp3 = (unsigned short volatile *)addr;
  __asm__ volatile ("movw %1,%0": "=r" (ret): "m" (*__cil_tmp3): "memory");
  return (ret);
}
}
__inline static unsigned int readl(void const volatile *addr )
{ unsigned int ret ;
  unsigned int volatile *__cil_tmp3 ;

  {
  __cil_tmp3 = (unsigned int volatile *)addr;
  __asm__ volatile ("movl %1,%0": "=r" (ret): "m" (*__cil_tmp3): "memory");
  return (ret);
}
}
__inline static void writeb(unsigned char val , void volatile *addr )
{ unsigned char volatile *__cil_tmp3 ;

  {
  __cil_tmp3 = (unsigned char volatile *)addr;
  __asm__ volatile ("movb %0,%1": : "q" (val), "m" (*__cil_tmp3): "memory");
  return;
}
}
__inline static void writew(unsigned short val , void volatile *addr )
{ unsigned short volatile *__cil_tmp3 ;

  {
  __cil_tmp3 = (unsigned short volatile *)addr;
  __asm__ volatile ("movw %0,%1": : "r" (val), "m" (*__cil_tmp3): "memory");
  return;
}
}
__inline static void writel(unsigned int val , void volatile *addr )
{ unsigned int volatile *__cil_tmp3 ;

  {
  __cil_tmp3 = (unsigned int volatile *)addr;
  __asm__ volatile ("movl %0,%1": : "r" (val), "m" (*__cil_tmp3): "memory");
  return;
}
}
extern void *ioremap_nocache(resource_size_t , unsigned long ) ;
extern void iounmap(void volatile * ) ;
extern void kfree(void const * ) ;
extern struct module __this_module ;
__inline static int ldv_try_module_get_1(struct module *module ) ;
void ldv_module_put_2(struct module *ldv_func_arg1 ) ;
int ldv_try_module_get(struct module *module ) ;
void ldv_module_get(struct module *module ) ;
void ldv_module_put(struct module *module ) ;
unsigned int ldv_module_refcount(void) ;
void ldv_module_put_and_exit(void) ;
extern bool capable(int ) ;
extern void schedule(void) ;
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
extern int request_threaded_irq(unsigned int , irqreturn_t (*)(int , void * ) ,
                                irqreturn_t (*)(int , void * ) , unsigned long ,
                                char const * , void * ) ;
__inline static int request_irq(unsigned int irq , irqreturn_t (*handler)(int , void * ) ,
                                unsigned long flags , char const *name , void *dev )
{ int tmp ;
  irqreturn_t (*__cil_tmp7)(int , void * ) ;

  {
  {
  __cil_tmp7 = (irqreturn_t (*)(int , void * ))0;
  tmp = request_threaded_irq(irq, handler, __cil_tmp7, flags, name, dev);
  }
  return (tmp);
}
}
extern void free_irq(unsigned int , void * ) ;
extern int pci_enable_device(struct pci_dev * ) ;
extern void pci_set_master(struct pci_dev * ) ;
extern int __pci_register_driver(struct pci_driver * , struct module * , char const * ) ;
extern void pci_unregister_driver(struct pci_driver * ) ;
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
__inline static int is_device_dma_capable(struct device *dev )
{ int tmp ;
  u64 *__cil_tmp3 ;
  unsigned long __cil_tmp4 ;
  u64 *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  u64 *__cil_tmp7 ;
  u64 __cil_tmp8 ;

  {
  {
  __cil_tmp3 = (u64 *)0;
  __cil_tmp4 = (unsigned long )__cil_tmp3;
  __cil_tmp5 = dev->dma_mask;
  __cil_tmp6 = (unsigned long )__cil_tmp5;
  if (__cil_tmp6 != __cil_tmp4) {
    {
    __cil_tmp7 = dev->dma_mask;
    __cil_tmp8 = *__cil_tmp7;
    if (__cil_tmp8 != 0ULL) {
      tmp = 1;
    } else {
      tmp = 0;
    }
    }
  } else {
    tmp = 0;
  }
  }
  return (tmp);
}
}
extern void debug_dma_alloc_coherent(struct device * , size_t , dma_addr_t , void * ) ;
extern void debug_dma_free_coherent(struct device * , size_t , void * , dma_addr_t ) ;
extern struct device x86_dma_fallback_dev ;
extern struct dma_map_ops *dma_ops ;
__inline static struct dma_map_ops *get_dma_ops(struct device *dev )
{ long tmp ;
  struct device *__cil_tmp3 ;
  unsigned long __cil_tmp4 ;
  unsigned long __cil_tmp5 ;
  int __cil_tmp6 ;
  long __cil_tmp7 ;
  struct dma_map_ops *__cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  struct dma_map_ops *__cil_tmp10 ;
  unsigned long __cil_tmp11 ;

  {
  {
  __cil_tmp3 = (struct device *)0;
  __cil_tmp4 = (unsigned long )__cil_tmp3;
  __cil_tmp5 = (unsigned long )dev;
  __cil_tmp6 = __cil_tmp5 == __cil_tmp4;
  __cil_tmp7 = (long )__cil_tmp6;
  tmp = __builtin_expect(__cil_tmp7, 0L);
  }
  if (tmp != 0L) {
    return (dma_ops);
  } else {
    {
    __cil_tmp8 = (struct dma_map_ops *)0;
    __cil_tmp9 = (unsigned long )__cil_tmp8;
    __cil_tmp10 = dev->archdata.dma_ops;
    __cil_tmp11 = (unsigned long )__cil_tmp10;
    if (__cil_tmp11 == __cil_tmp9) {
      return (dma_ops);
    } else {
      return (dev->archdata.dma_ops);
    }
    }
  }
}
}
__inline static unsigned long dma_alloc_coherent_mask(struct device *dev , gfp_t gfp )
{ unsigned long dma_mask ;
  u64 __cil_tmp4 ;
  int __cil_tmp5 ;

  {
  dma_mask = 0UL;
  __cil_tmp4 = dev->coherent_dma_mask;
  dma_mask = (unsigned long )__cil_tmp4;
  if (dma_mask == 0UL) {
    {
    __cil_tmp5 = (int )gfp;
    if (__cil_tmp5 & 1) {
      dma_mask = 16777215UL;
    } else {
      dma_mask = 4294967295UL;
    }
    }
  } else {

  }
  return (dma_mask);
}
}
__inline static gfp_t dma_alloc_coherent_gfp_flags(struct device *dev , gfp_t gfp )
{ unsigned long dma_mask ;
  unsigned long tmp ;
  unsigned long long __cil_tmp5 ;
  unsigned long long __cil_tmp6 ;
  unsigned int __cil_tmp7 ;

  {
  {
  tmp = dma_alloc_coherent_mask(dev, gfp);
  dma_mask = tmp;
  }
  {
  __cil_tmp5 = (unsigned long long )dma_mask;
  if (__cil_tmp5 <= 16777215ULL) {
    gfp = gfp | 1U;
  } else {

  }
  }
  {
  __cil_tmp6 = (unsigned long long )dma_mask;
  if (__cil_tmp6 <= 4294967295ULL) {
    {
    __cil_tmp7 = gfp & 1U;
    if (__cil_tmp7 == 0U) {
      gfp = gfp | 4U;
    } else {

    }
    }
  } else {

  }
  }
  return (gfp);
}
}
__inline static void *dma_alloc_coherent(struct device *dev , size_t size , dma_addr_t *dma_handle ,
                                         gfp_t gfp )
{ struct dma_map_ops *ops ;
  struct dma_map_ops *tmp ;
  void *memory ;
  int tmp___0 ;
  gfp_t tmp___1 ;
  struct device *__cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  unsigned long __cil_tmp12 ;
  void *(*__cil_tmp13)(struct device * , size_t , dma_addr_t * , gfp_t ) ;
  unsigned long __cil_tmp14 ;
  void *(*__cil_tmp15)(struct device * , size_t , dma_addr_t * , gfp_t ) ;
  unsigned long __cil_tmp16 ;
  void *(*__cil_tmp17)(struct device * , size_t , dma_addr_t * , gfp_t ) ;
  dma_addr_t __cil_tmp18 ;

  {
  {
  tmp = get_dma_ops(dev);
  ops = tmp;
  gfp = gfp & 4294967288U;
  }
  {
  __cil_tmp10 = (struct device *)0;
  __cil_tmp11 = (unsigned long )__cil_tmp10;
  __cil_tmp12 = (unsigned long )dev;
  if (__cil_tmp12 == __cil_tmp11) {
    dev = & x86_dma_fallback_dev;
  } else {

  }
  }
  {
  tmp___0 = is_device_dma_capable(dev);
  }
  if (tmp___0 == 0) {
    return ((void *)0);
  } else {

  }
  {
  __cil_tmp13 = (void *(*)(struct device * , size_t , dma_addr_t * , gfp_t ))0;
  __cil_tmp14 = (unsigned long )__cil_tmp13;
  __cil_tmp15 = ops->alloc_coherent;
  __cil_tmp16 = (unsigned long )__cil_tmp15;
  if (__cil_tmp16 == __cil_tmp14) {
    return ((void *)0);
  } else {

  }
  }
  {
  tmp___1 = dma_alloc_coherent_gfp_flags(dev, gfp);
  __cil_tmp17 = ops->alloc_coherent;
  memory = (*__cil_tmp17)(dev, size, dma_handle, tmp___1);
  __cil_tmp18 = *dma_handle;
  debug_dma_alloc_coherent(dev, size, __cil_tmp18, memory);
  }
  return (memory);
}
}
__inline static void dma_free_coherent(struct device *dev , size_t size , void *vaddr ,
                                       dma_addr_t bus )
{ struct dma_map_ops *ops ;
  struct dma_map_ops *tmp ;
  int __ret_warn_on ;
  unsigned long _flags ;
  int tmp___0 ;
  long tmp___1 ;
  int __cil_tmp11 ;
  long __cil_tmp12 ;
  int __cil_tmp13 ;
  int __cil_tmp14 ;
  int __cil_tmp15 ;
  long __cil_tmp16 ;
  void (*__cil_tmp17)(struct device * , size_t , void * , dma_addr_t ) ;
  unsigned long __cil_tmp18 ;
  void (*__cil_tmp19)(struct device * , size_t , void * , dma_addr_t ) ;
  unsigned long __cil_tmp20 ;
  void (*__cil_tmp21)(struct device * , size_t , void * , dma_addr_t ) ;

  {
  {
  tmp = get_dma_ops(dev);
  ops = tmp;
  _flags = arch_local_save_flags();
  tmp___0 = arch_irqs_disabled_flags(_flags);
  __ret_warn_on = tmp___0 != 0;
  __cil_tmp11 = __ret_warn_on != 0;
  __cil_tmp12 = (long )__cil_tmp11;
  tmp___1 = __builtin_expect(__cil_tmp12, 0L);
  }
  if (tmp___1 != 0L) {
    {
    __cil_tmp13 = (int const )147;
    __cil_tmp14 = (int )__cil_tmp13;
    warn_slowpath_null("/anthill/stuff/tacas-comp/inst/current/envs/linux-3.0.1/linux-3.0.1/arch/x86/include/asm/dma-mapping.h",
                       __cil_tmp14);
    }
  } else {

  }
  {
  __cil_tmp15 = __ret_warn_on != 0;
  __cil_tmp16 = (long )__cil_tmp15;
  __builtin_expect(__cil_tmp16, 0L);
  debug_dma_free_coherent(dev, size, vaddr, bus);
  }
  {
  __cil_tmp17 = (void (*)(struct device * , size_t , void * , dma_addr_t ))0;
  __cil_tmp18 = (unsigned long )__cil_tmp17;
  __cil_tmp19 = ops->free_coherent;
  __cil_tmp20 = (unsigned long )__cil_tmp19;
  if (__cil_tmp20 != __cil_tmp18) {
    {
    __cil_tmp21 = ops->free_coherent;
    (*__cil_tmp21)(dev, size, vaddr, bus);
    }
  } else {

  }
  }
  return;
}
}
__inline static void *pci_alloc_consistent(struct pci_dev *hwdev , size_t size , dma_addr_t *dma_handle )
{ struct device *tmp ;
  void *tmp___0 ;
  struct pci_dev *__cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  unsigned long __cil_tmp8 ;

  {
  {
  __cil_tmp6 = (struct pci_dev *)0;
  __cil_tmp7 = (unsigned long )__cil_tmp6;
  __cil_tmp8 = (unsigned long )hwdev;
  if (__cil_tmp8 != __cil_tmp7) {
    tmp = & hwdev->dev;
  } else {
    tmp = (struct device *)0;
  }
  }
  {
  tmp___0 = dma_alloc_coherent(tmp, size, dma_handle, 32U);
  }
  return (tmp___0);
}
}
__inline static void pci_free_consistent(struct pci_dev *hwdev , size_t size , void *vaddr ,
                                         dma_addr_t dma_handle )
{ struct device *tmp ;
  struct pci_dev *__cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  unsigned long __cil_tmp8 ;

  {
  {
  __cil_tmp6 = (struct pci_dev *)0;
  __cil_tmp7 = (unsigned long )__cil_tmp6;
  __cil_tmp8 = (unsigned long )hwdev;
  if (__cil_tmp8 != __cil_tmp7) {
    tmp = & hwdev->dev;
  } else {
    tmp = (struct device *)0;
  }
  }
  {
  dma_free_coherent(tmp, size, vaddr, dma_handle);
  }
  return;
}
}
extern struct tty_driver *alloc_tty_driver(int ) ;
extern void put_tty_driver(struct tty_driver * ) ;
extern void tty_set_operations(struct tty_driver * , struct tty_operations const * ) ;
extern struct ktermios tty_std_termios ;
extern int tty_register_driver(struct tty_driver * ) ;
extern int tty_unregister_driver(struct tty_driver * ) ;
extern struct device *tty_register_device(struct tty_driver * , unsigned int , struct device * ) ;
extern void tty_unregister_device(struct tty_driver * , unsigned int ) ;
extern void tty_hangup(struct tty_struct * ) ;
extern int tty_hung_up_p(struct file * ) ;
extern void do_SAK(struct tty_struct * ) ;
extern void tty_flip_buffer_push(struct tty_struct * ) ;
extern speed_t tty_get_baud_rate(struct tty_struct * ) ;
extern struct tty_ldisc *tty_ldisc_ref(struct tty_struct * ) ;
extern void tty_ldisc_deref(struct tty_ldisc * ) ;
extern void tty_wakeup(struct tty_struct * ) ;
extern void tty_ldisc_flush(struct tty_struct * ) ;
extern void tty_port_init(struct tty_port * ) ;
extern int tty_port_carrier_raised(struct tty_port * ) ;
extern void tty_port_raise_dtr_rts(struct tty_port * ) ;
extern int tty_port_close_start(struct tty_port * , struct tty_struct * , struct file * ) ;
extern void tty_port_close_end(struct tty_port * , struct tty_struct * ) ;
extern void tty_lock(void) ;
extern void tty_unlock(void) ;
extern int tty_insert_flip_string_flags(struct tty_struct * , unsigned char const * ,
                                        char const * , size_t ) ;
__inline static int tty_insert_flip_char(struct tty_struct *tty , unsigned char ch ,
                                         char flag )
{ struct tty_buffer *tb ;
  int tmp ;
  int tmp___0 ;
  struct tty_buffer *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  int __cil_tmp10 ;
  int __cil_tmp11 ;
  int __cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  unsigned char *__cil_tmp14 ;
  unsigned char *__cil_tmp15 ;
  int __cil_tmp16 ;
  unsigned long __cil_tmp17 ;
  char *__cil_tmp18 ;
  char *__cil_tmp19 ;
  unsigned char const *__cil_tmp20 ;
  char const *__cil_tmp21 ;

  {
  tb = tty->buf.tail;
  {
  __cil_tmp7 = (struct tty_buffer *)0;
  __cil_tmp8 = (unsigned long )__cil_tmp7;
  __cil_tmp9 = (unsigned long )tb;
  if (__cil_tmp9 != __cil_tmp8) {
    {
    __cil_tmp10 = tb->size;
    __cil_tmp11 = tb->used;
    if (__cil_tmp11 < __cil_tmp10) {
      __cil_tmp12 = tb->used;
      __cil_tmp13 = (unsigned long )__cil_tmp12;
      __cil_tmp14 = tb->flag_buf_ptr;
      __cil_tmp15 = __cil_tmp14 + __cil_tmp13;
      *__cil_tmp15 = (unsigned char )flag;
      tmp = tb->used;
      __cil_tmp16 = tb->used;
      tb->used = __cil_tmp16 + 1;
      __cil_tmp17 = (unsigned long )tmp;
      __cil_tmp18 = tb->char_buf_ptr;
      __cil_tmp19 = __cil_tmp18 + __cil_tmp17;
      *__cil_tmp19 = (char )ch;
      return (1);
    } else {

    }
    }
  } else {

  }
  }
  {
  __cil_tmp20 = (unsigned char const *)(& ch);
  __cil_tmp21 = (char const *)(& flag);
  tmp___0 = tty_insert_flip_string_flags(tty, __cil_tmp20, __cil_tmp21, 1UL);
  }
  return (tmp___0);
}
}
extern ssize_t seq_read(struct file * , char * , size_t , loff_t * ) ;
extern loff_t seq_lseek(struct file * , loff_t , int ) ;
extern int seq_puts(struct seq_file * , char const * ) ;
extern int seq_printf(struct seq_file * , char const * , ...) ;
extern int single_open(struct file * , int (*)(struct seq_file * , void * ) , void * ) ;
extern int single_release(struct inode * , struct file * ) ;
extern void consume_skb(struct sk_buff * ) ;
extern unsigned char *skb_put(struct sk_buff * , unsigned int ) ;
__inline static void skb_reset_mac_header(struct sk_buff *skb )
{ unsigned char *__cil_tmp2 ;
  long __cil_tmp3 ;
  sk_buff_data_t __cil_tmp4 ;
  unsigned char *__cil_tmp5 ;
  long __cil_tmp6 ;
  sk_buff_data_t __cil_tmp7 ;

  {
  __cil_tmp2 = skb->head;
  __cil_tmp3 = (long )__cil_tmp2;
  __cil_tmp4 = (sk_buff_data_t )__cil_tmp3;
  __cil_tmp5 = skb->data;
  __cil_tmp6 = (long )__cil_tmp5;
  __cil_tmp7 = (sk_buff_data_t )__cil_tmp6;
  skb->mac_header = __cil_tmp7 - __cil_tmp4;
  return;
}
}
extern struct sk_buff *dev_alloc_skb(unsigned int ) ;
extern unsigned long msleep_interruptible(unsigned int ) ;
__inline static void *compat_ptr(compat_uptr_t uptr )
{ unsigned long __cil_tmp2 ;

  {
  {
  __cil_tmp2 = (unsigned long )uptr;
  return ((void *)__cil_tmp2);
  }
}
}
__inline static struct netdev_queue *netdev_get_tx_queue(struct net_device const *dev ,
                                                         unsigned int index )
{ unsigned long __cil_tmp3 ;
  struct netdev_queue *__cil_tmp4 ;
  struct netdev_queue *__cil_tmp5 ;

  {
  {
  __cil_tmp3 = (unsigned long )index;
  __cil_tmp4 = dev->_tx;
  __cil_tmp5 = (struct netdev_queue *)__cil_tmp4;
  return (__cil_tmp5 + __cil_tmp3);
  }
}
}
__inline static void *netdev_priv(struct net_device const *dev )
{ void *__cil_tmp2 ;

  {
  {
  __cil_tmp2 = (void *)dev;
  return (__cil_tmp2 + 2560U);
  }
}
}
extern void free_netdev(struct net_device * ) ;
extern int netpoll_trap(void) ;
extern void __netif_schedule(struct Qdisc * ) ;
__inline static void netif_tx_start_queue(struct netdev_queue *dev_queue )
{ unsigned long *__cil_tmp2 ;
  unsigned long volatile *__cil_tmp3 ;

  {
  {
  __cil_tmp2 = & dev_queue->state;
  __cil_tmp3 = (unsigned long volatile *)__cil_tmp2;
  clear_bit(0, __cil_tmp3);
  }
  return;
}
}
__inline static void netif_start_queue(struct net_device *dev )
{ struct netdev_queue *tmp ;
  struct net_device const *__cil_tmp3 ;

  {
  {
  __cil_tmp3 = (struct net_device const *)dev;
  tmp = netdev_get_tx_queue(__cil_tmp3, 0U);
  netif_tx_start_queue(tmp);
  }
  return;
}
}
__inline static void netif_tx_wake_queue(struct netdev_queue *dev_queue )
{ int tmp ;
  int tmp___0 ;
  unsigned long *__cil_tmp4 ;
  unsigned long volatile *__cil_tmp5 ;
  struct Qdisc *__cil_tmp6 ;

  {
  {
  tmp = netpoll_trap();
  }
  if (tmp != 0) {
    {
    netif_tx_start_queue(dev_queue);
    }
    return;
  } else {

  }
  {
  __cil_tmp4 = & dev_queue->state;
  __cil_tmp5 = (unsigned long volatile *)__cil_tmp4;
  tmp___0 = test_and_clear_bit(0, __cil_tmp5);
  }
  if (tmp___0 != 0) {
    {
    __cil_tmp6 = dev_queue->qdisc;
    __netif_schedule(__cil_tmp6);
    }
  } else {

  }
  return;
}
}
__inline static void netif_wake_queue(struct net_device *dev )
{ struct netdev_queue *tmp ;
  struct net_device const *__cil_tmp3 ;

  {
  {
  __cil_tmp3 = (struct net_device const *)dev;
  tmp = netdev_get_tx_queue(__cil_tmp3, 0U);
  netif_tx_wake_queue(tmp);
  }
  return;
}
}
__inline static void netif_tx_stop_queue(struct netdev_queue *dev_queue )
{ int __ret_warn_on ;
  long tmp ;
  long tmp___0 ;
  struct netdev_queue *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  int __cil_tmp8 ;
  long __cil_tmp9 ;
  int __cil_tmp10 ;
  int __cil_tmp11 ;
  int __cil_tmp12 ;
  long __cil_tmp13 ;
  unsigned long *__cil_tmp14 ;
  unsigned long volatile *__cil_tmp15 ;

  {
  {
  __cil_tmp5 = (struct netdev_queue *)0;
  __cil_tmp6 = (unsigned long )__cil_tmp5;
  __cil_tmp7 = (unsigned long )dev_queue;
  __ret_warn_on = __cil_tmp7 == __cil_tmp6;
  __cil_tmp8 = __ret_warn_on != 0;
  __cil_tmp9 = (long )__cil_tmp8;
  tmp = __builtin_expect(__cil_tmp9, 0L);
  }
  if (tmp != 0L) {
    {
    __cil_tmp10 = (int const )1866;
    __cil_tmp11 = (int )__cil_tmp10;
    warn_slowpath_null("include/linux/netdevice.h", __cil_tmp11);
    }
  } else {

  }
  {
  __cil_tmp12 = __ret_warn_on != 0;
  __cil_tmp13 = (long )__cil_tmp12;
  tmp___0 = __builtin_expect(__cil_tmp13, 0L);
  }
  if (tmp___0 != 0L) {
    {
    printk("<6>netif_stop_queue() cannot be called before register_netdev()\n");
    }
    return;
  } else {

  }
  {
  __cil_tmp14 = & dev_queue->state;
  __cil_tmp15 = (unsigned long volatile *)__cil_tmp14;
  set_bit(0U, __cil_tmp15);
  }
  return;
}
}
__inline static void netif_stop_queue(struct net_device *dev )
{ struct netdev_queue *tmp ;
  struct net_device const *__cil_tmp3 ;

  {
  {
  __cil_tmp3 = (struct net_device const *)dev;
  tmp = netdev_get_tx_queue(__cil_tmp3, 0U);
  netif_tx_stop_queue(tmp);
  }
  return;
}
}
__inline static int netif_tx_queue_stopped(struct netdev_queue const *dev_queue )
{ int tmp ;
  unsigned long const *__cil_tmp3 ;
  unsigned long const volatile *__cil_tmp4 ;

  {
  {
  __cil_tmp3 = & dev_queue->state;
  __cil_tmp4 = (unsigned long const volatile *)__cil_tmp3;
  tmp = constant_test_bit(0U, __cil_tmp4);
  }
  return (tmp);
}
}
__inline static int netif_queue_stopped(struct net_device const *dev )
{ struct netdev_queue *tmp ;
  int tmp___0 ;
  struct netdev_queue const *__cil_tmp4 ;

  {
  {
  tmp = netdev_get_tx_queue(dev, 0U);
  __cil_tmp4 = (struct netdev_queue const *)tmp;
  tmp___0 = netif_tx_queue_stopped(__cil_tmp4);
  }
  return (tmp___0);
}
}
extern int netif_rx(struct sk_buff * ) ;
extern void netif_carrier_on(struct net_device * ) ;
extern void netif_carrier_off(struct net_device * ) ;
extern int register_netdev(struct net_device * ) ;
extern int hdlc_ioctl(struct net_device * , struct ifreq * , int ) ;
extern void unregister_hdlc_device(struct net_device * ) ;
extern struct net_device *alloc_hdlcdev(void * ) ;
__inline static struct hdlc_device *dev_to_hdlc(struct net_device *dev )
{ void *tmp ;
  struct net_device const *__cil_tmp3 ;

  {
  {
  __cil_tmp3 = (struct net_device const *)dev;
  tmp = netdev_priv(__cil_tmp3);
  }
  return ((struct hdlc_device *)tmp);
}
}
extern int hdlc_open(struct net_device * ) ;
extern void hdlc_close(struct net_device * ) ;
extern int hdlc_change_mtu(struct net_device * , int ) ;
extern netdev_tx_t hdlc_start_xmit(struct sk_buff * , struct net_device * ) ;
__inline static __be16 hdlc_type_trans(struct sk_buff *skb , struct net_device *dev )
{ hdlc_device *hdlc ;
  struct hdlc_device *tmp ;
  __be16 tmp___0 ;
  __be16 (*__cil_tmp6)(struct sk_buff * , struct net_device * ) ;
  unsigned long __cil_tmp7 ;
  struct hdlc_proto const *__cil_tmp8 ;
  __be16 (*__cil_tmp9)(struct sk_buff * , struct net_device * ) ;
  unsigned long __cil_tmp10 ;
  struct hdlc_proto const *__cil_tmp11 ;
  __be16 (*__cil_tmp12)(struct sk_buff * , struct net_device * ) ;

  {
  {
  tmp = dev_to_hdlc(dev);
  hdlc = tmp;
  skb->dev = dev;
  skb_reset_mac_header(skb);
  }
  {
  __cil_tmp6 = (__be16 (* const )(struct sk_buff * , struct net_device * ))0;
  __cil_tmp7 = (unsigned long )__cil_tmp6;
  __cil_tmp8 = hdlc->proto;
  __cil_tmp9 = __cil_tmp8->type_trans;
  __cil_tmp10 = (unsigned long )__cil_tmp9;
  if (__cil_tmp10 != __cil_tmp7) {
    {
    __cil_tmp11 = hdlc->proto;
    __cil_tmp12 = __cil_tmp11->type_trans;
    tmp___0 = (*__cil_tmp12)(skb, dev);
    }
    return (tmp___0);
  } else {
    return ((__be16 )6400U);
  }
  }
}
}
static char *driver_name = (char *)"SyncLink GT";
static char *tty_driver_name = (char *)"synclink_gt";
static char *tty_dev_prefix = (char *)"ttySLG";
static struct pci_device_id pci_table[5U] = { {5056U, 112U, 4294967295U, 4294967295U, 0U, 0U, 0UL},
        {5056U, 160U, 4294967295U, 4294967295U, 0U, 0U, 0UL},
        {5056U, 128U, 4294967295U, 4294967295U, 0U, 0U, 0UL},
        {5056U, 144U, 4294967295U, 4294967295U, 0U, 0U, 0UL},
        {0U, 0U, 0U, 0U, 0U, 0U, 0UL}};
struct pci_device_id const __mod_pci_device_table ;
static int init_one(struct pci_dev *dev , struct pci_device_id const *ent ) ;
static void remove_one(struct pci_dev *dev ) ;
static struct pci_driver pci_driver =
     {{(struct list_head *)0, (struct list_head *)0}, "synclink_gt", (struct pci_device_id const *)(& pci_table),
    & init_one, & remove_one, (int (*)(struct pci_dev * , pm_message_t ))0, (int (*)(struct pci_dev * ,
                                                                                      pm_message_t ))0,
    (int (*)(struct pci_dev * ))0, (int (*)(struct pci_dev * ))0, (void (*)(struct pci_dev * ))0,
    (struct pci_error_handlers *)0, {(char const *)0, (struct bus_type *)0, (struct module *)0,
                                     (char const *)0, (_Bool)0, (struct of_device_id const *)0,
                                     (int (*)(struct device * ))0, (int (*)(struct device * ))0,
                                     (void (*)(struct device * ))0, (int (*)(struct device * ,
                                                                             pm_message_t ))0,
                                     (int (*)(struct device * ))0, (struct attribute_group const **)0,
                                     (struct dev_pm_ops const *)0, (struct driver_private *)0},
    {{{{{0U}, 0U, 0U, (void *)0, {(struct lock_class_key *)0, {(struct lock_class *)0,
                                                               (struct lock_class *)0},
                                  (char const *)0, 0, 0UL}}}}, {(struct list_head *)0,
                                                                  (struct list_head *)0}}};
static bool pci_registered ;
static struct slgt_info *slgt_device_list ;
static int slgt_device_count ;
static int ttymajor ;
static int debug_level ;
static int maxframe[32U] ;
static struct tty_driver *serial_driver ;
static int open(struct tty_struct *tty , struct file *filp ) ;
static void close(struct tty_struct *tty , struct file *filp ) ;
static void hangup(struct tty_struct *tty ) ;
static void set_termios(struct tty_struct *tty , struct ktermios *old_termios ) ;
static int write(struct tty_struct *tty , unsigned char const *buf , int count ) ;
static int put_char(struct tty_struct *tty , unsigned char ch ) ;
static void send_xchar(struct tty_struct *tty , char ch ) ;
static void wait_until_sent(struct tty_struct *tty , int timeout ) ;
static int write_room(struct tty_struct *tty ) ;
static void flush_chars(struct tty_struct *tty ) ;
static void flush_buffer(struct tty_struct *tty ) ;
static void tx_hold(struct tty_struct *tty ) ;
static void tx_release(struct tty_struct *tty ) ;
static int ioctl(struct tty_struct *tty , unsigned int cmd , unsigned long arg ) ;
static int chars_in_buffer(struct tty_struct *tty ) ;
static void throttle(struct tty_struct *tty ) ;
static void unthrottle(struct tty_struct *tty ) ;
static int set_break(struct tty_struct *tty , int break_state ) ;
static void hdlcdev_tx_done(struct slgt_info *info ) ;
static void hdlcdev_rx(struct slgt_info *info , char *buf , int size ) ;
static int hdlcdev_init(struct slgt_info *info ) ;
static void hdlcdev_exit(struct slgt_info *info ) ;
static void init_cond_wait(struct cond_wait *w , unsigned int data ) ;
static void add_cond_wait(struct cond_wait **head , struct cond_wait *w ) ;
static void remove_cond_wait(struct cond_wait **head , struct cond_wait *cw ) ;
static void flush_cond_wait(struct cond_wait **head ) ;
static MGSL_PARAMS default_params =
     {2UL, (unsigned char)0, (unsigned short)1, (unsigned char)3, 0UL, (unsigned char)255,
    (unsigned short)1, (unsigned char)0, (unsigned char)0, 9600UL, (unsigned char)8,
    (unsigned char)1, (unsigned char)0};
static __u8 rd_reg8(struct slgt_info *info , unsigned int addr ) ;
static void wr_reg8(struct slgt_info *info , unsigned int addr , __u8 value ) ;
static __u16 rd_reg16(struct slgt_info *info , unsigned int addr ) ;
static void wr_reg16(struct slgt_info *info , unsigned int addr , __u16 value ) ;
static __u32 rd_reg32(struct slgt_info *info , unsigned int addr ) ;
static void wr_reg32(struct slgt_info *info , unsigned int addr , __u32 value ) ;
static void msc_set_vcr(struct slgt_info *info ) ;
static int startup(struct slgt_info *info ) ;
static int block_til_ready(struct tty_struct *tty , struct file *filp , struct slgt_info *info ) ;
static void shutdown(struct slgt_info *info ) ;
static void program_hw(struct slgt_info *info ) ;
static void change_params(struct slgt_info *info ) ;
static int register_test(struct slgt_info *info ) ;
static int irq_test(struct slgt_info *info ) ;
static int loopback_test(struct slgt_info *info ) ;
static int adapter_test(struct slgt_info *info ) ;
static void reset_adapter(struct slgt_info *info ) ;
static void reset_port(struct slgt_info *info ) ;
static void async_mode(struct slgt_info *info ) ;
static void sync_mode(struct slgt_info *info ) ;
static void rx_stop(struct slgt_info *info ) ;
static void rx_start(struct slgt_info *info ) ;
static void reset_rbufs(struct slgt_info *info ) ;
static void free_rbufs(struct slgt_info *info , unsigned int i , unsigned int last ) ;
static void rdma_reset(struct slgt_info *info ) ;
static bool rx_get_frame(struct slgt_info *info ) ;
static bool rx_get_buf(struct slgt_info *info ) ;
static void tx_start(struct slgt_info *info ) ;
static void tx_stop(struct slgt_info *info ) ;
static void tx_set_idle(struct slgt_info *info ) ;
static unsigned int free_tbuf_count(struct slgt_info *info ) ;
static unsigned int tbuf_bytes(struct slgt_info *info ) ;
static void reset_tbufs(struct slgt_info *info ) ;
static void tdma_reset(struct slgt_info *info ) ;
static bool tx_load(struct slgt_info *info , char const *buf , unsigned int size ) ;
static void get_signals(struct slgt_info *info ) ;
static void set_signals(struct slgt_info *info ) ;
static void enable_loopback(struct slgt_info *info ) ;
static void set_rate(struct slgt_info *info , u32 rate ) ;
static int bh_action(struct slgt_info *info ) ;
static void bh_handler(struct work_struct *work ) ;
static void bh_transmit(struct slgt_info *info ) ;
static void isr_serial(struct slgt_info *info ) ;
static void isr_rdma(struct slgt_info *info ) ;
static void isr_txeom(struct slgt_info *info , unsigned short status ) ;
static void isr_tdma(struct slgt_info *info ) ;
static int alloc_dma_bufs(struct slgt_info *info ) ;
static void free_dma_bufs(struct slgt_info *info ) ;
static int alloc_desc(struct slgt_info *info ) ;
static void free_desc(struct slgt_info *info ) ;
static int alloc_bufs(struct slgt_info *info , struct slgt_desc *bufs , int count ) ;
static void free_bufs(struct slgt_info *info , struct slgt_desc *bufs , int count ) ;
static int alloc_tmp_rbuf(struct slgt_info *info ) ;
static void free_tmp_rbuf(struct slgt_info *info ) ;
static void tx_timeout(unsigned long context ) ;
static void rx_timeout(unsigned long context ) ;
static int get_stats(struct slgt_info *info , struct mgsl_icount *user_icount ) ;
static int get_params(struct slgt_info *info , MGSL_PARAMS *user_params ) ;
static int set_params(struct slgt_info *info , MGSL_PARAMS *new_params ) ;
static int get_txidle(struct slgt_info *info , int *idle_mode ) ;
static int set_txidle(struct slgt_info *info , int idle_mode ) ;
static int tx_enable(struct slgt_info *info , int enable ) ;
static int tx_abort(struct slgt_info *info ) ;
static int rx_enable(struct slgt_info *info , int enable ) ;
static int modem_input_wait(struct slgt_info *info , int arg ) ;
static int wait_mgsl_event(struct slgt_info *info , int *mask_ptr ) ;
static int tiocmget(struct tty_struct *tty ) ;
static int tiocmset(struct tty_struct *tty , unsigned int set , unsigned int clear ) ;
static int get_interface(struct slgt_info *info , int *if_mode ) ;
static int set_interface(struct slgt_info *info , int if_mode ) ;
static int set_gpio(struct slgt_info *info , struct gpio_desc *user_gpio ) ;
static int get_gpio(struct slgt_info *info , struct gpio_desc *user_gpio ) ;
static int wait_gpio(struct slgt_info *info , struct gpio_desc *user_gpio ) ;
static int get_xsync(struct slgt_info *info , int *xsync ) ;
static int set_xsync(struct slgt_info *info , int xsync ) ;
static int get_xctrl(struct slgt_info *info , int *xctrl ) ;
static int set_xctrl(struct slgt_info *info , int xctrl ) ;
static void add_device(struct slgt_info *info ) ;
static void device_init(int adapter_num , struct pci_dev *pdev ) ;
static int claim_resources(struct slgt_info *info ) ;
static void release_resources(struct slgt_info *info ) ;
static void trace_block(struct slgt_info *info , char const *data , int count ,
                        char const *label )
{ int i ;
  int linecount ;
  char (*__cil_tmp7)[25U] ;
  char *__cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  char const *__cil_tmp10 ;
  char __cil_tmp11 ;
  unsigned char __cil_tmp12 ;
  int __cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  char const *__cil_tmp15 ;
  char __cil_tmp16 ;
  signed char __cil_tmp17 ;
  int __cil_tmp18 ;
  unsigned long __cil_tmp19 ;
  char const *__cil_tmp20 ;
  char __cil_tmp21 ;
  signed char __cil_tmp22 ;
  int __cil_tmp23 ;
  unsigned long __cil_tmp24 ;
  char const *__cil_tmp25 ;
  char __cil_tmp26 ;
  int __cil_tmp27 ;
  unsigned long __cil_tmp28 ;

  {
  {
  __cil_tmp7 = & info->device_name;
  __cil_tmp8 = (char *)__cil_tmp7;
  printk("%s %s data:\n", __cil_tmp8, label);
  }
  goto ldv_36436;
  ldv_36435: ;
  if (16 < count) {
    linecount = 16;
  } else {
    linecount = count;
  }
  i = 0;
  goto ldv_36427;
  ldv_36426:
  {
  __cil_tmp9 = (unsigned long )i;
  __cil_tmp10 = data + __cil_tmp9;
  __cil_tmp11 = *__cil_tmp10;
  __cil_tmp12 = (unsigned char )__cil_tmp11;
  __cil_tmp13 = (int )__cil_tmp12;
  printk("%02X ", __cil_tmp13);
  i = i + 1;
  }
  ldv_36427: ;
  if (i < linecount) {
    goto ldv_36426;
  } else {
    goto ldv_36428;
  }
  ldv_36428: ;
  goto ldv_36430;
  ldv_36429:
  {
  printk("   ");
  i = i + 1;
  }
  ldv_36430: ;
  if (i <= 16) {
    goto ldv_36429;
  } else {
    goto ldv_36431;
  }
  ldv_36431:
  i = 0;
  goto ldv_36433;
  ldv_36432: ;
  {
  __cil_tmp14 = (unsigned long )i;
  __cil_tmp15 = data + __cil_tmp14;
  __cil_tmp16 = *__cil_tmp15;
  __cil_tmp17 = (signed char )__cil_tmp16;
  __cil_tmp18 = (int )__cil_tmp17;
  if (__cil_tmp18 > 31) {
    {
    __cil_tmp19 = (unsigned long )i;
    __cil_tmp20 = data + __cil_tmp19;
    __cil_tmp21 = *__cil_tmp20;
    __cil_tmp22 = (signed char )__cil_tmp21;
    __cil_tmp23 = (int )__cil_tmp22;
    if (__cil_tmp23 != 127) {
      {
      __cil_tmp24 = (unsigned long )i;
      __cil_tmp25 = data + __cil_tmp24;
      __cil_tmp26 = *__cil_tmp25;
      __cil_tmp27 = (int )__cil_tmp26;
      printk("%c", __cil_tmp27);
      }
    } else {
      {
      printk(".");
      }
    }
    }
  } else {
    {
    printk(".");
    }
  }
  }
  i = i + 1;
  ldv_36433: ;
  if (i < linecount) {
    goto ldv_36432;
  } else {
    goto ldv_36434;
  }
  ldv_36434:
  {
  printk("\n");
  __cil_tmp28 = (unsigned long )linecount;
  data = data + __cil_tmp28;
  count = count - linecount;
  }
  ldv_36436: ;
  if (count != 0) {
    goto ldv_36435;
  } else {
    goto ldv_36437;
  }
  ldv_36437: ;
  return;
}
}
__inline static int sanity_check(struct slgt_info *info , char *devname , char const *name )
{ struct slgt_info *__cil_tmp4 ;
  unsigned long __cil_tmp5 ;
  unsigned long __cil_tmp6 ;

  {
  {
  __cil_tmp4 = (struct slgt_info *)0;
  __cil_tmp5 = (unsigned long )__cil_tmp4;
  __cil_tmp6 = (unsigned long )info;
  if (__cil_tmp6 == __cil_tmp5) {
    return (1);
  } else {

  }
  }
  return (0);
}
}
static void ldisc_receive_buf(struct tty_struct *tty , __u8 const *data , char *flags ,
                              int count )
{ struct tty_ldisc *ld ;
  struct tty_struct *__cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  struct tty_ldisc *__cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  void (*__cil_tmp12)(struct tty_struct * , unsigned char const * , char * , int ) ;
  unsigned long __cil_tmp13 ;
  struct tty_ldisc_ops *__cil_tmp14 ;
  void (*__cil_tmp15)(struct tty_struct * , unsigned char const * , char * , int ) ;
  unsigned long __cil_tmp16 ;
  struct tty_ldisc_ops *__cil_tmp17 ;
  void (*__cil_tmp18)(struct tty_struct * , unsigned char const * , char * , int ) ;

  {
  {
  __cil_tmp6 = (struct tty_struct *)0;
  __cil_tmp7 = (unsigned long )__cil_tmp6;
  __cil_tmp8 = (unsigned long )tty;
  if (__cil_tmp8 == __cil_tmp7) {
    return;
  } else {

  }
  }
  {
  ld = tty_ldisc_ref(tty);
  }
  {
  __cil_tmp9 = (struct tty_ldisc *)0;
  __cil_tmp10 = (unsigned long )__cil_tmp9;
  __cil_tmp11 = (unsigned long )ld;
  if (__cil_tmp11 != __cil_tmp10) {
    {
    __cil_tmp12 = (void (*)(struct tty_struct * , unsigned char const * , char * ,
                            int ))0;
    __cil_tmp13 = (unsigned long )__cil_tmp12;
    __cil_tmp14 = ld->ops;
    __cil_tmp15 = __cil_tmp14->receive_buf;
    __cil_tmp16 = (unsigned long )__cil_tmp15;
    if (__cil_tmp16 != __cil_tmp13) {
      {
      __cil_tmp17 = ld->ops;
      __cil_tmp18 = __cil_tmp17->receive_buf;
      (*__cil_tmp18)(tty, data, flags, count);
      }
    } else {

    }
    }
    {
    tty_ldisc_deref(ld);
    }
  } else {

  }
  }
  return;
}
}
static int open(struct tty_struct *tty , struct file *filp )
{ struct slgt_info *info ;
  int retval ;
  int line ;
  unsigned long flags ;
  int tmp ;
  int tmp___0 ;
  raw_spinlock_t *tmp___1 ;
  struct slgt_info *__cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  unsigned long __cil_tmp12 ;
  int __cil_tmp13 ;
  char (*__cil_tmp14)[64U] ;
  char *__cil_tmp15 ;
  int __cil_tmp16 ;
  char (*__cil_tmp17)[25U] ;
  char *__cil_tmp18 ;
  int __cil_tmp19 ;
  char (*__cil_tmp20)[25U] ;
  char *__cil_tmp21 ;
  int __cil_tmp22 ;
  unsigned long __cil_tmp23 ;
  unsigned long __cil_tmp24 ;
  unsigned long __cil_tmp25 ;
  unsigned long __cil_tmp26 ;
  wait_queue_head_t *__cil_tmp27 ;
  unsigned long __cil_tmp28 ;
  int __cil_tmp29 ;
  struct mutex *__cil_tmp30 ;
  struct tty_struct *__cil_tmp31 ;
  unsigned long __cil_tmp32 ;
  unsigned long __cil_tmp33 ;
  int __cil_tmp34 ;
  spinlock_t *__cil_tmp35 ;
  int __cil_tmp36 ;
  spinlock_t *__cil_tmp37 ;
  struct mutex *__cil_tmp38 ;
  int __cil_tmp39 ;
  spinlock_t *__cil_tmp40 ;
  int __cil_tmp41 ;
  struct mutex *__cil_tmp42 ;
  struct mutex *__cil_tmp43 ;
  char (*__cil_tmp44)[25U] ;
  char *__cil_tmp45 ;
  int __cil_tmp46 ;
  int __cil_tmp47 ;
  int __cil_tmp48 ;
  char (*__cil_tmp49)[25U] ;
  char *__cil_tmp50 ;

  {
  line = tty->index;
  if (line < 0) {
    goto _L;
  } else
  if (line >= slgt_device_count) {
    _L:
    if (debug_level > 1) {
      {
      printk("%s: open with invalid line #%d.\n", driver_name, line);
      }
    } else {

    }
    return (-19);
  } else {

  }
  info = slgt_device_list;
  goto ldv_36459;
  ldv_36458:
  info = info->next_device;
  ldv_36459: ;
  {
  __cil_tmp10 = (struct slgt_info *)0;
  __cil_tmp11 = (unsigned long )__cil_tmp10;
  __cil_tmp12 = (unsigned long )info;
  if (__cil_tmp12 != __cil_tmp11) {
    {
    __cil_tmp13 = info->line;
    if (__cil_tmp13 != line) {
      goto ldv_36458;
    } else {
      goto ldv_36460;
    }
    }
  } else {
    goto ldv_36460;
  }
  }
  ldv_36460:
  {
  __cil_tmp14 = & tty->name;
  __cil_tmp15 = (char *)__cil_tmp14;
  tmp = sanity_check(info, __cil_tmp15, "open");
  }
  if (tmp != 0) {
    return (-19);
  } else {

  }
  {
  __cil_tmp16 = info->init_error;
  if (__cil_tmp16 != 0) {
    if (debug_level > 1) {
      {
      __cil_tmp17 = & info->device_name;
      __cil_tmp18 = (char *)__cil_tmp17;
      __cil_tmp19 = info->init_error;
      printk("%s init error=%d\n", __cil_tmp18, __cil_tmp19);
      }
    } else {

    }
    return (-19);
  } else {

  }
  }
  tty->driver_data = (void *)info;
  info->port.tty = tty;
  if (debug_level > 2) {
    {
    __cil_tmp20 = & info->device_name;
    __cil_tmp21 = (char *)__cil_tmp20;
    __cil_tmp22 = info->port.count;
    printk("%s open, old ref count = %d\n", __cil_tmp21, __cil_tmp22);
    }
  } else {

  }
  {
  tmp___0 = tty_hung_up_p(filp);
  }
  if (tmp___0 != 0) {
    goto _L___0;
  } else {
    {
    __cil_tmp23 = info->port.flags;
    __cil_tmp24 = __cil_tmp23 & 134217728UL;
    if (__cil_tmp24 != 0UL) {
      _L___0:
      {
      __cil_tmp25 = info->port.flags;
      __cil_tmp26 = __cil_tmp25 & 134217728UL;
      if (__cil_tmp26 != 0UL) {
        {
        __cil_tmp27 = & info->port.close_wait;
        interruptible_sleep_on(__cil_tmp27);
        }
      } else {

      }
      }
      {
      __cil_tmp28 = info->port.flags;
      __cil_tmp29 = (int )__cil_tmp28;
      if (__cil_tmp29 & 1) {
        retval = -11;
      } else {
        retval = -512;
      }
      }
      goto cleanup;
    } else {

    }
    }
  }
  {
  __cil_tmp30 = & info->port.mutex;
  mutex_lock_nested(__cil_tmp30, 0U);
  __cil_tmp31 = info->port.tty;
  __cil_tmp32 = info->port.flags;
  __cil_tmp33 = __cil_tmp32 & 8192UL;
  __cil_tmp34 = __cil_tmp33 != 0UL;
  __cil_tmp31->low_latency = (unsigned char )__cil_tmp34;
  __cil_tmp35 = & info->netlock;
  tmp___1 = spinlock_check(__cil_tmp35);
  flags = _raw_spin_lock_irqsave(tmp___1);
  }
  {
  __cil_tmp36 = info->netcount;
  if (__cil_tmp36 != 0) {
    {
    retval = -16;
    __cil_tmp37 = & info->netlock;
    spin_unlock_irqrestore(__cil_tmp37, flags);
    __cil_tmp38 = & info->port.mutex;
    mutex_unlock(__cil_tmp38);
    }
    goto cleanup;
  } else {

  }
  }
  {
  __cil_tmp39 = info->port.count;
  info->port.count = __cil_tmp39 + 1;
  __cil_tmp40 = & info->netlock;
  spin_unlock_irqrestore(__cil_tmp40, flags);
  }
  {
  __cil_tmp41 = info->port.count;
  if (__cil_tmp41 == 1) {
    {
    retval = startup(info);
    }
    if (retval < 0) {
      {
      __cil_tmp42 = & info->port.mutex;
      mutex_unlock(__cil_tmp42);
      }
      goto cleanup;
    } else {

    }
  } else {

  }
  }
  {
  __cil_tmp43 = & info->port.mutex;
  mutex_unlock(__cil_tmp43);
  retval = block_til_ready(tty, filp, info);
  }
  if (retval != 0) {
    if (debug_level > 2) {
      {
      __cil_tmp44 = & info->device_name;
      __cil_tmp45 = (char *)__cil_tmp44;
      printk("%s block_til_ready rc=%d\n", __cil_tmp45, retval);
      }
    } else {

    }
    goto cleanup;
  } else {

  }
  retval = 0;
  cleanup: ;
  if (retval != 0) {
    {
    __cil_tmp46 = tty->count;
    if (__cil_tmp46 == 1) {
      info->port.tty = (struct tty_struct *)0;
    } else {

    }
    }
    {
    __cil_tmp47 = info->port.count;
    if (__cil_tmp47 != 0) {
      __cil_tmp48 = info->port.count;
      info->port.count = __cil_tmp48 - 1;
    } else {

    }
    }
  } else {

  }
  if (debug_level > 2) {
    {
    __cil_tmp49 = & info->device_name;
    __cil_tmp50 = (char *)__cil_tmp49;
    printk("%s open rc=%d\n", __cil_tmp50, retval);
    }
  } else {

  }
  return (retval);
}
}
static void close(struct tty_struct *tty , struct file *filp )
{ struct slgt_info *info ;
  int tmp ;
  int tmp___0 ;
  void *__cil_tmp6 ;
  char (*__cil_tmp7)[64U] ;
  char *__cil_tmp8 ;
  char (*__cil_tmp9)[25U] ;
  char *__cil_tmp10 ;
  int __cil_tmp11 ;
  struct tty_port *__cil_tmp12 ;
  struct mutex *__cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  int __cil_tmp16 ;
  struct mutex *__cil_tmp17 ;
  struct tty_port *__cil_tmp18 ;
  struct tty_driver *__cil_tmp19 ;
  char const *__cil_tmp20 ;
  int __cil_tmp21 ;

  {
  {
  __cil_tmp6 = tty->driver_data;
  info = (struct slgt_info *)__cil_tmp6;
  __cil_tmp7 = & tty->name;
  __cil_tmp8 = (char *)__cil_tmp7;
  tmp = sanity_check(info, __cil_tmp8, "close");
  }
  if (tmp != 0) {
    return;
  } else {

  }
  if (debug_level > 2) {
    {
    __cil_tmp9 = & info->device_name;
    __cil_tmp10 = (char *)__cil_tmp9;
    __cil_tmp11 = info->port.count;
    printk("%s close entry, count=%d\n", __cil_tmp10, __cil_tmp11);
    }
  } else {

  }
  {
  __cil_tmp12 = & info->port;
  tmp___0 = tty_port_close_start(__cil_tmp12, tty, filp);
  }
  if (tmp___0 == 0) {
    goto cleanup;
  } else {

  }
  {
  __cil_tmp13 = & info->port.mutex;
  mutex_lock_nested(__cil_tmp13, 0U);
  }
  {
  __cil_tmp14 = info->port.flags;
  __cil_tmp15 = __cil_tmp14 & 2147483648UL;
  if (__cil_tmp15 != 0UL) {
    {
    __cil_tmp16 = info->timeout;
    wait_until_sent(tty, __cil_tmp16);
    }
  } else {

  }
  }
  {
  flush_buffer(tty);
  tty_ldisc_flush(tty);
  shutdown(info);
  __cil_tmp17 = & info->port.mutex;
  mutex_unlock(__cil_tmp17);
  __cil_tmp18 = & info->port;
  tty_port_close_end(__cil_tmp18, tty);
  info->port.tty = (struct tty_struct *)0;
  }
  cleanup: ;
  if (debug_level > 2) {
    {
    __cil_tmp19 = tty->driver;
    __cil_tmp20 = __cil_tmp19->name;
    __cil_tmp21 = info->port.count;
    printk("%s close exit, count=%d\n", __cil_tmp20, __cil_tmp21);
    }
  } else {

  }
  return;
}
}
static void hangup(struct tty_struct *tty )
{ struct slgt_info *info ;
  unsigned long flags ;
  int tmp ;
  raw_spinlock_t *tmp___0 ;
  void *__cil_tmp6 ;
  char (*__cil_tmp7)[64U] ;
  char *__cil_tmp8 ;
  char (*__cil_tmp9)[25U] ;
  char *__cil_tmp10 ;
  struct mutex *__cil_tmp11 ;
  spinlock_t *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  spinlock_t *__cil_tmp14 ;
  struct mutex *__cil_tmp15 ;
  wait_queue_head_t *__cil_tmp16 ;
  void *__cil_tmp17 ;

  {
  {
  __cil_tmp6 = tty->driver_data;
  info = (struct slgt_info *)__cil_tmp6;
  __cil_tmp7 = & tty->name;
  __cil_tmp8 = (char *)__cil_tmp7;
  tmp = sanity_check(info, __cil_tmp8, "hangup");
  }
  if (tmp != 0) {
    return;
  } else {

  }
  if (debug_level > 2) {
    {
    __cil_tmp9 = & info->device_name;
    __cil_tmp10 = (char *)__cil_tmp9;
    printk("%s hangup\n", __cil_tmp10);
    }
  } else {

  }
  {
  flush_buffer(tty);
  __cil_tmp11 = & info->port.mutex;
  mutex_lock_nested(__cil_tmp11, 0U);
  shutdown(info);
  __cil_tmp12 = & info->port.lock;
  tmp___0 = spinlock_check(__cil_tmp12);
  flags = _raw_spin_lock_irqsave(tmp___0);
  info->port.count = 0;
  __cil_tmp13 = info->port.flags;
  info->port.flags = __cil_tmp13 & 3758096383UL;
  info->port.tty = (struct tty_struct *)0;
  __cil_tmp14 = & info->port.lock;
  spin_unlock_irqrestore(__cil_tmp14, flags);
  __cil_tmp15 = & info->port.mutex;
  mutex_unlock(__cil_tmp15);
  __cil_tmp16 = & info->port.open_wait;
  __cil_tmp17 = (void *)0;
  __wake_up(__cil_tmp16, 1U, 1, __cil_tmp17);
  }
  return;
}
}
static void set_termios(struct tty_struct *tty , struct ktermios *old_termios )
{ struct slgt_info *info ;
  unsigned long flags ;
  raw_spinlock_t *tmp ;
  int tmp___0 ;
  raw_spinlock_t *tmp___1 ;
  void *__cil_tmp8 ;
  struct tty_driver *__cil_tmp9 ;
  char const *__cil_tmp10 ;
  tcflag_t __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  struct ktermios *__cil_tmp13 ;
  tcflag_t __cil_tmp14 ;
  unsigned int __cil_tmp15 ;
  unsigned char __cil_tmp16 ;
  unsigned int __cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  spinlock_t *__cil_tmp19 ;
  spinlock_t *__cil_tmp20 ;
  tcflag_t __cil_tmp21 ;
  unsigned int __cil_tmp22 ;
  struct ktermios *__cil_tmp23 ;
  tcflag_t __cil_tmp24 ;
  unsigned int __cil_tmp25 ;
  unsigned char __cil_tmp26 ;
  unsigned int __cil_tmp27 ;
  unsigned int __cil_tmp28 ;
  struct ktermios *__cil_tmp29 ;
  tcflag_t __cil_tmp30 ;
  int __cil_tmp31 ;
  unsigned char __cil_tmp32 ;
  unsigned int __cil_tmp33 ;
  unsigned int __cil_tmp34 ;
  unsigned long *__cil_tmp35 ;
  unsigned long const volatile *__cil_tmp36 ;
  unsigned char __cil_tmp37 ;
  unsigned int __cil_tmp38 ;
  unsigned int __cil_tmp39 ;
  spinlock_t *__cil_tmp40 ;
  spinlock_t *__cil_tmp41 ;
  tcflag_t __cil_tmp42 ;
  int __cil_tmp43 ;
  struct ktermios *__cil_tmp44 ;
  tcflag_t __cil_tmp45 ;
  int __cil_tmp46 ;

  {
  __cil_tmp8 = tty->driver_data;
  info = (struct slgt_info *)__cil_tmp8;
  if (debug_level > 2) {
    {
    __cil_tmp9 = tty->driver;
    __cil_tmp10 = __cil_tmp9->name;
    printk("%s set_termios\n", __cil_tmp10);
    }
  } else {

  }
  {
  change_params(info);
  }
  {
  __cil_tmp11 = old_termios->c_cflag;
  __cil_tmp12 = __cil_tmp11 & 4111U;
  if (__cil_tmp12 != 0U) {
    {
    __cil_tmp13 = tty->termios;
    __cil_tmp14 = __cil_tmp13->c_cflag;
    __cil_tmp15 = __cil_tmp14 & 4111U;
    if (__cil_tmp15 == 0U) {
      {
      __cil_tmp16 = info->signals;
      __cil_tmp17 = (unsigned int )__cil_tmp16;
      __cil_tmp18 = __cil_tmp17 & 95U;
      info->signals = (unsigned char )__cil_tmp18;
      __cil_tmp19 = & info->lock;
      tmp = spinlock_check(__cil_tmp19);
      flags = _raw_spin_lock_irqsave(tmp);
      set_signals(info);
      __cil_tmp20 = & info->lock;
      spin_unlock_irqrestore(__cil_tmp20, flags);
      }
    } else {

    }
    }
  } else {

  }
  }
  {
  __cil_tmp21 = old_termios->c_cflag;
  __cil_tmp22 = __cil_tmp21 & 4111U;
  if (__cil_tmp22 == 0U) {
    {
    __cil_tmp23 = tty->termios;
    __cil_tmp24 = __cil_tmp23->c_cflag;
    __cil_tmp25 = __cil_tmp24 & 4111U;
    if (__cil_tmp25 != 0U) {
      __cil_tmp26 = info->signals;
      __cil_tmp27 = (unsigned int )__cil_tmp26;
      __cil_tmp28 = __cil_tmp27 | 128U;
      info->signals = (unsigned char )__cil_tmp28;
      {
      __cil_tmp29 = tty->termios;
      __cil_tmp30 = __cil_tmp29->c_cflag;
      __cil_tmp31 = (int )__cil_tmp30;
      if (__cil_tmp31 >= 0) {
        __cil_tmp32 = info->signals;
        __cil_tmp33 = (unsigned int )__cil_tmp32;
        __cil_tmp34 = __cil_tmp33 | 32U;
        info->signals = (unsigned char )__cil_tmp34;
      } else {
        {
        __cil_tmp35 = & tty->flags;
        __cil_tmp36 = (unsigned long const volatile *)__cil_tmp35;
        tmp___0 = constant_test_bit(0U, __cil_tmp36);
        }
        if (tmp___0 == 0) {
          __cil_tmp37 = info->signals;
          __cil_tmp38 = (unsigned int )__cil_tmp37;
          __cil_tmp39 = __cil_tmp38 | 32U;
          info->signals = (unsigned char )__cil_tmp39;
        } else {

        }
      }
      }
      {
      __cil_tmp40 = & info->lock;
      tmp___1 = spinlock_check(__cil_tmp40);
      flags = _raw_spin_lock_irqsave(tmp___1);
      set_signals(info);
      __cil_tmp41 = & info->lock;
      spin_unlock_irqrestore(__cil_tmp41, flags);
      }
    } else {

    }
    }
  } else {

  }
  }
  {
  __cil_tmp42 = old_termios->c_cflag;
  __cil_tmp43 = (int )__cil_tmp42;
  if (__cil_tmp43 < 0) {
    {
    __cil_tmp44 = tty->termios;
    __cil_tmp45 = __cil_tmp44->c_cflag;
    __cil_tmp46 = (int )__cil_tmp45;
    if (__cil_tmp46 >= 0) {
      {
      tty->hw_stopped = (unsigned char)0;
      tx_release(tty);
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
static void update_tx_timer(struct slgt_info *info )
{ int timeout ;
  unsigned int tmp ;
  unsigned long tmp___0 ;
  unsigned long __cil_tmp5 ;
  unsigned int __cil_tmp6 ;
  unsigned int __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  struct timer_list *__cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  unsigned long __cil_tmp12 ;

  {
  {
  __cil_tmp5 = info->params.mode;
  if (__cil_tmp5 == 2UL) {
    {
    tmp = tbuf_bytes(info);
    __cil_tmp6 = tmp * 7U;
    __cil_tmp7 = __cil_tmp6 + 1000U;
    timeout = (int )__cil_tmp7;
    __cil_tmp8 = (unsigned int const )timeout;
    __cil_tmp9 = (unsigned int )__cil_tmp8;
    tmp___0 = msecs_to_jiffies(__cil_tmp9);
    __cil_tmp10 = & info->tx_timer;
    __cil_tmp11 = (unsigned long )jiffies;
    __cil_tmp12 = tmp___0 + __cil_tmp11;
    mod_timer(__cil_tmp10, __cil_tmp12);
    }
  } else {

  }
  }
  return;
}
}
static int write(struct tty_struct *tty , unsigned char const *buf , int count )
{ int ret ;
  struct slgt_info *info ;
  unsigned long flags ;
  int tmp ;
  raw_spinlock_t *tmp___0 ;
  bool tmp___1 ;
  int tmp___2 ;
  bool tmp___3 ;
  void *__cil_tmp12 ;
  char (*__cil_tmp13)[64U] ;
  char *__cil_tmp14 ;
  char (*__cil_tmp15)[25U] ;
  char *__cil_tmp16 ;
  unsigned char *__cil_tmp17 ;
  unsigned long __cil_tmp18 ;
  unsigned char *__cil_tmp19 ;
  unsigned long __cil_tmp20 ;
  u32 __cil_tmp21 ;
  u32 __cil_tmp22 ;
  unsigned char *__cil_tmp23 ;
  unsigned char *__cil_tmp24 ;
  unsigned char __cil_tmp25 ;
  unsigned int __cil_tmp26 ;
  unsigned char *__cil_tmp27 ;
  unsigned char *__cil_tmp28 ;
  unsigned char __cil_tmp29 ;
  unsigned int __cil_tmp30 ;
  spinlock_t *__cil_tmp31 ;
  int __cil_tmp32 ;
  unsigned char *__cil_tmp33 ;
  char const *__cil_tmp34 ;
  int __cil_tmp35 ;
  unsigned int __cil_tmp36 ;
  char const *__cil_tmp37 ;
  unsigned int __cil_tmp38 ;
  spinlock_t *__cil_tmp39 ;
  char (*__cil_tmp40)[25U] ;
  char *__cil_tmp41 ;

  {
  {
  ret = 0;
  __cil_tmp12 = tty->driver_data;
  info = (struct slgt_info *)__cil_tmp12;
  __cil_tmp13 = & tty->name;
  __cil_tmp14 = (char *)__cil_tmp13;
  tmp = sanity_check(info, __cil_tmp14, "write");
  }
  if (tmp != 0) {
    return (-5);
  } else {

  }
  if (debug_level > 2) {
    {
    __cil_tmp15 = & info->device_name;
    __cil_tmp16 = (char *)__cil_tmp15;
    printk("%s write count=%d\n", __cil_tmp16, count);
    }
  } else {

  }
  {
  __cil_tmp17 = (unsigned char *)0;
  __cil_tmp18 = (unsigned long )__cil_tmp17;
  __cil_tmp19 = info->tx_buf;
  __cil_tmp20 = (unsigned long )__cil_tmp19;
  if (__cil_tmp20 == __cil_tmp18) {
    return (-5);
  } else {
    {
    __cil_tmp21 = info->max_frame_size;
    __cil_tmp22 = (u32 )count;
    if (__cil_tmp22 > __cil_tmp21) {
      return (-5);
    } else {

    }
    }
  }
  }
  if (count == 0) {
    return (0);
  } else {
    {
    __cil_tmp23 = (unsigned char *)tty;
    __cil_tmp24 = __cil_tmp23 + 580UL;
    __cil_tmp25 = *__cil_tmp24;
    __cil_tmp26 = (unsigned int )__cil_tmp25;
    if (__cil_tmp26 != 0U) {
      return (0);
    } else {
      {
      __cil_tmp27 = (unsigned char *)tty;
      __cil_tmp28 = __cil_tmp27 + 580UL;
      __cil_tmp29 = *__cil_tmp28;
      __cil_tmp30 = (unsigned int )__cil_tmp29;
      if (__cil_tmp30 != 0U) {
        return (0);
      } else {

      }
      }
    }
    }
  }
  {
  __cil_tmp31 = & info->lock;
  tmp___0 = spinlock_check(__cil_tmp31);
  flags = _raw_spin_lock_irqsave(tmp___0);
  }
  {
  __cil_tmp32 = info->tx_count;
  if (__cil_tmp32 != 0) {
    {
    __cil_tmp33 = info->tx_buf;
    __cil_tmp34 = (char const *)__cil_tmp33;
    __cil_tmp35 = info->tx_count;
    __cil_tmp36 = (unsigned int )__cil_tmp35;
    tmp___1 = tx_load(info, __cil_tmp34, __cil_tmp36);
    }
    if (tmp___1) {
      tmp___2 = 0;
    } else {
      tmp___2 = 1;
    }
    if (tmp___2) {
      goto cleanup;
    } else {

    }
    info->tx_count = 0;
  } else {

  }
  }
  {
  __cil_tmp37 = (char const *)buf;
  __cil_tmp38 = (unsigned int )count;
  tmp___3 = tx_load(info, __cil_tmp37, __cil_tmp38);
  }
  if ((int )tmp___3) {
    ret = count;
  } else {

  }
  cleanup:
  {
  __cil_tmp39 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp39, flags);
  }
  if (debug_level > 2) {
    {
    __cil_tmp40 = & info->device_name;
    __cil_tmp41 = (char *)__cil_tmp40;
    printk("%s write rc=%d\n", __cil_tmp41, ret);
    }
  } else {

  }
  return (ret);
}
}
static int put_char(struct tty_struct *tty , unsigned char ch )
{ struct slgt_info *info ;
  unsigned long flags ;
  int ret ;
  int tmp ;
  raw_spinlock_t *tmp___0 ;
  int tmp___1 ;
  void *__cil_tmp9 ;
  char (*__cil_tmp10)[64U] ;
  char *__cil_tmp11 ;
  char (*__cil_tmp12)[25U] ;
  char *__cil_tmp13 ;
  int __cil_tmp14 ;
  unsigned char *__cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  unsigned char *__cil_tmp17 ;
  unsigned long __cil_tmp18 ;
  spinlock_t *__cil_tmp19 ;
  u32 __cil_tmp20 ;
  int __cil_tmp21 ;
  u32 __cil_tmp22 ;
  int __cil_tmp23 ;
  unsigned long __cil_tmp24 ;
  unsigned char *__cil_tmp25 ;
  unsigned char *__cil_tmp26 ;
  spinlock_t *__cil_tmp27 ;

  {
  {
  __cil_tmp9 = tty->driver_data;
  info = (struct slgt_info *)__cil_tmp9;
  ret = 0;
  __cil_tmp10 = & tty->name;
  __cil_tmp11 = (char *)__cil_tmp10;
  tmp = sanity_check(info, __cil_tmp11, "put_char");
  }
  if (tmp != 0) {
    return (0);
  } else {

  }
  if (debug_level > 2) {
    {
    __cil_tmp12 = & info->device_name;
    __cil_tmp13 = (char *)__cil_tmp12;
    __cil_tmp14 = (int )ch;
    printk("%s put_char(%d)\n", __cil_tmp13, __cil_tmp14);
    }
  } else {

  }
  {
  __cil_tmp15 = (unsigned char *)0;
  __cil_tmp16 = (unsigned long )__cil_tmp15;
  __cil_tmp17 = info->tx_buf;
  __cil_tmp18 = (unsigned long )__cil_tmp17;
  if (__cil_tmp18 == __cil_tmp16) {
    return (0);
  } else {

  }
  }
  {
  __cil_tmp19 = & info->lock;
  tmp___0 = spinlock_check(__cil_tmp19);
  flags = _raw_spin_lock_irqsave(tmp___0);
  }
  {
  __cil_tmp20 = info->max_frame_size;
  __cil_tmp21 = info->tx_count;
  __cil_tmp22 = (u32 )__cil_tmp21;
  if (__cil_tmp22 < __cil_tmp20) {
    tmp___1 = info->tx_count;
    __cil_tmp23 = info->tx_count;
    info->tx_count = __cil_tmp23 + 1;
    __cil_tmp24 = (unsigned long )tmp___1;
    __cil_tmp25 = info->tx_buf;
    __cil_tmp26 = __cil_tmp25 + __cil_tmp24;
    *__cil_tmp26 = ch;
    ret = 1;
  } else {

  }
  }
  {
  __cil_tmp27 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp27, flags);
  }
  return (ret);
}
}
static void send_xchar(struct tty_struct *tty , char ch )
{ struct slgt_info *info ;
  unsigned long flags ;
  int tmp ;
  raw_spinlock_t *tmp___0 ;
  void *__cil_tmp7 ;
  char (*__cil_tmp8)[64U] ;
  char *__cil_tmp9 ;
  char (*__cil_tmp10)[25U] ;
  char *__cil_tmp11 ;
  int __cil_tmp12 ;
  signed char __cil_tmp13 ;
  int __cil_tmp14 ;
  spinlock_t *__cil_tmp15 ;
  bool __cil_tmp16 ;
  spinlock_t *__cil_tmp17 ;

  {
  {
  __cil_tmp7 = tty->driver_data;
  info = (struct slgt_info *)__cil_tmp7;
  __cil_tmp8 = & tty->name;
  __cil_tmp9 = (char *)__cil_tmp8;
  tmp = sanity_check(info, __cil_tmp9, "send_xchar");
  }
  if (tmp != 0) {
    return;
  } else {

  }
  if (debug_level > 2) {
    {
    __cil_tmp10 = & info->device_name;
    __cil_tmp11 = (char *)__cil_tmp10;
    __cil_tmp12 = (int )ch;
    printk("%s send_xchar(%d)\n", __cil_tmp11, __cil_tmp12);
    }
  } else {

  }
  info->x_char = (int )ch;
  {
  __cil_tmp13 = (signed char )ch;
  __cil_tmp14 = (int )__cil_tmp13;
  if (__cil_tmp14 != 0) {
    {
    __cil_tmp15 = & info->lock;
    tmp___0 = spinlock_check(__cil_tmp15);
    flags = _raw_spin_lock_irqsave(tmp___0);
    }
    {
    __cil_tmp16 = info->tx_enabled;
    if (! __cil_tmp16) {
      {
      tx_start(info);
      }
    } else {

    }
    }
    {
    __cil_tmp17 = & info->lock;
    spin_unlock_irqrestore(__cil_tmp17, flags);
    }
  } else {

  }
  }
  return;
}
}
static void wait_until_sent(struct tty_struct *tty , int timeout )
{ struct slgt_info *info ;
  unsigned long orig_jiffies ;
  unsigned long char_time ;
  int tmp ;
  unsigned long __min1 ;
  unsigned long __min2 ;
  unsigned long tmp___0 ;
  unsigned int tmp___1 ;
  struct task_struct *tmp___2 ;
  int tmp___3 ;
  void *__cil_tmp13 ;
  struct slgt_info *__cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  char (*__cil_tmp17)[64U] ;
  char *__cil_tmp18 ;
  char (*__cil_tmp19)[25U] ;
  char *__cil_tmp20 ;
  unsigned long __cil_tmp21 ;
  unsigned long __cil_tmp22 ;
  unsigned long __cil_tmp23 ;
  int __cil_tmp24 ;
  int __cil_tmp25 ;
  unsigned long __cil_tmp26 ;
  unsigned long __cil_tmp27 ;
  long __cil_tmp28 ;
  unsigned long __cil_tmp29 ;
  unsigned long __cil_tmp30 ;
  long __cil_tmp31 ;
  long __cil_tmp32 ;
  bool __cil_tmp33 ;
  char (*__cil_tmp34)[25U] ;
  char *__cil_tmp35 ;

  {
  __cil_tmp13 = tty->driver_data;
  info = (struct slgt_info *)__cil_tmp13;
  {
  __cil_tmp14 = (struct slgt_info *)0;
  __cil_tmp15 = (unsigned long )__cil_tmp14;
  __cil_tmp16 = (unsigned long )info;
  if (__cil_tmp16 == __cil_tmp15) {
    return;
  } else {

  }
  }
  {
  __cil_tmp17 = & tty->name;
  __cil_tmp18 = (char *)__cil_tmp17;
  tmp = sanity_check(info, __cil_tmp18, "wait_until_sent");
  }
  if (tmp != 0) {
    return;
  } else {

  }
  if (debug_level > 2) {
    {
    __cil_tmp19 = & info->device_name;
    __cil_tmp20 = (char *)__cil_tmp19;
    printk("%s wait_until_sent entry\n", __cil_tmp20);
    }
  } else {

  }
  {
  __cil_tmp21 = info->port.flags;
  __cil_tmp22 = __cil_tmp21 & 2147483648UL;
  if (__cil_tmp22 == 0UL) {
    goto exit;
  } else {

  }
  }
  orig_jiffies = (unsigned long )jiffies;
  {
  __cil_tmp23 = info->params.data_rate;
  if (__cil_tmp23 != 0UL) {
    __cil_tmp24 = info->timeout;
    __cil_tmp25 = __cil_tmp24 / 160;
    char_time = (unsigned long )__cil_tmp25;
    if (char_time == 0UL) {
      char_time = char_time + 1UL;
    } else {

    }
  } else {
    char_time = 1UL;
  }
  }
  if (timeout != 0) {
    __min1 = char_time;
    __min2 = (unsigned long )timeout;
    if (__min1 < __min2) {
      tmp___0 = __min1;
    } else {
      tmp___0 = __min2;
    }
    char_time = tmp___0;
  } else {

  }
  goto ldv_36545;
  ldv_36544:
  {
  __cil_tmp26 = (unsigned long const )char_time;
  __cil_tmp27 = (unsigned long )__cil_tmp26;
  tmp___1 = jiffies_to_msecs(__cil_tmp27);
  msleep_interruptible(tmp___1);
  tmp___2 = get_current();
  tmp___3 = signal_pending(tmp___2);
  }
  if (tmp___3 != 0) {
    goto ldv_36537;
  } else {

  }
  if (timeout != 0) {
    {
    __cil_tmp28 = (long )jiffies;
    __cil_tmp29 = (unsigned long )timeout;
    __cil_tmp30 = __cil_tmp29 + orig_jiffies;
    __cil_tmp31 = (long )__cil_tmp30;
    __cil_tmp32 = __cil_tmp31 - __cil_tmp28;
    if (__cil_tmp32 < 0L) {
      goto ldv_36537;
    } else {

    }
    }
  } else {

  }
  ldv_36545: ;
  {
  __cil_tmp33 = info->tx_active;
  if ((int )__cil_tmp33) {
    goto ldv_36544;
  } else {
    goto ldv_36537;
  }
  }
  ldv_36537: ;
  exit: ;
  if (debug_level > 2) {
    {
    __cil_tmp34 = & info->device_name;
    __cil_tmp35 = (char *)__cil_tmp34;
    printk("%s wait_until_sent exit\n", __cil_tmp35);
    }
  } else {

  }
  return;
}
}
static int write_room(struct tty_struct *tty )
{ struct slgt_info *info ;
  int ret ;
  int tmp ;
  void *__cil_tmp5 ;
  char (*__cil_tmp6)[64U] ;
  char *__cil_tmp7 ;
  bool __cil_tmp8 ;
  char (*__cil_tmp9)[25U] ;
  char *__cil_tmp10 ;

  {
  {
  __cil_tmp5 = tty->driver_data;
  info = (struct slgt_info *)__cil_tmp5;
  __cil_tmp6 = & tty->name;
  __cil_tmp7 = (char *)__cil_tmp6;
  tmp = sanity_check(info, __cil_tmp7, "write_room");
  }
  if (tmp != 0) {
    return (0);
  } else {

  }
  {
  __cil_tmp8 = info->tx_active;
  if ((int )__cil_tmp8) {
    ret = 0;
  } else {
    ret = 65535;
  }
  }
  if (debug_level > 2) {
    {
    __cil_tmp9 = & info->device_name;
    __cil_tmp10 = (char *)__cil_tmp9;
    printk("%s write_room=%d\n", __cil_tmp10, ret);
    }
  } else {

  }
  return (ret);
}
}
static void flush_chars(struct tty_struct *tty )
{ struct slgt_info *info ;
  unsigned long flags ;
  int tmp ;
  raw_spinlock_t *tmp___0 ;
  bool tmp___1 ;
  void *__cil_tmp7 ;
  char (*__cil_tmp8)[64U] ;
  char *__cil_tmp9 ;
  char (*__cil_tmp10)[25U] ;
  char *__cil_tmp11 ;
  int __cil_tmp12 ;
  int __cil_tmp13 ;
  unsigned char *__cil_tmp14 ;
  unsigned char *__cil_tmp15 ;
  unsigned char __cil_tmp16 ;
  unsigned int __cil_tmp17 ;
  unsigned char *__cil_tmp18 ;
  unsigned char *__cil_tmp19 ;
  unsigned char __cil_tmp20 ;
  unsigned int __cil_tmp21 ;
  unsigned char *__cil_tmp22 ;
  unsigned long __cil_tmp23 ;
  unsigned char *__cil_tmp24 ;
  unsigned long __cil_tmp25 ;
  char (*__cil_tmp26)[25U] ;
  char *__cil_tmp27 ;
  spinlock_t *__cil_tmp28 ;
  int __cil_tmp29 ;
  unsigned char *__cil_tmp30 ;
  char const *__cil_tmp31 ;
  int __cil_tmp32 ;
  unsigned int __cil_tmp33 ;
  spinlock_t *__cil_tmp34 ;

  {
  {
  __cil_tmp7 = tty->driver_data;
  info = (struct slgt_info *)__cil_tmp7;
  __cil_tmp8 = & tty->name;
  __cil_tmp9 = (char *)__cil_tmp8;
  tmp = sanity_check(info, __cil_tmp9, "flush_chars");
  }
  if (tmp != 0) {
    return;
  } else {

  }
  if (debug_level > 2) {
    {
    __cil_tmp10 = & info->device_name;
    __cil_tmp11 = (char *)__cil_tmp10;
    __cil_tmp12 = info->tx_count;
    printk("%s flush_chars entry tx_count=%d\n", __cil_tmp11, __cil_tmp12);
    }
  } else {

  }
  {
  __cil_tmp13 = info->tx_count;
  if (__cil_tmp13 <= 0) {
    return;
  } else {
    {
    __cil_tmp14 = (unsigned char *)tty;
    __cil_tmp15 = __cil_tmp14 + 580UL;
    __cil_tmp16 = *__cil_tmp15;
    __cil_tmp17 = (unsigned int )__cil_tmp16;
    if (__cil_tmp17 != 0U) {
      return;
    } else {
      {
      __cil_tmp18 = (unsigned char *)tty;
      __cil_tmp19 = __cil_tmp18 + 580UL;
      __cil_tmp20 = *__cil_tmp19;
      __cil_tmp21 = (unsigned int )__cil_tmp20;
      if (__cil_tmp21 != 0U) {
        return;
      } else {
        {
        __cil_tmp22 = (unsigned char *)0;
        __cil_tmp23 = (unsigned long )__cil_tmp22;
        __cil_tmp24 = info->tx_buf;
        __cil_tmp25 = (unsigned long )__cil_tmp24;
        if (__cil_tmp25 == __cil_tmp23) {
          return;
        } else {

        }
        }
      }
      }
    }
    }
  }
  }
  if (debug_level > 2) {
    {
    __cil_tmp26 = & info->device_name;
    __cil_tmp27 = (char *)__cil_tmp26;
    printk("%s flush_chars start transmit\n", __cil_tmp27);
    }
  } else {

  }
  {
  __cil_tmp28 = & info->lock;
  tmp___0 = spinlock_check(__cil_tmp28);
  flags = _raw_spin_lock_irqsave(tmp___0);
  }
  {
  __cil_tmp29 = info->tx_count;
  if (__cil_tmp29 != 0) {
    {
    __cil_tmp30 = info->tx_buf;
    __cil_tmp31 = (char const *)__cil_tmp30;
    __cil_tmp32 = info->tx_count;
    __cil_tmp33 = (unsigned int )__cil_tmp32;
    tmp___1 = tx_load(info, __cil_tmp31, __cil_tmp33);
    }
    if ((int )tmp___1) {
      info->tx_count = 0;
    } else {

    }
  } else {

  }
  }
  {
  __cil_tmp34 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp34, flags);
  }
  return;
}
}
static void flush_buffer(struct tty_struct *tty )
{ struct slgt_info *info ;
  unsigned long flags ;
  int tmp ;
  raw_spinlock_t *tmp___0 ;
  void *__cil_tmp6 ;
  char (*__cil_tmp7)[64U] ;
  char *__cil_tmp8 ;
  char (*__cil_tmp9)[25U] ;
  char *__cil_tmp10 ;
  spinlock_t *__cil_tmp11 ;
  spinlock_t *__cil_tmp12 ;

  {
  {
  __cil_tmp6 = tty->driver_data;
  info = (struct slgt_info *)__cil_tmp6;
  __cil_tmp7 = & tty->name;
  __cil_tmp8 = (char *)__cil_tmp7;
  tmp = sanity_check(info, __cil_tmp8, "flush_buffer");
  }
  if (tmp != 0) {
    return;
  } else {

  }
  if (debug_level > 2) {
    {
    __cil_tmp9 = & info->device_name;
    __cil_tmp10 = (char *)__cil_tmp9;
    printk("%s flush_buffer\n", __cil_tmp10);
    }
  } else {

  }
  {
  __cil_tmp11 = & info->lock;
  tmp___0 = spinlock_check(__cil_tmp11);
  flags = _raw_spin_lock_irqsave(tmp___0);
  info->tx_count = 0;
  __cil_tmp12 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp12, flags);
  tty_wakeup(tty);
  }
  return;
}
}
static void tx_hold(struct tty_struct *tty )
{ struct slgt_info *info ;
  unsigned long flags ;
  int tmp ;
  raw_spinlock_t *tmp___0 ;
  void *__cil_tmp6 ;
  char (*__cil_tmp7)[64U] ;
  char *__cil_tmp8 ;
  char (*__cil_tmp9)[25U] ;
  char *__cil_tmp10 ;
  spinlock_t *__cil_tmp11 ;
  bool __cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  spinlock_t *__cil_tmp14 ;

  {
  {
  __cil_tmp6 = tty->driver_data;
  info = (struct slgt_info *)__cil_tmp6;
  __cil_tmp7 = & tty->name;
  __cil_tmp8 = (char *)__cil_tmp7;
  tmp = sanity_check(info, __cil_tmp8, "tx_hold");
  }
  if (tmp != 0) {
    return;
  } else {

  }
  if (debug_level > 2) {
    {
    __cil_tmp9 = & info->device_name;
    __cil_tmp10 = (char *)__cil_tmp9;
    printk("%s tx_hold\n", __cil_tmp10);
    }
  } else {

  }
  {
  __cil_tmp11 = & info->lock;
  tmp___0 = spinlock_check(__cil_tmp11);
  flags = _raw_spin_lock_irqsave(tmp___0);
  }
  {
  __cil_tmp12 = info->tx_enabled;
  if ((int )__cil_tmp12) {
    {
    __cil_tmp13 = info->params.mode;
    if (__cil_tmp13 == 1UL) {
      {
      tx_stop(info);
      }
    } else {

    }
    }
  } else {

  }
  }
  {
  __cil_tmp14 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp14, flags);
  }
  return;
}
}
static void tx_release(struct tty_struct *tty )
{ struct slgt_info *info ;
  unsigned long flags ;
  int tmp ;
  raw_spinlock_t *tmp___0 ;
  bool tmp___1 ;
  void *__cil_tmp7 ;
  char (*__cil_tmp8)[64U] ;
  char *__cil_tmp9 ;
  char (*__cil_tmp10)[25U] ;
  char *__cil_tmp11 ;
  spinlock_t *__cil_tmp12 ;
  int __cil_tmp13 ;
  unsigned char *__cil_tmp14 ;
  char const *__cil_tmp15 ;
  int __cil_tmp16 ;
  unsigned int __cil_tmp17 ;
  spinlock_t *__cil_tmp18 ;

  {
  {
  __cil_tmp7 = tty->driver_data;
  info = (struct slgt_info *)__cil_tmp7;
  __cil_tmp8 = & tty->name;
  __cil_tmp9 = (char *)__cil_tmp8;
  tmp = sanity_check(info, __cil_tmp9, "tx_release");
  }
  if (tmp != 0) {
    return;
  } else {

  }
  if (debug_level > 2) {
    {
    __cil_tmp10 = & info->device_name;
    __cil_tmp11 = (char *)__cil_tmp10;
    printk("%s tx_release\n", __cil_tmp11);
    }
  } else {

  }
  {
  __cil_tmp12 = & info->lock;
  tmp___0 = spinlock_check(__cil_tmp12);
  flags = _raw_spin_lock_irqsave(tmp___0);
  }
  {
  __cil_tmp13 = info->tx_count;
  if (__cil_tmp13 != 0) {
    {
    __cil_tmp14 = info->tx_buf;
    __cil_tmp15 = (char const *)__cil_tmp14;
    __cil_tmp16 = info->tx_count;
    __cil_tmp17 = (unsigned int )__cil_tmp16;
    tmp___1 = tx_load(info, __cil_tmp15, __cil_tmp17);
    }
    if ((int )tmp___1) {
      info->tx_count = 0;
    } else {

    }
  } else {

  }
  }
  {
  __cil_tmp18 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp18, flags);
  }
  return;
}
}
static int ioctl(struct tty_struct *tty , unsigned int cmd , unsigned long arg )
{ struct slgt_info *info ;
  void *argp ;
  int ret ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  void *__cil_tmp17 ;
  char (*__cil_tmp18)[64U] ;
  char *__cil_tmp19 ;
  char (*__cil_tmp20)[25U] ;
  char *__cil_tmp21 ;
  unsigned long __cil_tmp22 ;
  unsigned long __cil_tmp23 ;
  int __cil_tmp24 ;
  int __cil_tmp25 ;
  int __cil_tmp26 ;
  int __cil_tmp27 ;
  int __cil_tmp28 ;
  int __cil_tmp29 ;
  int __cil_tmp30 ;
  int __cil_tmp31 ;
  int __cil_tmp32 ;
  int *__cil_tmp33 ;
  int __cil_tmp34 ;
  struct gpio_desc *__cil_tmp35 ;
  struct gpio_desc *__cil_tmp36 ;
  struct gpio_desc *__cil_tmp37 ;
  int *__cil_tmp38 ;
  int __cil_tmp39 ;
  int *__cil_tmp40 ;
  int __cil_tmp41 ;
  struct mutex *__cil_tmp42 ;
  int __cil_tmp43 ;
  int __cil_tmp44 ;
  int __cil_tmp45 ;
  int __cil_tmp46 ;
  int __cil_tmp47 ;
  int __cil_tmp48 ;
  int __cil_tmp49 ;
  int __cil_tmp50 ;
  int __cil_tmp51 ;
  int __cil_tmp52 ;
  MGSL_PARAMS *__cil_tmp53 ;
  MGSL_PARAMS *__cil_tmp54 ;
  int *__cil_tmp55 ;
  int __cil_tmp56 ;
  int __cil_tmp57 ;
  int __cil_tmp58 ;
  struct mgsl_icount *__cil_tmp59 ;
  int *__cil_tmp60 ;
  int __cil_tmp61 ;
  struct mutex *__cil_tmp62 ;

  {
  {
  __cil_tmp17 = tty->driver_data;
  info = (struct slgt_info *)__cil_tmp17;
  argp = (void *)arg;
  __cil_tmp18 = & tty->name;
  __cil_tmp19 = (char *)__cil_tmp18;
  tmp = sanity_check(info, __cil_tmp19, "ioctl");
  }
  if (tmp != 0) {
    return (-19);
  } else {

  }
  if (debug_level > 2) {
    {
    __cil_tmp20 = & info->device_name;
    __cil_tmp21 = (char *)__cil_tmp20;
    printk("%s ioctl() cmd=%08X\n", __cil_tmp21, cmd);
    }
  } else {

  }
  if (cmd != 21534U) {
    if (cmd != 21535U) {
      if (cmd != 21596U) {
        {
        __cil_tmp22 = tty->flags;
        __cil_tmp23 = __cil_tmp22 & 2UL;
        if (__cil_tmp23 != 0UL) {
          return (-5);
        } else {

        }
        }
      } else {

      }
    } else {

    }
  } else {

  }
  {
  __cil_tmp24 = (int )cmd;
  if (__cil_tmp24 == -1073451768) {
    goto case_neg_1073451768;
  } else {
    {
    __cil_tmp25 = (int )cmd;
    if (__cil_tmp25 == 21596) {
      goto case_21596;
    } else {
      {
      __cil_tmp26 = (int )cmd;
      if (__cil_tmp26 == 1074818320) {
        goto case_1074818320;
      } else {
        {
        __cil_tmp27 = (int )cmd;
        if (__cil_tmp27 == -2146407151) {
          goto case_neg_2146407151;
        } else {
          {
          __cil_tmp28 = (int )cmd;
          if (__cil_tmp28 == -1072665326) {
            goto case_neg_1072665326;
          } else {
            {
            __cil_tmp29 = (int )cmd;
            if (__cil_tmp29 == 27924) {
              goto case_27924;
            } else {
              {
              __cil_tmp30 = (int )cmd;
              if (__cil_tmp30 == 27923) {
                goto case_27923;
              } else {
                {
                __cil_tmp31 = (int )cmd;
                if (__cil_tmp31 == 27926) {
                  goto case_27926;
                } else {
                  {
                  __cil_tmp32 = (int )cmd;
                  if (__cil_tmp32 == 27925) {
                    goto case_27925;
                  } else
                  if (0) {
                    case_neg_1073451768:
                    {
                    __cil_tmp33 = (int *)argp;
                    tmp___0 = wait_mgsl_event(info, __cil_tmp33);
                    }
                    return (tmp___0);
                    case_21596:
                    {
                    __cil_tmp34 = (int )arg;
                    tmp___1 = modem_input_wait(info, __cil_tmp34);
                    }
                    return (tmp___1);
                    case_1074818320:
                    {
                    __cil_tmp35 = (struct gpio_desc *)argp;
                    tmp___2 = set_gpio(info, __cil_tmp35);
                    }
                    return (tmp___2);
                    case_neg_2146407151:
                    {
                    __cil_tmp36 = (struct gpio_desc *)argp;
                    tmp___3 = get_gpio(info, __cil_tmp36);
                    }
                    return (tmp___3);
                    case_neg_1072665326:
                    {
                    __cil_tmp37 = (struct gpio_desc *)argp;
                    tmp___4 = wait_gpio(info, __cil_tmp37);
                    }
                    return (tmp___4);
                    case_27924:
                    {
                    __cil_tmp38 = (int *)argp;
                    tmp___5 = get_xsync(info, __cil_tmp38);
                    }
                    return (tmp___5);
                    case_27923:
                    {
                    __cil_tmp39 = (int )arg;
                    tmp___6 = set_xsync(info, __cil_tmp39);
                    }
                    return (tmp___6);
                    case_27926:
                    {
                    __cil_tmp40 = (int *)argp;
                    tmp___7 = get_xctrl(info, __cil_tmp40);
                    }
                    return (tmp___7);
                    case_27925:
                    {
                    __cil_tmp41 = (int )arg;
                    tmp___8 = set_xctrl(info, __cil_tmp41);
                    }
                    return (tmp___8);
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
  {
  __cil_tmp42 = & info->port.mutex;
  mutex_lock_nested(__cil_tmp42, 0U);
  }
  {
  __cil_tmp43 = (int )cmd;
  if (__cil_tmp43 == -2144310015) {
    goto case_neg_2144310015;
  } else {
    {
    __cil_tmp44 = (int )cmd;
    if (__cil_tmp44 == 1076915456) {
      goto case_1076915456;
    } else {
      {
      __cil_tmp45 = (int )cmd;
      if (__cil_tmp45 == 27907) {
        goto case_27907;
      } else {
        {
        __cil_tmp46 = (int )cmd;
        if (__cil_tmp46 == 27906) {
          goto case_27906;
        } else {
          {
          __cil_tmp47 = (int )cmd;
          if (__cil_tmp47 == 27908) {
            goto case_27908;
          } else {
            {
            __cil_tmp48 = (int )cmd;
            if (__cil_tmp48 == 27909) {
              goto case_27909;
            } else {
              {
              __cil_tmp49 = (int )cmd;
              if (__cil_tmp49 == 27910) {
                goto case_27910;
              } else {
                {
                __cil_tmp50 = (int )cmd;
                if (__cil_tmp50 == 27911) {
                  goto case_27911;
                } else {
                  {
                  __cil_tmp51 = (int )cmd;
                  if (__cil_tmp51 == 27915) {
                    goto case_27915;
                  } else {
                    {
                    __cil_tmp52 = (int )cmd;
                    if (__cil_tmp52 == 27914) {
                      goto case_27914;
                    } else {
                      goto switch_default;
                      if (0) {
                        case_neg_2144310015:
                        {
                        __cil_tmp53 = (MGSL_PARAMS *)argp;
                        ret = get_params(info, __cil_tmp53);
                        }
                        goto ldv_36601;
                        case_1076915456:
                        {
                        __cil_tmp54 = (MGSL_PARAMS *)argp;
                        ret = set_params(info, __cil_tmp54);
                        }
                        goto ldv_36601;
                        case_27907:
                        {
                        __cil_tmp55 = (int *)argp;
                        ret = get_txidle(info, __cil_tmp55);
                        }
                        goto ldv_36601;
                        case_27906:
                        {
                        __cil_tmp56 = (int )arg;
                        ret = set_txidle(info, __cil_tmp56);
                        }
                        goto ldv_36601;
                        case_27908:
                        {
                        __cil_tmp57 = (int )arg;
                        ret = tx_enable(info, __cil_tmp57);
                        }
                        goto ldv_36601;
                        case_27909:
                        {
                        __cil_tmp58 = (int )arg;
                        ret = rx_enable(info, __cil_tmp58);
                        }
                        goto ldv_36601;
                        case_27910:
                        {
                        ret = tx_abort(info);
                        }
                        goto ldv_36601;
                        case_27911:
                        {
                        __cil_tmp59 = (struct mgsl_icount *)argp;
                        ret = get_stats(info, __cil_tmp59);
                        }
                        goto ldv_36601;
                        case_27915:
                        {
                        __cil_tmp60 = (int *)argp;
                        ret = get_interface(info, __cil_tmp60);
                        }
                        goto ldv_36601;
                        case_27914:
                        {
                        __cil_tmp61 = (int )arg;
                        ret = set_interface(info, __cil_tmp61);
                        }
                        goto ldv_36601;
                        switch_default:
                        ret = -515;
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
  ldv_36601:
  {
  __cil_tmp62 = & info->port.mutex;
  mutex_unlock(__cil_tmp62);
  }
  return (ret);
}
}
static int get_icount(struct tty_struct *tty , struct serial_icounter_struct *icount )
{ struct slgt_info *info ;
  struct mgsl_icount cnow ;
  unsigned long flags ;
  raw_spinlock_t *tmp ;
  void *__cil_tmp7 ;
  spinlock_t *__cil_tmp8 ;
  spinlock_t *__cil_tmp9 ;

  {
  {
  __cil_tmp7 = tty->driver_data;
  info = (struct slgt_info *)__cil_tmp7;
  __cil_tmp8 = & info->lock;
  tmp = spinlock_check(__cil_tmp8);
  flags = _raw_spin_lock_irqsave(tmp);
  cnow = info->icount;
  __cil_tmp9 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp9, flags);
  icount->cts = (int )cnow.cts;
  icount->dsr = (int )cnow.dsr;
  icount->rng = (int )cnow.rng;
  icount->dcd = (int )cnow.dcd;
  icount->rx = (int )cnow.rx;
  icount->tx = (int )cnow.tx;
  icount->frame = (int )cnow.frame;
  icount->overrun = (int )cnow.overrun;
  icount->parity = (int )cnow.parity;
  icount->brk = (int )cnow.brk;
  icount->buf_overrun = (int )cnow.buf_overrun;
  }
  return (0);
}
}
static long get_params32(struct slgt_info *info , struct MGSL_PARAMS32 *user_params )
{ struct MGSL_PARAMS32 tmp_params ;
  int tmp ;
  char (*__cil_tmp5)[25U] ;
  char *__cil_tmp6 ;
  void *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  void *__cil_tmp11 ;
  void const *__cil_tmp12 ;

  {
  if (debug_level > 2) {
    {
    __cil_tmp5 = & info->device_name;
    __cil_tmp6 = (char *)__cil_tmp5;
    printk("%s get_params32\n", __cil_tmp6);
    }
  } else {

  }
  {
  __cil_tmp7 = (void *)(& tmp_params);
  memset(__cil_tmp7, 0, 32UL);
  __cil_tmp8 = info->params.mode;
  tmp_params.mode = (unsigned int )__cil_tmp8;
  tmp_params.loopback = info->params.loopback;
  tmp_params.flags = info->params.flags;
  tmp_params.encoding = info->params.encoding;
  __cil_tmp9 = info->params.clock_speed;
  tmp_params.clock_speed = (unsigned int )__cil_tmp9;
  tmp_params.addr_filter = info->params.addr_filter;
  tmp_params.crc_type = info->params.crc_type;
  tmp_params.preamble_length = info->params.preamble_length;
  tmp_params.preamble = info->params.preamble;
  __cil_tmp10 = info->params.data_rate;
  tmp_params.data_rate = (unsigned int )__cil_tmp10;
  tmp_params.data_bits = info->params.data_bits;
  tmp_params.stop_bits = info->params.stop_bits;
  tmp_params.parity = info->params.parity;
  __cil_tmp11 = (void *)user_params;
  __cil_tmp12 = (void const *)(& tmp_params);
  tmp = copy_to_user(__cil_tmp11, __cil_tmp12, 32U);
  }
  if (tmp != 0) {
    return (-14L);
  } else {

  }
  return (0L);
}
}
static long set_params32(struct slgt_info *info , struct MGSL_PARAMS32 *new_params )
{ struct MGSL_PARAMS32 tmp_params ;
  unsigned long tmp ;
  char (*__cil_tmp5)[25U] ;
  char *__cil_tmp6 ;
  void *__cil_tmp7 ;
  void const *__cil_tmp8 ;
  spinlock_t *__cil_tmp9 ;
  spinlock_t *__cil_tmp10 ;

  {
  if (debug_level > 2) {
    {
    __cil_tmp5 = & info->device_name;
    __cil_tmp6 = (char *)__cil_tmp5;
    printk("%s set_params32\n", __cil_tmp6);
    }
  } else {

  }
  {
  __cil_tmp7 = (void *)(& tmp_params);
  __cil_tmp8 = (void const *)new_params;
  tmp = copy_from_user(__cil_tmp7, __cil_tmp8, 32UL);
  }
  if (tmp != 0UL) {
    return (-14L);
  } else {

  }
  {
  __cil_tmp9 = & info->lock;
  spin_lock(__cil_tmp9);
  }
  if (tmp_params.mode == 7U) {
    info->base_clock = tmp_params.clock_speed;
  } else {
    info->params.mode = (unsigned long )tmp_params.mode;
    info->params.loopback = tmp_params.loopback;
    info->params.flags = tmp_params.flags;
    info->params.encoding = tmp_params.encoding;
    info->params.clock_speed = (unsigned long )tmp_params.clock_speed;
    info->params.addr_filter = tmp_params.addr_filter;
    info->params.crc_type = tmp_params.crc_type;
    info->params.preamble_length = tmp_params.preamble_length;
    info->params.preamble = tmp_params.preamble;
    info->params.data_rate = (unsigned long )tmp_params.data_rate;
    info->params.data_bits = tmp_params.data_bits;
    info->params.stop_bits = tmp_params.stop_bits;
    info->params.parity = tmp_params.parity;
  }
  {
  __cil_tmp10 = & info->lock;
  spin_unlock(__cil_tmp10);
  program_hw(info);
  }
  return (0L);
}
}
static long slgt_compat_ioctl(struct tty_struct *tty , unsigned int cmd , unsigned long arg )
{ struct slgt_info *info ;
  int rc ;
  int tmp ;
  void *tmp___0 ;
  long tmp___1 ;
  void *tmp___2 ;
  long tmp___3 ;
  void *__cil_tmp11 ;
  char (*__cil_tmp12)[64U] ;
  char *__cil_tmp13 ;
  char (*__cil_tmp14)[25U] ;
  char *__cil_tmp15 ;
  int __cil_tmp16 ;
  int __cil_tmp17 ;
  int __cil_tmp18 ;
  int __cil_tmp19 ;
  int __cil_tmp20 ;
  int __cil_tmp21 ;
  int __cil_tmp22 ;
  int __cil_tmp23 ;
  int __cil_tmp24 ;
  int __cil_tmp25 ;
  int __cil_tmp26 ;
  int __cil_tmp27 ;
  int __cil_tmp28 ;
  int __cil_tmp29 ;
  int __cil_tmp30 ;
  int __cil_tmp31 ;
  int __cil_tmp32 ;
  int __cil_tmp33 ;
  int __cil_tmp34 ;
  int __cil_tmp35 ;
  int __cil_tmp36 ;
  compat_uptr_t __cil_tmp37 ;
  struct MGSL_PARAMS32 *__cil_tmp38 ;
  compat_uptr_t __cil_tmp39 ;
  struct MGSL_PARAMS32 *__cil_tmp40 ;
  char (*__cil_tmp41)[25U] ;
  char *__cil_tmp42 ;

  {
  {
  __cil_tmp11 = tty->driver_data;
  info = (struct slgt_info *)__cil_tmp11;
  rc = -515;
  __cil_tmp12 = & tty->name;
  __cil_tmp13 = (char *)__cil_tmp12;
  tmp = sanity_check(info, __cil_tmp13, "compat_ioctl");
  }
  if (tmp != 0) {
    return (-19L);
  } else {

  }
  if (debug_level > 2) {
    {
    __cil_tmp14 = & info->device_name;
    __cil_tmp15 = (char *)__cil_tmp14;
    printk("%s compat_ioctl() cmd=%08X\n", __cil_tmp15, cmd);
    }
  } else {

  }
  {
  __cil_tmp16 = (int )cmd;
  if (__cil_tmp16 == 1075866880) {
    goto case_1075866880;
  } else {
    {
    __cil_tmp17 = (int )cmd;
    if (__cil_tmp17 == -2145358591) {
      goto case_neg_2145358591;
    } else {
      {
      __cil_tmp18 = (int )cmd;
      if (__cil_tmp18 == -2144310015) {
        goto case_neg_2144310015;
      } else {
        {
        __cil_tmp19 = (int )cmd;
        if (__cil_tmp19 == 1076915456) {
          goto case_1076915456;
        } else {
          {
          __cil_tmp20 = (int )cmd;
          if (__cil_tmp20 == 27907) {
            goto case_27907;
          } else {
            {
            __cil_tmp21 = (int )cmd;
            if (__cil_tmp21 == 27911) {
              goto case_27911;
            } else {
              {
              __cil_tmp22 = (int )cmd;
              if (__cil_tmp22 == -1073451768) {
                goto case_neg_1073451768;
              } else {
                {
                __cil_tmp23 = (int )cmd;
                if (__cil_tmp23 == 27915) {
                  goto case_27915;
                } else {
                  {
                  __cil_tmp24 = (int )cmd;
                  if (__cil_tmp24 == 1074818320) {
                    goto case_1074818320;
                  } else {
                    {
                    __cil_tmp25 = (int )cmd;
                    if (__cil_tmp25 == -2146407151) {
                      goto case_neg_2146407151;
                    } else {
                      {
                      __cil_tmp26 = (int )cmd;
                      if (__cil_tmp26 == -1072665326) {
                        goto case_neg_1072665326;
                      } else {
                        {
                        __cil_tmp27 = (int )cmd;
                        if (__cil_tmp27 == 27924) {
                          goto case_27924;
                        } else {
                          {
                          __cil_tmp28 = (int )cmd;
                          if (__cil_tmp28 == 27926) {
                            goto case_27926;
                          } else {
                            {
                            __cil_tmp29 = (int )cmd;
                            if (__cil_tmp29 == 27906) {
                              goto case_27906;
                            } else {
                              {
                              __cil_tmp30 = (int )cmd;
                              if (__cil_tmp30 == 27908) {
                                goto case_27908;
                              } else {
                                {
                                __cil_tmp31 = (int )cmd;
                                if (__cil_tmp31 == 27909) {
                                  goto case_27909;
                                } else {
                                  {
                                  __cil_tmp32 = (int )cmd;
                                  if (__cil_tmp32 == 27910) {
                                    goto case_27910;
                                  } else {
                                    {
                                    __cil_tmp33 = (int )cmd;
                                    if (__cil_tmp33 == 21596) {
                                      goto case_21596;
                                    } else {
                                      {
                                      __cil_tmp34 = (int )cmd;
                                      if (__cil_tmp34 == 27914) {
                                        goto case_27914;
                                      } else {
                                        {
                                        __cil_tmp35 = (int )cmd;
                                        if (__cil_tmp35 == 27923) {
                                          goto case_27923;
                                        } else {
                                          {
                                          __cil_tmp36 = (int )cmd;
                                          if (__cil_tmp36 == 27925) {
                                            goto case_27925;
                                          } else
                                          if (0) {
                                            case_1075866880:
                                            {
                                            __cil_tmp37 = (compat_uptr_t )arg;
                                            tmp___0 = compat_ptr(__cil_tmp37);
                                            __cil_tmp38 = (struct MGSL_PARAMS32 *)tmp___0;
                                            tmp___1 = set_params32(info, __cil_tmp38);
                                            rc = (int )tmp___1;
                                            }
                                            goto ldv_36640;
                                            case_neg_2145358591:
                                            {
                                            __cil_tmp39 = (compat_uptr_t )arg;
                                            tmp___2 = compat_ptr(__cil_tmp39);
                                            __cil_tmp40 = (struct MGSL_PARAMS32 *)tmp___2;
                                            tmp___3 = get_params32(info, __cil_tmp40);
                                            rc = (int )tmp___3;
                                            }
                                            goto ldv_36640;
                                            case_neg_2144310015: ;
                                            case_1076915456: ;
                                            case_27907: ;
                                            case_27911: ;
                                            case_neg_1073451768: ;
                                            case_27915: ;
                                            case_1074818320: ;
                                            case_neg_2146407151: ;
                                            case_neg_1072665326: ;
                                            case_27924: ;
                                            case_27926: ;
                                            case_27906: ;
                                            case_27908: ;
                                            case_27909: ;
                                            case_27910: ;
                                            case_21596: ;
                                            case_27914: ;
                                            case_27923: ;
                                            case_27925:
                                            {
                                            rc = ioctl(tty, cmd, arg);
                                            }
                                            goto ldv_36640;
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
  ldv_36640: ;
  if (debug_level > 2) {
    {
    __cil_tmp41 = & info->device_name;
    __cil_tmp42 = (char *)__cil_tmp41;
    printk("%s compat_ioctl() cmd=%08X rc=%d\n", __cil_tmp42, cmd, rc);
    }
  } else {

  }
  return ((long )rc);
}
}
__inline static void line_info(struct seq_file *m , struct slgt_info *info )
{ char stat_buf[30U] ;
  unsigned long flags ;
  raw_spinlock_t *tmp ;
  char (*__cil_tmp6)[25U] ;
  char *__cil_tmp7 ;
  u32 __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  u32 __cil_tmp10 ;
  spinlock_t *__cil_tmp11 ;
  spinlock_t *__cil_tmp12 ;
  unsigned char __cil_tmp13 ;
  int __cil_tmp14 ;
  int __cil_tmp15 ;
  char *__cil_tmp16 ;
  unsigned char __cil_tmp17 ;
  int __cil_tmp18 ;
  int __cil_tmp19 ;
  char *__cil_tmp20 ;
  unsigned char __cil_tmp21 ;
  signed char __cil_tmp22 ;
  int __cil_tmp23 ;
  char *__cil_tmp24 ;
  unsigned char __cil_tmp25 ;
  int __cil_tmp26 ;
  int __cil_tmp27 ;
  char *__cil_tmp28 ;
  unsigned char __cil_tmp29 ;
  int __cil_tmp30 ;
  char *__cil_tmp31 ;
  unsigned char __cil_tmp32 ;
  int __cil_tmp33 ;
  int __cil_tmp34 ;
  char *__cil_tmp35 ;
  unsigned long __cil_tmp36 ;
  __u32 __cil_tmp37 ;
  __u32 __cil_tmp38 ;
  __u32 __cil_tmp39 ;
  __u32 __cil_tmp40 ;
  __u32 __cil_tmp41 ;
  __u32 __cil_tmp42 ;
  __u32 __cil_tmp43 ;
  __u32 __cil_tmp44 ;
  __u32 __cil_tmp45 ;
  __u32 __cil_tmp46 ;
  __u32 __cil_tmp47 ;
  __u32 __cil_tmp48 ;
  __u32 __cil_tmp49 ;
  __u32 __cil_tmp50 ;
  __u32 __cil_tmp51 ;
  __u32 __cil_tmp52 ;
  __u32 __cil_tmp53 ;
  __u32 __cil_tmp54 ;
  __u32 __cil_tmp55 ;
  __u32 __cil_tmp56 ;
  __u32 __cil_tmp57 ;
  __u32 __cil_tmp58 ;
  __u32 __cil_tmp59 ;
  __u32 __cil_tmp60 ;
  char *__cil_tmp61 ;
  char *__cil_tmp62 ;
  bool __cil_tmp63 ;
  int __cil_tmp64 ;
  bool __cil_tmp65 ;
  int __cil_tmp66 ;
  bool __cil_tmp67 ;
  int __cil_tmp68 ;
  u32 __cil_tmp69 ;

  {
  {
  __cil_tmp6 = & info->device_name;
  __cil_tmp7 = (char *)__cil_tmp6;
  __cil_tmp8 = info->phys_reg_addr;
  __cil_tmp9 = info->irq_level;
  __cil_tmp10 = info->max_frame_size;
  seq_printf(m, "%s: IO=%08X IRQ=%d MaxFrameSize=%u\n", __cil_tmp7, __cil_tmp8, __cil_tmp9,
             __cil_tmp10);
  __cil_tmp11 = & info->lock;
  tmp = spinlock_check(__cil_tmp11);
  flags = _raw_spin_lock_irqsave(tmp);
  get_signals(info);
  __cil_tmp12 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp12, flags);
  stat_buf[0] = (char)0;
  stat_buf[1] = (char)0;
  }
  {
  __cil_tmp13 = info->signals;
  __cil_tmp14 = (int )__cil_tmp13;
  __cil_tmp15 = __cil_tmp14 & 32;
  if (__cil_tmp15 != 0) {
    {
    __cil_tmp16 = (char *)(& stat_buf);
    strcat(__cil_tmp16, "|RTS");
    }
  } else {

  }
  }
  {
  __cil_tmp17 = info->signals;
  __cil_tmp18 = (int )__cil_tmp17;
  __cil_tmp19 = __cil_tmp18 & 16;
  if (__cil_tmp19 != 0) {
    {
    __cil_tmp20 = (char *)(& stat_buf);
    strcat(__cil_tmp20, "|CTS");
    }
  } else {

  }
  }
  {
  __cil_tmp21 = info->signals;
  __cil_tmp22 = (signed char )__cil_tmp21;
  __cil_tmp23 = (int )__cil_tmp22;
  if (__cil_tmp23 < 0) {
    {
    __cil_tmp24 = (char *)(& stat_buf);
    strcat(__cil_tmp24, "|DTR");
    }
  } else {

  }
  }
  {
  __cil_tmp25 = info->signals;
  __cil_tmp26 = (int )__cil_tmp25;
  __cil_tmp27 = __cil_tmp26 & 64;
  if (__cil_tmp27 != 0) {
    {
    __cil_tmp28 = (char *)(& stat_buf);
    strcat(__cil_tmp28, "|DSR");
    }
  } else {

  }
  }
  {
  __cil_tmp29 = info->signals;
  __cil_tmp30 = (int )__cil_tmp29;
  if (__cil_tmp30 & 1) {
    {
    __cil_tmp31 = (char *)(& stat_buf);
    strcat(__cil_tmp31, "|CD");
    }
  } else {

  }
  }
  {
  __cil_tmp32 = info->signals;
  __cil_tmp33 = (int )__cil_tmp32;
  __cil_tmp34 = __cil_tmp33 & 4;
  if (__cil_tmp34 != 0) {
    {
    __cil_tmp35 = (char *)(& stat_buf);
    strcat(__cil_tmp35, "|RI");
    }
  } else {

  }
  }
  {
  __cil_tmp36 = info->params.mode;
  if (__cil_tmp36 != 1UL) {
    {
    __cil_tmp37 = info->icount.txok;
    __cil_tmp38 = info->icount.rxok;
    seq_printf(m, "\tHDLC txok:%d rxok:%d", __cil_tmp37, __cil_tmp38);
    }
    {
    __cil_tmp39 = info->icount.txunder;
    if (__cil_tmp39 != 0U) {
      {
      __cil_tmp40 = info->icount.txunder;
      seq_printf(m, " txunder:%d", __cil_tmp40);
      }
    } else {

    }
    }
    {
    __cil_tmp41 = info->icount.txabort;
    if (__cil_tmp41 != 0U) {
      {
      __cil_tmp42 = info->icount.txabort;
      seq_printf(m, " txabort:%d", __cil_tmp42);
      }
    } else {

    }
    }
    {
    __cil_tmp43 = info->icount.rxshort;
    if (__cil_tmp43 != 0U) {
      {
      __cil_tmp44 = info->icount.rxshort;
      seq_printf(m, " rxshort:%d", __cil_tmp44);
      }
    } else {

    }
    }
    {
    __cil_tmp45 = info->icount.rxlong;
    if (__cil_tmp45 != 0U) {
      {
      __cil_tmp46 = info->icount.rxlong;
      seq_printf(m, " rxlong:%d", __cil_tmp46);
      }
    } else {

    }
    }
    {
    __cil_tmp47 = info->icount.rxover;
    if (__cil_tmp47 != 0U) {
      {
      __cil_tmp48 = info->icount.rxover;
      seq_printf(m, " rxover:%d", __cil_tmp48);
      }
    } else {

    }
    }
    {
    __cil_tmp49 = info->icount.rxcrc;
    if (__cil_tmp49 != 0U) {
      {
      __cil_tmp50 = info->icount.rxcrc;
      seq_printf(m, " rxcrc:%d", __cil_tmp50);
      }
    } else {

    }
    }
  } else {
    {
    __cil_tmp51 = info->icount.tx;
    __cil_tmp52 = info->icount.rx;
    seq_printf(m, "\tASYNC tx:%d rx:%d", __cil_tmp51, __cil_tmp52);
    }
    {
    __cil_tmp53 = info->icount.frame;
    if (__cil_tmp53 != 0U) {
      {
      __cil_tmp54 = info->icount.frame;
      seq_printf(m, " fe:%d", __cil_tmp54);
      }
    } else {

    }
    }
    {
    __cil_tmp55 = info->icount.parity;
    if (__cil_tmp55 != 0U) {
      {
      __cil_tmp56 = info->icount.parity;
      seq_printf(m, " pe:%d", __cil_tmp56);
      }
    } else {

    }
    }
    {
    __cil_tmp57 = info->icount.brk;
    if (__cil_tmp57 != 0U) {
      {
      __cil_tmp58 = info->icount.brk;
      seq_printf(m, " brk:%d", __cil_tmp58);
      }
    } else {

    }
    }
    {
    __cil_tmp59 = info->icount.overrun;
    if (__cil_tmp59 != 0U) {
      {
      __cil_tmp60 = info->icount.overrun;
      seq_printf(m, " oe:%d", __cil_tmp60);
      }
    } else {

    }
    }
  }
  }
  {
  __cil_tmp61 = (char *)(& stat_buf);
  __cil_tmp62 = __cil_tmp61 + 1UL;
  seq_printf(m, " %s\n", __cil_tmp62);
  __cil_tmp63 = info->tx_active;
  __cil_tmp64 = (int )__cil_tmp63;
  __cil_tmp65 = info->bh_requested;
  __cil_tmp66 = (int )__cil_tmp65;
  __cil_tmp67 = info->bh_running;
  __cil_tmp68 = (int )__cil_tmp67;
  __cil_tmp69 = info->pending_bh;
  seq_printf(m, "\ttxactive=%d bh_req=%d bh_run=%d pending_bh=%x\n", __cil_tmp64,
             __cil_tmp66, __cil_tmp68, __cil_tmp69);
  }
  return;
}
}
static int synclink_gt_proc_show(struct seq_file *m , void *v )
{ struct slgt_info *info ;
  struct slgt_info *__cil_tmp4 ;
  unsigned long __cil_tmp5 ;
  unsigned long __cil_tmp6 ;

  {
  {
  seq_puts(m, "synclink_gt driver\n");
  info = slgt_device_list;
  }
  goto ldv_36676;
  ldv_36675:
  {
  line_info(m, info);
  info = info->next_device;
  }
  ldv_36676: ;
  {
  __cil_tmp4 = (struct slgt_info *)0;
  __cil_tmp5 = (unsigned long )__cil_tmp4;
  __cil_tmp6 = (unsigned long )info;
  if (__cil_tmp6 != __cil_tmp5) {
    goto ldv_36675;
  } else {
    goto ldv_36677;
  }
  }
  ldv_36677: ;
  return (0);
}
}
static int synclink_gt_proc_open(struct inode *inode , struct file *file )
{ int tmp ;
  void *__cil_tmp4 ;

  {
  {
  __cil_tmp4 = (void *)0;
  tmp = single_open(file, & synclink_gt_proc_show, __cil_tmp4);
  }
  return (tmp);
}
}
static struct file_operations const synclink_gt_proc_fops =
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
    (int (*)(struct file * , struct vm_area_struct * ))0, & synclink_gt_proc_open,
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
static int chars_in_buffer(struct tty_struct *tty )
{ struct slgt_info *info ;
  int count ;
  int tmp ;
  unsigned int tmp___0 ;
  void *__cil_tmp6 ;
  char (*__cil_tmp7)[64U] ;
  char *__cil_tmp8 ;
  char (*__cil_tmp9)[25U] ;
  char *__cil_tmp10 ;

  {
  {
  __cil_tmp6 = tty->driver_data;
  info = (struct slgt_info *)__cil_tmp6;
  __cil_tmp7 = & tty->name;
  __cil_tmp8 = (char *)__cil_tmp7;
  tmp = sanity_check(info, __cil_tmp8, "chars_in_buffer");
  }
  if (tmp != 0) {
    return (0);
  } else {

  }
  {
  tmp___0 = tbuf_bytes(info);
  count = (int )tmp___0;
  }
  if (debug_level > 2) {
    {
    __cil_tmp9 = & info->device_name;
    __cil_tmp10 = (char *)__cil_tmp9;
    printk("%s chars_in_buffer()=%d\n", __cil_tmp10, count);
    }
  } else {

  }
  return (count);
}
}
static void throttle(struct tty_struct *tty )
{ struct slgt_info *info ;
  unsigned long flags ;
  int tmp ;
  raw_spinlock_t *tmp___0 ;
  void *__cil_tmp6 ;
  char (*__cil_tmp7)[64U] ;
  char *__cil_tmp8 ;
  char (*__cil_tmp9)[25U] ;
  char *__cil_tmp10 ;
  struct ktermios *__cil_tmp11 ;
  tcflag_t __cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  struct ktermios *__cil_tmp14 ;
  cc_t __cil_tmp15 ;
  char __cil_tmp16 ;
  int __cil_tmp17 ;
  char __cil_tmp18 ;
  struct ktermios *__cil_tmp19 ;
  tcflag_t __cil_tmp20 ;
  int __cil_tmp21 ;
  spinlock_t *__cil_tmp22 ;
  unsigned char __cil_tmp23 ;
  unsigned int __cil_tmp24 ;
  unsigned int __cil_tmp25 ;
  spinlock_t *__cil_tmp26 ;

  {
  {
  __cil_tmp6 = tty->driver_data;
  info = (struct slgt_info *)__cil_tmp6;
  __cil_tmp7 = & tty->name;
  __cil_tmp8 = (char *)__cil_tmp7;
  tmp = sanity_check(info, __cil_tmp8, "throttle");
  }
  if (tmp != 0) {
    return;
  } else {

  }
  if (debug_level > 2) {
    {
    __cil_tmp9 = & info->device_name;
    __cil_tmp10 = (char *)__cil_tmp9;
    printk("%s throttle\n", __cil_tmp10);
    }
  } else {

  }
  {
  __cil_tmp11 = tty->termios;
  __cil_tmp12 = __cil_tmp11->c_iflag;
  __cil_tmp13 = __cil_tmp12 & 4096U;
  if (__cil_tmp13 != 0U) {
    {
    __cil_tmp14 = tty->termios;
    __cil_tmp15 = __cil_tmp14->c_cc[9];
    __cil_tmp16 = (char )__cil_tmp15;
    __cil_tmp17 = (int )__cil_tmp16;
    __cil_tmp18 = (char )__cil_tmp17;
    send_xchar(tty, __cil_tmp18);
    }
  } else {

  }
  }
  {
  __cil_tmp19 = tty->termios;
  __cil_tmp20 = __cil_tmp19->c_cflag;
  __cil_tmp21 = (int )__cil_tmp20;
  if (__cil_tmp21 < 0) {
    {
    __cil_tmp22 = & info->lock;
    tmp___0 = spinlock_check(__cil_tmp22);
    flags = _raw_spin_lock_irqsave(tmp___0);
    __cil_tmp23 = info->signals;
    __cil_tmp24 = (unsigned int )__cil_tmp23;
    __cil_tmp25 = __cil_tmp24 & 223U;
    info->signals = (unsigned char )__cil_tmp25;
    set_signals(info);
    __cil_tmp26 = & info->lock;
    spin_unlock_irqrestore(__cil_tmp26, flags);
    }
  } else {

  }
  }
  return;
}
}
static void unthrottle(struct tty_struct *tty )
{ struct slgt_info *info ;
  unsigned long flags ;
  int tmp ;
  raw_spinlock_t *tmp___0 ;
  void *__cil_tmp6 ;
  char (*__cil_tmp7)[64U] ;
  char *__cil_tmp8 ;
  char (*__cil_tmp9)[25U] ;
  char *__cil_tmp10 ;
  struct ktermios *__cil_tmp11 ;
  tcflag_t __cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  int __cil_tmp14 ;
  struct ktermios *__cil_tmp15 ;
  cc_t __cil_tmp16 ;
  char __cil_tmp17 ;
  int __cil_tmp18 ;
  char __cil_tmp19 ;
  struct ktermios *__cil_tmp20 ;
  tcflag_t __cil_tmp21 ;
  int __cil_tmp22 ;
  spinlock_t *__cil_tmp23 ;
  unsigned char __cil_tmp24 ;
  unsigned int __cil_tmp25 ;
  unsigned int __cil_tmp26 ;
  spinlock_t *__cil_tmp27 ;

  {
  {
  __cil_tmp6 = tty->driver_data;
  info = (struct slgt_info *)__cil_tmp6;
  __cil_tmp7 = & tty->name;
  __cil_tmp8 = (char *)__cil_tmp7;
  tmp = sanity_check(info, __cil_tmp8, "unthrottle");
  }
  if (tmp != 0) {
    return;
  } else {

  }
  if (debug_level > 2) {
    {
    __cil_tmp9 = & info->device_name;
    __cil_tmp10 = (char *)__cil_tmp9;
    printk("%s unthrottle\n", __cil_tmp10);
    }
  } else {

  }
  {
  __cil_tmp11 = tty->termios;
  __cil_tmp12 = __cil_tmp11->c_iflag;
  __cil_tmp13 = __cil_tmp12 & 4096U;
  if (__cil_tmp13 != 0U) {
    {
    __cil_tmp14 = info->x_char;
    if (__cil_tmp14 != 0) {
      info->x_char = 0;
    } else {
      {
      __cil_tmp15 = tty->termios;
      __cil_tmp16 = __cil_tmp15->c_cc[8];
      __cil_tmp17 = (char )__cil_tmp16;
      __cil_tmp18 = (int )__cil_tmp17;
      __cil_tmp19 = (char )__cil_tmp18;
      send_xchar(tty, __cil_tmp19);
      }
    }
    }
  } else {

  }
  }
  {
  __cil_tmp20 = tty->termios;
  __cil_tmp21 = __cil_tmp20->c_cflag;
  __cil_tmp22 = (int )__cil_tmp21;
  if (__cil_tmp22 < 0) {
    {
    __cil_tmp23 = & info->lock;
    tmp___0 = spinlock_check(__cil_tmp23);
    flags = _raw_spin_lock_irqsave(tmp___0);
    __cil_tmp24 = info->signals;
    __cil_tmp25 = (unsigned int )__cil_tmp24;
    __cil_tmp26 = __cil_tmp25 | 32U;
    info->signals = (unsigned char )__cil_tmp26;
    set_signals(info);
    __cil_tmp27 = & info->lock;
    spin_unlock_irqrestore(__cil_tmp27, flags);
    }
  } else {

  }
  }
  return;
}
}
static int set_break(struct tty_struct *tty , int break_state )
{ struct slgt_info *info ;
  unsigned short value ;
  unsigned long flags ;
  int tmp ;
  raw_spinlock_t *tmp___0 ;
  void *__cil_tmp8 ;
  char (*__cil_tmp9)[64U] ;
  char *__cil_tmp10 ;
  char (*__cil_tmp11)[25U] ;
  char *__cil_tmp12 ;
  spinlock_t *__cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  unsigned int __cil_tmp15 ;
  unsigned int __cil_tmp16 ;
  unsigned int __cil_tmp17 ;
  int __cil_tmp18 ;
  __u16 __cil_tmp19 ;
  spinlock_t *__cil_tmp20 ;

  {
  {
  __cil_tmp8 = tty->driver_data;
  info = (struct slgt_info *)__cil_tmp8;
  __cil_tmp9 = & tty->name;
  __cil_tmp10 = (char *)__cil_tmp9;
  tmp = sanity_check(info, __cil_tmp10, "set_break");
  }
  if (tmp != 0) {
    return (-22);
  } else {

  }
  if (debug_level > 2) {
    {
    __cil_tmp11 = & info->device_name;
    __cil_tmp12 = (char *)__cil_tmp11;
    printk("%s set_break(%d)\n", __cil_tmp12, break_state);
    }
  } else {

  }
  {
  __cil_tmp13 = & info->lock;
  tmp___0 = spinlock_check(__cil_tmp13);
  flags = _raw_spin_lock_irqsave(tmp___0);
  value = rd_reg16(info, 130U);
  }
  if (break_state == -1) {
    __cil_tmp14 = (unsigned int )value;
    __cil_tmp15 = __cil_tmp14 | 64U;
    value = (unsigned short )__cil_tmp15;
  } else {
    __cil_tmp16 = (unsigned int )value;
    __cil_tmp17 = __cil_tmp16 & 65471U;
    value = (unsigned short )__cil_tmp17;
  }
  {
  __cil_tmp18 = (int )value;
  __cil_tmp19 = (__u16 )__cil_tmp18;
  wr_reg16(info, 130U, __cil_tmp19);
  __cil_tmp20 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp20, flags);
  }
  return (0);
}
}
static int hdlcdev_attach(struct net_device *dev , unsigned short encoding , unsigned short parity )
{ struct slgt_info *info ;
  struct hdlc_device *tmp ;
  unsigned char new_encoding ;
  unsigned short new_crctype ;
  void *__cil_tmp8 ;
  int __cil_tmp9 ;
  char (*__cil_tmp10)[25U] ;
  char *__cil_tmp11 ;
  int __cil_tmp12 ;
  int __cil_tmp13 ;
  int __cil_tmp14 ;
  int __cil_tmp15 ;
  int __cil_tmp16 ;
  int __cil_tmp17 ;
  int __cil_tmp18 ;
  int __cil_tmp19 ;
  int __cil_tmp20 ;

  {
  {
  tmp = dev_to_hdlc(dev);
  __cil_tmp8 = tmp->priv;
  info = (struct slgt_info *)__cil_tmp8;
  }
  {
  __cil_tmp9 = info->port.count;
  if (__cil_tmp9 != 0) {
    return (-16);
  } else {

  }
  }
  if (debug_level > 2) {
    {
    __cil_tmp10 = & info->device_name;
    __cil_tmp11 = (char *)__cil_tmp10;
    printk("%s hdlcdev_attach\n", __cil_tmp11);
    }
  } else {

  }
  {
  __cil_tmp12 = (int )encoding;
  if (__cil_tmp12 == 1) {
    goto case_1;
  } else {
    {
    __cil_tmp13 = (int )encoding;
    if (__cil_tmp13 == 2) {
      goto case_2;
    } else {
      {
      __cil_tmp14 = (int )encoding;
      if (__cil_tmp14 == 3) {
        goto case_3;
      } else {
        {
        __cil_tmp15 = (int )encoding;
        if (__cil_tmp15 == 4) {
          goto case_4;
        } else {
          {
          __cil_tmp16 = (int )encoding;
          if (__cil_tmp16 == 5) {
            goto case_5;
          } else {
            goto switch_default;
            if (0) {
              case_1:
              new_encoding = (unsigned char)0;
              goto ldv_36723;
              case_2:
              new_encoding = (unsigned char)3;
              goto ldv_36723;
              case_3:
              new_encoding = (unsigned char)4;
              goto ldv_36723;
              case_4:
              new_encoding = (unsigned char)5;
              goto ldv_36723;
              case_5:
              new_encoding = (unsigned char)6;
              goto ldv_36723;
              switch_default: ;
              return (-22);
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
  ldv_36723: ;
  {
  __cil_tmp17 = (int )parity;
  if (__cil_tmp17 == 1) {
    goto case_1___0;
  } else {
    {
    __cil_tmp18 = (int )parity;
    if (__cil_tmp18 == 5) {
      goto case_5___0;
    } else {
      {
      __cil_tmp19 = (int )parity;
      if (__cil_tmp19 == 7) {
        goto case_7;
      } else {
        goto switch_default___0;
        if (0) {
          case_1___0:
          new_crctype = (unsigned short)0;
          goto ldv_36730;
          case_5___0:
          new_crctype = (unsigned short)1;
          goto ldv_36730;
          case_7:
          new_crctype = (unsigned short)2;
          goto ldv_36730;
          switch_default___0: ;
          return (-22);
        } else {

        }
      }
      }
    }
    }
  }
  }
  ldv_36730:
  info->params.encoding = new_encoding;
  info->params.crc_type = new_crctype;
  {
  __cil_tmp20 = info->netcount;
  if (__cil_tmp20 != 0) {
    {
    program_hw(info);
    }
  } else {

  }
  }
  return (0);
}
}
static netdev_tx_t hdlcdev_xmit(struct sk_buff *skb , struct net_device *dev )
{ struct slgt_info *info ;
  struct hdlc_device *tmp ;
  unsigned long flags ;
  raw_spinlock_t *tmp___0 ;
  void *__cil_tmp7 ;
  char (*__cil_tmp8)[16U] ;
  char *__cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  spinlock_t *__cil_tmp15 ;
  unsigned char *__cil_tmp16 ;
  char const *__cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  spinlock_t *__cil_tmp19 ;

  {
  {
  tmp = dev_to_hdlc(dev);
  __cil_tmp7 = tmp->priv;
  info = (struct slgt_info *)__cil_tmp7;
  }
  if (debug_level > 2) {
    {
    __cil_tmp8 = & dev->name;
    __cil_tmp9 = (char *)__cil_tmp8;
    printk("%s hdlc_xmit\n", __cil_tmp9);
    }
  } else {

  }
  {
  __cil_tmp10 = skb->len;
  if (__cil_tmp10 == 0U) {
    return ((netdev_tx_t )0);
  } else {

  }
  }
  {
  netif_stop_queue(dev);
  __cil_tmp11 = dev->stats.tx_packets;
  dev->stats.tx_packets = __cil_tmp11 + 1UL;
  __cil_tmp12 = skb->len;
  __cil_tmp13 = (unsigned long )__cil_tmp12;
  __cil_tmp14 = dev->stats.tx_bytes;
  dev->stats.tx_bytes = __cil_tmp14 + __cil_tmp13;
  dev->trans_start = (unsigned long )jiffies;
  __cil_tmp15 = & info->lock;
  tmp___0 = spinlock_check(__cil_tmp15);
  flags = _raw_spin_lock_irqsave(tmp___0);
  __cil_tmp16 = skb->data;
  __cil_tmp17 = (char const *)__cil_tmp16;
  __cil_tmp18 = skb->len;
  tx_load(info, __cil_tmp17, __cil_tmp18);
  __cil_tmp19 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp19, flags);
  consume_skb(skb);
  }
  return ((netdev_tx_t )0);
}
}
static int hdlcdev_open(struct net_device *dev )
{ struct slgt_info *info ;
  struct hdlc_device *tmp ;
  int rc ;
  unsigned long flags ;
  int tmp___0 ;
  raw_spinlock_t *tmp___1 ;
  raw_spinlock_t *tmp___2 ;
  raw_spinlock_t *tmp___3 ;
  void *__cil_tmp10 ;
  char (*__cil_tmp11)[16U] ;
  char *__cil_tmp12 ;
  spinlock_t *__cil_tmp13 ;
  int __cil_tmp14 ;
  int __cil_tmp15 ;
  char (*__cil_tmp16)[16U] ;
  char *__cil_tmp17 ;
  spinlock_t *__cil_tmp18 ;
  spinlock_t *__cil_tmp19 ;
  spinlock_t *__cil_tmp20 ;
  spinlock_t *__cil_tmp21 ;
  unsigned char __cil_tmp22 ;
  unsigned int __cil_tmp23 ;
  unsigned int __cil_tmp24 ;
  spinlock_t *__cil_tmp25 ;
  spinlock_t *__cil_tmp26 ;
  unsigned char __cil_tmp27 ;
  int __cil_tmp28 ;

  {
  {
  tmp = dev_to_hdlc(dev);
  __cil_tmp10 = tmp->priv;
  info = (struct slgt_info *)__cil_tmp10;
  tmp___0 = ldv_try_module_get_1(& __this_module);
  }
  if (tmp___0 == 0) {
    return (-16);
  } else {

  }
  if (debug_level > 2) {
    {
    __cil_tmp11 = & dev->name;
    __cil_tmp12 = (char *)__cil_tmp11;
    printk("%s hdlcdev_open\n", __cil_tmp12);
    }
  } else {

  }
  {
  rc = hdlc_open(dev);
  }
  if (rc != 0) {
    return (rc);
  } else {

  }
  {
  __cil_tmp13 = & info->netlock;
  tmp___1 = spinlock_check(__cil_tmp13);
  flags = _raw_spin_lock_irqsave(tmp___1);
  }
  {
  __cil_tmp14 = info->port.count;
  if (__cil_tmp14 != 0) {
    goto _L;
  } else {
    {
    __cil_tmp15 = info->netcount;
    if (__cil_tmp15 != 0) {
      _L:
      if (debug_level > 2) {
        {
        __cil_tmp16 = & dev->name;
        __cil_tmp17 = (char *)__cil_tmp16;
        printk("%s hdlc_open busy\n", __cil_tmp17);
        }
      } else {

      }
      {
      __cil_tmp18 = & info->netlock;
      spin_unlock_irqrestore(__cil_tmp18, flags);
      }
      return (-16);
    } else {

    }
    }
  }
  }
  {
  info->netcount = 1;
  __cil_tmp19 = & info->netlock;
  spin_unlock_irqrestore(__cil_tmp19, flags);
  rc = startup(info);
  }
  if (rc != 0) {
    {
    __cil_tmp20 = & info->netlock;
    tmp___2 = spinlock_check(__cil_tmp20);
    flags = _raw_spin_lock_irqsave(tmp___2);
    info->netcount = 0;
    __cil_tmp21 = & info->netlock;
    spin_unlock_irqrestore(__cil_tmp21, flags);
    }
    return (rc);
  } else {

  }
  {
  __cil_tmp22 = info->signals;
  __cil_tmp23 = (unsigned int )__cil_tmp22;
  __cil_tmp24 = __cil_tmp23 | 160U;
  info->signals = (unsigned char )__cil_tmp24;
  program_hw(info);
  dev->trans_start = (unsigned long )jiffies;
  netif_start_queue(dev);
  __cil_tmp25 = & info->lock;
  tmp___3 = spinlock_check(__cil_tmp25);
  flags = _raw_spin_lock_irqsave(tmp___3);
  get_signals(info);
  __cil_tmp26 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp26, flags);
  }
  {
  __cil_tmp27 = info->signals;
  __cil_tmp28 = (int )__cil_tmp27;
  if (__cil_tmp28 & 1) {
    {
    netif_carrier_on(dev);
    }
  } else {
    {
    netif_carrier_off(dev);
    }
  }
  }
  return (0);
}
}
static int hdlcdev_close(struct net_device *dev )
{ struct slgt_info *info ;
  struct hdlc_device *tmp ;
  unsigned long flags ;
  raw_spinlock_t *tmp___0 ;
  void *__cil_tmp6 ;
  char (*__cil_tmp7)[16U] ;
  char *__cil_tmp8 ;
  spinlock_t *__cil_tmp9 ;
  spinlock_t *__cil_tmp10 ;

  {
  {
  tmp = dev_to_hdlc(dev);
  __cil_tmp6 = tmp->priv;
  info = (struct slgt_info *)__cil_tmp6;
  }
  if (debug_level > 2) {
    {
    __cil_tmp7 = & dev->name;
    __cil_tmp8 = (char *)__cil_tmp7;
    printk("%s hdlcdev_close\n", __cil_tmp8);
    }
  } else {

  }
  {
  netif_stop_queue(dev);
  shutdown(info);
  hdlc_close(dev);
  __cil_tmp9 = & info->netlock;
  tmp___0 = spinlock_check(__cil_tmp9);
  flags = _raw_spin_lock_irqsave(tmp___0);
  info->netcount = 0;
  __cil_tmp10 = & info->netlock;
  spin_unlock_irqrestore(__cil_tmp10, flags);
  ldv_module_put_2(& __this_module);
  }
  return (0);
}
}
static int hdlcdev_ioctl(struct net_device *dev , struct ifreq *ifr , int cmd )
{ size_t size ;
  sync_serial_settings new_line ;
  sync_serial_settings *line ;
  struct slgt_info *info ;
  struct hdlc_device *tmp ;
  unsigned int flags ;
  int tmp___0 ;
  int tmp___1 ;
  bool tmp___2 ;
  int tmp___3 ;
  unsigned long tmp___4 ;
  int tmp___5 ;
  void *__cil_tmp16 ;
  char (*__cil_tmp17)[16U] ;
  char *__cil_tmp18 ;
  int __cil_tmp19 ;
  void *__cil_tmp20 ;
  unsigned int __cil_tmp21 ;
  int __cil_tmp22 ;
  unsigned int __cil_tmp23 ;
  int __cil_tmp24 ;
  unsigned int __cil_tmp25 ;
  unsigned long __cil_tmp26 ;
  unsigned short __cil_tmp27 ;
  unsigned int __cil_tmp28 ;
  int __cil_tmp29 ;
  int __cil_tmp30 ;
  int __cil_tmp31 ;
  int __cil_tmp32 ;
  unsigned long __cil_tmp33 ;
  unsigned char __cil_tmp34 ;
  unsigned int __cil_tmp35 ;
  int __cil_tmp36 ;
  void *__cil_tmp37 ;
  void const *__cil_tmp38 ;
  unsigned int __cil_tmp39 ;
  void *__cil_tmp40 ;
  void const *__cil_tmp41 ;
  int __cil_tmp42 ;
  int __cil_tmp43 ;
  int __cil_tmp44 ;
  int __cil_tmp45 ;
  int __cil_tmp46 ;
  unsigned short __cil_tmp47 ;
  unsigned int __cil_tmp48 ;
  unsigned int __cil_tmp49 ;
  unsigned int __cil_tmp50 ;
  unsigned short __cil_tmp51 ;
  unsigned int __cil_tmp52 ;
  unsigned int __cil_tmp53 ;
  unsigned short __cil_tmp54 ;
  int __cil_tmp55 ;
  unsigned short __cil_tmp56 ;
  int __cil_tmp57 ;
  int __cil_tmp58 ;
  unsigned int __cil_tmp59 ;
  int __cil_tmp60 ;

  {
  {
  size = 12UL;
  line = ifr->ifr_ifru.ifru_settings.ifs_ifsu.sync;
  tmp = dev_to_hdlc(dev);
  __cil_tmp16 = tmp->priv;
  info = (struct slgt_info *)__cil_tmp16;
  }
  if (debug_level > 2) {
    {
    __cil_tmp17 = & dev->name;
    __cil_tmp18 = (char *)__cil_tmp17;
    printk("%s hdlcdev_ioctl\n", __cil_tmp18);
    }
  } else {

  }
  {
  __cil_tmp19 = info->port.count;
  if (__cil_tmp19 != 0) {
    return (-16);
  } else {

  }
  }
  if (cmd != 35146) {
    {
    tmp___0 = hdlc_ioctl(dev, ifr, cmd);
    }
    return (tmp___0);
  } else {

  }
  {
  __cil_tmp20 = (void *)(& new_line);
  memset(__cil_tmp20, 0, 12UL);
  }
  {
  __cil_tmp21 = ifr->ifr_ifru.ifru_settings.type;
  __cil_tmp22 = (int )__cil_tmp21;
  if (__cil_tmp22 == 1) {
    goto case_1;
  } else {
    {
    __cil_tmp23 = ifr->ifr_ifru.ifru_settings.type;
    __cil_tmp24 = (int )__cil_tmp23;
    if (__cil_tmp24 == 4101) {
      goto case_4101;
    } else {
      goto switch_default___1;
      if (0) {
        case_1:
        ifr->ifr_ifru.ifru_settings.type = 4101U;
        {
        __cil_tmp25 = ifr->ifr_ifru.ifru_settings.size;
        __cil_tmp26 = (unsigned long )__cil_tmp25;
        if (__cil_tmp26 < size) {
          ifr->ifr_ifru.ifru_settings.size = (unsigned int )size;
          return (-105);
        } else {

        }
        }
        __cil_tmp27 = info->params.flags;
        __cil_tmp28 = (unsigned int )__cil_tmp27;
        flags = __cil_tmp28 & 36616U;
        {
        __cil_tmp29 = (int )flags;
        if (__cil_tmp29 == 0) {
          goto case_0;
        } else {
          {
          __cil_tmp30 = (int )flags;
          if (__cil_tmp30 == 2560) {
            goto case_2560;
          } else {
            {
            __cil_tmp31 = (int )flags;
            if (__cil_tmp31 == 2048) {
              goto case_2048;
            } else {
              {
              __cil_tmp32 = (int )flags;
              if (__cil_tmp32 == 8) {
                goto case_8;
              } else {
                goto switch_default;
                if (0) {
                  case_0:
                  new_line.clock_type = 1U;
                  goto ldv_36778;
                  case_2560:
                  new_line.clock_type = 2U;
                  goto ldv_36778;
                  case_2048:
                  new_line.clock_type = 3U;
                  goto ldv_36778;
                  case_8:
                  new_line.clock_type = 4U;
                  goto ldv_36778;
                  switch_default:
                  new_line.clock_type = 0U;
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
        ldv_36778:
        {
        __cil_tmp33 = info->params.clock_speed;
        new_line.clock_rate = (unsigned int )__cil_tmp33;
        __cil_tmp34 = info->params.loopback;
        __cil_tmp35 = (unsigned int )__cil_tmp34;
        __cil_tmp36 = __cil_tmp35 != 0U;
        new_line.loopback = (unsigned short )__cil_tmp36;
        __cil_tmp37 = (void *)line;
        __cil_tmp38 = (void const *)(& new_line);
        __cil_tmp39 = (unsigned int )size;
        tmp___1 = copy_to_user(__cil_tmp37, __cil_tmp38, __cil_tmp39);
        }
        if (tmp___1 != 0) {
          return (-14);
        } else {

        }
        return (0);
        case_4101:
        {
        tmp___2 = capable(12);
        }
        if (tmp___2) {
          tmp___3 = 0;
        } else {
          tmp___3 = 1;
        }
        if (tmp___3) {
          return (-1);
        } else {

        }
        {
        __cil_tmp40 = (void *)(& new_line);
        __cil_tmp41 = (void const *)line;
        tmp___4 = copy_from_user(__cil_tmp40, __cil_tmp41, size);
        }
        if (tmp___4 != 0UL) {
          return (-14);
        } else {

        }
        {
        __cil_tmp42 = (int )new_line.clock_type;
        if (__cil_tmp42 == 1) {
          goto case_1___0;
        } else {
          {
          __cil_tmp43 = (int )new_line.clock_type;
          if (__cil_tmp43 == 4) {
            goto case_4;
          } else {
            {
            __cil_tmp44 = (int )new_line.clock_type;
            if (__cil_tmp44 == 2) {
              goto case_2;
            } else {
              {
              __cil_tmp45 = (int )new_line.clock_type;
              if (__cil_tmp45 == 3) {
                goto case_3;
              } else {
                {
                __cil_tmp46 = (int )new_line.clock_type;
                if (__cil_tmp46 == 0) {
                  goto case_0___0;
                } else {
                  goto switch_default___0;
                  if (0) {
                    case_1___0:
                    flags = 0U;
                    goto ldv_36785;
                    case_4:
                    flags = 8U;
                    goto ldv_36785;
                    case_2:
                    flags = 2560U;
                    goto ldv_36785;
                    case_3:
                    flags = 2048U;
                    goto ldv_36785;
                    case_0___0:
                    __cil_tmp47 = info->params.flags;
                    __cil_tmp48 = (unsigned int )__cil_tmp47;
                    flags = __cil_tmp48 & 36616U;
                    goto ldv_36785;
                    switch_default___0: ;
                    return (-22);
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
        ldv_36785: ;
        {
        __cil_tmp49 = (unsigned int )new_line.loopback;
        if (__cil_tmp49 != 0U) {
          {
          __cil_tmp50 = (unsigned int )new_line.loopback;
          if (__cil_tmp50 != 1U) {
            return (-22);
          } else {

          }
          }
        } else {

        }
        }
        __cil_tmp51 = info->params.flags;
        __cil_tmp52 = (unsigned int )__cil_tmp51;
        __cil_tmp53 = __cil_tmp52 & 28919U;
        info->params.flags = (unsigned short )__cil_tmp53;
        __cil_tmp54 = (unsigned short )flags;
        __cil_tmp55 = (int )__cil_tmp54;
        __cil_tmp56 = info->params.flags;
        __cil_tmp57 = (int )__cil_tmp56;
        __cil_tmp58 = __cil_tmp57 | __cil_tmp55;
        info->params.flags = (unsigned short )__cil_tmp58;
        info->params.loopback = (unsigned char )new_line.loopback;
        {
        __cil_tmp59 = flags & 2560U;
        if (__cil_tmp59 != 0U) {
          info->params.clock_speed = (unsigned long )new_line.clock_rate;
        } else {
          info->params.clock_speed = 0UL;
        }
        }
        {
        __cil_tmp60 = info->netcount;
        if (__cil_tmp60 != 0) {
          {
          program_hw(info);
          }
        } else {

        }
        }
        return (0);
        switch_default___1:
        {
        tmp___5 = hdlc_ioctl(dev, ifr, cmd);
        }
        return (tmp___5);
      } else {

      }
    }
    }
  }
  }
}
}
static void hdlcdev_tx_timeout(struct net_device *dev )
{ struct slgt_info *info ;
  struct hdlc_device *tmp ;
  unsigned long flags ;
  raw_spinlock_t *tmp___0 ;
  void *__cil_tmp6 ;
  char (*__cil_tmp7)[16U] ;
  char *__cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  spinlock_t *__cil_tmp11 ;
  spinlock_t *__cil_tmp12 ;

  {
  {
  tmp = dev_to_hdlc(dev);
  __cil_tmp6 = tmp->priv;
  info = (struct slgt_info *)__cil_tmp6;
  }
  if (debug_level > 2) {
    {
    __cil_tmp7 = & dev->name;
    __cil_tmp8 = (char *)__cil_tmp7;
    printk("%s hdlcdev_tx_timeout\n", __cil_tmp8);
    }
  } else {

  }
  {
  __cil_tmp9 = dev->stats.tx_errors;
  dev->stats.tx_errors = __cil_tmp9 + 1UL;
  __cil_tmp10 = dev->stats.tx_aborted_errors;
  dev->stats.tx_aborted_errors = __cil_tmp10 + 1UL;
  __cil_tmp11 = & info->lock;
  tmp___0 = spinlock_check(__cil_tmp11);
  flags = _raw_spin_lock_irqsave(tmp___0);
  tx_stop(info);
  __cil_tmp12 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp12, flags);
  netif_wake_queue(dev);
  }
  return;
}
}
static void hdlcdev_tx_done(struct slgt_info *info )
{ int tmp ;
  struct net_device *__cil_tmp3 ;
  struct net_device const *__cil_tmp4 ;
  struct net_device *__cil_tmp5 ;

  {
  {
  __cil_tmp3 = info->netdev;
  __cil_tmp4 = (struct net_device const *)__cil_tmp3;
  tmp = netif_queue_stopped(__cil_tmp4);
  }
  if (tmp != 0) {
    {
    __cil_tmp5 = info->netdev;
    netif_wake_queue(__cil_tmp5);
    }
  } else {

  }
  return;
}
}
static void hdlcdev_rx(struct slgt_info *info , char *buf , int size )
{ struct sk_buff *skb ;
  struct sk_buff *tmp ;
  struct net_device *dev ;
  size_t __len ;
  void *__ret ;
  unsigned char *tmp___1 ;
  unsigned int __cil_tmp10 ;
  char (*__cil_tmp11)[16U] ;
  char *__cil_tmp12 ;
  struct sk_buff *__cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  char (*__cil_tmp16)[16U] ;
  char *__cil_tmp17 ;
  unsigned long __cil_tmp18 ;
  unsigned int __cil_tmp19 ;
  void *__cil_tmp20 ;
  void const *__cil_tmp21 ;
  unsigned long __cil_tmp22 ;
  unsigned long __cil_tmp23 ;
  unsigned long __cil_tmp24 ;

  {
  {
  __cil_tmp10 = (unsigned int )size;
  tmp = dev_alloc_skb(__cil_tmp10);
  skb = tmp;
  dev = info->netdev;
  }
  if (debug_level > 2) {
    {
    __cil_tmp11 = & dev->name;
    __cil_tmp12 = (char *)__cil_tmp11;
    printk("%s hdlcdev_rx\n", __cil_tmp12);
    }
  } else {

  }
  {
  __cil_tmp13 = (struct sk_buff *)0;
  __cil_tmp14 = (unsigned long )__cil_tmp13;
  __cil_tmp15 = (unsigned long )skb;
  if (__cil_tmp15 == __cil_tmp14) {
    if (debug_level > 1) {
      {
      __cil_tmp16 = & dev->name;
      __cil_tmp17 = (char *)__cil_tmp16;
      printk("%s: can\'t alloc skb, drop packet\n", __cil_tmp17);
      }
    } else {

    }
    __cil_tmp18 = dev->stats.rx_dropped;
    dev->stats.rx_dropped = __cil_tmp18 + 1UL;
    return;
  } else {

  }
  }
  {
  __len = (size_t )size;
  __cil_tmp19 = (unsigned int )size;
  tmp___1 = skb_put(skb, __cil_tmp19);
  __cil_tmp20 = (void *)tmp___1;
  __cil_tmp21 = (void const *)buf;
  __ret = __builtin_memcpy(__cil_tmp20, __cil_tmp21, __len);
  skb->protocol = hdlc_type_trans(skb, dev);
  __cil_tmp22 = dev->stats.rx_packets;
  dev->stats.rx_packets = __cil_tmp22 + 1UL;
  __cil_tmp23 = (unsigned long )size;
  __cil_tmp24 = dev->stats.rx_bytes;
  dev->stats.rx_bytes = __cil_tmp24 + __cil_tmp23;
  netif_rx(skb);
  }
  return;
}
}
static struct net_device_ops const hdlcdev_ops =
     {(int (*)(struct net_device * ))0, (void (*)(struct net_device * ))0, & hdlcdev_open,
    & hdlcdev_close, & hdlc_start_xmit, (u16 (*)(struct net_device * , struct sk_buff * ))0,
    (void (*)(struct net_device * , int ))0, (void (*)(struct net_device * ))0, (void (*)(struct net_device * ))0,
    (int (*)(struct net_device * , void * ))0, (int (*)(struct net_device * ))0, & hdlcdev_ioctl,
    (int (*)(struct net_device * , struct ifmap * ))0, & hdlc_change_mtu, (int (*)(struct net_device * ,
                                                                                   struct neigh_parms * ))0,
    & hdlcdev_tx_timeout, (struct rtnl_link_stats64 *(*)(struct net_device * , struct rtnl_link_stats64 * ))0,
    (struct net_device_stats *(*)(struct net_device * ))0, (void (*)(struct net_device * ,
                                                                     struct vlan_group * ))0,
    (void (*)(struct net_device * , unsigned short ))0, (void (*)(struct net_device * ,
                                                                   unsigned short ))0,
    (void (*)(struct net_device * ))0, (int (*)(struct net_device * , struct netpoll_info * ))0,
    (void (*)(struct net_device * ))0, (int (*)(struct net_device * , int , u8 * ))0,
    (int (*)(struct net_device * , int , u16 , u8 ))0, (int (*)(struct net_device * ,
                                                                   int , int ))0,
    (int (*)(struct net_device * , int , struct ifla_vf_info * ))0, (int (*)(struct net_device * ,
                                                                              int ,
                                                                              struct nlattr ** ))0,
    (int (*)(struct net_device * , int , struct sk_buff * ))0, (int (*)(struct net_device * ,
                                                                         u8 ))0,
    (int (*)(struct net_device * ))0, (int (*)(struct net_device * ))0, (int (*)(struct net_device * ,
                                                                                 u16 ,
                                                                                 struct scatterlist * ,
                                                                                 unsigned int ))0,
    (int (*)(struct net_device * , u16 ))0, (int (*)(struct net_device * , u16 ,
                                                      struct scatterlist * , unsigned int ))0,
    (int (*)(struct net_device * , u64 * , int ))0, (int (*)(struct net_device * ,
                                                              struct sk_buff const * ,
                                                              u16 , u32 ))0, (int (*)(struct net_device * ,
                                                                                        struct net_device * ))0,
    (int (*)(struct net_device * , struct net_device * ))0, (u32 (*)(struct net_device * ,
                                                                     u32 ))0, (int (*)(struct net_device * ,
                                                                                        u32 ))0};
static int hdlcdev_init(struct slgt_info *info )
{ int rc ;
  struct net_device *dev ;
  hdlc_device *hdlc ;
  struct hdlc_device *tmp ;
  void *__cil_tmp6 ;
  struct net_device *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  char (*__cil_tmp10)[25U] ;
  char *__cil_tmp11 ;
  u32 __cil_tmp12 ;
  u32 __cil_tmp13 ;
  u32 __cil_tmp14 ;
  char *__cil_tmp15 ;

  {
  {
  __cil_tmp6 = (void *)info;
  dev = alloc_hdlcdev(__cil_tmp6);
  }
  {
  __cil_tmp7 = (struct net_device *)0;
  __cil_tmp8 = (unsigned long )__cil_tmp7;
  __cil_tmp9 = (unsigned long )dev;
  if (__cil_tmp9 == __cil_tmp8) {
    {
    __cil_tmp10 = & info->device_name;
    __cil_tmp11 = (char *)__cil_tmp10;
    printk("<3>%s hdlc device alloc failure\n", __cil_tmp11);
    }
    return (-12);
  } else {

  }
  }
  {
  __cil_tmp12 = info->phys_reg_addr;
  dev->mem_start = (unsigned long )__cil_tmp12;
  __cil_tmp13 = info->phys_reg_addr;
  __cil_tmp14 = __cil_tmp13 + 255U;
  dev->mem_end = (unsigned long )__cil_tmp14;
  dev->irq = info->irq_level;
  dev->netdev_ops = & hdlcdev_ops;
  dev->watchdog_timeo = 2500;
  dev->tx_queue_len = 50UL;
  tmp = dev_to_hdlc(dev);
  hdlc = tmp;
  hdlc->attach = & hdlcdev_attach;
  hdlc->xmit = & hdlcdev_xmit;
  rc = register_netdev(dev);
  }
  if (rc != 0) {
    {
    __cil_tmp15 = (char *)"/anthill/stuff/tacas-comp/work/current--X--drivers/tty/synclink_gt.ko--X--bulklinux-3.0.1--X--08_1/linux-3.0.1/csd_deg_dscv/11/dscv_tempdir/dscv/ri/08_1/drivers/tty/synclink_gt.c.p";
    printk("<4>%s:unable to register hdlc device\n", __cil_tmp15);
    free_netdev(dev);
    }
    return (rc);
  } else {

  }
  info->netdev = dev;
  return (0);
}
}
static void hdlcdev_exit(struct slgt_info *info )
{ struct net_device *__cil_tmp2 ;
  struct net_device *__cil_tmp3 ;

  {
  {
  __cil_tmp2 = info->netdev;
  unregister_hdlc_device(__cil_tmp2);
  __cil_tmp3 = info->netdev;
  free_netdev(__cil_tmp3);
  info->netdev = (struct net_device *)0;
  }
  return;
}
}
static void rx_async(struct slgt_info *info )
{ struct tty_struct *tty ;
  struct mgsl_icount *icount ;
  unsigned int start ;
  unsigned int end ;
  unsigned char *p ;
  unsigned char status ;
  struct slgt_desc *bufs ;
  int i ;
  int count ;
  int chars ;
  int stat ;
  unsigned char ch ;
  unsigned int __cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  struct slgt_desc *__cil_tmp16 ;
  __le16 __cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  unsigned int __cil_tmp19 ;
  unsigned int __cil_tmp20 ;
  unsigned long __cil_tmp21 ;
  unsigned long __cil_tmp22 ;
  struct slgt_desc *__cil_tmp23 ;
  char *__cil_tmp24 ;
  unsigned char *__cil_tmp25 ;
  char (*__cil_tmp26)[25U] ;
  char *__cil_tmp27 ;
  char const *__cil_tmp28 ;
  __u32 __cil_tmp29 ;
  unsigned char *__cil_tmp30 ;
  unsigned char __cil_tmp31 ;
  unsigned int __cil_tmp32 ;
  unsigned int __cil_tmp33 ;
  unsigned int __cil_tmp34 ;
  int __cil_tmp35 ;
  int __cil_tmp36 ;
  __u32 __cil_tmp37 ;
  int __cil_tmp38 ;
  __u32 __cil_tmp39 ;
  unsigned int __cil_tmp40 ;
  unsigned int __cil_tmp41 ;
  unsigned int __cil_tmp42 ;
  int __cil_tmp43 ;
  int __cil_tmp44 ;
  int __cil_tmp45 ;
  struct tty_struct *__cil_tmp46 ;
  unsigned long __cil_tmp47 ;
  unsigned long __cil_tmp48 ;
  int __cil_tmp49 ;
  unsigned char __cil_tmp50 ;
  char __cil_tmp51 ;
  int __cil_tmp52 ;
  char __cil_tmp53 ;
  unsigned int __cil_tmp54 ;
  unsigned int __cil_tmp55 ;
  struct timer_list *__cil_tmp56 ;
  unsigned long __cil_tmp57 ;
  unsigned long __cil_tmp58 ;
  unsigned int __cil_tmp59 ;
  unsigned long __cil_tmp60 ;
  struct slgt_desc *__cil_tmp61 ;
  __le16 __cil_tmp62 ;
  short __cil_tmp63 ;
  int __cil_tmp64 ;
  struct tty_struct *__cil_tmp65 ;
  unsigned long __cil_tmp66 ;
  unsigned long __cil_tmp67 ;

  {
  tty = info->port.tty;
  icount = & info->icount;
  bufs = info->rbufs;
  chars = 0;
  end = info->rbuf_current;
  start = end;
  goto ldv_36844;
  ldv_36843:
  __cil_tmp14 = info->rbuf_index;
  __cil_tmp15 = (unsigned long )end;
  __cil_tmp16 = bufs + __cil_tmp15;
  __cil_tmp17 = __cil_tmp16->count;
  __cil_tmp18 = (unsigned int )__cil_tmp17;
  __cil_tmp19 = __cil_tmp18 - __cil_tmp14;
  count = (int )__cil_tmp19;
  __cil_tmp20 = info->rbuf_index;
  __cil_tmp21 = (unsigned long )__cil_tmp20;
  __cil_tmp22 = (unsigned long )end;
  __cil_tmp23 = bufs + __cil_tmp22;
  __cil_tmp24 = __cil_tmp23->buf;
  __cil_tmp25 = (unsigned char *)__cil_tmp24;
  p = __cil_tmp25 + __cil_tmp21;
  if (debug_level > 4) {
    {
    __cil_tmp26 = & info->device_name;
    __cil_tmp27 = (char *)__cil_tmp26;
    printk("%s rx_async count=%d\n", __cil_tmp27, count);
    }
  } else {

  }
  if (debug_level > 0) {
    {
    __cil_tmp28 = (char const *)p;
    trace_block(info, __cil_tmp28, count, "rx");
    }
  } else {

  }
  i = 0;
  goto ldv_36840;
  ldv_36839:
  ch = *p;
  __cil_tmp29 = icount->rx;
  icount->rx = __cil_tmp29 + 1U;
  stat = 0;
  __cil_tmp30 = p + 1UL;
  __cil_tmp31 = *__cil_tmp30;
  __cil_tmp32 = (unsigned int )__cil_tmp31;
  __cil_tmp33 = __cil_tmp32 & 3U;
  status = (unsigned char )__cil_tmp33;
  {
  __cil_tmp34 = (unsigned int )status;
  if (__cil_tmp34 != 0U) {
    {
    __cil_tmp35 = (int )status;
    __cil_tmp36 = __cil_tmp35 & 2;
    if (__cil_tmp36 != 0) {
      __cil_tmp37 = icount->parity;
      icount->parity = __cil_tmp37 + 1U;
    } else {
      {
      __cil_tmp38 = (int )status;
      if (__cil_tmp38 & 1) {
        __cil_tmp39 = icount->frame;
        icount->frame = __cil_tmp39 + 1U;
      } else {

      }
      }
    }
    }
    {
    __cil_tmp40 = info->ignore_status_mask;
    __cil_tmp41 = (unsigned int )status;
    __cil_tmp42 = __cil_tmp41 & __cil_tmp40;
    if (__cil_tmp42 != 0U) {
      goto ldv_36838;
    } else {

    }
    }
    {
    __cil_tmp43 = (int )status;
    __cil_tmp44 = __cil_tmp43 & 2;
    if (__cil_tmp44 != 0) {
      stat = 3;
    } else {
      {
      __cil_tmp45 = (int )status;
      if (__cil_tmp45 & 1) {
        stat = 2;
      } else {

      }
      }
    }
    }
  } else {

  }
  }
  {
  __cil_tmp46 = (struct tty_struct *)0;
  __cil_tmp47 = (unsigned long )__cil_tmp46;
  __cil_tmp48 = (unsigned long )tty;
  if (__cil_tmp48 != __cil_tmp47) {
    {
    __cil_tmp49 = (int )ch;
    __cil_tmp50 = (unsigned char )__cil_tmp49;
    __cil_tmp51 = (char )stat;
    __cil_tmp52 = (int )__cil_tmp51;
    __cil_tmp53 = (char )__cil_tmp52;
    tty_insert_flip_char(tty, __cil_tmp50, __cil_tmp53);
    chars = chars + 1;
    }
  } else {

  }
  }
  ldv_36838:
  i = i + 2;
  p = p + 2UL;
  ldv_36840: ;
  if (i < count) {
    goto ldv_36839;
  } else {
    goto ldv_36841;
  }
  ldv_36841: ;
  if (i < count) {
    {
    __cil_tmp54 = (unsigned int )i;
    __cil_tmp55 = info->rbuf_index;
    info->rbuf_index = __cil_tmp55 + __cil_tmp54;
    __cil_tmp56 = & info->rx_timer;
    __cil_tmp57 = (unsigned long )jiffies;
    __cil_tmp58 = __cil_tmp57 + 1UL;
    mod_timer(__cil_tmp56, __cil_tmp58);
    }
    goto ldv_36842;
  } else {

  }
  {
  info->rbuf_index = 0U;
  free_rbufs(info, end, end);
  end = end + 1U;
  }
  {
  __cil_tmp59 = info->rbuf_count;
  if (end == __cil_tmp59) {
    end = 0U;
  } else {

  }
  }
  if (end == start) {
    goto ldv_36842;
  } else {

  }
  ldv_36844: ;
  {
  __cil_tmp60 = (unsigned long )end;
  __cil_tmp61 = bufs + __cil_tmp60;
  __cil_tmp62 = __cil_tmp61->status;
  __cil_tmp63 = (short )__cil_tmp62;
  __cil_tmp64 = (int )__cil_tmp63;
  if (__cil_tmp64 < 0) {
    goto ldv_36843;
  } else {
    goto ldv_36842;
  }
  }
  ldv_36842: ;
  {
  __cil_tmp65 = (struct tty_struct *)0;
  __cil_tmp66 = (unsigned long )__cil_tmp65;
  __cil_tmp67 = (unsigned long )tty;
  if (__cil_tmp67 != __cil_tmp66) {
    if (chars != 0) {
      {
      tty_flip_buffer_push(tty);
      }
    } else {

    }
  } else {

  }
  }
  return;
}
}
static int bh_action(struct slgt_info *info )
{ unsigned long flags ;
  int rc ;
  raw_spinlock_t *tmp ;
  spinlock_t *__cil_tmp5 ;
  u32 __cil_tmp6 ;
  int __cil_tmp7 ;
  u32 __cil_tmp8 ;
  u32 __cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  u32 __cil_tmp11 ;
  u32 __cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  u32 __cil_tmp14 ;
  spinlock_t *__cil_tmp15 ;

  {
  {
  __cil_tmp5 = & info->lock;
  tmp = spinlock_check(__cil_tmp5);
  flags = _raw_spin_lock_irqsave(tmp);
  }
  {
  __cil_tmp6 = info->pending_bh;
  __cil_tmp7 = (int )__cil_tmp6;
  if (__cil_tmp7 & 1) {
    __cil_tmp8 = info->pending_bh;
    info->pending_bh = __cil_tmp8 & 4294967294U;
    rc = 1;
  } else {
    {
    __cil_tmp9 = info->pending_bh;
    __cil_tmp10 = __cil_tmp9 & 2U;
    if (__cil_tmp10 != 0U) {
      __cil_tmp11 = info->pending_bh;
      info->pending_bh = __cil_tmp11 & 4294967293U;
      rc = 2;
    } else {
      {
      __cil_tmp12 = info->pending_bh;
      __cil_tmp13 = __cil_tmp12 & 4U;
      if (__cil_tmp13 != 0U) {
        __cil_tmp14 = info->pending_bh;
        info->pending_bh = __cil_tmp14 & 4294967291U;
        rc = 4;
      } else {
        info->bh_running = (bool )0;
        info->bh_requested = (bool )0;
        rc = 0;
      }
      }
    }
    }
  }
  }
  {
  __cil_tmp15 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp15, flags);
  }
  return (rc);
}
}
static void bh_handler(struct work_struct *work )
{ struct slgt_info *info ;
  struct work_struct const *__mptr ;
  int action ;
  bool tmp ;
  bool tmp___0 ;
  struct slgt_info *__cil_tmp7 ;
  struct slgt_info *__cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  char (*__cil_tmp11)[25U] ;
  char *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  int __cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  int __cil_tmp16 ;
  unsigned long __cil_tmp17 ;
  int __cil_tmp18 ;
  unsigned long __cil_tmp19 ;
  int __cil_tmp20 ;
  unsigned long __cil_tmp21 ;
  int __cil_tmp22 ;
  unsigned long __cil_tmp23 ;
  int __cil_tmp24 ;
  bool __cil_tmp25 ;
  char (*__cil_tmp26)[25U] ;
  char *__cil_tmp27 ;
  char (*__cil_tmp28)[25U] ;
  char *__cil_tmp29 ;
  char (*__cil_tmp30)[25U] ;
  char *__cil_tmp31 ;

  {
  __mptr = (struct work_struct const *)work;
  __cil_tmp7 = (struct slgt_info *)__mptr;
  info = __cil_tmp7 + 1152921504606845504UL;
  {
  __cil_tmp8 = (struct slgt_info *)0;
  __cil_tmp9 = (unsigned long )__cil_tmp8;
  __cil_tmp10 = (unsigned long )info;
  if (__cil_tmp10 == __cil_tmp9) {
    return;
  } else {

  }
  }
  info->bh_running = (bool )1;
  goto ldv_36879;
  ldv_36878: ;
  if (action == 1) {
    goto case_1;
  } else
  if (action == 2) {
    goto case_2___0;
  } else
  if (action == 4) {
    goto case_4___0;
  } else {
    goto switch_default;
    if (0) {
      case_1: ;
      if (debug_level > 3) {
        {
        __cil_tmp11 = & info->device_name;
        __cil_tmp12 = (char *)__cil_tmp11;
        printk("%s bh receive\n", __cil_tmp12);
        }
      } else {

      }
      {
      __cil_tmp13 = info->params.mode;
      __cil_tmp14 = (int )__cil_tmp13;
      if (__cil_tmp14 == 1) {
        goto case_1___0;
      } else {
        {
        __cil_tmp15 = info->params.mode;
        __cil_tmp16 = (int )__cil_tmp15;
        if (__cil_tmp16 == 2) {
          goto case_2;
        } else {
          {
          __cil_tmp17 = info->params.mode;
          __cil_tmp18 = (int )__cil_tmp17;
          if (__cil_tmp18 == 6) {
            goto case_6;
          } else {
            {
            __cil_tmp19 = info->params.mode;
            __cil_tmp20 = (int )__cil_tmp19;
            if (__cil_tmp20 == 3) {
              goto case_3;
            } else {
              {
              __cil_tmp21 = info->params.mode;
              __cil_tmp22 = (int )__cil_tmp21;
              if (__cil_tmp22 == 4) {
                goto case_4;
              } else {
                {
                __cil_tmp23 = info->params.mode;
                __cil_tmp24 = (int )__cil_tmp23;
                if (__cil_tmp24 == 8) {
                  goto case_8;
                } else
                if (0) {
                  case_1___0:
                  {
                  rx_async(info);
                  }
                  goto ldv_36862;
                  case_2: ;
                  goto ldv_36865;
                  ldv_36864: ;
                  ldv_36865:
                  {
                  tmp = rx_get_frame(info);
                  }
                  if ((int )tmp) {
                    goto ldv_36864;
                  } else {
                    goto ldv_36866;
                  }
                  ldv_36866: ;
                  goto ldv_36862;
                  case_6: ;
                  case_3: ;
                  case_4: ;
                  case_8: ;
                  goto ldv_36872;
                  ldv_36871: ;
                  ldv_36872:
                  {
                  tmp___0 = rx_get_buf(info);
                  }
                  if ((int )tmp___0) {
                    goto ldv_36871;
                  } else {
                    goto ldv_36873;
                  }
                  ldv_36873: ;
                  goto ldv_36862;
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
      ldv_36862: ;
      {
      __cil_tmp25 = info->rx_restart;
      if ((int )__cil_tmp25) {
        {
        rx_start(info);
        }
      } else {

      }
      }
      goto ldv_36874;
      case_2___0:
      {
      bh_transmit(info);
      }
      goto ldv_36874;
      case_4___0: ;
      if (debug_level > 3) {
        {
        __cil_tmp26 = & info->device_name;
        __cil_tmp27 = (char *)__cil_tmp26;
        printk("%s bh status\n", __cil_tmp27);
        }
      } else {

      }
      info->ri_chkcount = 0;
      info->dsr_chkcount = 0;
      info->dcd_chkcount = 0;
      info->cts_chkcount = 0;
      goto ldv_36874;
      switch_default: ;
      if (debug_level > 3) {
        {
        __cil_tmp28 = & info->device_name;
        __cil_tmp29 = (char *)__cil_tmp28;
        printk("%s unknown action\n", __cil_tmp29);
        }
      } else {

      }
      goto ldv_36874;
    } else {

    }
  }
  ldv_36874: ;
  ldv_36879:
  {
  action = bh_action(info);
  }
  if (action != 0) {
    goto ldv_36878;
  } else {
    goto ldv_36880;
  }
  ldv_36880: ;
  if (debug_level > 3) {
    {
    __cil_tmp30 = & info->device_name;
    __cil_tmp31 = (char *)__cil_tmp30;
    printk("%s bh_handler exit\n", __cil_tmp31);
    }
  } else {

  }
  return;
}
}
static void bh_transmit(struct slgt_info *info )
{ struct tty_struct *tty ;
  char (*__cil_tmp3)[25U] ;
  char *__cil_tmp4 ;
  struct tty_struct *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  unsigned long __cil_tmp7 ;

  {
  tty = info->port.tty;
  if (debug_level > 3) {
    {
    __cil_tmp3 = & info->device_name;
    __cil_tmp4 = (char *)__cil_tmp3;
    printk("%s bh_transmit\n", __cil_tmp4);
    }
  } else {

  }
  {
  __cil_tmp5 = (struct tty_struct *)0;
  __cil_tmp6 = (unsigned long )__cil_tmp5;
  __cil_tmp7 = (unsigned long )tty;
  if (__cil_tmp7 != __cil_tmp6) {
    {
    tty_wakeup(tty);
    }
  } else {

  }
  }
  return;
}
}
static void dsr_change(struct slgt_info *info , unsigned short status )
{ __u16 tmp ;
  int tmp___0 ;
  int __cil_tmp5 ;
  int __cil_tmp6 ;
  unsigned char __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  int __cil_tmp10 ;
  unsigned char __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  int __cil_tmp14 ;
  char (*__cil_tmp15)[25U] ;
  char *__cil_tmp16 ;
  unsigned char __cil_tmp17 ;
  int __cil_tmp18 ;
  int __cil_tmp19 ;
  int __cil_tmp20 ;
  int __cil_tmp21 ;
  __u16 __cil_tmp22 ;
  __u32 __cil_tmp23 ;
  wait_queue_head_t *__cil_tmp24 ;
  void *__cil_tmp25 ;
  wait_queue_head_t *__cil_tmp26 ;
  void *__cil_tmp27 ;
  u32 __cil_tmp28 ;

  {
  {
  __cil_tmp5 = (int )status;
  __cil_tmp6 = __cil_tmp5 & 8;
  if (__cil_tmp6 != 0) {
    __cil_tmp7 = info->signals;
    __cil_tmp8 = (unsigned int )__cil_tmp7;
    __cil_tmp9 = __cil_tmp8 | 64U;
    info->signals = (unsigned char )__cil_tmp9;
    __cil_tmp10 = info->input_signal_events.dsr_up;
    info->input_signal_events.dsr_up = __cil_tmp10 + 1;
  } else {
    __cil_tmp11 = info->signals;
    __cil_tmp12 = (unsigned int )__cil_tmp11;
    __cil_tmp13 = __cil_tmp12 & 191U;
    info->signals = (unsigned char )__cil_tmp13;
    __cil_tmp14 = info->input_signal_events.dsr_down;
    info->input_signal_events.dsr_down = __cil_tmp14 + 1;
  }
  }
  if (debug_level > 4) {
    {
    __cil_tmp15 = & info->device_name;
    __cil_tmp16 = (char *)__cil_tmp15;
    __cil_tmp17 = info->signals;
    __cil_tmp18 = (int )__cil_tmp17;
    printk("dsr_change %s signals=%04X\n", __cil_tmp16, __cil_tmp18);
    }
  } else {

  }
  tmp___0 = info->dsr_chkcount;
  __cil_tmp19 = info->dsr_chkcount;
  info->dsr_chkcount = __cil_tmp19 + 1;
  if (tmp___0 == 100) {
    {
    tmp = rd_reg16(info, 140U);
    __cil_tmp20 = (int )tmp;
    __cil_tmp21 = __cil_tmp20 & 65407;
    __cil_tmp22 = (__u16 )__cil_tmp21;
    wr_reg16(info, 140U, __cil_tmp22);
    }
    return;
  } else {

  }
  {
  __cil_tmp23 = info->icount.dsr;
  info->icount.dsr = __cil_tmp23 + 1U;
  __cil_tmp24 = & info->status_event_wait_q;
  __cil_tmp25 = (void *)0;
  __wake_up(__cil_tmp24, 1U, 1, __cil_tmp25);
  __cil_tmp26 = & info->event_wait_q;
  __cil_tmp27 = (void *)0;
  __wake_up(__cil_tmp26, 1U, 1, __cil_tmp27);
  __cil_tmp28 = info->pending_bh;
  info->pending_bh = __cil_tmp28 | 4U;
  }
  return;
}
}
static void cts_change(struct slgt_info *info , unsigned short status )
{ __u16 tmp ;
  int tmp___0 ;
  int __cil_tmp5 ;
  int __cil_tmp6 ;
  unsigned char __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  int __cil_tmp10 ;
  unsigned char __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  int __cil_tmp14 ;
  char (*__cil_tmp15)[25U] ;
  char *__cil_tmp16 ;
  unsigned char __cil_tmp17 ;
  int __cil_tmp18 ;
  int __cil_tmp19 ;
  int __cil_tmp20 ;
  int __cil_tmp21 ;
  __u16 __cil_tmp22 ;
  __u32 __cil_tmp23 ;
  wait_queue_head_t *__cil_tmp24 ;
  void *__cil_tmp25 ;
  wait_queue_head_t *__cil_tmp26 ;
  void *__cil_tmp27 ;
  u32 __cil_tmp28 ;
  unsigned long __cil_tmp29 ;
  unsigned long __cil_tmp30 ;
  struct tty_struct *__cil_tmp31 ;
  unsigned long __cil_tmp32 ;
  struct tty_struct *__cil_tmp33 ;
  unsigned long __cil_tmp34 ;
  struct tty_struct *__cil_tmp35 ;
  unsigned char *__cil_tmp36 ;
  unsigned char *__cil_tmp37 ;
  unsigned char __cil_tmp38 ;
  unsigned int __cil_tmp39 ;
  unsigned char __cil_tmp40 ;
  int __cil_tmp41 ;
  int __cil_tmp42 ;
  struct tty_struct *__cil_tmp43 ;
  u32 __cil_tmp44 ;
  unsigned char __cil_tmp45 ;
  int __cil_tmp46 ;
  int __cil_tmp47 ;
  struct tty_struct *__cil_tmp48 ;

  {
  {
  __cil_tmp5 = (int )status;
  __cil_tmp6 = __cil_tmp5 & 4;
  if (__cil_tmp6 != 0) {
    __cil_tmp7 = info->signals;
    __cil_tmp8 = (unsigned int )__cil_tmp7;
    __cil_tmp9 = __cil_tmp8 | 16U;
    info->signals = (unsigned char )__cil_tmp9;
    __cil_tmp10 = info->input_signal_events.cts_up;
    info->input_signal_events.cts_up = __cil_tmp10 + 1;
  } else {
    __cil_tmp11 = info->signals;
    __cil_tmp12 = (unsigned int )__cil_tmp11;
    __cil_tmp13 = __cil_tmp12 & 239U;
    info->signals = (unsigned char )__cil_tmp13;
    __cil_tmp14 = info->input_signal_events.cts_down;
    info->input_signal_events.cts_down = __cil_tmp14 + 1;
  }
  }
  if (debug_level > 4) {
    {
    __cil_tmp15 = & info->device_name;
    __cil_tmp16 = (char *)__cil_tmp15;
    __cil_tmp17 = info->signals;
    __cil_tmp18 = (int )__cil_tmp17;
    printk("cts_change %s signals=%04X\n", __cil_tmp16, __cil_tmp18);
    }
  } else {

  }
  tmp___0 = info->cts_chkcount;
  __cil_tmp19 = info->cts_chkcount;
  info->cts_chkcount = __cil_tmp19 + 1;
  if (tmp___0 == 100) {
    {
    tmp = rd_reg16(info, 140U);
    __cil_tmp20 = (int )tmp;
    __cil_tmp21 = __cil_tmp20 & 65471;
    __cil_tmp22 = (__u16 )__cil_tmp21;
    wr_reg16(info, 140U, __cil_tmp22);
    }
    return;
  } else {

  }
  {
  __cil_tmp23 = info->icount.cts;
  info->icount.cts = __cil_tmp23 + 1U;
  __cil_tmp24 = & info->status_event_wait_q;
  __cil_tmp25 = (void *)0;
  __wake_up(__cil_tmp24, 1U, 1, __cil_tmp25);
  __cil_tmp26 = & info->event_wait_q;
  __cil_tmp27 = (void *)0;
  __wake_up(__cil_tmp26, 1U, 1, __cil_tmp27);
  __cil_tmp28 = info->pending_bh;
  info->pending_bh = __cil_tmp28 | 4U;
  }
  {
  __cil_tmp29 = info->port.flags;
  __cil_tmp30 = __cil_tmp29 & 67108864UL;
  if (__cil_tmp30 != 0UL) {
    {
    __cil_tmp31 = (struct tty_struct *)0;
    __cil_tmp32 = (unsigned long )__cil_tmp31;
    __cil_tmp33 = info->port.tty;
    __cil_tmp34 = (unsigned long )__cil_tmp33;
    if (__cil_tmp34 != __cil_tmp32) {
      {
      __cil_tmp35 = info->port.tty;
      __cil_tmp36 = (unsigned char *)__cil_tmp35;
      __cil_tmp37 = __cil_tmp36 + 580UL;
      __cil_tmp38 = *__cil_tmp37;
      __cil_tmp39 = (unsigned int )__cil_tmp38;
      if (__cil_tmp39 != 0U) {
        {
        __cil_tmp40 = info->signals;
        __cil_tmp41 = (int )__cil_tmp40;
        __cil_tmp42 = __cil_tmp41 & 16;
        if (__cil_tmp42 != 0) {
          __cil_tmp43 = info->port.tty;
          __cil_tmp43->hw_stopped = (unsigned char)0;
          __cil_tmp44 = info->pending_bh;
          info->pending_bh = __cil_tmp44 | 2U;
          return;
        } else {
          {
          __cil_tmp45 = info->signals;
          __cil_tmp46 = (int )__cil_tmp45;
          __cil_tmp47 = __cil_tmp46 & 16;
          if (__cil_tmp47 == 0) {
            __cil_tmp48 = info->port.tty;
            __cil_tmp48->hw_stopped = (unsigned char)1;
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
    }
  } else {

  }
  }
  return;
}
}
static void dcd_change(struct slgt_info *info , unsigned short status )
{ __u16 tmp ;
  int tmp___0 ;
  int __cil_tmp5 ;
  int __cil_tmp6 ;
  unsigned char __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  int __cil_tmp10 ;
  unsigned char __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  int __cil_tmp14 ;
  char (*__cil_tmp15)[25U] ;
  char *__cil_tmp16 ;
  unsigned char __cil_tmp17 ;
  int __cil_tmp18 ;
  int __cil_tmp19 ;
  int __cil_tmp20 ;
  int __cil_tmp21 ;
  __u16 __cil_tmp22 ;
  __u32 __cil_tmp23 ;
  int __cil_tmp24 ;
  unsigned char __cil_tmp25 ;
  int __cil_tmp26 ;
  struct net_device *__cil_tmp27 ;
  struct net_device *__cil_tmp28 ;
  wait_queue_head_t *__cil_tmp29 ;
  void *__cil_tmp30 ;
  wait_queue_head_t *__cil_tmp31 ;
  void *__cil_tmp32 ;
  u32 __cil_tmp33 ;
  unsigned long __cil_tmp34 ;
  unsigned long __cil_tmp35 ;
  unsigned char __cil_tmp36 ;
  int __cil_tmp37 ;
  wait_queue_head_t *__cil_tmp38 ;
  void *__cil_tmp39 ;
  struct tty_struct *__cil_tmp40 ;
  unsigned long __cil_tmp41 ;
  struct tty_struct *__cil_tmp42 ;
  unsigned long __cil_tmp43 ;
  struct tty_struct *__cil_tmp44 ;

  {
  {
  __cil_tmp5 = (int )status;
  __cil_tmp6 = __cil_tmp5 & 2;
  if (__cil_tmp6 != 0) {
    __cil_tmp7 = info->signals;
    __cil_tmp8 = (unsigned int )__cil_tmp7;
    __cil_tmp9 = __cil_tmp8 | 1U;
    info->signals = (unsigned char )__cil_tmp9;
    __cil_tmp10 = info->input_signal_events.dcd_up;
    info->input_signal_events.dcd_up = __cil_tmp10 + 1;
  } else {
    __cil_tmp11 = info->signals;
    __cil_tmp12 = (unsigned int )__cil_tmp11;
    __cil_tmp13 = __cil_tmp12 & 254U;
    info->signals = (unsigned char )__cil_tmp13;
    __cil_tmp14 = info->input_signal_events.dcd_down;
    info->input_signal_events.dcd_down = __cil_tmp14 + 1;
  }
  }
  if (debug_level > 4) {
    {
    __cil_tmp15 = & info->device_name;
    __cil_tmp16 = (char *)__cil_tmp15;
    __cil_tmp17 = info->signals;
    __cil_tmp18 = (int )__cil_tmp17;
    printk("dcd_change %s signals=%04X\n", __cil_tmp16, __cil_tmp18);
    }
  } else {

  }
  tmp___0 = info->dcd_chkcount;
  __cil_tmp19 = info->dcd_chkcount;
  info->dcd_chkcount = __cil_tmp19 + 1;
  if (tmp___0 == 100) {
    {
    tmp = rd_reg16(info, 140U);
    __cil_tmp20 = (int )tmp;
    __cil_tmp21 = __cil_tmp20 & 65503;
    __cil_tmp22 = (__u16 )__cil_tmp21;
    wr_reg16(info, 140U, __cil_tmp22);
    }
    return;
  } else {

  }
  __cil_tmp23 = info->icount.dcd;
  info->icount.dcd = __cil_tmp23 + 1U;
  {
  __cil_tmp24 = info->netcount;
  if (__cil_tmp24 != 0) {
    {
    __cil_tmp25 = info->signals;
    __cil_tmp26 = (int )__cil_tmp25;
    if (__cil_tmp26 & 1) {
      {
      __cil_tmp27 = info->netdev;
      netif_carrier_on(__cil_tmp27);
      }
    } else {
      {
      __cil_tmp28 = info->netdev;
      netif_carrier_off(__cil_tmp28);
      }
    }
    }
  } else {

  }
  }
  {
  __cil_tmp29 = & info->status_event_wait_q;
  __cil_tmp30 = (void *)0;
  __wake_up(__cil_tmp29, 1U, 1, __cil_tmp30);
  __cil_tmp31 = & info->event_wait_q;
  __cil_tmp32 = (void *)0;
  __wake_up(__cil_tmp31, 1U, 1, __cil_tmp32);
  __cil_tmp33 = info->pending_bh;
  info->pending_bh = __cil_tmp33 | 4U;
  }
  {
  __cil_tmp34 = info->port.flags;
  __cil_tmp35 = __cil_tmp34 & 33554432UL;
  if (__cil_tmp35 != 0UL) {
    {
    __cil_tmp36 = info->signals;
    __cil_tmp37 = (int )__cil_tmp36;
    if (__cil_tmp37 & 1) {
      {
      __cil_tmp38 = & info->port.open_wait;
      __cil_tmp39 = (void *)0;
      __wake_up(__cil_tmp38, 1U, 1, __cil_tmp39);
      }
    } else {
      {
      __cil_tmp40 = (struct tty_struct *)0;
      __cil_tmp41 = (unsigned long )__cil_tmp40;
      __cil_tmp42 = info->port.tty;
      __cil_tmp43 = (unsigned long )__cil_tmp42;
      if (__cil_tmp43 != __cil_tmp41) {
        {
        __cil_tmp44 = info->port.tty;
        tty_hangup(__cil_tmp44);
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
static void ri_change(struct slgt_info *info , unsigned short status )
{ __u16 tmp ;
  int tmp___0 ;
  int __cil_tmp5 ;
  unsigned char __cil_tmp6 ;
  unsigned int __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  int __cil_tmp9 ;
  unsigned char __cil_tmp10 ;
  unsigned int __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  int __cil_tmp13 ;
  char (*__cil_tmp14)[25U] ;
  char *__cil_tmp15 ;
  unsigned char __cil_tmp16 ;
  int __cil_tmp17 ;
  int __cil_tmp18 ;
  int __cil_tmp19 ;
  int __cil_tmp20 ;
  __u16 __cil_tmp21 ;
  __u32 __cil_tmp22 ;
  wait_queue_head_t *__cil_tmp23 ;
  void *__cil_tmp24 ;
  wait_queue_head_t *__cil_tmp25 ;
  void *__cil_tmp26 ;
  u32 __cil_tmp27 ;

  {
  {
  __cil_tmp5 = (int )status;
  if (__cil_tmp5 & 1) {
    __cil_tmp6 = info->signals;
    __cil_tmp7 = (unsigned int )__cil_tmp6;
    __cil_tmp8 = __cil_tmp7 | 4U;
    info->signals = (unsigned char )__cil_tmp8;
    __cil_tmp9 = info->input_signal_events.ri_up;
    info->input_signal_events.ri_up = __cil_tmp9 + 1;
  } else {
    __cil_tmp10 = info->signals;
    __cil_tmp11 = (unsigned int )__cil_tmp10;
    __cil_tmp12 = __cil_tmp11 & 251U;
    info->signals = (unsigned char )__cil_tmp12;
    __cil_tmp13 = info->input_signal_events.ri_down;
    info->input_signal_events.ri_down = __cil_tmp13 + 1;
  }
  }
  if (debug_level > 4) {
    {
    __cil_tmp14 = & info->device_name;
    __cil_tmp15 = (char *)__cil_tmp14;
    __cil_tmp16 = info->signals;
    __cil_tmp17 = (int )__cil_tmp16;
    printk("ri_change %s signals=%04X\n", __cil_tmp15, __cil_tmp17);
    }
  } else {

  }
  tmp___0 = info->ri_chkcount;
  __cil_tmp18 = info->ri_chkcount;
  info->ri_chkcount = __cil_tmp18 + 1;
  if (tmp___0 == 100) {
    {
    tmp = rd_reg16(info, 140U);
    __cil_tmp19 = (int )tmp;
    __cil_tmp20 = __cil_tmp19 & 65519;
    __cil_tmp21 = (__u16 )__cil_tmp20;
    wr_reg16(info, 140U, __cil_tmp21);
    }
    return;
  } else {

  }
  {
  __cil_tmp22 = info->icount.rng;
  info->icount.rng = __cil_tmp22 + 1U;
  __cil_tmp23 = & info->status_event_wait_q;
  __cil_tmp24 = (void *)0;
  __wake_up(__cil_tmp23, 1U, 1, __cil_tmp24);
  __cil_tmp25 = & info->event_wait_q;
  __cil_tmp26 = (void *)0;
  __wake_up(__cil_tmp25, 1U, 1, __cil_tmp26);
  __cil_tmp27 = info->pending_bh;
  info->pending_bh = __cil_tmp27 | 4U;
  }
  return;
}
}
static void isr_rxdata(struct slgt_info *info )
{ unsigned int count ;
  unsigned int i ;
  unsigned short reg ;
  unsigned int tmp ;
  unsigned int tmp___0 ;
  __u16 tmp___1 ;
  unsigned short __cil_tmp8 ;
  char (*__cil_tmp9)[25U] ;
  char *__cil_tmp10 ;
  int __cil_tmp11 ;
  unsigned long __cil_tmp12 ;
  struct slgt_desc *__cil_tmp13 ;
  struct slgt_desc *__cil_tmp14 ;
  __le16 __cil_tmp15 ;
  short __cil_tmp16 ;
  int __cil_tmp17 ;
  unsigned long __cil_tmp18 ;
  unsigned long __cil_tmp19 ;
  struct slgt_desc *__cil_tmp20 ;
  struct slgt_desc *__cil_tmp21 ;
  char *__cil_tmp22 ;
  char *__cil_tmp23 ;
  unsigned long __cil_tmp24 ;
  unsigned long __cil_tmp25 ;
  unsigned long __cil_tmp26 ;
  struct slgt_desc *__cil_tmp27 ;
  struct slgt_desc *__cil_tmp28 ;
  char *__cil_tmp29 ;
  char *__cil_tmp30 ;
  int __cil_tmp31 ;
  int __cil_tmp32 ;
  unsigned int __cil_tmp33 ;
  int __cil_tmp34 ;
  int __cil_tmp35 ;
  unsigned long __cil_tmp36 ;
  struct slgt_desc *__cil_tmp37 ;
  struct slgt_desc *__cil_tmp38 ;
  unsigned long __cil_tmp39 ;
  struct slgt_desc *__cil_tmp40 ;
  struct slgt_desc *__cil_tmp41 ;
  int __cil_tmp42 ;
  int __cil_tmp43 ;
  unsigned int __cil_tmp44 ;
  unsigned int __cil_tmp45 ;
  unsigned int __cil_tmp46 ;
  u32 __cil_tmp47 ;
  int __cil_tmp48 ;
  int __cil_tmp49 ;

  {
  __cil_tmp8 = info->rbuf_fill_count;
  count = (unsigned int )__cil_tmp8;
  i = info->rbuf_fill_index;
  goto ldv_36907;
  ldv_36908:
  {
  reg = rd_reg16(info, 128U);
  }
  if (debug_level > 4) {
    {
    __cil_tmp9 = & info->device_name;
    __cil_tmp10 = (char *)__cil_tmp9;
    __cil_tmp11 = (int )reg;
    printk("isr_rxdata %s RDR=%04X\n", __cil_tmp10, __cil_tmp11);
    }
  } else {

  }
  {
  __cil_tmp12 = (unsigned long )i;
  __cil_tmp13 = info->rbufs;
  __cil_tmp14 = __cil_tmp13 + __cil_tmp12;
  __cil_tmp15 = __cil_tmp14->status;
  __cil_tmp16 = (short )__cil_tmp15;
  __cil_tmp17 = (int )__cil_tmp16;
  if (__cil_tmp17 < 0) {
    {
    rx_stop(info);
    info->rx_restart = (bool )1;
    }
    goto ldv_36907;
  } else {

  }
  }
  tmp = count;
  count = count + 1U;
  __cil_tmp18 = (unsigned long )tmp;
  __cil_tmp19 = (unsigned long )i;
  __cil_tmp20 = info->rbufs;
  __cil_tmp21 = __cil_tmp20 + __cil_tmp19;
  __cil_tmp22 = __cil_tmp21->buf;
  __cil_tmp23 = __cil_tmp22 + __cil_tmp18;
  *__cil_tmp23 = (char )reg;
  {
  __cil_tmp24 = info->params.mode;
  if (__cil_tmp24 == 1UL) {
    tmp___0 = count;
    count = count + 1U;
    __cil_tmp25 = (unsigned long )tmp___0;
    __cil_tmp26 = (unsigned long )i;
    __cil_tmp27 = info->rbufs;
    __cil_tmp28 = __cil_tmp27 + __cil_tmp26;
    __cil_tmp29 = __cil_tmp28->buf;
    __cil_tmp30 = __cil_tmp29 + __cil_tmp25;
    __cil_tmp31 = (int )reg;
    __cil_tmp32 = __cil_tmp31 >> 8;
    *__cil_tmp30 = (char )__cil_tmp32;
  } else {

  }
  }
  {
  __cil_tmp33 = info->rbuf_fill_level;
  if (__cil_tmp33 == count) {
    goto _L;
  } else {
    {
    __cil_tmp34 = (int )reg;
    __cil_tmp35 = __cil_tmp34 & 1024;
    if (__cil_tmp35 != 0) {
      _L:
      __cil_tmp36 = (unsigned long )i;
      __cil_tmp37 = info->rbufs;
      __cil_tmp38 = __cil_tmp37 + __cil_tmp36;
      __cil_tmp38->count = (unsigned short )count;
      __cil_tmp39 = (unsigned long )i;
      __cil_tmp40 = info->rbufs;
      __cil_tmp41 = __cil_tmp40 + __cil_tmp39;
      __cil_tmp42 = (int )reg;
      __cil_tmp43 = __cil_tmp42 >> 8;
      __cil_tmp44 = (unsigned int )__cil_tmp43;
      __cil_tmp45 = __cil_tmp44 | 32768U;
      __cil_tmp41->status = (__le16 )__cil_tmp45;
      count = 0U;
      info->rbuf_fill_count = (unsigned short)0;
      i = i + 1U;
      {
      __cil_tmp46 = info->rbuf_count;
      if (i == __cil_tmp46) {
        i = 0U;
      } else {

      }
      }
      __cil_tmp47 = info->pending_bh;
      info->pending_bh = __cil_tmp47 | 1U;
    } else {

    }
    }
  }
  }
  ldv_36907:
  {
  tmp___1 = rd_reg16(info, 142U);
  }
  {
  __cil_tmp48 = (int )tmp___1;
  __cil_tmp49 = __cil_tmp48 & 1024;
  if (__cil_tmp49 != 0) {
    goto ldv_36908;
  } else {
    goto ldv_36909;
  }
  }
  ldv_36909:
  info->rbuf_fill_index = i;
  info->rbuf_fill_count = (unsigned short )count;
  return;
}
}
static void isr_serial(struct slgt_info *info )
{ unsigned short status ;
  __u16 tmp ;
  char (*__cil_tmp4)[25U] ;
  char *__cil_tmp5 ;
  int __cil_tmp6 ;
  int __cil_tmp7 ;
  __u16 __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  int __cil_tmp10 ;
  int __cil_tmp11 ;
  bool __cil_tmp12 ;
  int __cil_tmp13 ;
  unsigned short __cil_tmp14 ;
  unsigned int __cil_tmp15 ;
  int __cil_tmp16 ;
  int __cil_tmp17 ;
  int __cil_tmp18 ;
  int __cil_tmp19 ;
  int __cil_tmp20 ;
  int __cil_tmp21 ;
  __u32 __cil_tmp22 ;
  struct tty_struct *__cil_tmp23 ;
  unsigned long __cil_tmp24 ;
  struct tty_struct *__cil_tmp25 ;
  unsigned long __cil_tmp26 ;
  unsigned int __cil_tmp27 ;
  unsigned int __cil_tmp28 ;
  unsigned int __cil_tmp29 ;
  unsigned int __cil_tmp30 ;
  unsigned int __cil_tmp31 ;
  struct tty_struct *__cil_tmp32 ;
  unsigned long __cil_tmp33 ;
  unsigned long __cil_tmp34 ;
  struct tty_struct *__cil_tmp35 ;
  int __cil_tmp36 ;
  int __cil_tmp37 ;
  int __cil_tmp38 ;
  unsigned short __cil_tmp39 ;
  unsigned int __cil_tmp40 ;
  int __cil_tmp41 ;
  int __cil_tmp42 ;
  int __cil_tmp43 ;
  int __cil_tmp44 ;
  int __cil_tmp45 ;
  int __cil_tmp46 ;
  __u32 __cil_tmp47 ;
  __u32 __cil_tmp48 ;
  wait_queue_head_t *__cil_tmp49 ;
  void *__cil_tmp50 ;
  int __cil_tmp51 ;
  int __cil_tmp52 ;
  int __cil_tmp53 ;
  int __cil_tmp54 ;
  int __cil_tmp55 ;
  unsigned short __cil_tmp56 ;
  int __cil_tmp57 ;
  int __cil_tmp58 ;
  int __cil_tmp59 ;
  unsigned short __cil_tmp60 ;
  int __cil_tmp61 ;
  int __cil_tmp62 ;
  int __cil_tmp63 ;
  unsigned short __cil_tmp64 ;
  int __cil_tmp65 ;
  int __cil_tmp66 ;
  int __cil_tmp67 ;
  unsigned short __cil_tmp68 ;

  {
  {
  tmp = rd_reg16(info, 142U);
  status = tmp;
  }
  if (debug_level > 4) {
    {
    __cil_tmp4 = & info->device_name;
    __cil_tmp5 = (char *)__cil_tmp4;
    __cil_tmp6 = (int )status;
    printk("%s isr_serial status=%04X\n", __cil_tmp5, __cil_tmp6);
    }
  } else {

  }
  {
  __cil_tmp7 = (int )status;
  __cil_tmp8 = (__u16 )__cil_tmp7;
  wr_reg16(info, 142U, __cil_tmp8);
  info->irq_occurred = (bool )1;
  }
  {
  __cil_tmp9 = info->params.mode;
  if (__cil_tmp9 == 1UL) {
    {
    __cil_tmp10 = (int )status;
    __cil_tmp11 = __cil_tmp10 & 4096;
    if (__cil_tmp11 != 0) {
      {
      __cil_tmp12 = info->tx_active;
      if ((int )__cil_tmp12) {
        {
        __cil_tmp13 = (int )status;
        __cil_tmp14 = (unsigned short )__cil_tmp13;
        isr_txeom(info, __cil_tmp14);
        }
      } else {

      }
      }
    } else {

    }
    }
    {
    __cil_tmp15 = info->rx_pio;
    if (__cil_tmp15 != 0U) {
      {
      __cil_tmp16 = (int )status;
      __cil_tmp17 = __cil_tmp16 & 1024;
      if (__cil_tmp17 != 0) {
        {
        isr_rxdata(info);
        }
      } else {

      }
      }
    } else {

    }
    }
    {
    __cil_tmp18 = (int )status;
    __cil_tmp19 = __cil_tmp18 & 512;
    if (__cil_tmp19 != 0) {
      {
      __cil_tmp20 = (int )status;
      __cil_tmp21 = __cil_tmp20 & 16384;
      if (__cil_tmp21 != 0) {
        __cil_tmp22 = info->icount.brk;
        info->icount.brk = __cil_tmp22 + 1U;
        {
        __cil_tmp23 = (struct tty_struct *)0;
        __cil_tmp24 = (unsigned long )__cil_tmp23;
        __cil_tmp25 = info->port.tty;
        __cil_tmp26 = (unsigned long )__cil_tmp25;
        if (__cil_tmp26 != __cil_tmp24) {
          {
          __cil_tmp27 = info->ignore_status_mask;
          __cil_tmp28 = (unsigned int )status;
          __cil_tmp29 = __cil_tmp28 & __cil_tmp27;
          if (__cil_tmp29 == 0U) {
            {
            __cil_tmp30 = info->read_status_mask;
            __cil_tmp31 = __cil_tmp30 & 16384U;
            if (__cil_tmp31 != 0U) {
              {
              __cil_tmp32 = info->port.tty;
              tty_insert_flip_char(__cil_tmp32, (unsigned char)0, (char)1);
              }
              {
              __cil_tmp33 = info->port.flags;
              __cil_tmp34 = __cil_tmp33 & 4UL;
              if (__cil_tmp34 != 0UL) {
                {
                __cil_tmp35 = info->port.tty;
                do_SAK(__cil_tmp35);
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
    {
    __cil_tmp36 = (int )status;
    __cil_tmp37 = __cil_tmp36 & 6144;
    if (__cil_tmp37 != 0) {
      {
      __cil_tmp38 = (int )status;
      __cil_tmp39 = (unsigned short )__cil_tmp38;
      isr_txeom(info, __cil_tmp39);
      }
    } else {

    }
    }
    {
    __cil_tmp40 = info->rx_pio;
    if (__cil_tmp40 != 0U) {
      {
      __cil_tmp41 = (int )status;
      __cil_tmp42 = __cil_tmp41 & 1024;
      if (__cil_tmp42 != 0) {
        {
        isr_rxdata(info);
        }
      } else {

      }
      }
    } else {

    }
    }
    {
    __cil_tmp43 = (int )status;
    __cil_tmp44 = __cil_tmp43 & 512;
    if (__cil_tmp44 != 0) {
      {
      __cil_tmp45 = (int )status;
      __cil_tmp46 = __cil_tmp45 & 16384;
      if (__cil_tmp46 != 0) {
        __cil_tmp47 = info->icount.rxidle;
        info->icount.rxidle = __cil_tmp47 + 1U;
      } else {
        __cil_tmp48 = info->icount.exithunt;
        info->icount.exithunt = __cil_tmp48 + 1U;
      }
      }
      {
      __cil_tmp49 = & info->event_wait_q;
      __cil_tmp50 = (void *)0;
      __wake_up(__cil_tmp49, 1U, 1, __cil_tmp50);
      }
    } else {

    }
    }
    {
    __cil_tmp51 = (int )status;
    __cil_tmp52 = __cil_tmp51 & 256;
    if (__cil_tmp52 != 0) {
      {
      rx_start(info);
      }
    } else {

    }
    }
  }
  }
  {
  __cil_tmp53 = (int )status;
  __cil_tmp54 = __cil_tmp53 & 128;
  if (__cil_tmp54 != 0) {
    {
    __cil_tmp55 = (int )status;
    __cil_tmp56 = (unsigned short )__cil_tmp55;
    dsr_change(info, __cil_tmp56);
    }
  } else {

  }
  }
  {
  __cil_tmp57 = (int )status;
  __cil_tmp58 = __cil_tmp57 & 64;
  if (__cil_tmp58 != 0) {
    {
    __cil_tmp59 = (int )status;
    __cil_tmp60 = (unsigned short )__cil_tmp59;
    cts_change(info, __cil_tmp60);
    }
  } else {

  }
  }
  {
  __cil_tmp61 = (int )status;
  __cil_tmp62 = __cil_tmp61 & 32;
  if (__cil_tmp62 != 0) {
    {
    __cil_tmp63 = (int )status;
    __cil_tmp64 = (unsigned short )__cil_tmp63;
    dcd_change(info, __cil_tmp64);
    }
  } else {

  }
  }
  {
  __cil_tmp65 = (int )status;
  __cil_tmp66 = __cil_tmp65 & 16;
  if (__cil_tmp66 != 0) {
    {
    __cil_tmp67 = (int )status;
    __cil_tmp68 = (unsigned short )__cil_tmp67;
    ri_change(info, __cil_tmp68);
    }
  } else {

  }
  }
  return;
}
}
static void isr_rdma(struct slgt_info *info )
{ unsigned int status ;
  __u32 tmp ;
  char (*__cil_tmp4)[25U] ;
  char *__cil_tmp5 ;
  unsigned int __cil_tmp6 ;
  char (*__cil_tmp7)[25U] ;
  char *__cil_tmp8 ;
  u32 __cil_tmp9 ;

  {
  {
  tmp = rd_reg32(info, 144U);
  status = tmp;
  }
  if (debug_level > 4) {
    {
    __cil_tmp4 = & info->device_name;
    __cil_tmp5 = (char *)__cil_tmp4;
    printk("%s isr_rdma status=%08x\n", __cil_tmp5, status);
    }
  } else {

  }
  {
  wr_reg32(info, 144U, status);
  }
  {
  __cil_tmp6 = status & 48U;
  if (__cil_tmp6 != 0U) {
    if (debug_level > 4) {
      {
      __cil_tmp7 = & info->device_name;
      __cil_tmp8 = (char *)__cil_tmp7;
      printk("%s isr_rdma rx_restart=1\n", __cil_tmp8);
      }
    } else {

    }
    info->rx_restart = (bool )1;
  } else {

  }
  }
  __cil_tmp9 = info->pending_bh;
  info->pending_bh = __cil_tmp9 | 1U;
  return;
}
}
static void isr_tdma(struct slgt_info *info )
{ unsigned int status ;
  __u32 tmp ;
  char (*__cil_tmp4)[25U] ;
  char *__cil_tmp5 ;
  unsigned int __cil_tmp6 ;
  u32 __cil_tmp7 ;

  {
  {
  tmp = rd_reg32(info, 148U);
  status = tmp;
  }
  if (debug_level > 4) {
    {
    __cil_tmp4 = & info->device_name;
    __cil_tmp5 = (char *)__cil_tmp4;
    printk("%s isr_tdma status=%08x\n", __cil_tmp5, status);
    }
  } else {

  }
  {
  wr_reg32(info, 148U, status);
  }
  {
  __cil_tmp6 = status & 56U;
  if (__cil_tmp6 != 0U) {
    __cil_tmp7 = info->pending_bh;
    info->pending_bh = __cil_tmp7 | 2U;
  } else {

  }
  }
  return;
}
}
static bool unsent_tbufs(struct slgt_info *info )
{ unsigned int i ;
  bool rc ;
  unsigned int __cil_tmp4 ;
  unsigned long __cil_tmp5 ;
  struct slgt_desc *__cil_tmp6 ;
  struct slgt_desc *__cil_tmp7 ;
  __le16 __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  unsigned int __cil_tmp10 ;

  {
  i = info->tbuf_current;
  rc = (bool )0;
  ldv_36928: ;
  if (i != 0U) {
    i = i - 1U;
  } else {
    __cil_tmp4 = info->tbuf_count;
    i = __cil_tmp4 - 1U;
  }
  {
  __cil_tmp5 = (unsigned long )i;
  __cil_tmp6 = info->tbufs;
  __cil_tmp7 = __cil_tmp6 + __cil_tmp5;
  __cil_tmp8 = __cil_tmp7->count;
  __cil_tmp9 = (unsigned int )__cil_tmp8;
  if (__cil_tmp9 == 0U) {
    goto ldv_36927;
  } else {

  }
  }
  info->tbuf_start = i;
  rc = (bool )1;
  {
  __cil_tmp10 = info->tbuf_current;
  if (__cil_tmp10 != i) {
    goto ldv_36928;
  } else {
    goto ldv_36927;
  }
  }
  ldv_36927: ;
  return (rc);
}
}
static void isr_txeom(struct slgt_info *info , unsigned short status )
{ __u16 tmp ;
  unsigned short val ;
  __u16 tmp___0 ;
  bool tmp___1 ;
  char (*__cil_tmp7)[25U] ;
  char *__cil_tmp8 ;
  int __cil_tmp9 ;
  int __cil_tmp10 ;
  int __cil_tmp11 ;
  __u16 __cil_tmp12 ;
  int __cil_tmp13 ;
  int __cil_tmp14 ;
  unsigned int __cil_tmp15 ;
  unsigned int __cil_tmp16 ;
  int __cil_tmp17 ;
  __u16 __cil_tmp18 ;
  int __cil_tmp19 ;
  __u16 __cil_tmp20 ;
  bool __cil_tmp21 ;
  unsigned long __cil_tmp22 ;
  int __cil_tmp23 ;
  int __cil_tmp24 ;
  __u32 __cil_tmp25 ;
  int __cil_tmp26 ;
  int __cil_tmp27 ;
  __u32 __cil_tmp28 ;
  struct timer_list *__cil_tmp29 ;
  unsigned long __cil_tmp30 ;
  bool __cil_tmp31 ;
  unsigned char __cil_tmp32 ;
  unsigned int __cil_tmp33 ;
  unsigned int __cil_tmp34 ;
  int __cil_tmp35 ;
  struct tty_struct *__cil_tmp36 ;
  unsigned long __cil_tmp37 ;
  struct tty_struct *__cil_tmp38 ;
  unsigned long __cil_tmp39 ;
  struct tty_struct *__cil_tmp40 ;
  unsigned char *__cil_tmp41 ;
  unsigned char *__cil_tmp42 ;
  unsigned char __cil_tmp43 ;
  unsigned int __cil_tmp44 ;
  struct tty_struct *__cil_tmp45 ;
  unsigned char *__cil_tmp46 ;
  unsigned char *__cil_tmp47 ;
  unsigned char __cil_tmp48 ;
  unsigned int __cil_tmp49 ;
  u32 __cil_tmp50 ;

  {
  if (debug_level > 4) {
    {
    __cil_tmp7 = & info->device_name;
    __cil_tmp8 = (char *)__cil_tmp7;
    __cil_tmp9 = (int )status;
    printk("%s txeom status=%04x\n", __cil_tmp8, __cil_tmp9);
    }
  } else {

  }
  {
  tmp = rd_reg16(info, 140U);
  __cil_tmp10 = (int )tmp;
  __cil_tmp11 = __cil_tmp10 & 51199;
  __cil_tmp12 = (__u16 )__cil_tmp11;
  wr_reg16(info, 140U, __cil_tmp12);
  tdma_reset(info);
  }
  {
  __cil_tmp13 = (int )status;
  __cil_tmp14 = __cil_tmp13 & 2048;
  if (__cil_tmp14 != 0) {
    {
    tmp___0 = rd_reg16(info, 130U);
    val = tmp___0;
    __cil_tmp15 = (unsigned int )val;
    __cil_tmp16 = __cil_tmp15 | 4U;
    __cil_tmp17 = (int )__cil_tmp16;
    __cil_tmp18 = (__u16 )__cil_tmp17;
    wr_reg16(info, 130U, __cil_tmp18);
    __cil_tmp19 = (int )val;
    __cil_tmp20 = (__u16 )__cil_tmp19;
    wr_reg16(info, 130U, __cil_tmp20);
    }
  } else {

  }
  }
  {
  __cil_tmp21 = info->tx_active;
  if ((int )__cil_tmp21) {
    {
    __cil_tmp22 = info->params.mode;
    if (__cil_tmp22 != 1UL) {
      {
      __cil_tmp23 = (int )status;
      __cil_tmp24 = __cil_tmp23 & 2048;
      if (__cil_tmp24 != 0) {
        __cil_tmp25 = info->icount.txunder;
        info->icount.txunder = __cil_tmp25 + 1U;
      } else {
        {
        __cil_tmp26 = (int )status;
        __cil_tmp27 = __cil_tmp26 & 4096;
        if (__cil_tmp27 != 0) {
          __cil_tmp28 = info->icount.txok;
          info->icount.txok = __cil_tmp28 + 1U;
        } else {

        }
        }
      }
      }
    } else {

    }
    }
    {
    tmp___1 = unsent_tbufs(info);
    }
    if ((int )tmp___1) {
      {
      tx_start(info);
      update_tx_timer(info);
      }
      return;
    } else {

    }
    {
    info->tx_active = (bool )0;
    __cil_tmp29 = & info->tx_timer;
    del_timer(__cil_tmp29);
    }
    {
    __cil_tmp30 = info->params.mode;
    if (__cil_tmp30 != 1UL) {
      {
      __cil_tmp31 = info->drop_rts_on_tx_done;
      if ((int )__cil_tmp31) {
        {
        __cil_tmp32 = info->signals;
        __cil_tmp33 = (unsigned int )__cil_tmp32;
        __cil_tmp34 = __cil_tmp33 & 223U;
        info->signals = (unsigned char )__cil_tmp34;
        info->drop_rts_on_tx_done = (bool )0;
        set_signals(info);
        }
      } else {

      }
      }
    } else {

    }
    }
    {
    __cil_tmp35 = info->netcount;
    if (__cil_tmp35 != 0) {
      {
      hdlcdev_tx_done(info);
      }
    } else {
      {
      __cil_tmp36 = (struct tty_struct *)0;
      __cil_tmp37 = (unsigned long )__cil_tmp36;
      __cil_tmp38 = info->port.tty;
      __cil_tmp39 = (unsigned long )__cil_tmp38;
      if (__cil_tmp39 != __cil_tmp37) {
        {
        __cil_tmp40 = info->port.tty;
        __cil_tmp41 = (unsigned char *)__cil_tmp40;
        __cil_tmp42 = __cil_tmp41 + 580UL;
        __cil_tmp43 = *__cil_tmp42;
        __cil_tmp44 = (unsigned int )__cil_tmp43;
        if (__cil_tmp44 != 0U) {
          {
          tx_stop(info);
          }
          return;
        } else {
          {
          __cil_tmp45 = info->port.tty;
          __cil_tmp46 = (unsigned char *)__cil_tmp45;
          __cil_tmp47 = __cil_tmp46 + 580UL;
          __cil_tmp48 = *__cil_tmp47;
          __cil_tmp49 = (unsigned int )__cil_tmp48;
          if (__cil_tmp49 != 0U) {
            {
            tx_stop(info);
            }
            return;
          } else {

          }
          }
        }
        }
      } else {

      }
      }
      __cil_tmp50 = info->pending_bh;
      info->pending_bh = __cil_tmp50 | 2U;
    }
    }
  } else {

  }
  }
  return;
}
}
static void isr_gpio(struct slgt_info *info , unsigned int changed , unsigned int state )
{ struct cond_wait *w ;
  struct cond_wait *prev ;
  unsigned int __cil_tmp6 ;
  unsigned int __cil_tmp7 ;
  wait_queue_head_t *__cil_tmp8 ;
  void *__cil_tmp9 ;
  struct cond_wait *__cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  unsigned long __cil_tmp12 ;
  struct cond_wait *__cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  unsigned long __cil_tmp15 ;

  {
  w = info->gpio_wait_q;
  prev = (struct cond_wait *)0;
  goto ldv_36942;
  ldv_36941: ;
  {
  __cil_tmp6 = w->data;
  __cil_tmp7 = __cil_tmp6 & changed;
  if (__cil_tmp7 != 0U) {
    {
    w->data = state;
    __cil_tmp8 = & w->q;
    __cil_tmp9 = (void *)0;
    __wake_up(__cil_tmp8, 1U, 1, __cil_tmp9);
    }
    {
    __cil_tmp10 = (struct cond_wait *)0;
    __cil_tmp11 = (unsigned long )__cil_tmp10;
    __cil_tmp12 = (unsigned long )prev;
    if (__cil_tmp12 != __cil_tmp11) {
      prev->next = w->next;
    } else {
      info->gpio_wait_q = w->next;
    }
    }
  } else {
    prev = w;
  }
  }
  w = w->next;
  ldv_36942: ;
  {
  __cil_tmp13 = (struct cond_wait *)0;
  __cil_tmp14 = (unsigned long )__cil_tmp13;
  __cil_tmp15 = (unsigned long )w;
  if (__cil_tmp15 != __cil_tmp14) {
    goto ldv_36941;
  } else {
    goto ldv_36943;
  }
  }
  ldv_36943: ;
  return;
}
}
static irqreturn_t slgt_interrupt(int dummy , void *dev_id )
{ struct slgt_info *info ;
  unsigned int gsr ;
  unsigned int i ;
  __u32 tmp ;
  unsigned int state ;
  unsigned int changed ;
  struct slgt_info *port ;
  unsigned int __cil_tmp10 ;
  char (*__cil_tmp11)[25U] ;
  char *__cil_tmp12 ;
  struct slgt_info *__cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  struct slgt_info *__cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  struct slgt_info *__cil_tmp17 ;
  spinlock_t *__cil_tmp18 ;
  int __cil_tmp19 ;
  int __cil_tmp20 ;
  unsigned int __cil_tmp21 ;
  unsigned int __cil_tmp22 ;
  struct slgt_info *__cil_tmp23 ;
  unsigned int __cil_tmp24 ;
  int __cil_tmp25 ;
  int __cil_tmp26 ;
  unsigned int __cil_tmp27 ;
  unsigned int __cil_tmp28 ;
  struct slgt_info *__cil_tmp29 ;
  unsigned int __cil_tmp30 ;
  int __cil_tmp31 ;
  int __cil_tmp32 ;
  unsigned int __cil_tmp33 ;
  unsigned int __cil_tmp34 ;
  struct slgt_info *__cil_tmp35 ;
  struct slgt_info *__cil_tmp36 ;
  spinlock_t *__cil_tmp37 ;
  int __cil_tmp38 ;
  unsigned int __cil_tmp39 ;
  unsigned int __cil_tmp40 ;
  spinlock_t *__cil_tmp41 ;
  char (*__cil_tmp42)[25U] ;
  char *__cil_tmp43 ;
  struct slgt_info *__cil_tmp44 ;
  unsigned long __cil_tmp45 ;
  struct slgt_info *__cil_tmp46 ;
  unsigned long __cil_tmp47 ;
  struct slgt_info *__cil_tmp48 ;
  int __cil_tmp49 ;
  unsigned int __cil_tmp50 ;
  spinlock_t *__cil_tmp51 ;
  struct slgt_info *__cil_tmp52 ;
  unsigned long __cil_tmp53 ;
  unsigned long __cil_tmp54 ;
  spinlock_t *__cil_tmp55 ;
  int __cil_tmp56 ;
  int __cil_tmp57 ;
  u32 __cil_tmp58 ;
  bool __cil_tmp59 ;
  bool __cil_tmp60 ;
  char (*__cil_tmp61)[25U] ;
  char *__cil_tmp62 ;
  struct work_struct *__cil_tmp63 ;
  spinlock_t *__cil_tmp64 ;
  int __cil_tmp65 ;
  unsigned int __cil_tmp66 ;
  unsigned int __cil_tmp67 ;

  {
  info = (struct slgt_info *)dev_id;
  if (debug_level > 4) {
    {
    __cil_tmp10 = info->irq_level;
    printk("slgt_interrupt irq=%d entry\n", __cil_tmp10);
    }
  } else {

  }
  goto ldv_36956;
  ldv_36955: ;
  if (debug_level > 4) {
    {
    __cil_tmp11 = & info->device_name;
    __cil_tmp12 = (char *)__cil_tmp11;
    printk("%s gsr=%08x\n", __cil_tmp12, gsr);
    }
  } else {

  }
  info->irq_occurred = (bool )1;
  i = 0U;
  goto ldv_36953;
  ldv_36952: ;
  {
  __cil_tmp13 = (struct slgt_info *)0;
  __cil_tmp14 = (unsigned long )__cil_tmp13;
  __cil_tmp15 = info->port_array[i];
  __cil_tmp16 = (unsigned long )__cil_tmp15;
  if (__cil_tmp16 == __cil_tmp14) {
    goto ldv_36951;
  } else {

  }
  }
  {
  __cil_tmp17 = info->port_array[i];
  __cil_tmp18 = & __cil_tmp17->lock;
  spin_lock(__cil_tmp18);
  }
  {
  __cil_tmp19 = (int )i;
  __cil_tmp20 = 256 << __cil_tmp19;
  __cil_tmp21 = (unsigned int )__cil_tmp20;
  __cil_tmp22 = __cil_tmp21 & gsr;
  if (__cil_tmp22 != 0U) {
    {
    __cil_tmp23 = info->port_array[i];
    isr_serial(__cil_tmp23);
    }
  } else {

  }
  }
  {
  __cil_tmp24 = i * 2U;
  __cil_tmp25 = (int )__cil_tmp24;
  __cil_tmp26 = 65536 << __cil_tmp25;
  __cil_tmp27 = (unsigned int )__cil_tmp26;
  __cil_tmp28 = __cil_tmp27 & gsr;
  if (__cil_tmp28 != 0U) {
    {
    __cil_tmp29 = info->port_array[i];
    isr_rdma(__cil_tmp29);
    }
  } else {

  }
  }
  {
  __cil_tmp30 = i * 2U;
  __cil_tmp31 = (int )__cil_tmp30;
  __cil_tmp32 = 131072 << __cil_tmp31;
  __cil_tmp33 = (unsigned int )__cil_tmp32;
  __cil_tmp34 = __cil_tmp33 & gsr;
  if (__cil_tmp34 != 0U) {
    {
    __cil_tmp35 = info->port_array[i];
    isr_tdma(__cil_tmp35);
    }
  } else {

  }
  }
  {
  __cil_tmp36 = info->port_array[i];
  __cil_tmp37 = & __cil_tmp36->lock;
  spin_unlock(__cil_tmp37);
  }
  ldv_36951:
  i = i + 1U;
  ldv_36953: ;
  {
  __cil_tmp38 = info->port_count;
  __cil_tmp39 = (unsigned int )__cil_tmp38;
  if (__cil_tmp39 > i) {
    goto ldv_36952;
  } else {
    goto ldv_36954;
  }
  }
  ldv_36954: ;
  ldv_36956:
  {
  tmp = rd_reg32(info, 0U);
  gsr = tmp & 4294967040U;
  }
  if (gsr != 0U) {
    goto ldv_36955;
  } else {
    goto ldv_36957;
  }
  ldv_36957: ;
  {
  __cil_tmp40 = info->gpio_present;
  if (__cil_tmp40 != 0U) {
    {
    __cil_tmp41 = & info->lock;
    spin_lock(__cil_tmp41);
    }
    goto ldv_36964;
    ldv_36963: ;
    if (debug_level > 4) {
      {
      __cil_tmp42 = & info->device_name;
      __cil_tmp43 = (char *)__cil_tmp42;
      printk("%s iosr=%08x\n", __cil_tmp43, changed);
      }
    } else {

    }
    {
    state = rd_reg32(info, 16U);
    wr_reg32(info, 20U, changed);
    i = 0U;
    }
    goto ldv_36961;
    ldv_36960: ;
    {
    __cil_tmp44 = (struct slgt_info *)0;
    __cil_tmp45 = (unsigned long )__cil_tmp44;
    __cil_tmp46 = info->port_array[i];
    __cil_tmp47 = (unsigned long )__cil_tmp46;
    if (__cil_tmp47 != __cil_tmp45) {
      {
      __cil_tmp48 = info->port_array[i];
      isr_gpio(__cil_tmp48, changed, state);
      }
    } else {

    }
    }
    i = i + 1U;
    ldv_36961: ;
    {
    __cil_tmp49 = info->port_count;
    __cil_tmp50 = (unsigned int )__cil_tmp49;
    if (__cil_tmp50 > i) {
      goto ldv_36960;
    } else {
      goto ldv_36962;
    }
    }
    ldv_36962: ;
    ldv_36964:
    {
    changed = rd_reg32(info, 20U);
    }
    if (changed != 0U) {
      goto ldv_36963;
    } else {
      goto ldv_36965;
    }
    ldv_36965:
    {
    __cil_tmp51 = & info->lock;
    spin_unlock(__cil_tmp51);
    }
  } else {

  }
  }
  i = 0U;
  goto ldv_36969;
  ldv_36968:
  port = info->port_array[i];
  {
  __cil_tmp52 = (struct slgt_info *)0;
  __cil_tmp53 = (unsigned long )__cil_tmp52;
  __cil_tmp54 = (unsigned long )port;
  if (__cil_tmp54 == __cil_tmp53) {
    goto ldv_36967;
  } else {

  }
  }
  {
  __cil_tmp55 = & port->lock;
  spin_lock(__cil_tmp55);
  }
  {
  __cil_tmp56 = port->port.count;
  if (__cil_tmp56 != 0) {
    goto _L;
  } else {
    {
    __cil_tmp57 = port->netcount;
    if (__cil_tmp57 != 0) {
      _L:
      {
      __cil_tmp58 = port->pending_bh;
      if (__cil_tmp58 != 0U) {
        {
        __cil_tmp59 = port->bh_running;
        if (! __cil_tmp59) {
          {
          __cil_tmp60 = port->bh_requested;
          if (! __cil_tmp60) {
            if (debug_level > 4) {
              {
              __cil_tmp61 = & port->device_name;
              __cil_tmp62 = (char *)__cil_tmp61;
              printk("%s bh queued\n", __cil_tmp62);
              }
            } else {

            }
            {
            __cil_tmp63 = & port->task;
            schedule_work(__cil_tmp63);
            port->bh_requested = (bool )1;
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
    } else {

    }
    }
  }
  }
  {
  __cil_tmp64 = & port->lock;
  spin_unlock(__cil_tmp64);
  }
  ldv_36967:
  i = i + 1U;
  ldv_36969: ;
  {
  __cil_tmp65 = info->port_count;
  __cil_tmp66 = (unsigned int )__cil_tmp65;
  if (__cil_tmp66 > i) {
    goto ldv_36968;
  } else {
    goto ldv_36970;
  }
  }
  ldv_36970: ;
  if (debug_level > 4) {
    {
    __cil_tmp67 = info->irq_level;
    printk("slgt_interrupt irq=%d exit\n", __cil_tmp67);
    }
  } else {

  }
  return ((irqreturn_t )1);
}
}
static int startup(struct slgt_info *info )
{ void *tmp ;
  char (*__cil_tmp3)[25U] ;
  char *__cil_tmp4 ;
  unsigned long __cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  unsigned char *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned char *__cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  u32 __cil_tmp11 ;
  size_t __cil_tmp12 ;
  unsigned char *__cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  unsigned char *__cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  char (*__cil_tmp17)[25U] ;
  char *__cil_tmp18 ;
  struct mgsl_icount *__cil_tmp19 ;
  void *__cil_tmp20 ;
  struct tty_struct *__cil_tmp21 ;
  unsigned long __cil_tmp22 ;
  struct tty_struct *__cil_tmp23 ;
  unsigned long __cil_tmp24 ;
  struct tty_struct *__cil_tmp25 ;
  unsigned long *__cil_tmp26 ;
  unsigned long volatile *__cil_tmp27 ;
  unsigned long __cil_tmp28 ;

  {
  if (debug_level > 2) {
    {
    __cil_tmp3 = & info->device_name;
    __cil_tmp4 = (char *)__cil_tmp3;
    printk("%s startup\n", __cil_tmp4);
    }
  } else {

  }
  {
  __cil_tmp5 = info->port.flags;
  __cil_tmp6 = __cil_tmp5 & 2147483648UL;
  if (__cil_tmp6 != 0UL) {
    return (0);
  } else {

  }
  }
  {
  __cil_tmp7 = (unsigned char *)0;
  __cil_tmp8 = (unsigned long )__cil_tmp7;
  __cil_tmp9 = info->tx_buf;
  __cil_tmp10 = (unsigned long )__cil_tmp9;
  if (__cil_tmp10 == __cil_tmp8) {
    {
    __cil_tmp11 = info->max_frame_size;
    __cil_tmp12 = (size_t )__cil_tmp11;
    tmp = kmalloc(__cil_tmp12, 208U);
    info->tx_buf = (unsigned char *)tmp;
    }
    {
    __cil_tmp13 = (unsigned char *)0;
    __cil_tmp14 = (unsigned long )__cil_tmp13;
    __cil_tmp15 = info->tx_buf;
    __cil_tmp16 = (unsigned long )__cil_tmp15;
    if (__cil_tmp16 == __cil_tmp14) {
      if (debug_level > 1) {
        {
        __cil_tmp17 = & info->device_name;
        __cil_tmp18 = (char *)__cil_tmp17;
        printk("%s can\'t allocate tx buffer\n", __cil_tmp18);
        }
      } else {

      }
      return (-12);
    } else {

    }
    }
  } else {

  }
  }
  {
  info->pending_bh = 0U;
  __cil_tmp19 = & info->icount;
  __cil_tmp20 = (void *)__cil_tmp19;
  memset(__cil_tmp20, 0, 92UL);
  change_params(info);
  }
  {
  __cil_tmp21 = (struct tty_struct *)0;
  __cil_tmp22 = (unsigned long )__cil_tmp21;
  __cil_tmp23 = info->port.tty;
  __cil_tmp24 = (unsigned long )__cil_tmp23;
  if (__cil_tmp24 != __cil_tmp22) {
    {
    __cil_tmp25 = info->port.tty;
    __cil_tmp26 = & __cil_tmp25->flags;
    __cil_tmp27 = (unsigned long volatile *)__cil_tmp26;
    clear_bit(1, __cil_tmp27);
    }
  } else {

  }
  }
  __cil_tmp28 = info->port.flags;
  info->port.flags = __cil_tmp28 | 2147483648UL;
  return (0);
}
}
static void shutdown(struct slgt_info *info )
{ unsigned long flags ;
  raw_spinlock_t *tmp ;
  __u16 tmp___0 ;
  unsigned long __cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  char (*__cil_tmp7)[25U] ;
  char *__cil_tmp8 ;
  wait_queue_head_t *__cil_tmp9 ;
  void *__cil_tmp10 ;
  wait_queue_head_t *__cil_tmp11 ;
  void *__cil_tmp12 ;
  struct timer_list *__cil_tmp13 ;
  struct timer_list *__cil_tmp14 ;
  unsigned char *__cil_tmp15 ;
  void const *__cil_tmp16 ;
  spinlock_t *__cil_tmp17 ;
  int __cil_tmp18 ;
  int __cil_tmp19 ;
  __u16 __cil_tmp20 ;
  struct tty_struct *__cil_tmp21 ;
  unsigned long __cil_tmp22 ;
  struct tty_struct *__cil_tmp23 ;
  unsigned long __cil_tmp24 ;
  unsigned char __cil_tmp25 ;
  unsigned int __cil_tmp26 ;
  unsigned int __cil_tmp27 ;
  struct tty_struct *__cil_tmp28 ;
  struct ktermios *__cil_tmp29 ;
  tcflag_t __cil_tmp30 ;
  unsigned int __cil_tmp31 ;
  unsigned char __cil_tmp32 ;
  unsigned int __cil_tmp33 ;
  unsigned int __cil_tmp34 ;
  struct cond_wait **__cil_tmp35 ;
  spinlock_t *__cil_tmp36 ;
  struct tty_struct *__cil_tmp37 ;
  unsigned long __cil_tmp38 ;
  struct tty_struct *__cil_tmp39 ;
  unsigned long __cil_tmp40 ;
  struct tty_struct *__cil_tmp41 ;
  unsigned long *__cil_tmp42 ;
  unsigned long volatile *__cil_tmp43 ;
  unsigned long __cil_tmp44 ;

  {
  {
  __cil_tmp5 = info->port.flags;
  __cil_tmp6 = __cil_tmp5 & 2147483648UL;
  if (__cil_tmp6 == 0UL) {
    return;
  } else {

  }
  }
  if (debug_level > 2) {
    {
    __cil_tmp7 = & info->device_name;
    __cil_tmp8 = (char *)__cil_tmp7;
    printk("%s shutdown\n", __cil_tmp8);
    }
  } else {

  }
  {
  __cil_tmp9 = & info->status_event_wait_q;
  __cil_tmp10 = (void *)0;
  __wake_up(__cil_tmp9, 1U, 1, __cil_tmp10);
  __cil_tmp11 = & info->event_wait_q;
  __cil_tmp12 = (void *)0;
  __wake_up(__cil_tmp11, 1U, 1, __cil_tmp12);
  __cil_tmp13 = & info->tx_timer;
  del_timer_sync(__cil_tmp13);
  __cil_tmp14 = & info->rx_timer;
  del_timer_sync(__cil_tmp14);
  __cil_tmp15 = info->tx_buf;
  __cil_tmp16 = (void const *)__cil_tmp15;
  kfree(__cil_tmp16);
  info->tx_buf = (unsigned char *)0;
  __cil_tmp17 = & info->lock;
  tmp = spinlock_check(__cil_tmp17);
  flags = _raw_spin_lock_irqsave(tmp);
  tx_stop(info);
  rx_stop(info);
  tmp___0 = rd_reg16(info, 140U);
  __cil_tmp18 = (int )tmp___0;
  __cil_tmp19 = __cil_tmp18 & 49166;
  __cil_tmp20 = (__u16 )__cil_tmp19;
  wr_reg16(info, 140U, __cil_tmp20);
  }
  {
  __cil_tmp21 = (struct tty_struct *)0;
  __cil_tmp22 = (unsigned long )__cil_tmp21;
  __cil_tmp23 = info->port.tty;
  __cil_tmp24 = (unsigned long )__cil_tmp23;
  if (__cil_tmp24 == __cil_tmp22) {
    {
    __cil_tmp25 = info->signals;
    __cil_tmp26 = (unsigned int )__cil_tmp25;
    __cil_tmp27 = __cil_tmp26 & 95U;
    info->signals = (unsigned char )__cil_tmp27;
    set_signals(info);
    }
  } else {
    {
    __cil_tmp28 = info->port.tty;
    __cil_tmp29 = __cil_tmp28->termios;
    __cil_tmp30 = __cil_tmp29->c_cflag;
    __cil_tmp31 = __cil_tmp30 & 1024U;
    if (__cil_tmp31 != 0U) {
      {
      __cil_tmp32 = info->signals;
      __cil_tmp33 = (unsigned int )__cil_tmp32;
      __cil_tmp34 = __cil_tmp33 & 95U;
      info->signals = (unsigned char )__cil_tmp34;
      set_signals(info);
      }
    } else {

    }
    }
  }
  }
  {
  __cil_tmp35 = & info->gpio_wait_q;
  flush_cond_wait(__cil_tmp35);
  __cil_tmp36 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp36, flags);
  }
  {
  __cil_tmp37 = (struct tty_struct *)0;
  __cil_tmp38 = (unsigned long )__cil_tmp37;
  __cil_tmp39 = info->port.tty;
  __cil_tmp40 = (unsigned long )__cil_tmp39;
  if (__cil_tmp40 != __cil_tmp38) {
    {
    __cil_tmp41 = info->port.tty;
    __cil_tmp42 = & __cil_tmp41->flags;
    __cil_tmp43 = (unsigned long volatile *)__cil_tmp42;
    set_bit(1U, __cil_tmp43);
    }
  } else {

  }
  }
  __cil_tmp44 = info->port.flags;
  info->port.flags = __cil_tmp44 & 2147483647UL;
  return;
}
}
static void program_hw(struct slgt_info *info )
{ unsigned long flags ;
  raw_spinlock_t *tmp ;
  __u16 tmp___0 ;
  spinlock_t *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  int __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  int __cil_tmp10 ;
  __u16 __cil_tmp11 ;
  int __cil_tmp12 ;
  struct tty_struct *__cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  struct tty_struct *__cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  struct tty_struct *__cil_tmp17 ;
  struct ktermios *__cil_tmp18 ;
  tcflag_t __cil_tmp19 ;
  unsigned int __cil_tmp20 ;
  spinlock_t *__cil_tmp21 ;

  {
  {
  __cil_tmp5 = & info->lock;
  tmp = spinlock_check(__cil_tmp5);
  flags = _raw_spin_lock_irqsave(tmp);
  rx_stop(info);
  tx_stop(info);
  }
  {
  __cil_tmp6 = info->params.mode;
  if (__cil_tmp6 != 1UL) {
    {
    sync_mode(info);
    }
  } else {
    {
    __cil_tmp7 = info->netcount;
    if (__cil_tmp7 != 0) {
      {
      sync_mode(info);
      }
    } else {
      {
      async_mode(info);
      }
    }
    }
  }
  }
  {
  set_signals(info);
  info->dcd_chkcount = 0;
  info->cts_chkcount = 0;
  info->ri_chkcount = 0;
  info->dsr_chkcount = 0;
  tmp___0 = rd_reg16(info, 140U);
  __cil_tmp8 = (unsigned int )tmp___0;
  __cil_tmp9 = __cil_tmp8 | 240U;
  __cil_tmp10 = (int )__cil_tmp9;
  __cil_tmp11 = (__u16 )__cil_tmp10;
  wr_reg16(info, 140U, __cil_tmp11);
  get_signals(info);
  }
  {
  __cil_tmp12 = info->netcount;
  if (__cil_tmp12 != 0) {
    {
    rx_start(info);
    }
  } else {
    {
    __cil_tmp13 = (struct tty_struct *)0;
    __cil_tmp14 = (unsigned long )__cil_tmp13;
    __cil_tmp15 = info->port.tty;
    __cil_tmp16 = (unsigned long )__cil_tmp15;
    if (__cil_tmp16 != __cil_tmp14) {
      {
      __cil_tmp17 = info->port.tty;
      __cil_tmp18 = __cil_tmp17->termios;
      __cil_tmp19 = __cil_tmp18->c_cflag;
      __cil_tmp20 = __cil_tmp19 & 128U;
      if (__cil_tmp20 != 0U) {
        {
        rx_start(info);
        }
      } else {

      }
      }
    } else {

    }
    }
  }
  }
  {
  __cil_tmp21 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp21, flags);
  }
  return;
}
}
static void change_params(struct slgt_info *info )
{ unsigned int cflag ;
  int bits_per_char ;
  speed_t tmp ;
  struct tty_struct *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  struct tty_struct *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  struct ktermios *__cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  struct tty_struct *__cil_tmp11 ;
  struct ktermios *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  char (*__cil_tmp14)[25U] ;
  char *__cil_tmp15 ;
  struct tty_struct *__cil_tmp16 ;
  struct ktermios *__cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  unsigned char __cil_tmp19 ;
  unsigned int __cil_tmp20 ;
  unsigned int __cil_tmp21 ;
  unsigned char __cil_tmp22 ;
  unsigned int __cil_tmp23 ;
  unsigned int __cil_tmp24 ;
  unsigned int __cil_tmp25 ;
  int __cil_tmp26 ;
  unsigned int __cil_tmp27 ;
  int __cil_tmp28 ;
  unsigned int __cil_tmp29 ;
  int __cil_tmp30 ;
  unsigned int __cil_tmp31 ;
  int __cil_tmp32 ;
  unsigned int __cil_tmp33 ;
  unsigned int __cil_tmp34 ;
  unsigned int __cil_tmp35 ;
  unsigned char __cil_tmp36 ;
  int __cil_tmp37 ;
  unsigned char __cil_tmp38 ;
  int __cil_tmp39 ;
  int __cil_tmp40 ;
  struct tty_struct *__cil_tmp41 ;
  unsigned long __cil_tmp42 ;
  unsigned long __cil_tmp43 ;
  int __cil_tmp44 ;
  unsigned long __cil_tmp45 ;
  unsigned long __cil_tmp46 ;
  int __cil_tmp47 ;
  int __cil_tmp48 ;
  unsigned long __cil_tmp49 ;
  unsigned long __cil_tmp50 ;
  unsigned int __cil_tmp51 ;
  unsigned long __cil_tmp52 ;
  unsigned long __cil_tmp53 ;
  struct tty_struct *__cil_tmp54 ;
  struct ktermios *__cil_tmp55 ;
  tcflag_t __cil_tmp56 ;
  unsigned int __cil_tmp57 ;
  unsigned int __cil_tmp58 ;
  struct tty_struct *__cil_tmp59 ;
  struct ktermios *__cil_tmp60 ;
  tcflag_t __cil_tmp61 ;
  unsigned int __cil_tmp62 ;
  unsigned int __cil_tmp63 ;
  struct tty_struct *__cil_tmp64 ;
  struct ktermios *__cil_tmp65 ;
  tcflag_t __cil_tmp66 ;
  unsigned int __cil_tmp67 ;
  unsigned int __cil_tmp68 ;
  struct tty_struct *__cil_tmp69 ;
  struct ktermios *__cil_tmp70 ;
  tcflag_t __cil_tmp71 ;
  unsigned int __cil_tmp72 ;
  unsigned int __cil_tmp73 ;
  struct tty_struct *__cil_tmp74 ;
  struct ktermios *__cil_tmp75 ;
  tcflag_t __cil_tmp76 ;
  int __cil_tmp77 ;
  unsigned int __cil_tmp78 ;
  struct tty_struct *__cil_tmp79 ;
  struct ktermios *__cil_tmp80 ;
  tcflag_t __cil_tmp81 ;
  unsigned int __cil_tmp82 ;
  unsigned int __cil_tmp83 ;

  {
  {
  __cil_tmp5 = (struct tty_struct *)0;
  __cil_tmp6 = (unsigned long )__cil_tmp5;
  __cil_tmp7 = info->port.tty;
  __cil_tmp8 = (unsigned long )__cil_tmp7;
  if (__cil_tmp8 == __cil_tmp6) {
    return;
  } else {
    {
    __cil_tmp9 = (struct ktermios *)0;
    __cil_tmp10 = (unsigned long )__cil_tmp9;
    __cil_tmp11 = info->port.tty;
    __cil_tmp12 = __cil_tmp11->termios;
    __cil_tmp13 = (unsigned long )__cil_tmp12;
    if (__cil_tmp13 == __cil_tmp10) {
      return;
    } else {

    }
    }
  }
  }
  if (debug_level > 2) {
    {
    __cil_tmp14 = & info->device_name;
    __cil_tmp15 = (char *)__cil_tmp14;
    printk("%s change_params\n", __cil_tmp15);
    }
  } else {

  }
  __cil_tmp16 = info->port.tty;
  __cil_tmp17 = __cil_tmp16->termios;
  cflag = __cil_tmp17->c_cflag;
  {
  __cil_tmp18 = cflag & 4111U;
  if (__cil_tmp18 != 0U) {
    __cil_tmp19 = info->signals;
    __cil_tmp20 = (unsigned int )__cil_tmp19;
    __cil_tmp21 = __cil_tmp20 | 160U;
    info->signals = (unsigned char )__cil_tmp21;
  } else {
    __cil_tmp22 = info->signals;
    __cil_tmp23 = (unsigned int )__cil_tmp22;
    __cil_tmp24 = __cil_tmp23 & 95U;
    info->signals = (unsigned char )__cil_tmp24;
  }
  }
  {
  __cil_tmp25 = cflag & 48U;
  __cil_tmp26 = (int )__cil_tmp25;
  if (__cil_tmp26 == 0) {
    goto case_0;
  } else {
    {
    __cil_tmp27 = cflag & 48U;
    __cil_tmp28 = (int )__cil_tmp27;
    if (__cil_tmp28 == 16) {
      goto case_16;
    } else {
      {
      __cil_tmp29 = cflag & 48U;
      __cil_tmp30 = (int )__cil_tmp29;
      if (__cil_tmp30 == 32) {
        goto case_32;
      } else {
        {
        __cil_tmp31 = cflag & 48U;
        __cil_tmp32 = (int )__cil_tmp31;
        if (__cil_tmp32 == 48) {
          goto case_48;
        } else {
          goto switch_default;
          if (0) {
            case_0:
            info->params.data_bits = (unsigned char)5;
            goto ldv_36994;
            case_16:
            info->params.data_bits = (unsigned char)6;
            goto ldv_36994;
            case_32:
            info->params.data_bits = (unsigned char)7;
            goto ldv_36994;
            case_48:
            info->params.data_bits = (unsigned char)8;
            goto ldv_36994;
            switch_default:
            info->params.data_bits = (unsigned char)7;
            goto ldv_36994;
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
  ldv_36994: ;
  {
  __cil_tmp33 = cflag & 64U;
  if (__cil_tmp33 != 0U) {
    info->params.stop_bits = (unsigned char)2;
  } else {
    info->params.stop_bits = (unsigned char)1;
  }
  }
  {
  __cil_tmp34 = cflag & 256U;
  if (__cil_tmp34 != 0U) {
    {
    __cil_tmp35 = cflag & 512U;
    if (__cil_tmp35 != 0U) {
      info->params.parity = (unsigned char)2;
    } else {
      info->params.parity = (unsigned char)1;
    }
    }
  } else {
    info->params.parity = (unsigned char)0;
  }
  }
  {
  __cil_tmp36 = info->params.stop_bits;
  __cil_tmp37 = (int )__cil_tmp36;
  __cil_tmp38 = info->params.data_bits;
  __cil_tmp39 = (int )__cil_tmp38;
  __cil_tmp40 = __cil_tmp39 + __cil_tmp37;
  bits_per_char = __cil_tmp40 + 1;
  __cil_tmp41 = info->port.tty;
  tmp = tty_get_baud_rate(__cil_tmp41);
  info->params.data_rate = (unsigned long )tmp;
  }
  {
  __cil_tmp42 = info->params.data_rate;
  if (__cil_tmp42 != 0UL) {
    __cil_tmp43 = info->params.data_rate;
    __cil_tmp44 = bits_per_char * 8000;
    __cil_tmp45 = (unsigned long )__cil_tmp44;
    __cil_tmp46 = __cil_tmp45 / __cil_tmp43;
    info->timeout = (int )__cil_tmp46;
  } else {

  }
  }
  __cil_tmp47 = info->timeout;
  info->timeout = __cil_tmp47 + 5;
  {
  __cil_tmp48 = (int )cflag;
  if (__cil_tmp48 < 0) {
    __cil_tmp49 = info->port.flags;
    info->port.flags = __cil_tmp49 | 67108864UL;
  } else {
    __cil_tmp50 = info->port.flags;
    info->port.flags = __cil_tmp50 & 4227858431UL;
  }
  }
  {
  __cil_tmp51 = cflag & 2048U;
  if (__cil_tmp51 != 0U) {
    __cil_tmp52 = info->port.flags;
    info->port.flags = __cil_tmp52 & 4261412863UL;
  } else {
    __cil_tmp53 = info->port.flags;
    info->port.flags = __cil_tmp53 | 33554432UL;
  }
  }
  info->read_status_mask = 256U;
  {
  __cil_tmp54 = info->port.tty;
  __cil_tmp55 = __cil_tmp54->termios;
  __cil_tmp56 = __cil_tmp55->c_iflag;
  __cil_tmp57 = __cil_tmp56 & 16U;
  if (__cil_tmp57 != 0U) {
    __cil_tmp58 = info->read_status_mask;
    info->read_status_mask = __cil_tmp58 | 3U;
  } else {

  }
  }
  {
  __cil_tmp59 = info->port.tty;
  __cil_tmp60 = __cil_tmp59->termios;
  __cil_tmp61 = __cil_tmp60->c_iflag;
  __cil_tmp62 = __cil_tmp61 & 2U;
  if (__cil_tmp62 != 0U) {
    __cil_tmp63 = info->read_status_mask;
    info->read_status_mask = __cil_tmp63 | 16384U;
  } else {
    {
    __cil_tmp64 = info->port.tty;
    __cil_tmp65 = __cil_tmp64->termios;
    __cil_tmp66 = __cil_tmp65->c_iflag;
    __cil_tmp67 = __cil_tmp66 & 8U;
    if (__cil_tmp67 != 0U) {
      __cil_tmp68 = info->read_status_mask;
      info->read_status_mask = __cil_tmp68 | 16384U;
    } else {

    }
    }
  }
  }
  {
  __cil_tmp69 = info->port.tty;
  __cil_tmp70 = __cil_tmp69->termios;
  __cil_tmp71 = __cil_tmp70->c_iflag;
  __cil_tmp72 = __cil_tmp71 & 4U;
  if (__cil_tmp72 != 0U) {
    __cil_tmp73 = info->ignore_status_mask;
    info->ignore_status_mask = __cil_tmp73 | 3U;
  } else {

  }
  }
  {
  __cil_tmp74 = info->port.tty;
  __cil_tmp75 = __cil_tmp74->termios;
  __cil_tmp76 = __cil_tmp75->c_iflag;
  __cil_tmp77 = (int )__cil_tmp76;
  if (__cil_tmp77 & 1) {
    __cil_tmp78 = info->ignore_status_mask;
    info->ignore_status_mask = __cil_tmp78 | 16384U;
    {
    __cil_tmp79 = info->port.tty;
    __cil_tmp80 = __cil_tmp79->termios;
    __cil_tmp81 = __cil_tmp80->c_iflag;
    __cil_tmp82 = __cil_tmp81 & 4U;
    if (__cil_tmp82 != 0U) {
      __cil_tmp83 = info->ignore_status_mask;
      info->ignore_status_mask = __cil_tmp83 | 16U;
    } else {

    }
    }
  } else {

  }
  }
  {
  program_hw(info);
  }
  return;
}
}
static int get_stats(struct slgt_info *info , struct mgsl_icount *user_icount )
{ int tmp ;
  char (*__cil_tmp4)[25U] ;
  char *__cil_tmp5 ;
  struct mgsl_icount *__cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  struct mgsl_icount *__cil_tmp9 ;
  void *__cil_tmp10 ;
  void *__cil_tmp11 ;
  struct mgsl_icount *__cil_tmp12 ;
  void const *__cil_tmp13 ;

  {
  if (debug_level > 2) {
    {
    __cil_tmp4 = & info->device_name;
    __cil_tmp5 = (char *)__cil_tmp4;
    printk("%s get_stats\n", __cil_tmp5);
    }
  } else {

  }
  {
  __cil_tmp6 = (struct mgsl_icount *)0;
  __cil_tmp7 = (unsigned long )__cil_tmp6;
  __cil_tmp8 = (unsigned long )user_icount;
  if (__cil_tmp8 == __cil_tmp7) {
    {
    __cil_tmp9 = & info->icount;
    __cil_tmp10 = (void *)__cil_tmp9;
    memset(__cil_tmp10, 0, 92UL);
    }
  } else {
    {
    __cil_tmp11 = (void *)user_icount;
    __cil_tmp12 = & info->icount;
    __cil_tmp13 = (void const *)__cil_tmp12;
    tmp = copy_to_user(__cil_tmp11, __cil_tmp13, 92U);
    }
    if (tmp != 0) {
      return (-14);
    } else {

    }
  }
  }
  return (0);
}
}
static int get_params(struct slgt_info *info , MGSL_PARAMS *user_params )
{ int tmp ;
  char (*__cil_tmp4)[25U] ;
  char *__cil_tmp5 ;
  void *__cil_tmp6 ;
  MGSL_PARAMS *__cil_tmp7 ;
  void const *__cil_tmp8 ;

  {
  if (debug_level > 2) {
    {
    __cil_tmp4 = & info->device_name;
    __cil_tmp5 = (char *)__cil_tmp4;
    printk("%s get_params\n", __cil_tmp5);
    }
  } else {

  }
  {
  __cil_tmp6 = (void *)user_params;
  __cil_tmp7 = & info->params;
  __cil_tmp8 = (void const *)__cil_tmp7;
  tmp = copy_to_user(__cil_tmp6, __cil_tmp8, 48U);
  }
  if (tmp != 0) {
    return (-14);
  } else {

  }
  return (0);
}
}
static int set_params(struct slgt_info *info , MGSL_PARAMS *new_params )
{ unsigned long flags ;
  MGSL_PARAMS tmp_params ;
  unsigned long tmp ;
  raw_spinlock_t *tmp___0 ;
  size_t __len ;
  void *__ret ;
  char (*__cil_tmp9)[25U] ;
  char *__cil_tmp10 ;
  void *__cil_tmp11 ;
  void const *__cil_tmp12 ;
  spinlock_t *__cil_tmp13 ;
  MGSL_PARAMS *__cil_tmp14 ;
  void *__cil_tmp15 ;
  void const *__cil_tmp16 ;
  MGSL_PARAMS *__cil_tmp17 ;
  void *__cil_tmp18 ;
  void const *__cil_tmp19 ;
  spinlock_t *__cil_tmp20 ;

  {
  if (debug_level > 2) {
    {
    __cil_tmp9 = & info->device_name;
    __cil_tmp10 = (char *)__cil_tmp9;
    printk("%s set_params\n", __cil_tmp10);
    }
  } else {

  }
  {
  __cil_tmp11 = (void *)(& tmp_params);
  __cil_tmp12 = (void const *)new_params;
  tmp = copy_from_user(__cil_tmp11, __cil_tmp12, 48UL);
  }
  if (tmp != 0UL) {
    return (-14);
  } else {

  }
  {
  __cil_tmp13 = & info->lock;
  tmp___0 = spinlock_check(__cil_tmp13);
  flags = _raw_spin_lock_irqsave(tmp___0);
  }
  if (tmp_params.mode == 7UL) {
    info->base_clock = (unsigned int )tmp_params.clock_speed;
  } else {
    __len = 48UL;
    if (__len > 63UL) {
      {
      __cil_tmp14 = & info->params;
      __cil_tmp15 = (void *)__cil_tmp14;
      __cil_tmp16 = (void const *)(& tmp_params);
      __ret = __memcpy(__cil_tmp15, __cil_tmp16, __len);
      }
    } else {
      {
      __cil_tmp17 = & info->params;
      __cil_tmp18 = (void *)__cil_tmp17;
      __cil_tmp19 = (void const *)(& tmp_params);
      __ret = __builtin_memcpy(__cil_tmp18, __cil_tmp19, __len);
      }
    }
  }
  {
  __cil_tmp20 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp20, flags);
  program_hw(info);
  }
  return (0);
}
}
static int get_txidle(struct slgt_info *info , int *idle_mode )
{ int __ret_pu ;
  int __pu_val ;
  char (*__cil_tmp5)[25U] ;
  char *__cil_tmp6 ;
  u32 __cil_tmp7 ;
  u32 __cil_tmp8 ;

  {
  if (debug_level > 2) {
    {
    __cil_tmp5 = & info->device_name;
    __cil_tmp6 = (char *)__cil_tmp5;
    __cil_tmp7 = info->idle_mode;
    printk("%s get_txidle=%d\n", __cil_tmp6, __cil_tmp7);
    }
  } else {

  }
  {
  might_fault();
  __cil_tmp8 = info->idle_mode;
  __pu_val = (int )__cil_tmp8;
  }
  if (1) {
    goto case_4;
  } else {
    goto switch_default;
    if (0) {
      __asm__ volatile ("call __put_user_1": "=a" (__ret_pu): "0" (__pu_val), "c" (idle_mode): "ebx");
      goto ldv_37026;
      __asm__ volatile ("call __put_user_2": "=a" (__ret_pu): "0" (__pu_val), "c" (idle_mode): "ebx");
      goto ldv_37026;
      case_4:
      __asm__ volatile ("call __put_user_4": "=a" (__ret_pu): "0" (__pu_val), "c" (idle_mode): "ebx");
      goto ldv_37026;
      __asm__ volatile ("call __put_user_8": "=a" (__ret_pu): "0" (__pu_val), "c" (idle_mode): "ebx");
      goto ldv_37026;
      switch_default:
      __asm__ volatile ("call __put_user_X": "=a" (__ret_pu): "0" (__pu_val), "c" (idle_mode): "ebx");
      goto ldv_37026;
    } else {

    }
  }
  ldv_37026: ;
  if (__ret_pu != 0) {
    return (-14);
  } else {

  }
  return (0);
}
}
static int set_txidle(struct slgt_info *info , int idle_mode )
{ unsigned long flags ;
  raw_spinlock_t *tmp ;
  char (*__cil_tmp5)[25U] ;
  char *__cil_tmp6 ;
  spinlock_t *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  spinlock_t *__cil_tmp9 ;

  {
  if (debug_level > 2) {
    {
    __cil_tmp5 = & info->device_name;
    __cil_tmp6 = (char *)__cil_tmp5;
    printk("%s set_txidle(%d)\n", __cil_tmp6, idle_mode);
    }
  } else {

  }
  {
  __cil_tmp7 = & info->lock;
  tmp = spinlock_check(__cil_tmp7);
  flags = _raw_spin_lock_irqsave(tmp);
  info->idle_mode = (u32 )idle_mode;
  }
  {
  __cil_tmp8 = info->params.mode;
  if (__cil_tmp8 != 1UL) {
    {
    tx_set_idle(info);
    }
  } else {

  }
  }
  {
  __cil_tmp9 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp9, flags);
  }
  return (0);
}
}
static int tx_enable(struct slgt_info *info , int enable )
{ unsigned long flags ;
  raw_spinlock_t *tmp ;
  char (*__cil_tmp5)[25U] ;
  char *__cil_tmp6 ;
  spinlock_t *__cil_tmp7 ;
  bool __cil_tmp8 ;
  bool __cil_tmp9 ;
  spinlock_t *__cil_tmp10 ;

  {
  if (debug_level > 2) {
    {
    __cil_tmp5 = & info->device_name;
    __cil_tmp6 = (char *)__cil_tmp5;
    printk("%s tx_enable(%d)\n", __cil_tmp6, enable);
    }
  } else {

  }
  {
  __cil_tmp7 = & info->lock;
  tmp = spinlock_check(__cil_tmp7);
  flags = _raw_spin_lock_irqsave(tmp);
  }
  if (enable != 0) {
    {
    __cil_tmp8 = info->tx_enabled;
    if (! __cil_tmp8) {
      {
      tx_start(info);
      }
    } else {
      {
      __cil_tmp9 = info->tx_enabled;
      if ((int )__cil_tmp9) {
        {
        tx_stop(info);
        }
      } else {

      }
      }
    }
    }
  } else {

  }
  {
  __cil_tmp10 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp10, flags);
  }
  return (0);
}
}
static int tx_abort(struct slgt_info *info )
{ unsigned long flags ;
  raw_spinlock_t *tmp ;
  char (*__cil_tmp4)[25U] ;
  char *__cil_tmp5 ;
  spinlock_t *__cil_tmp6 ;
  spinlock_t *__cil_tmp7 ;

  {
  if (debug_level > 2) {
    {
    __cil_tmp4 = & info->device_name;
    __cil_tmp5 = (char *)__cil_tmp4;
    printk("%s tx_abort\n", __cil_tmp5);
    }
  } else {

  }
  {
  __cil_tmp6 = & info->lock;
  tmp = spinlock_check(__cil_tmp6);
  flags = _raw_spin_lock_irqsave(tmp);
  tdma_reset(info);
  __cil_tmp7 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp7, flags);
  }
  return (0);
}
}
static int rx_enable(struct slgt_info *info , int enable )
{ unsigned long flags ;
  unsigned int rbuf_fill_level ;
  raw_spinlock_t *tmp ;
  __u16 tmp___0 ;
  char (*__cil_tmp7)[25U] ;
  char *__cil_tmp8 ;
  spinlock_t *__cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  spinlock_t *__cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  spinlock_t *__cil_tmp13 ;
  bool __cil_tmp14 ;
  unsigned int __cil_tmp15 ;
  unsigned int __cil_tmp16 ;
  int __cil_tmp17 ;
  __u16 __cil_tmp18 ;
  bool __cil_tmp19 ;
  spinlock_t *__cil_tmp20 ;

  {
  if (debug_level > 2) {
    {
    __cil_tmp7 = & info->device_name;
    __cil_tmp8 = (char *)__cil_tmp7;
    printk("%s rx_enable(%08x)\n", __cil_tmp8, enable);
    }
  } else {

  }
  {
  __cil_tmp9 = & info->lock;
  tmp = spinlock_check(__cil_tmp9);
  flags = _raw_spin_lock_irqsave(tmp);
  __cil_tmp10 = (unsigned int )enable;
  rbuf_fill_level = __cil_tmp10 >> 16;
  }
  if (rbuf_fill_level != 0U) {
    if (rbuf_fill_level > 256U) {
      {
      __cil_tmp11 = & info->lock;
      spin_unlock_irqrestore(__cil_tmp11, flags);
      }
      return (-22);
    } else {
      {
      __cil_tmp12 = rbuf_fill_level & 3U;
      if (__cil_tmp12 != 0U) {
        {
        __cil_tmp13 = & info->lock;
        spin_unlock_irqrestore(__cil_tmp13, flags);
        }
        return (-22);
      } else {

      }
      }
    }
    info->rbuf_fill_level = rbuf_fill_level;
    if (rbuf_fill_level <= 127U) {
      info->rx_pio = 1U;
    } else {
      info->rx_pio = 0U;
    }
    {
    rx_stop(info);
    }
  } else {

  }
  enable = enable & 3;
  if (enable != 0) {
    {
    __cil_tmp14 = info->rx_enabled;
    if (! __cil_tmp14) {
      {
      rx_start(info);
      }
    } else
    if (enable == 2) {
      {
      tmp___0 = rd_reg16(info, 134U);
      __cil_tmp15 = (unsigned int )tmp___0;
      __cil_tmp16 = __cil_tmp15 | 8U;
      __cil_tmp17 = (int )__cil_tmp16;
      __cil_tmp18 = (__u16 )__cil_tmp17;
      wr_reg16(info, 134U, __cil_tmp18);
      }
    } else {
      {
      __cil_tmp19 = info->rx_enabled;
      if ((int )__cil_tmp19) {
        {
        rx_stop(info);
        }
      } else {

      }
      }
    }
    }
  } else {

  }
  {
  __cil_tmp20 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp20, flags);
  }
  return (0);
}
}
static int wait_mgsl_event(struct slgt_info *info , int *mask_ptr )
{ unsigned long flags ;
  int s ;
  int rc ;
  struct mgsl_icount cprev ;
  struct mgsl_icount cnow ;
  int events ;
  int mask ;
  struct _input_signal_events oldsigs ;
  struct _input_signal_events newsigs ;
  wait_queue_t wait ;
  struct task_struct *tmp ;
  int __ret_gu ;
  unsigned long __val_gu ;
  raw_spinlock_t *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  unsigned short val ;
  __u16 tmp___5 ;
  long volatile __x ;
  u8 volatile *__ptr ;
  struct task_struct *tmp___6 ;
  u16 volatile *__ptr___0 ;
  struct task_struct *tmp___7 ;
  u32 volatile *__ptr___1 ;
  struct task_struct *tmp___8 ;
  u64 volatile *__ptr___2 ;
  struct task_struct *tmp___9 ;
  struct task_struct *tmp___10 ;
  int tmp___11 ;
  raw_spinlock_t *tmp___12 ;
  long volatile __x___0 ;
  u8 volatile *__ptr___3 ;
  struct task_struct *tmp___13 ;
  u16 volatile *__ptr___4 ;
  struct task_struct *tmp___14 ;
  u32 volatile *__ptr___5 ;
  struct task_struct *tmp___15 ;
  u64 volatile *__ptr___6 ;
  struct task_struct *tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  long volatile __x___1 ;
  u8 volatile *__ptr___7 ;
  struct task_struct *tmp___26 ;
  u16 volatile *__ptr___8 ;
  struct task_struct *tmp___27 ;
  u32 volatile *__ptr___9 ;
  struct task_struct *tmp___28 ;
  u64 volatile *__ptr___10 ;
  struct task_struct *tmp___29 ;
  raw_spinlock_t *tmp___30 ;
  __u16 tmp___31 ;
  int tmp___32 ;
  int __ret_pu ;
  int __pu_val ;
  char (*__cil_tmp67)[25U] ;
  char *__cil_tmp68 ;
  spinlock_t *__cil_tmp69 ;
  unsigned char __cil_tmp70 ;
  int __cil_tmp71 ;
  int __cil_tmp72 ;
  int __cil_tmp73 ;
  int __cil_tmp74 ;
  int __cil_tmp75 ;
  int __cil_tmp76 ;
  spinlock_t *__cil_tmp77 ;
  int __cil_tmp78 ;
  int __cil_tmp79 ;
  int __cil_tmp80 ;
  unsigned int __cil_tmp81 ;
  unsigned int __cil_tmp82 ;
  int __cil_tmp83 ;
  __u16 __cil_tmp84 ;
  long volatile *__cil_tmp85 ;
  long volatile *__cil_tmp86 ;
  long volatile *__cil_tmp87 ;
  long volatile *__cil_tmp88 ;
  wait_queue_head_t *__cil_tmp89 ;
  spinlock_t *__cil_tmp90 ;
  spinlock_t *__cil_tmp91 ;
  long volatile *__cil_tmp92 ;
  long volatile *__cil_tmp93 ;
  long volatile *__cil_tmp94 ;
  long volatile *__cil_tmp95 ;
  spinlock_t *__cil_tmp96 ;
  int __cil_tmp97 ;
  int __cil_tmp98 ;
  int __cil_tmp99 ;
  int __cil_tmp100 ;
  int __cil_tmp101 ;
  int __cil_tmp102 ;
  int __cil_tmp103 ;
  int __cil_tmp104 ;
  int __cil_tmp105 ;
  int __cil_tmp106 ;
  wait_queue_head_t *__cil_tmp107 ;
  long volatile *__cil_tmp108 ;
  long volatile *__cil_tmp109 ;
  long volatile *__cil_tmp110 ;
  long volatile *__cil_tmp111 ;
  int __cil_tmp112 ;
  spinlock_t *__cil_tmp113 ;
  wait_queue_head_t *__cil_tmp114 ;
  int __cil_tmp115 ;
  int __cil_tmp116 ;
  __u16 __cil_tmp117 ;
  spinlock_t *__cil_tmp118 ;

  {
  {
  rc = 0;
  tmp = get_current();
  wait.flags = 0U;
  wait.private = (void *)tmp;
  wait.func = & default_wake_function;
  wait.task_list.next = (struct list_head *)0;
  wait.task_list.prev = (struct list_head *)0;
  might_fault();
  }
  if (1) {
    goto case_4;
  } else {
    goto switch_default;
    if (0) {
      __asm__ volatile ("call __get_user_1": "=a" (__ret_gu), "=d" (__val_gu): "0" (mask_ptr));
      goto ldv_37081;
      __asm__ volatile ("call __get_user_2": "=a" (__ret_gu), "=d" (__val_gu): "0" (mask_ptr));
      goto ldv_37081;
      case_4:
      __asm__ volatile ("call __get_user_4": "=a" (__ret_gu), "=d" (__val_gu): "0" (mask_ptr));
      goto ldv_37081;
      __asm__ volatile ("call __get_user_8": "=a" (__ret_gu), "=d" (__val_gu): "0" (mask_ptr));
      goto ldv_37081;
      switch_default:
      __asm__ volatile ("call __get_user_X": "=a" (__ret_gu), "=d" (__val_gu): "0" (mask_ptr));
      goto ldv_37081;
    } else {

    }
  }
  ldv_37081:
  mask = (int )__val_gu;
  if (__ret_gu != 0) {
    return (-14);
  } else {

  }
  if (debug_level > 2) {
    {
    __cil_tmp67 = & info->device_name;
    __cil_tmp68 = (char *)__cil_tmp67;
    printk("%s wait_mgsl_event(%d)\n", __cil_tmp68, mask);
    }
  } else {

  }
  {
  __cil_tmp69 = & info->lock;
  tmp___0 = spinlock_check(__cil_tmp69);
  flags = _raw_spin_lock_irqsave(tmp___0);
  get_signals(info);
  __cil_tmp70 = info->signals;
  s = (int )__cil_tmp70;
  }
  {
  __cil_tmp71 = s & 64;
  if (__cil_tmp71 != 0) {
    tmp___1 = 1;
  } else {
    tmp___1 = 2;
  }
  }
  if (s & 1) {
    tmp___2 = 16;
  } else {
    tmp___2 = 32;
  }
  {
  __cil_tmp72 = s & 16;
  if (__cil_tmp72 != 0) {
    tmp___3 = 4;
  } else {
    tmp___3 = 8;
  }
  }
  {
  __cil_tmp73 = s & 4;
  if (__cil_tmp73 != 0) {
    tmp___4 = 64;
  } else {
    tmp___4 = 128;
  }
  }
  __cil_tmp74 = tmp___1 + tmp___2;
  __cil_tmp75 = __cil_tmp74 + tmp___3;
  __cil_tmp76 = __cil_tmp75 + tmp___4;
  events = __cil_tmp76 & mask;
  if (events != 0) {
    {
    __cil_tmp77 = & info->lock;
    spin_unlock_irqrestore(__cil_tmp77, flags);
    }
    goto exit;
  } else {

  }
  cprev = info->icount;
  oldsigs = info->input_signal_events;
  {
  __cil_tmp78 = mask & 768;
  if (__cil_tmp78 != 0) {
    {
    tmp___5 = rd_reg16(info, 140U);
    val = tmp___5;
    }
    {
    __cil_tmp79 = (int )val;
    __cil_tmp80 = __cil_tmp79 & 512;
    if (__cil_tmp80 == 0) {
      {
      __cil_tmp81 = (unsigned int )val;
      __cil_tmp82 = __cil_tmp81 | 512U;
      __cil_tmp83 = (int )__cil_tmp82;
      __cil_tmp84 = (__u16 )__cil_tmp83;
      wr_reg16(info, 140U, __cil_tmp84);
      }
    } else {

    }
    }
  } else {

  }
  }
  __x = (long volatile )1L;
  if (1) {
    goto case_8___0;
  } else {
    goto switch_default___0;
    if (0) {
      {
      tmp___6 = get_current();
      __cil_tmp85 = & tmp___6->state;
      __ptr = (u8 volatile *)__cil_tmp85;
      __asm__ volatile ("xchgb %0,%1": "=q" (__x), "+m" (*__ptr): "0" (__x): "memory");
      }
      goto ldv_37095;
      {
      tmp___7 = get_current();
      __cil_tmp86 = & tmp___7->state;
      __ptr___0 = (u16 volatile *)__cil_tmp86;
      __asm__ volatile ("xchgw %0,%1": "=r" (__x), "+m" (*__ptr___0): "0" (__x): "memory");
      }
      goto ldv_37095;
      {
      tmp___8 = get_current();
      __cil_tmp87 = & tmp___8->state;
      __ptr___1 = (u32 volatile *)__cil_tmp87;
      __asm__ volatile ("xchgl %0,%1": "=r" (__x), "+m" (*__ptr___1): "0" (__x): "memory");
      }
      goto ldv_37095;
      case_8___0:
      {
      tmp___9 = get_current();
      __cil_tmp88 = & tmp___9->state;
      __ptr___2 = (u64 volatile *)__cil_tmp88;
      __asm__ volatile ("xchgq %0,%1": "=r" (__x), "+m" (*__ptr___2): "0" (__x): "memory");
      }
      goto ldv_37095;
      switch_default___0:
      {
      __xchg_wrong_size();
      }
    } else {

    }
  }
  ldv_37095:
  {
  __cil_tmp89 = & info->event_wait_q;
  add_wait_queue(__cil_tmp89, & wait);
  __cil_tmp90 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp90, flags);
  }
  ldv_37120:
  {
  schedule();
  tmp___10 = get_current();
  tmp___11 = signal_pending(tmp___10);
  }
  if (tmp___11 != 0) {
    rc = -512;
    goto ldv_37104;
  } else {

  }
  {
  __cil_tmp91 = & info->lock;
  tmp___12 = spinlock_check(__cil_tmp91);
  flags = _raw_spin_lock_irqsave(tmp___12);
  cnow = info->icount;
  newsigs = info->input_signal_events;
  __x___0 = (long volatile )1L;
  }
  if (1) {
    goto case_8___1;
  } else {
    goto switch_default___1;
    if (0) {
      {
      tmp___13 = get_current();
      __cil_tmp92 = & tmp___13->state;
      __ptr___3 = (u8 volatile *)__cil_tmp92;
      __asm__ volatile ("xchgb %0,%1": "=q" (__x___0), "+m" (*__ptr___3): "0" (__x___0): "memory");
      }
      goto ldv_37111;
      {
      tmp___14 = get_current();
      __cil_tmp93 = & tmp___14->state;
      __ptr___4 = (u16 volatile *)__cil_tmp93;
      __asm__ volatile ("xchgw %0,%1": "=r" (__x___0), "+m" (*__ptr___4): "0" (__x___0): "memory");
      }
      goto ldv_37111;
      {
      tmp___15 = get_current();
      __cil_tmp94 = & tmp___15->state;
      __ptr___5 = (u32 volatile *)__cil_tmp94;
      __asm__ volatile ("xchgl %0,%1": "=r" (__x___0), "+m" (*__ptr___5): "0" (__x___0): "memory");
      }
      goto ldv_37111;
      case_8___1:
      {
      tmp___16 = get_current();
      __cil_tmp95 = & tmp___16->state;
      __ptr___6 = (u64 volatile *)__cil_tmp95;
      __asm__ volatile ("xchgq %0,%1": "=r" (__x___0), "+m" (*__ptr___6): "0" (__x___0): "memory");
      }
      goto ldv_37111;
      switch_default___1:
      {
      __xchg_wrong_size();
      }
    } else {

    }
  }
  ldv_37111:
  {
  __cil_tmp96 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp96, flags);
  }
  if (newsigs.dsr_up == oldsigs.dsr_up) {
    if (newsigs.dsr_down == oldsigs.dsr_down) {
      if (newsigs.dcd_up == oldsigs.dcd_up) {
        if (newsigs.dcd_down == oldsigs.dcd_down) {
          if (newsigs.cts_up == oldsigs.cts_up) {
            if (newsigs.cts_down == oldsigs.cts_down) {
              if (newsigs.ri_up == oldsigs.ri_up) {
                if (newsigs.ri_down == oldsigs.ri_down) {
                  if (cnow.exithunt == cprev.exithunt) {
                    if (cnow.rxidle == cprev.rxidle) {
                      rc = -5;
                      goto ldv_37104;
                    } else {

                    }
                  } else {

                  }
                } else {

                }
              } else {

              }
            } else {

            }
          } else {

          }
        } else {

        }
      } else {

      }
    } else {

    }
  } else {

  }
  if (newsigs.dsr_down != oldsigs.dsr_down) {
    tmp___17 = 2;
  } else {
    tmp___17 = 0;
  }
  if (newsigs.dcd_up != oldsigs.dcd_up) {
    tmp___18 = 16;
  } else {
    tmp___18 = 0;
  }
  if (newsigs.dcd_down != oldsigs.dcd_down) {
    tmp___19 = 32;
  } else {
    tmp___19 = 0;
  }
  if (newsigs.cts_up != oldsigs.cts_up) {
    tmp___20 = 4;
  } else {
    tmp___20 = 0;
  }
  if (newsigs.cts_down != oldsigs.cts_down) {
    tmp___21 = 8;
  } else {
    tmp___21 = 0;
  }
  if (newsigs.ri_up != oldsigs.ri_up) {
    tmp___22 = 64;
  } else {
    tmp___22 = 0;
  }
  if (newsigs.ri_down != oldsigs.ri_down) {
    tmp___23 = 128;
  } else {
    tmp___23 = 0;
  }
  if (cnow.exithunt != cprev.exithunt) {
    tmp___24 = 256;
  } else {
    tmp___24 = 0;
  }
  if (cnow.rxidle != cprev.rxidle) {
    tmp___25 = 512;
  } else {
    tmp___25 = 0;
  }
  __cil_tmp97 = newsigs.dsr_up != oldsigs.dsr_up;
  __cil_tmp98 = __cil_tmp97 + tmp___17;
  __cil_tmp99 = __cil_tmp98 + tmp___18;
  __cil_tmp100 = __cil_tmp99 + tmp___19;
  __cil_tmp101 = __cil_tmp100 + tmp___20;
  __cil_tmp102 = __cil_tmp101 + tmp___21;
  __cil_tmp103 = __cil_tmp102 + tmp___22;
  __cil_tmp104 = __cil_tmp103 + tmp___23;
  __cil_tmp105 = __cil_tmp104 + tmp___24;
  __cil_tmp106 = __cil_tmp105 + tmp___25;
  events = __cil_tmp106 & mask;
  if (events != 0) {
    goto ldv_37104;
  } else {

  }
  cprev = cnow;
  oldsigs = newsigs;
  goto ldv_37120;
  ldv_37104:
  {
  __cil_tmp107 = & info->event_wait_q;
  remove_wait_queue(__cil_tmp107, & wait);
  __x___1 = (long volatile )0L;
  }
  if (1) {
    goto case_8___2;
  } else {
    goto switch_default___2;
    if (0) {
      {
      tmp___26 = get_current();
      __cil_tmp108 = & tmp___26->state;
      __ptr___7 = (u8 volatile *)__cil_tmp108;
      __asm__ volatile ("xchgb %0,%1": "=q" (__x___1), "+m" (*__ptr___7): "0" (__x___1): "memory");
      }
      goto ldv_37124;
      {
      tmp___27 = get_current();
      __cil_tmp109 = & tmp___27->state;
      __ptr___8 = (u16 volatile *)__cil_tmp109;
      __asm__ volatile ("xchgw %0,%1": "=r" (__x___1), "+m" (*__ptr___8): "0" (__x___1): "memory");
      }
      goto ldv_37124;
      {
      tmp___28 = get_current();
      __cil_tmp110 = & tmp___28->state;
      __ptr___9 = (u32 volatile *)__cil_tmp110;
      __asm__ volatile ("xchgl %0,%1": "=r" (__x___1), "+m" (*__ptr___9): "0" (__x___1): "memory");
      }
      goto ldv_37124;
      case_8___2:
      {
      tmp___29 = get_current();
      __cil_tmp111 = & tmp___29->state;
      __ptr___10 = (u64 volatile *)__cil_tmp111;
      __asm__ volatile ("xchgq %0,%1": "=r" (__x___1), "+m" (*__ptr___10): "0" (__x___1): "memory");
      }
      goto ldv_37124;
      switch_default___2:
      {
      __xchg_wrong_size();
      }
    } else {

    }
  }
  ldv_37124: ;
  {
  __cil_tmp112 = mask & 768;
  if (__cil_tmp112 != 0) {
    {
    __cil_tmp113 = & info->lock;
    tmp___30 = spinlock_check(__cil_tmp113);
    flags = _raw_spin_lock_irqsave(tmp___30);
    __cil_tmp114 = & info->event_wait_q;
    tmp___32 = waitqueue_active(__cil_tmp114);
    }
    if (tmp___32 == 0) {
      {
      tmp___31 = rd_reg16(info, 140U);
      __cil_tmp115 = (int )tmp___31;
      __cil_tmp116 = __cil_tmp115 & 65023;
      __cil_tmp117 = (__u16 )__cil_tmp116;
      wr_reg16(info, 140U, __cil_tmp117);
      }
    } else {

    }
    {
    __cil_tmp118 = & info->lock;
    spin_unlock_irqrestore(__cil_tmp118, flags);
    }
  } else {

  }
  }
  exit: ;
  if (rc == 0) {
    {
    might_fault();
    __pu_val = events;
    }
    if (1) {
      goto case_4___3;
    } else {
      goto switch_default___3;
      if (0) {
        __asm__ volatile ("call __put_user_1": "=a" (__ret_pu): "0" (__pu_val),
                             "c" (mask_ptr): "ebx");
        goto ldv_37139;
        __asm__ volatile ("call __put_user_2": "=a" (__ret_pu): "0" (__pu_val),
                             "c" (mask_ptr): "ebx");
        goto ldv_37139;
        case_4___3:
        __asm__ volatile ("call __put_user_4": "=a" (__ret_pu): "0" (__pu_val),
                             "c" (mask_ptr): "ebx");
        goto ldv_37139;
        __asm__ volatile ("call __put_user_8": "=a" (__ret_pu): "0" (__pu_val),
                             "c" (mask_ptr): "ebx");
        goto ldv_37139;
        switch_default___3:
        __asm__ volatile ("call __put_user_X": "=a" (__ret_pu): "0" (__pu_val),
                             "c" (mask_ptr): "ebx");
        goto ldv_37139;
      } else {

      }
    }
    ldv_37139:
    rc = __ret_pu;
  } else {

  }
  return (rc);
}
}
static int get_interface(struct slgt_info *info , int *if_mode )
{ int __ret_pu ;
  int __pu_val ;
  char (*__cil_tmp5)[25U] ;
  char *__cil_tmp6 ;
  unsigned int __cil_tmp7 ;
  unsigned int __cil_tmp8 ;

  {
  if (debug_level > 2) {
    {
    __cil_tmp5 = & info->device_name;
    __cil_tmp6 = (char *)__cil_tmp5;
    __cil_tmp7 = info->if_mode;
    printk("%s get_interface=%x\n", __cil_tmp6, __cil_tmp7);
    }
  } else {

  }
  {
  might_fault();
  __cil_tmp8 = info->if_mode;
  __pu_val = (int )__cil_tmp8;
  }
  if (1) {
    goto case_4;
  } else {
    goto switch_default;
    if (0) {
      __asm__ volatile ("call __put_user_1": "=a" (__ret_pu): "0" (__pu_val), "c" (if_mode): "ebx");
      goto ldv_37152;
      __asm__ volatile ("call __put_user_2": "=a" (__ret_pu): "0" (__pu_val), "c" (if_mode): "ebx");
      goto ldv_37152;
      case_4:
      __asm__ volatile ("call __put_user_4": "=a" (__ret_pu): "0" (__pu_val), "c" (if_mode): "ebx");
      goto ldv_37152;
      __asm__ volatile ("call __put_user_8": "=a" (__ret_pu): "0" (__pu_val), "c" (if_mode): "ebx");
      goto ldv_37152;
      switch_default:
      __asm__ volatile ("call __put_user_X": "=a" (__ret_pu): "0" (__pu_val), "c" (if_mode): "ebx");
      goto ldv_37152;
    } else {

    }
  }
  ldv_37152: ;
  if (__ret_pu != 0) {
    return (-14);
  } else {

  }
  return (0);
}
}
static int set_interface(struct slgt_info *info , int if_mode )
{ unsigned long flags ;
  unsigned short val ;
  raw_spinlock_t *tmp ;
  char (*__cil_tmp6)[25U] ;
  char *__cil_tmp7 ;
  spinlock_t *__cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  unsigned int __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  int __cil_tmp15 ;
  __u16 __cil_tmp16 ;
  spinlock_t *__cil_tmp17 ;

  {
  if (debug_level > 2) {
    {
    __cil_tmp6 = & info->device_name;
    __cil_tmp7 = (char *)__cil_tmp6;
    printk("%s set_interface=%x)\n", __cil_tmp7, if_mode);
    }
  } else {

  }
  {
  __cil_tmp8 = & info->lock;
  tmp = spinlock_check(__cil_tmp8);
  flags = _raw_spin_lock_irqsave(tmp);
  info->if_mode = (unsigned int )if_mode;
  msc_set_vcr(info);
  val = rd_reg16(info, 130U);
  }
  {
  __cil_tmp9 = info->if_mode;
  __cil_tmp10 = __cil_tmp9 & 16U;
  if (__cil_tmp10 != 0U) {
    __cil_tmp11 = (unsigned int )val;
    __cil_tmp12 = __cil_tmp11 | 128U;
    val = (unsigned short )__cil_tmp12;
  } else {
    __cil_tmp13 = (unsigned int )val;
    __cil_tmp14 = __cil_tmp13 & 65407U;
    val = (unsigned short )__cil_tmp14;
  }
  }
  {
  __cil_tmp15 = (int )val;
  __cil_tmp16 = (__u16 )__cil_tmp15;
  wr_reg16(info, 130U, __cil_tmp16);
  __cil_tmp17 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp17, flags);
  }
  return (0);
}
}
static int get_xsync(struct slgt_info *info , int *xsync )
{ int __ret_pu ;
  int __pu_val ;
  char (*__cil_tmp5)[25U] ;
  char *__cil_tmp6 ;
  unsigned int __cil_tmp7 ;
  unsigned int __cil_tmp8 ;

  {
  if (debug_level > 2) {
    {
    __cil_tmp5 = & info->device_name;
    __cil_tmp6 = (char *)__cil_tmp5;
    __cil_tmp7 = info->xsync;
    printk("%s get_xsync=%x\n", __cil_tmp6, __cil_tmp7);
    }
  } else {

  }
  {
  might_fault();
  __cil_tmp8 = info->xsync;
  __pu_val = (int )__cil_tmp8;
  }
  if (1) {
    goto case_4;
  } else {
    goto switch_default;
    if (0) {
      __asm__ volatile ("call __put_user_1": "=a" (__ret_pu): "0" (__pu_val), "c" (xsync): "ebx");
      goto ldv_37174;
      __asm__ volatile ("call __put_user_2": "=a" (__ret_pu): "0" (__pu_val), "c" (xsync): "ebx");
      goto ldv_37174;
      case_4:
      __asm__ volatile ("call __put_user_4": "=a" (__ret_pu): "0" (__pu_val), "c" (xsync): "ebx");
      goto ldv_37174;
      __asm__ volatile ("call __put_user_8": "=a" (__ret_pu): "0" (__pu_val), "c" (xsync): "ebx");
      goto ldv_37174;
      switch_default:
      __asm__ volatile ("call __put_user_X": "=a" (__ret_pu): "0" (__pu_val), "c" (xsync): "ebx");
      goto ldv_37174;
    } else {

    }
  }
  ldv_37174: ;
  if (__ret_pu != 0) {
    return (-14);
  } else {

  }
  return (0);
}
}
static int set_xsync(struct slgt_info *info , int xsync )
{ unsigned long flags ;
  raw_spinlock_t *tmp ;
  char (*__cil_tmp5)[25U] ;
  char *__cil_tmp6 ;
  spinlock_t *__cil_tmp7 ;
  __u32 __cil_tmp8 ;
  spinlock_t *__cil_tmp9 ;

  {
  if (debug_level > 2) {
    {
    __cil_tmp5 = & info->device_name;
    __cil_tmp6 = (char *)__cil_tmp5;
    printk("%s set_xsync=%x)\n", __cil_tmp6, xsync);
    }
  } else {

  }
  {
  __cil_tmp7 = & info->lock;
  tmp = spinlock_check(__cil_tmp7);
  flags = _raw_spin_lock_irqsave(tmp);
  info->xsync = (unsigned int )xsync;
  __cil_tmp8 = (__u32 )xsync;
  wr_reg32(info, 64U, __cil_tmp8);
  __cil_tmp9 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp9, flags);
  }
  return (0);
}
}
static int get_xctrl(struct slgt_info *info , int *xctrl )
{ int __ret_pu ;
  int __pu_val ;
  char (*__cil_tmp5)[25U] ;
  char *__cil_tmp6 ;
  unsigned int __cil_tmp7 ;
  unsigned int __cil_tmp8 ;

  {
  if (debug_level > 2) {
    {
    __cil_tmp5 = & info->device_name;
    __cil_tmp6 = (char *)__cil_tmp5;
    __cil_tmp7 = info->xctrl;
    printk("%s get_xctrl=%x\n", __cil_tmp6, __cil_tmp7);
    }
  } else {

  }
  {
  might_fault();
  __cil_tmp8 = info->xctrl;
  __pu_val = (int )__cil_tmp8;
  }
  if (1) {
    goto case_4;
  } else {
    goto switch_default;
    if (0) {
      __asm__ volatile ("call __put_user_1": "=a" (__ret_pu): "0" (__pu_val), "c" (xctrl): "ebx");
      goto ldv_37195;
      __asm__ volatile ("call __put_user_2": "=a" (__ret_pu): "0" (__pu_val), "c" (xctrl): "ebx");
      goto ldv_37195;
      case_4:
      __asm__ volatile ("call __put_user_4": "=a" (__ret_pu): "0" (__pu_val), "c" (xctrl): "ebx");
      goto ldv_37195;
      __asm__ volatile ("call __put_user_8": "=a" (__ret_pu): "0" (__pu_val), "c" (xctrl): "ebx");
      goto ldv_37195;
      switch_default:
      __asm__ volatile ("call __put_user_X": "=a" (__ret_pu): "0" (__pu_val), "c" (xctrl): "ebx");
      goto ldv_37195;
    } else {

    }
  }
  ldv_37195: ;
  if (__ret_pu != 0) {
    return (-14);
  } else {

  }
  return (0);
}
}
static int set_xctrl(struct slgt_info *info , int xctrl )
{ unsigned long flags ;
  raw_spinlock_t *tmp ;
  char (*__cil_tmp5)[25U] ;
  char *__cil_tmp6 ;
  spinlock_t *__cil_tmp7 ;
  __u32 __cil_tmp8 ;
  spinlock_t *__cil_tmp9 ;

  {
  if (debug_level > 2) {
    {
    __cil_tmp5 = & info->device_name;
    __cil_tmp6 = (char *)__cil_tmp5;
    printk("%s set_xctrl=%x)\n", __cil_tmp6, xctrl);
    }
  } else {

  }
  {
  __cil_tmp7 = & info->lock;
  tmp = spinlock_check(__cil_tmp7);
  flags = _raw_spin_lock_irqsave(tmp);
  info->xctrl = (unsigned int )xctrl;
  __cil_tmp8 = (__u32 )xctrl;
  wr_reg32(info, 68U, __cil_tmp8);
  __cil_tmp9 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp9, flags);
  }
  return (0);
}
}
static int set_gpio(struct slgt_info *info , struct gpio_desc *user_gpio )
{ unsigned long flags ;
  struct gpio_desc gpio ;
  __u32 data ;
  unsigned long tmp ;
  raw_spinlock_t *tmp___0 ;
  unsigned int __cil_tmp8 ;
  void *__cil_tmp9 ;
  void const *__cil_tmp10 ;
  char (*__cil_tmp11)[25U] ;
  char *__cil_tmp12 ;
  struct slgt_info *__cil_tmp13 ;
  spinlock_t *__cil_tmp14 ;
  unsigned int __cil_tmp15 ;
  __u32 __cil_tmp16 ;
  unsigned int __cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  unsigned int __cil_tmp19 ;
  __u32 __cil_tmp20 ;
  unsigned int __cil_tmp21 ;
  unsigned int __cil_tmp22 ;
  struct slgt_info *__cil_tmp23 ;
  spinlock_t *__cil_tmp24 ;

  {
  {
  __cil_tmp8 = info->gpio_present;
  if (__cil_tmp8 == 0U) {
    return (-22);
  } else {

  }
  }
  {
  __cil_tmp9 = (void *)(& gpio);
  __cil_tmp10 = (void const *)user_gpio;
  tmp = copy_from_user(__cil_tmp9, __cil_tmp10, 16UL);
  }
  if (tmp != 0UL) {
    return (-14);
  } else {

  }
  if (debug_level > 2) {
    {
    __cil_tmp11 = & info->device_name;
    __cil_tmp12 = (char *)__cil_tmp11;
    printk("%s set_gpio state=%08x smask=%08x dir=%08x dmask=%08x\n", __cil_tmp12,
           gpio.state, gpio.smask, gpio.dir, gpio.dmask);
    }
  } else {

  }
  {
  __cil_tmp13 = info->port_array[0];
  __cil_tmp14 = & __cil_tmp13->lock;
  tmp___0 = spinlock_check(__cil_tmp14);
  flags = _raw_spin_lock_irqsave(tmp___0);
  }
  if (gpio.dmask != 0U) {
    {
    data = rd_reg32(info, 8U);
    __cil_tmp15 = gpio.dmask & gpio.dir;
    data = __cil_tmp15 | data;
    __cil_tmp16 = ~ gpio.dir;
    __cil_tmp17 = gpio.dmask & __cil_tmp16;
    __cil_tmp18 = ~ __cil_tmp17;
    data = __cil_tmp18 & data;
    wr_reg32(info, 8U, data);
    }
  } else {

  }
  if (gpio.smask != 0U) {
    {
    data = rd_reg32(info, 16U);
    __cil_tmp19 = gpio.smask & gpio.state;
    data = __cil_tmp19 | data;
    __cil_tmp20 = ~ gpio.state;
    __cil_tmp21 = gpio.smask & __cil_tmp20;
    __cil_tmp22 = ~ __cil_tmp21;
    data = __cil_tmp22 & data;
    wr_reg32(info, 16U, data);
    }
  } else {

  }
  {
  __cil_tmp23 = info->port_array[0];
  __cil_tmp24 = & __cil_tmp23->lock;
  spin_unlock_irqrestore(__cil_tmp24, flags);
  }
  return (0);
}
}
static int get_gpio(struct slgt_info *info , struct gpio_desc *user_gpio )
{ struct gpio_desc gpio ;
  int tmp ;
  unsigned int __cil_tmp5 ;
  void *__cil_tmp6 ;
  void const *__cil_tmp7 ;
  char (*__cil_tmp8)[25U] ;
  char *__cil_tmp9 ;

  {
  {
  __cil_tmp5 = info->gpio_present;
  if (__cil_tmp5 == 0U) {
    return (-22);
  } else {

  }
  }
  {
  gpio.state = rd_reg32(info, 16U);
  gpio.smask = 4294967295U;
  gpio.dir = rd_reg32(info, 8U);
  gpio.dmask = 4294967295U;
  __cil_tmp6 = (void *)user_gpio;
  __cil_tmp7 = (void const *)(& gpio);
  tmp = copy_to_user(__cil_tmp6, __cil_tmp7, 16U);
  }
  if (tmp != 0) {
    return (-14);
  } else {

  }
  if (debug_level > 2) {
    {
    __cil_tmp8 = & info->device_name;
    __cil_tmp9 = (char *)__cil_tmp8;
    printk("%s get_gpio state=%08x dir=%08x\n", __cil_tmp9, gpio.state, gpio.dir);
    }
  } else {

  }
  return (0);
}
}
static void init_cond_wait(struct cond_wait *w , unsigned int data )
{ struct lock_class_key __key ;
  struct task_struct *tmp ;
  wait_queue_head_t *__cil_tmp5 ;
  wait_queue_t *__cil_tmp6 ;

  {
  {
  __cil_tmp5 = & w->q;
  __init_waitqueue_head(__cil_tmp5, & __key);
  tmp = get_current();
  __cil_tmp6 = & w->wait;
  init_waitqueue_entry(__cil_tmp6, tmp);
  w->data = data;
  }
  return;
}
}
static void add_cond_wait(struct cond_wait **head , struct cond_wait *w )
{ long volatile __x ;
  u8 volatile *__ptr ;
  struct task_struct *tmp ;
  u16 volatile *__ptr___0 ;
  struct task_struct *tmp___0 ;
  u32 volatile *__ptr___1 ;
  struct task_struct *tmp___1 ;
  u64 volatile *__ptr___2 ;
  struct task_struct *tmp___2 ;
  long volatile *__cil_tmp12 ;
  long volatile *__cil_tmp13 ;
  long volatile *__cil_tmp14 ;
  long volatile *__cil_tmp15 ;
  wait_queue_head_t *__cil_tmp16 ;
  wait_queue_t *__cil_tmp17 ;

  {
  __x = (long volatile )1L;
  if (1) {
    goto case_8;
  } else {
    goto switch_default;
    if (0) {
      {
      tmp = get_current();
      __cil_tmp12 = & tmp->state;
      __ptr = (u8 volatile *)__cil_tmp12;
      __asm__ volatile ("xchgb %0,%1": "=q" (__x), "+m" (*__ptr): "0" (__x): "memory");
      }
      goto ldv_37236;
      {
      tmp___0 = get_current();
      __cil_tmp13 = & tmp___0->state;
      __ptr___0 = (u16 volatile *)__cil_tmp13;
      __asm__ volatile ("xchgw %0,%1": "=r" (__x), "+m" (*__ptr___0): "0" (__x): "memory");
      }
      goto ldv_37236;
      {
      tmp___1 = get_current();
      __cil_tmp14 = & tmp___1->state;
      __ptr___1 = (u32 volatile *)__cil_tmp14;
      __asm__ volatile ("xchgl %0,%1": "=r" (__x), "+m" (*__ptr___1): "0" (__x): "memory");
      }
      goto ldv_37236;
      case_8:
      {
      tmp___2 = get_current();
      __cil_tmp15 = & tmp___2->state;
      __ptr___2 = (u64 volatile *)__cil_tmp15;
      __asm__ volatile ("xchgq %0,%1": "=r" (__x), "+m" (*__ptr___2): "0" (__x): "memory");
      }
      goto ldv_37236;
      switch_default:
      {
      __xchg_wrong_size();
      }
    } else {

    }
  }
  ldv_37236:
  {
  __cil_tmp16 = & w->q;
  __cil_tmp17 = & w->wait;
  add_wait_queue(__cil_tmp16, __cil_tmp17);
  w->next = *head;
  *head = w;
  }
  return;
}
}
static void remove_cond_wait(struct cond_wait **head , struct cond_wait *cw )
{ struct cond_wait *w ;
  struct cond_wait *prev ;
  long volatile __x ;
  u8 volatile *__ptr ;
  struct task_struct *tmp ;
  u16 volatile *__ptr___0 ;
  struct task_struct *tmp___0 ;
  u32 volatile *__ptr___1 ;
  struct task_struct *tmp___1 ;
  u64 volatile *__ptr___2 ;
  struct task_struct *tmp___2 ;
  wait_queue_head_t *__cil_tmp14 ;
  wait_queue_t *__cil_tmp15 ;
  long volatile *__cil_tmp16 ;
  long volatile *__cil_tmp17 ;
  long volatile *__cil_tmp18 ;
  long volatile *__cil_tmp19 ;
  unsigned long __cil_tmp20 ;
  unsigned long __cil_tmp21 ;
  struct cond_wait *__cil_tmp22 ;
  unsigned long __cil_tmp23 ;
  unsigned long __cil_tmp24 ;
  struct cond_wait *__cil_tmp25 ;
  unsigned long __cil_tmp26 ;
  unsigned long __cil_tmp27 ;

  {
  {
  __cil_tmp14 = & cw->q;
  __cil_tmp15 = & cw->wait;
  remove_wait_queue(__cil_tmp14, __cil_tmp15);
  __x = (long volatile )0L;
  }
  if (1) {
    goto case_8;
  } else {
    goto switch_default;
    if (0) {
      {
      tmp = get_current();
      __cil_tmp16 = & tmp->state;
      __ptr = (u8 volatile *)__cil_tmp16;
      __asm__ volatile ("xchgb %0,%1": "=q" (__x), "+m" (*__ptr): "0" (__x): "memory");
      }
      goto ldv_37254;
      {
      tmp___0 = get_current();
      __cil_tmp17 = & tmp___0->state;
      __ptr___0 = (u16 volatile *)__cil_tmp17;
      __asm__ volatile ("xchgw %0,%1": "=r" (__x), "+m" (*__ptr___0): "0" (__x): "memory");
      }
      goto ldv_37254;
      {
      tmp___1 = get_current();
      __cil_tmp18 = & tmp___1->state;
      __ptr___1 = (u32 volatile *)__cil_tmp18;
      __asm__ volatile ("xchgl %0,%1": "=r" (__x), "+m" (*__ptr___1): "0" (__x): "memory");
      }
      goto ldv_37254;
      case_8:
      {
      tmp___2 = get_current();
      __cil_tmp19 = & tmp___2->state;
      __ptr___2 = (u64 volatile *)__cil_tmp19;
      __asm__ volatile ("xchgq %0,%1": "=r" (__x), "+m" (*__ptr___2): "0" (__x): "memory");
      }
      goto ldv_37254;
      switch_default:
      {
      __xchg_wrong_size();
      }
    } else {

    }
  }
  ldv_37254:
  w = *head;
  prev = (struct cond_wait *)0;
  goto ldv_37265;
  ldv_37264: ;
  {
  __cil_tmp20 = (unsigned long )cw;
  __cil_tmp21 = (unsigned long )w;
  if (__cil_tmp21 == __cil_tmp20) {
    {
    __cil_tmp22 = (struct cond_wait *)0;
    __cil_tmp23 = (unsigned long )__cil_tmp22;
    __cil_tmp24 = (unsigned long )prev;
    if (__cil_tmp24 != __cil_tmp23) {
      prev->next = w->next;
    } else {
      *head = w->next;
    }
    }
    goto ldv_37263;
  } else {

  }
  }
  prev = w;
  w = w->next;
  ldv_37265: ;
  {
  __cil_tmp25 = (struct cond_wait *)0;
  __cil_tmp26 = (unsigned long )__cil_tmp25;
  __cil_tmp27 = (unsigned long )w;
  if (__cil_tmp27 != __cil_tmp26) {
    goto ldv_37264;
  } else {
    goto ldv_37263;
  }
  }
  ldv_37263: ;
  return;
}
}
static void flush_cond_wait(struct cond_wait **head )
{ struct cond_wait *__cil_tmp2 ;
  wait_queue_head_t *__cil_tmp3 ;
  void *__cil_tmp4 ;
  struct cond_wait *__cil_tmp5 ;
  struct cond_wait *__cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  struct cond_wait *__cil_tmp8 ;
  unsigned long __cil_tmp9 ;

  {
  goto ldv_37270;
  ldv_37269:
  {
  __cil_tmp2 = *head;
  __cil_tmp3 = & __cil_tmp2->q;
  __cil_tmp4 = (void *)0;
  __wake_up(__cil_tmp3, 1U, 1, __cil_tmp4);
  __cil_tmp5 = *head;
  *head = __cil_tmp5->next;
  }
  ldv_37270: ;
  {
  __cil_tmp6 = (struct cond_wait *)0;
  __cil_tmp7 = (unsigned long )__cil_tmp6;
  __cil_tmp8 = *head;
  __cil_tmp9 = (unsigned long )__cil_tmp8;
  if (__cil_tmp9 != __cil_tmp7) {
    goto ldv_37269;
  } else {
    goto ldv_37271;
  }
  }
  ldv_37271: ;
  return;
}
}
static int wait_gpio(struct slgt_info *info , struct gpio_desc *user_gpio )
{ unsigned long flags ;
  int rc ;
  struct gpio_desc gpio ;
  struct cond_wait wait ;
  u32 state ;
  unsigned long tmp ;
  __u32 tmp___0 ;
  raw_spinlock_t *tmp___1 ;
  __u32 tmp___2 ;
  struct task_struct *tmp___3 ;
  int tmp___4 ;
  raw_spinlock_t *tmp___5 ;
  int tmp___6 ;
  unsigned int __cil_tmp16 ;
  void *__cil_tmp17 ;
  void const *__cil_tmp18 ;
  char (*__cil_tmp19)[25U] ;
  char *__cil_tmp20 ;
  __u32 __cil_tmp21 ;
  struct slgt_info *__cil_tmp22 ;
  spinlock_t *__cil_tmp23 ;
  unsigned int __cil_tmp24 ;
  unsigned int __cil_tmp25 ;
  unsigned int __cil_tmp26 ;
  unsigned int __cil_tmp27 ;
  struct cond_wait **__cil_tmp28 ;
  struct slgt_info *__cil_tmp29 ;
  spinlock_t *__cil_tmp30 ;
  struct slgt_info *__cil_tmp31 ;
  spinlock_t *__cil_tmp32 ;
  struct cond_wait **__cil_tmp33 ;
  struct cond_wait *__cil_tmp34 ;
  unsigned long __cil_tmp35 ;
  struct cond_wait *__cil_tmp36 ;
  unsigned long __cil_tmp37 ;
  struct slgt_info *__cil_tmp38 ;
  spinlock_t *__cil_tmp39 ;
  void *__cil_tmp40 ;
  void const *__cil_tmp41 ;

  {
  rc = 0;
  {
  __cil_tmp16 = info->gpio_present;
  if (__cil_tmp16 == 0U) {
    return (-22);
  } else {

  }
  }
  {
  __cil_tmp17 = (void *)(& gpio);
  __cil_tmp18 = (void const *)user_gpio;
  tmp = copy_from_user(__cil_tmp17, __cil_tmp18, 16UL);
  }
  if (tmp != 0UL) {
    return (-14);
  } else {

  }
  if (debug_level > 2) {
    {
    __cil_tmp19 = & info->device_name;
    __cil_tmp20 = (char *)__cil_tmp19;
    printk("%s wait_gpio() state=%08x smask=%08x\n", __cil_tmp20, gpio.state, gpio.smask);
    }
  } else {

  }
  {
  tmp___0 = rd_reg32(info, 8U);
  __cil_tmp21 = ~ tmp___0;
  gpio.smask = gpio.smask & __cil_tmp21;
  }
  if (gpio.smask == 0U) {
    return (-22);
  } else {

  }
  {
  init_cond_wait(& wait, gpio.smask);
  __cil_tmp22 = info->port_array[0];
  __cil_tmp23 = & __cil_tmp22->lock;
  tmp___1 = spinlock_check(__cil_tmp23);
  flags = _raw_spin_lock_irqsave(tmp___1);
  tmp___2 = rd_reg32(info, 12U);
  __cil_tmp24 = tmp___2 | gpio.smask;
  wr_reg32(info, 12U, __cil_tmp24);
  state = rd_reg32(info, 16U);
  }
  {
  __cil_tmp25 = gpio.state ^ state;
  __cil_tmp26 = ~ __cil_tmp25;
  __cil_tmp27 = gpio.smask & __cil_tmp26;
  if (__cil_tmp27 != 0U) {
    gpio.state = state;
  } else {
    {
    __cil_tmp28 = & info->gpio_wait_q;
    add_cond_wait(__cil_tmp28, & wait);
    __cil_tmp29 = info->port_array[0];
    __cil_tmp30 = & __cil_tmp29->lock;
    spin_unlock_irqrestore(__cil_tmp30, flags);
    schedule();
    tmp___3 = get_current();
    tmp___4 = signal_pending(tmp___3);
    }
    if (tmp___4 != 0) {
      rc = -512;
    } else {
      gpio.state = wait.data;
    }
    {
    __cil_tmp31 = info->port_array[0];
    __cil_tmp32 = & __cil_tmp31->lock;
    tmp___5 = spinlock_check(__cil_tmp32);
    flags = _raw_spin_lock_irqsave(tmp___5);
    __cil_tmp33 = & info->gpio_wait_q;
    remove_cond_wait(__cil_tmp33, & wait);
    }
  }
  }
  {
  __cil_tmp34 = (struct cond_wait *)0;
  __cil_tmp35 = (unsigned long )__cil_tmp34;
  __cil_tmp36 = info->gpio_wait_q;
  __cil_tmp37 = (unsigned long )__cil_tmp36;
  if (__cil_tmp37 == __cil_tmp35) {
    {
    wr_reg32(info, 12U, 0U);
    }
  } else {

  }
  }
  {
  __cil_tmp38 = info->port_array[0];
  __cil_tmp39 = & __cil_tmp38->lock;
  spin_unlock_irqrestore(__cil_tmp39, flags);
  }
  if (rc == 0) {
    {
    __cil_tmp40 = (void *)user_gpio;
    __cil_tmp41 = (void const *)(& gpio);
    tmp___6 = copy_to_user(__cil_tmp40, __cil_tmp41, 16U);
    }
    if (tmp___6 != 0) {
      rc = -14;
    } else {

    }
  } else {

  }
  return (rc);
}
}
static int modem_input_wait(struct slgt_info *info , int arg )
{ unsigned long flags ;
  int rc ;
  struct mgsl_icount cprev ;
  struct mgsl_icount cnow ;
  wait_queue_t wait ;
  struct task_struct *tmp ;
  raw_spinlock_t *tmp___0 ;
  long volatile __x ;
  u8 volatile *__ptr ;
  struct task_struct *tmp___1 ;
  u16 volatile *__ptr___0 ;
  struct task_struct *tmp___2 ;
  u32 volatile *__ptr___1 ;
  struct task_struct *tmp___3 ;
  u64 volatile *__ptr___2 ;
  struct task_struct *tmp___4 ;
  struct task_struct *tmp___5 ;
  int tmp___6 ;
  raw_spinlock_t *tmp___7 ;
  long volatile __x___0 ;
  u8 volatile *__ptr___3 ;
  struct task_struct *tmp___8 ;
  u16 volatile *__ptr___4 ;
  struct task_struct *tmp___9 ;
  u32 volatile *__ptr___5 ;
  struct task_struct *tmp___10 ;
  u64 volatile *__ptr___6 ;
  struct task_struct *tmp___11 ;
  long volatile __x___1 ;
  u8 volatile *__ptr___7 ;
  struct task_struct *tmp___12 ;
  u16 volatile *__ptr___8 ;
  struct task_struct *tmp___13 ;
  u32 volatile *__ptr___9 ;
  struct task_struct *tmp___14 ;
  u64 volatile *__ptr___10 ;
  struct task_struct *tmp___15 ;
  spinlock_t *__cil_tmp40 ;
  wait_queue_head_t *__cil_tmp41 ;
  long volatile *__cil_tmp42 ;
  long volatile *__cil_tmp43 ;
  long volatile *__cil_tmp44 ;
  long volatile *__cil_tmp45 ;
  spinlock_t *__cil_tmp46 ;
  spinlock_t *__cil_tmp47 ;
  long volatile *__cil_tmp48 ;
  long volatile *__cil_tmp49 ;
  long volatile *__cil_tmp50 ;
  long volatile *__cil_tmp51 ;
  spinlock_t *__cil_tmp52 ;
  int __cil_tmp53 ;
  int __cil_tmp54 ;
  int __cil_tmp55 ;
  int __cil_tmp56 ;
  wait_queue_head_t *__cil_tmp57 ;
  long volatile *__cil_tmp58 ;
  long volatile *__cil_tmp59 ;
  long volatile *__cil_tmp60 ;
  long volatile *__cil_tmp61 ;

  {
  {
  tmp = get_current();
  wait.flags = 0U;
  wait.private = (void *)tmp;
  wait.func = & default_wake_function;
  wait.task_list.next = (struct list_head *)0;
  wait.task_list.prev = (struct list_head *)0;
  __cil_tmp40 = & info->lock;
  tmp___0 = spinlock_check(__cil_tmp40);
  flags = _raw_spin_lock_irqsave(tmp___0);
  cprev = info->icount;
  __cil_tmp41 = & info->status_event_wait_q;
  add_wait_queue(__cil_tmp41, & wait);
  __x = (long volatile )1L;
  }
  if (1) {
    goto case_8;
  } else {
    goto switch_default;
    if (0) {
      {
      tmp___1 = get_current();
      __cil_tmp42 = & tmp___1->state;
      __ptr = (u8 volatile *)__cil_tmp42;
      __asm__ volatile ("xchgb %0,%1": "=q" (__x), "+m" (*__ptr): "0" (__x): "memory");
      }
      goto ldv_37302;
      {
      tmp___2 = get_current();
      __cil_tmp43 = & tmp___2->state;
      __ptr___0 = (u16 volatile *)__cil_tmp43;
      __asm__ volatile ("xchgw %0,%1": "=r" (__x), "+m" (*__ptr___0): "0" (__x): "memory");
      }
      goto ldv_37302;
      {
      tmp___3 = get_current();
      __cil_tmp44 = & tmp___3->state;
      __ptr___1 = (u32 volatile *)__cil_tmp44;
      __asm__ volatile ("xchgl %0,%1": "=r" (__x), "+m" (*__ptr___1): "0" (__x): "memory");
      }
      goto ldv_37302;
      case_8:
      {
      tmp___4 = get_current();
      __cil_tmp45 = & tmp___4->state;
      __ptr___2 = (u64 volatile *)__cil_tmp45;
      __asm__ volatile ("xchgq %0,%1": "=r" (__x), "+m" (*__ptr___2): "0" (__x): "memory");
      }
      goto ldv_37302;
      switch_default:
      {
      __xchg_wrong_size();
      }
    } else {

    }
  }
  ldv_37302:
  {
  __cil_tmp46 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp46, flags);
  }
  ldv_37327:
  {
  schedule();
  tmp___5 = get_current();
  tmp___6 = signal_pending(tmp___5);
  }
  if (tmp___6 != 0) {
    rc = -512;
    goto ldv_37311;
  } else {

  }
  {
  __cil_tmp47 = & info->lock;
  tmp___7 = spinlock_check(__cil_tmp47);
  flags = _raw_spin_lock_irqsave(tmp___7);
  cnow = info->icount;
  __x___0 = (long volatile )1L;
  }
  if (1) {
    goto case_8___0;
  } else {
    goto switch_default___0;
    if (0) {
      {
      tmp___8 = get_current();
      __cil_tmp48 = & tmp___8->state;
      __ptr___3 = (u8 volatile *)__cil_tmp48;
      __asm__ volatile ("xchgb %0,%1": "=q" (__x___0), "+m" (*__ptr___3): "0" (__x___0): "memory");
      }
      goto ldv_37318;
      {
      tmp___9 = get_current();
      __cil_tmp49 = & tmp___9->state;
      __ptr___4 = (u16 volatile *)__cil_tmp49;
      __asm__ volatile ("xchgw %0,%1": "=r" (__x___0), "+m" (*__ptr___4): "0" (__x___0): "memory");
      }
      goto ldv_37318;
      {
      tmp___10 = get_current();
      __cil_tmp50 = & tmp___10->state;
      __ptr___5 = (u32 volatile *)__cil_tmp50;
      __asm__ volatile ("xchgl %0,%1": "=r" (__x___0), "+m" (*__ptr___5): "0" (__x___0): "memory");
      }
      goto ldv_37318;
      case_8___0:
      {
      tmp___11 = get_current();
      __cil_tmp51 = & tmp___11->state;
      __ptr___6 = (u64 volatile *)__cil_tmp51;
      __asm__ volatile ("xchgq %0,%1": "=r" (__x___0), "+m" (*__ptr___6): "0" (__x___0): "memory");
      }
      goto ldv_37318;
      switch_default___0:
      {
      __xchg_wrong_size();
      }
    } else {

    }
  }
  ldv_37318:
  {
  __cil_tmp52 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp52, flags);
  }
  if (cnow.rng == cprev.rng) {
    if (cnow.dsr == cprev.dsr) {
      if (cnow.dcd == cprev.dcd) {
        if (cnow.cts == cprev.cts) {
          rc = -5;
          goto ldv_37311;
        } else {

        }
      } else {

      }
    } else {

    }
  } else {

  }
  {
  __cil_tmp53 = arg & 128;
  if (__cil_tmp53 != 0) {
    if (cnow.rng != cprev.rng) {
      rc = 0;
      goto ldv_37311;
    } else {
      goto _L___1;
    }
  } else {
    _L___1:
    {
    __cil_tmp54 = arg & 256;
    if (__cil_tmp54 != 0) {
      if (cnow.dsr != cprev.dsr) {
        rc = 0;
        goto ldv_37311;
      } else {
        goto _L___0;
      }
    } else {
      _L___0:
      {
      __cil_tmp55 = arg & 64;
      if (__cil_tmp55 != 0) {
        if (cnow.dcd != cprev.dcd) {
          rc = 0;
          goto ldv_37311;
        } else {
          goto _L;
        }
      } else {
        _L:
        {
        __cil_tmp56 = arg & 32;
        if (__cil_tmp56 != 0) {
          if (cnow.cts != cprev.cts) {
            rc = 0;
            goto ldv_37311;
          } else {

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
  cprev = cnow;
  goto ldv_37327;
  ldv_37311:
  {
  __cil_tmp57 = & info->status_event_wait_q;
  remove_wait_queue(__cil_tmp57, & wait);
  __x___1 = (long volatile )0L;
  }
  if (1) {
    goto case_8___1;
  } else {
    goto switch_default___1;
    if (0) {
      {
      tmp___12 = get_current();
      __cil_tmp58 = & tmp___12->state;
      __ptr___7 = (u8 volatile *)__cil_tmp58;
      __asm__ volatile ("xchgb %0,%1": "=q" (__x___1), "+m" (*__ptr___7): "0" (__x___1): "memory");
      }
      goto ldv_37331;
      {
      tmp___13 = get_current();
      __cil_tmp59 = & tmp___13->state;
      __ptr___8 = (u16 volatile *)__cil_tmp59;
      __asm__ volatile ("xchgw %0,%1": "=r" (__x___1), "+m" (*__ptr___8): "0" (__x___1): "memory");
      }
      goto ldv_37331;
      {
      tmp___14 = get_current();
      __cil_tmp60 = & tmp___14->state;
      __ptr___9 = (u32 volatile *)__cil_tmp60;
      __asm__ volatile ("xchgl %0,%1": "=r" (__x___1), "+m" (*__ptr___9): "0" (__x___1): "memory");
      }
      goto ldv_37331;
      case_8___1:
      {
      tmp___15 = get_current();
      __cil_tmp61 = & tmp___15->state;
      __ptr___10 = (u64 volatile *)__cil_tmp61;
      __asm__ volatile ("xchgq %0,%1": "=r" (__x___1), "+m" (*__ptr___10): "0" (__x___1): "memory");
      }
      goto ldv_37331;
      switch_default___1:
      {
      __xchg_wrong_size();
      }
    } else {

    }
  }
  ldv_37331: ;
  return (rc);
}
}
static int tiocmget(struct tty_struct *tty )
{ struct slgt_info *info ;
  unsigned int result ;
  unsigned long flags ;
  raw_spinlock_t *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  void *__cil_tmp12 ;
  spinlock_t *__cil_tmp13 ;
  spinlock_t *__cil_tmp14 ;
  unsigned char __cil_tmp15 ;
  int __cil_tmp16 ;
  int __cil_tmp17 ;
  unsigned char __cil_tmp18 ;
  signed char __cil_tmp19 ;
  int __cil_tmp20 ;
  unsigned char __cil_tmp21 ;
  int __cil_tmp22 ;
  unsigned char __cil_tmp23 ;
  int __cil_tmp24 ;
  int __cil_tmp25 ;
  unsigned char __cil_tmp26 ;
  int __cil_tmp27 ;
  int __cil_tmp28 ;
  unsigned char __cil_tmp29 ;
  int __cil_tmp30 ;
  int __cil_tmp31 ;
  int __cil_tmp32 ;
  int __cil_tmp33 ;
  int __cil_tmp34 ;
  int __cil_tmp35 ;
  int __cil_tmp36 ;
  char (*__cil_tmp37)[25U] ;
  char *__cil_tmp38 ;

  {
  {
  __cil_tmp12 = tty->driver_data;
  info = (struct slgt_info *)__cil_tmp12;
  __cil_tmp13 = & info->lock;
  tmp = spinlock_check(__cil_tmp13);
  flags = _raw_spin_lock_irqsave(tmp);
  get_signals(info);
  __cil_tmp14 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp14, flags);
  }
  {
  __cil_tmp15 = info->signals;
  __cil_tmp16 = (int )__cil_tmp15;
  __cil_tmp17 = __cil_tmp16 & 32;
  if (__cil_tmp17 != 0) {
    tmp___0 = 4;
  } else {
    tmp___0 = 0;
  }
  }
  {
  __cil_tmp18 = info->signals;
  __cil_tmp19 = (signed char )__cil_tmp18;
  __cil_tmp20 = (int )__cil_tmp19;
  if (__cil_tmp20 < 0) {
    tmp___1 = 2;
  } else {
    tmp___1 = 0;
  }
  }
  {
  __cil_tmp21 = info->signals;
  __cil_tmp22 = (int )__cil_tmp21;
  if (__cil_tmp22 & 1) {
    tmp___2 = 64;
  } else {
    tmp___2 = 0;
  }
  }
  {
  __cil_tmp23 = info->signals;
  __cil_tmp24 = (int )__cil_tmp23;
  __cil_tmp25 = __cil_tmp24 & 4;
  if (__cil_tmp25 != 0) {
    tmp___3 = 128;
  } else {
    tmp___3 = 0;
  }
  }
  {
  __cil_tmp26 = info->signals;
  __cil_tmp27 = (int )__cil_tmp26;
  __cil_tmp28 = __cil_tmp27 & 64;
  if (__cil_tmp28 != 0) {
    tmp___4 = 256;
  } else {
    tmp___4 = 0;
  }
  }
  {
  __cil_tmp29 = info->signals;
  __cil_tmp30 = (int )__cil_tmp29;
  __cil_tmp31 = __cil_tmp30 & 16;
  if (__cil_tmp31 != 0) {
    tmp___5 = 32;
  } else {
    tmp___5 = 0;
  }
  }
  __cil_tmp32 = tmp___0 + tmp___1;
  __cil_tmp33 = __cil_tmp32 + tmp___2;
  __cil_tmp34 = __cil_tmp33 + tmp___3;
  __cil_tmp35 = __cil_tmp34 + tmp___4;
  __cil_tmp36 = __cil_tmp35 + tmp___5;
  result = (unsigned int )__cil_tmp36;
  if (debug_level > 2) {
    {
    __cil_tmp37 = & info->device_name;
    __cil_tmp38 = (char *)__cil_tmp37;
    printk("%s tiocmget value=%08X\n", __cil_tmp38, result);
    }
  } else {

  }
  return ((int )result);
}
}
static int tiocmset(struct tty_struct *tty , unsigned int set , unsigned int clear )
{ struct slgt_info *info ;
  unsigned long flags ;
  raw_spinlock_t *tmp ;
  void *__cil_tmp7 ;
  char (*__cil_tmp8)[25U] ;
  char *__cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  unsigned char __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  unsigned char __cil_tmp15 ;
  unsigned int __cil_tmp16 ;
  unsigned int __cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  unsigned char __cil_tmp19 ;
  unsigned int __cil_tmp20 ;
  unsigned int __cil_tmp21 ;
  unsigned int __cil_tmp22 ;
  unsigned char __cil_tmp23 ;
  unsigned int __cil_tmp24 ;
  unsigned int __cil_tmp25 ;
  spinlock_t *__cil_tmp26 ;
  spinlock_t *__cil_tmp27 ;

  {
  __cil_tmp7 = tty->driver_data;
  info = (struct slgt_info *)__cil_tmp7;
  if (debug_level > 2) {
    {
    __cil_tmp8 = & info->device_name;
    __cil_tmp9 = (char *)__cil_tmp8;
    printk("%s tiocmset(%x,%x)\n", __cil_tmp9, set, clear);
    }
  } else {

  }
  {
  __cil_tmp10 = set & 4U;
  if (__cil_tmp10 != 0U) {
    __cil_tmp11 = info->signals;
    __cil_tmp12 = (unsigned int )__cil_tmp11;
    __cil_tmp13 = __cil_tmp12 | 32U;
    info->signals = (unsigned char )__cil_tmp13;
  } else {

  }
  }
  {
  __cil_tmp14 = set & 2U;
  if (__cil_tmp14 != 0U) {
    __cil_tmp15 = info->signals;
    __cil_tmp16 = (unsigned int )__cil_tmp15;
    __cil_tmp17 = __cil_tmp16 | 128U;
    info->signals = (unsigned char )__cil_tmp17;
  } else {

  }
  }
  {
  __cil_tmp18 = clear & 4U;
  if (__cil_tmp18 != 0U) {
    __cil_tmp19 = info->signals;
    __cil_tmp20 = (unsigned int )__cil_tmp19;
    __cil_tmp21 = __cil_tmp20 & 223U;
    info->signals = (unsigned char )__cil_tmp21;
  } else {

  }
  }
  {
  __cil_tmp22 = clear & 2U;
  if (__cil_tmp22 != 0U) {
    __cil_tmp23 = info->signals;
    __cil_tmp24 = (unsigned int )__cil_tmp23;
    __cil_tmp25 = __cil_tmp24 & 127U;
    info->signals = (unsigned char )__cil_tmp25;
  } else {

  }
  }
  {
  __cil_tmp26 = & info->lock;
  tmp = spinlock_check(__cil_tmp26);
  flags = _raw_spin_lock_irqsave(tmp);
  set_signals(info);
  __cil_tmp27 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp27, flags);
  }
  return (0);
}
}
static int carrier_raised(struct tty_port *port )
{ unsigned long flags ;
  struct slgt_info *info ;
  struct tty_port const *__mptr ;
  raw_spinlock_t *tmp ;
  struct slgt_info *__cil_tmp6 ;
  spinlock_t *__cil_tmp7 ;
  spinlock_t *__cil_tmp8 ;
  unsigned char __cil_tmp9 ;
  int __cil_tmp10 ;

  {
  {
  __mptr = (struct tty_port const *)port;
  __cil_tmp6 = (struct slgt_info *)__mptr;
  info = __cil_tmp6 + 1152921504606846968UL;
  __cil_tmp7 = & info->lock;
  tmp = spinlock_check(__cil_tmp7);
  flags = _raw_spin_lock_irqsave(tmp);
  get_signals(info);
  __cil_tmp8 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp8, flags);
  }
  {
  __cil_tmp9 = info->signals;
  __cil_tmp10 = (int )__cil_tmp9;
  return (__cil_tmp10 & 1);
  }
}
}
static void dtr_rts(struct tty_port *port , int on )
{ unsigned long flags ;
  struct slgt_info *info ;
  struct tty_port const *__mptr ;
  raw_spinlock_t *tmp ;
  struct slgt_info *__cil_tmp7 ;
  spinlock_t *__cil_tmp8 ;
  unsigned char __cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  unsigned int __cil_tmp11 ;
  unsigned char __cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  spinlock_t *__cil_tmp15 ;

  {
  {
  __mptr = (struct tty_port const *)port;
  __cil_tmp7 = (struct slgt_info *)__mptr;
  info = __cil_tmp7 + 1152921504606846968UL;
  __cil_tmp8 = & info->lock;
  tmp = spinlock_check(__cil_tmp8);
  flags = _raw_spin_lock_irqsave(tmp);
  }
  if (on != 0) {
    __cil_tmp9 = info->signals;
    __cil_tmp10 = (unsigned int )__cil_tmp9;
    __cil_tmp11 = __cil_tmp10 | 160U;
    info->signals = (unsigned char )__cil_tmp11;
  } else {
    __cil_tmp12 = info->signals;
    __cil_tmp13 = (unsigned int )__cil_tmp12;
    __cil_tmp14 = __cil_tmp13 & 95U;
    info->signals = (unsigned char )__cil_tmp14;
  }
  {
  set_signals(info);
  __cil_tmp15 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp15, flags);
  }
  return;
}
}
static int block_til_ready(struct tty_struct *tty , struct file *filp , struct slgt_info *info )
{ wait_queue_t wait ;
  struct task_struct *tmp ;
  int retval ;
  bool do_clocal ;
  bool extra_count ;
  unsigned long flags ;
  int cd ;
  struct tty_port *port ;
  raw_spinlock_t *tmp___0 ;
  int tmp___1 ;
  long volatile __x ;
  u8 volatile *__ptr ;
  struct task_struct *tmp___2 ;
  u16 volatile *__ptr___0 ;
  struct task_struct *tmp___3 ;
  u32 volatile *__ptr___1 ;
  struct task_struct *tmp___4 ;
  u64 volatile *__ptr___2 ;
  struct task_struct *tmp___5 ;
  int tmp___6 ;
  struct task_struct *tmp___7 ;
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
  struct tty_driver *__cil_tmp35 ;
  char const *__cil_tmp36 ;
  unsigned int __cil_tmp37 ;
  unsigned int __cil_tmp38 ;
  unsigned long __cil_tmp39 ;
  unsigned long __cil_tmp40 ;
  unsigned long __cil_tmp41 ;
  unsigned long __cil_tmp42 ;
  struct ktermios *__cil_tmp43 ;
  tcflag_t __cil_tmp44 ;
  unsigned int __cil_tmp45 ;
  wait_queue_head_t *__cil_tmp46 ;
  spinlock_t *__cil_tmp47 ;
  int __cil_tmp48 ;
  spinlock_t *__cil_tmp49 ;
  int __cil_tmp50 ;
  struct ktermios *__cil_tmp51 ;
  tcflag_t __cil_tmp52 ;
  unsigned int __cil_tmp53 ;
  long volatile *__cil_tmp54 ;
  long volatile *__cil_tmp55 ;
  long volatile *__cil_tmp56 ;
  long volatile *__cil_tmp57 ;
  unsigned long __cil_tmp58 ;
  unsigned long __cil_tmp59 ;
  unsigned long __cil_tmp60 ;
  int __cil_tmp61 ;
  unsigned long __cil_tmp62 ;
  unsigned long __cil_tmp63 ;
  struct tty_driver *__cil_tmp64 ;
  char const *__cil_tmp65 ;
  long volatile *__cil_tmp66 ;
  long volatile *__cil_tmp67 ;
  long volatile *__cil_tmp68 ;
  long volatile *__cil_tmp69 ;
  wait_queue_head_t *__cil_tmp70 ;
  int __cil_tmp71 ;
  int __cil_tmp72 ;
  unsigned long __cil_tmp73 ;
  struct tty_driver *__cil_tmp74 ;
  char const *__cil_tmp75 ;

  {
  {
  tmp = get_current();
  wait.flags = 0U;
  wait.private = (void *)tmp;
  wait.func = & default_wake_function;
  wait.task_list.next = (struct list_head *)0;
  wait.task_list.prev = (struct list_head *)0;
  do_clocal = (bool )0;
  extra_count = (bool )0;
  port = & info->port;
  }
  if (debug_level > 2) {
    {
    __cil_tmp35 = tty->driver;
    __cil_tmp36 = __cil_tmp35->name;
    printk("%s block_til_ready\n", __cil_tmp36);
    }
  } else {

  }
  {
  __cil_tmp37 = filp->f_flags;
  __cil_tmp38 = __cil_tmp37 & 2048U;
  if (__cil_tmp38 != 0U) {
    __cil_tmp39 = port->flags;
    port->flags = __cil_tmp39 | 536870912UL;
    return (0);
  } else {
    {
    __cil_tmp40 = tty->flags;
    __cil_tmp41 = __cil_tmp40 & 2UL;
    if (__cil_tmp41 != 0UL) {
      __cil_tmp42 = port->flags;
      port->flags = __cil_tmp42 | 536870912UL;
      return (0);
    } else {

    }
    }
  }
  }
  {
  __cil_tmp43 = tty->termios;
  __cil_tmp44 = __cil_tmp43->c_cflag;
  __cil_tmp45 = __cil_tmp44 & 2048U;
  if (__cil_tmp45 != 0U) {
    do_clocal = (bool )1;
  } else {

  }
  }
  {
  retval = 0;
  __cil_tmp46 = & port->open_wait;
  add_wait_queue(__cil_tmp46, & wait);
  __cil_tmp47 = & info->lock;
  tmp___0 = spinlock_check(__cil_tmp47);
  flags = _raw_spin_lock_irqsave(tmp___0);
  tmp___1 = tty_hung_up_p(filp);
  }
  if (tmp___1 == 0) {
    extra_count = (bool )1;
    __cil_tmp48 = port->count;
    port->count = __cil_tmp48 - 1;
  } else {

  }
  {
  __cil_tmp49 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp49, flags);
  __cil_tmp50 = port->blocked_open;
  port->blocked_open = __cil_tmp50 + 1;
  }
  ldv_37408: ;
  {
  __cil_tmp51 = tty->termios;
  __cil_tmp52 = __cil_tmp51->c_cflag;
  __cil_tmp53 = __cil_tmp52 & 4111U;
  if (__cil_tmp53 != 0U) {
    {
    tty_port_raise_dtr_rts(port);
    }
  } else {

  }
  }
  __x = (long volatile )1L;
  if (1) {
    goto case_8;
  } else {
    goto switch_default;
    if (0) {
      {
      tmp___2 = get_current();
      __cil_tmp54 = & tmp___2->state;
      __ptr = (u8 volatile *)__cil_tmp54;
      __asm__ volatile ("xchgb %0,%1": "=q" (__x), "+m" (*__ptr): "0" (__x): "memory");
      }
      goto ldv_37398;
      {
      tmp___3 = get_current();
      __cil_tmp55 = & tmp___3->state;
      __ptr___0 = (u16 volatile *)__cil_tmp55;
      __asm__ volatile ("xchgw %0,%1": "=r" (__x), "+m" (*__ptr___0): "0" (__x): "memory");
      }
      goto ldv_37398;
      {
      tmp___4 = get_current();
      __cil_tmp56 = & tmp___4->state;
      __ptr___1 = (u32 volatile *)__cil_tmp56;
      __asm__ volatile ("xchgl %0,%1": "=r" (__x), "+m" (*__ptr___1): "0" (__x): "memory");
      }
      goto ldv_37398;
      case_8:
      {
      tmp___5 = get_current();
      __cil_tmp57 = & tmp___5->state;
      __ptr___2 = (u64 volatile *)__cil_tmp57;
      __asm__ volatile ("xchgq %0,%1": "=r" (__x), "+m" (*__ptr___2): "0" (__x): "memory");
      }
      goto ldv_37398;
      switch_default:
      {
      __xchg_wrong_size();
      }
    } else {

    }
  }
  ldv_37398:
  {
  tmp___6 = tty_hung_up_p(filp);
  }
  if (tmp___6 != 0) {
    goto _L;
  } else {
    {
    __cil_tmp58 = port->flags;
    __cil_tmp59 = __cil_tmp58 & 2147483648UL;
    if (__cil_tmp59 == 0UL) {
      _L:
      {
      __cil_tmp60 = port->flags;
      __cil_tmp61 = (int )__cil_tmp60;
      if (__cil_tmp61 & 1) {
        retval = -11;
      } else {
        retval = -512;
      }
      }
      goto ldv_37407;
    } else {

    }
    }
  }
  {
  cd = tty_port_carrier_raised(port);
  }
  {
  __cil_tmp62 = port->flags;
  __cil_tmp63 = __cil_tmp62 & 134217728UL;
  if (__cil_tmp63 == 0UL) {
    if ((int )do_clocal) {
      goto ldv_37407;
    } else
    if (cd != 0) {
      goto ldv_37407;
    } else {

    }
  } else {

  }
  }
  {
  tmp___7 = get_current();
  tmp___8 = signal_pending(tmp___7);
  }
  if (tmp___8 != 0) {
    retval = -512;
    goto ldv_37407;
  } else {

  }
  if (debug_level > 2) {
    {
    __cil_tmp64 = tty->driver;
    __cil_tmp65 = __cil_tmp64->name;
    printk("%s block_til_ready wait\n", __cil_tmp65);
    }
  } else {

  }
  {
  tty_unlock();
  schedule();
  tty_lock();
  }
  goto ldv_37408;
  ldv_37407:
  __x___0 = (long volatile )0L;
  if (1) {
    goto case_8___0;
  } else {
    goto switch_default___0;
    if (0) {
      {
      tmp___9 = get_current();
      __cil_tmp66 = & tmp___9->state;
      __ptr___3 = (u8 volatile *)__cil_tmp66;
      __asm__ volatile ("xchgb %0,%1": "=q" (__x___0), "+m" (*__ptr___3): "0" (__x___0): "memory");
      }
      goto ldv_37412;
      {
      tmp___10 = get_current();
      __cil_tmp67 = & tmp___10->state;
      __ptr___4 = (u16 volatile *)__cil_tmp67;
      __asm__ volatile ("xchgw %0,%1": "=r" (__x___0), "+m" (*__ptr___4): "0" (__x___0): "memory");
      }
      goto ldv_37412;
      {
      tmp___11 = get_current();
      __cil_tmp68 = & tmp___11->state;
      __ptr___5 = (u32 volatile *)__cil_tmp68;
      __asm__ volatile ("xchgl %0,%1": "=r" (__x___0), "+m" (*__ptr___5): "0" (__x___0): "memory");
      }
      goto ldv_37412;
      case_8___0:
      {
      tmp___12 = get_current();
      __cil_tmp69 = & tmp___12->state;
      __ptr___6 = (u64 volatile *)__cil_tmp69;
      __asm__ volatile ("xchgq %0,%1": "=r" (__x___0), "+m" (*__ptr___6): "0" (__x___0): "memory");
      }
      goto ldv_37412;
      switch_default___0:
      {
      __xchg_wrong_size();
      }
    } else {

    }
  }
  ldv_37412:
  {
  __cil_tmp70 = & port->open_wait;
  remove_wait_queue(__cil_tmp70, & wait);
  }
  if ((int )extra_count) {
    __cil_tmp71 = port->count;
    port->count = __cil_tmp71 + 1;
  } else {

  }
  __cil_tmp72 = port->blocked_open;
  port->blocked_open = __cil_tmp72 - 1;
  if (retval == 0) {
    __cil_tmp73 = port->flags;
    port->flags = __cil_tmp73 | 536870912UL;
  } else {

  }
  if (debug_level > 2) {
    {
    __cil_tmp74 = tty->driver;
    __cil_tmp75 = __cil_tmp74->name;
    printk("%s block_til_ready ready, rc=%d\n", __cil_tmp75, retval);
    }
  } else {

  }
  return (retval);
}
}
static int alloc_tmp_rbuf(struct slgt_info *info )
{ void *tmp ;
  u32 __cil_tmp3 ;
  u32 __cil_tmp4 ;
  size_t __cil_tmp5 ;
  unsigned char *__cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  unsigned char *__cil_tmp8 ;
  unsigned long __cil_tmp9 ;

  {
  {
  __cil_tmp3 = info->max_frame_size;
  __cil_tmp4 = __cil_tmp3 + 5U;
  __cil_tmp5 = (size_t )__cil_tmp4;
  tmp = kmalloc(__cil_tmp5, 208U);
  info->tmp_rbuf = (unsigned char *)tmp;
  }
  {
  __cil_tmp6 = (unsigned char *)0;
  __cil_tmp7 = (unsigned long )__cil_tmp6;
  __cil_tmp8 = info->tmp_rbuf;
  __cil_tmp9 = (unsigned long )__cil_tmp8;
  if (__cil_tmp9 == __cil_tmp7) {
    return (-12);
  } else {

  }
  }
  return (0);
}
}
static void free_tmp_rbuf(struct slgt_info *info )
{ unsigned char *__cil_tmp2 ;
  void const *__cil_tmp3 ;

  {
  {
  __cil_tmp2 = info->tmp_rbuf;
  __cil_tmp3 = (void const *)__cil_tmp2;
  kfree(__cil_tmp3);
  info->tmp_rbuf = (unsigned char *)0;
  }
  return;
}
}
static int alloc_desc(struct slgt_info *info )
{ unsigned int i ;
  unsigned int pbufs ;
  void *tmp ;
  struct pci_dev *__cil_tmp5 ;
  dma_addr_t *__cil_tmp6 ;
  char *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  char *__cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  char *__cil_tmp11 ;
  void *__cil_tmp12 ;
  char *__cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  char *__cil_tmp16 ;
  struct slgt_desc *__cil_tmp17 ;
  dma_addr_t __cil_tmp18 ;
  unsigned long __cil_tmp19 ;
  struct slgt_desc *__cil_tmp20 ;
  struct slgt_desc *__cil_tmp21 ;
  unsigned int __cil_tmp22 ;
  unsigned int __cil_tmp23 ;
  unsigned int __cil_tmp24 ;
  unsigned long __cil_tmp25 ;
  struct slgt_desc *__cil_tmp26 ;
  struct slgt_desc *__cil_tmp27 ;
  unsigned long __cil_tmp28 ;
  struct slgt_desc *__cil_tmp29 ;
  struct slgt_desc *__cil_tmp30 ;
  unsigned int __cil_tmp31 ;
  unsigned int __cil_tmp32 ;
  unsigned long __cil_tmp33 ;
  struct slgt_desc *__cil_tmp34 ;
  struct slgt_desc *__cil_tmp35 ;
  unsigned int __cil_tmp36 ;
  unsigned long __cil_tmp37 ;
  struct slgt_desc *__cil_tmp38 ;
  struct slgt_desc *__cil_tmp39 ;
  unsigned int __cil_tmp40 ;
  unsigned int __cil_tmp41 ;
  unsigned int __cil_tmp42 ;
  unsigned int __cil_tmp43 ;
  unsigned int __cil_tmp44 ;
  unsigned long __cil_tmp45 ;
  struct slgt_desc *__cil_tmp46 ;
  struct slgt_desc *__cil_tmp47 ;
  unsigned int __cil_tmp48 ;
  unsigned int __cil_tmp49 ;
  unsigned long __cil_tmp50 ;
  struct slgt_desc *__cil_tmp51 ;
  struct slgt_desc *__cil_tmp52 ;
  unsigned int __cil_tmp53 ;
  unsigned int __cil_tmp54 ;
  unsigned int __cil_tmp55 ;
  unsigned int __cil_tmp56 ;
  unsigned int __cil_tmp57 ;

  {
  {
  __cil_tmp5 = info->pdev;
  __cil_tmp6 = & info->bufs_dma_addr;
  tmp = pci_alloc_consistent(__cil_tmp5, 4096UL, __cil_tmp6);
  info->bufs = (char *)tmp;
  }
  {
  __cil_tmp7 = (char *)0;
  __cil_tmp8 = (unsigned long )__cil_tmp7;
  __cil_tmp9 = info->bufs;
  __cil_tmp10 = (unsigned long )__cil_tmp9;
  if (__cil_tmp10 == __cil_tmp8) {
    return (-12);
  } else {

  }
  }
  {
  __cil_tmp11 = info->bufs;
  __cil_tmp12 = (void *)__cil_tmp11;
  memset(__cil_tmp12, 0, 4096UL);
  __cil_tmp13 = info->bufs;
  info->rbufs = (struct slgt_desc *)__cil_tmp13;
  __cil_tmp14 = info->rbuf_count;
  __cil_tmp15 = (unsigned long )__cil_tmp14;
  __cil_tmp16 = info->bufs;
  __cil_tmp17 = (struct slgt_desc *)__cil_tmp16;
  info->tbufs = __cil_tmp17 + __cil_tmp15;
  __cil_tmp18 = info->bufs_dma_addr;
  pbufs = (unsigned int )__cil_tmp18;
  i = 0U;
  }
  goto ldv_37433;
  ldv_37432:
  __cil_tmp19 = (unsigned long )i;
  __cil_tmp20 = info->rbufs;
  __cil_tmp21 = __cil_tmp20 + __cil_tmp19;
  __cil_tmp22 = i * 48U;
  __cil_tmp21->pdesc = __cil_tmp22 + pbufs;
  {
  __cil_tmp23 = info->rbuf_count;
  __cil_tmp24 = __cil_tmp23 - 1U;
  if (__cil_tmp24 == i) {
    __cil_tmp25 = (unsigned long )i;
    __cil_tmp26 = info->rbufs;
    __cil_tmp27 = __cil_tmp26 + __cil_tmp25;
    __cil_tmp27->next = pbufs;
  } else {
    __cil_tmp28 = (unsigned long )i;
    __cil_tmp29 = info->rbufs;
    __cil_tmp30 = __cil_tmp29 + __cil_tmp28;
    __cil_tmp31 = i + 1U;
    __cil_tmp32 = __cil_tmp31 * 48U;
    __cil_tmp30->next = __cil_tmp32 + pbufs;
  }
  }
  __cil_tmp33 = (unsigned long )i;
  __cil_tmp34 = info->rbufs;
  __cil_tmp35 = __cil_tmp34 + __cil_tmp33;
  __cil_tmp35->count = (__le16 )256U;
  i = i + 1U;
  ldv_37433: ;
  {
  __cil_tmp36 = info->rbuf_count;
  if (__cil_tmp36 > i) {
    goto ldv_37432;
  } else {
    goto ldv_37434;
  }
  }
  ldv_37434:
  i = 0U;
  goto ldv_37436;
  ldv_37435:
  __cil_tmp37 = (unsigned long )i;
  __cil_tmp38 = info->tbufs;
  __cil_tmp39 = __cil_tmp38 + __cil_tmp37;
  __cil_tmp40 = info->rbuf_count;
  __cil_tmp41 = __cil_tmp40 + i;
  __cil_tmp42 = __cil_tmp41 * 48U;
  __cil_tmp39->pdesc = __cil_tmp42 + pbufs;
  {
  __cil_tmp43 = info->tbuf_count;
  __cil_tmp44 = __cil_tmp43 - 1U;
  if (__cil_tmp44 == i) {
    __cil_tmp45 = (unsigned long )i;
    __cil_tmp46 = info->tbufs;
    __cil_tmp47 = __cil_tmp46 + __cil_tmp45;
    __cil_tmp48 = info->rbuf_count;
    __cil_tmp49 = __cil_tmp48 * 48U;
    __cil_tmp47->next = __cil_tmp49 + pbufs;
  } else {
    __cil_tmp50 = (unsigned long )i;
    __cil_tmp51 = info->tbufs;
    __cil_tmp52 = __cil_tmp51 + __cil_tmp50;
    __cil_tmp53 = info->rbuf_count;
    __cil_tmp54 = __cil_tmp53 + i;
    __cil_tmp55 = __cil_tmp54 + 1U;
    __cil_tmp56 = __cil_tmp55 * 48U;
    __cil_tmp52->next = __cil_tmp56 + pbufs;
  }
  }
  i = i + 1U;
  ldv_37436: ;
  {
  __cil_tmp57 = info->tbuf_count;
  if (__cil_tmp57 > i) {
    goto ldv_37435;
  } else {
    goto ldv_37437;
  }
  }
  ldv_37437: ;
  return (0);
}
}
static void free_desc(struct slgt_info *info )
{ char *__cil_tmp2 ;
  unsigned long __cil_tmp3 ;
  char *__cil_tmp4 ;
  unsigned long __cil_tmp5 ;
  struct pci_dev *__cil_tmp6 ;
  char *__cil_tmp7 ;
  void *__cil_tmp8 ;
  dma_addr_t __cil_tmp9 ;

  {
  {
  __cil_tmp2 = (char *)0;
  __cil_tmp3 = (unsigned long )__cil_tmp2;
  __cil_tmp4 = info->bufs;
  __cil_tmp5 = (unsigned long )__cil_tmp4;
  if (__cil_tmp5 != __cil_tmp3) {
    {
    __cil_tmp6 = info->pdev;
    __cil_tmp7 = info->bufs;
    __cil_tmp8 = (void *)__cil_tmp7;
    __cil_tmp9 = info->bufs_dma_addr;
    pci_free_consistent(__cil_tmp6, 4096UL, __cil_tmp8, __cil_tmp9);
    info->bufs = (char *)0;
    info->rbufs = (struct slgt_desc *)0;
    info->tbufs = (struct slgt_desc *)0;
    }
  } else {

  }
  }
  return;
}
}
static int alloc_bufs(struct slgt_info *info , struct slgt_desc *bufs , int count )
{ int i ;
  char *tmp ;
  void *tmp___0 ;
  struct pci_dev *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  struct slgt_desc *__cil_tmp9 ;
  dma_addr_t *__cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  struct slgt_desc *__cil_tmp12 ;
  char *__cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  struct slgt_desc *__cil_tmp17 ;
  unsigned long __cil_tmp18 ;
  struct slgt_desc *__cil_tmp19 ;
  dma_addr_t __cil_tmp20 ;

  {
  i = 0;
  goto ldv_37448;
  ldv_37447:
  {
  __cil_tmp7 = info->pdev;
  __cil_tmp8 = (unsigned long )i;
  __cil_tmp9 = bufs + __cil_tmp8;
  __cil_tmp10 = & __cil_tmp9->buf_dma_addr;
  tmp___0 = pci_alloc_consistent(__cil_tmp7, 256UL, __cil_tmp10);
  tmp = (char *)tmp___0;
  __cil_tmp11 = (unsigned long )i;
  __cil_tmp12 = bufs + __cil_tmp11;
  __cil_tmp12->buf = tmp;
  }
  {
  __cil_tmp13 = (char *)0;
  __cil_tmp14 = (unsigned long )__cil_tmp13;
  __cil_tmp15 = (unsigned long )tmp;
  if (__cil_tmp15 == __cil_tmp14) {
    return (-12);
  } else {

  }
  }
  __cil_tmp16 = (unsigned long )i;
  __cil_tmp17 = bufs + __cil_tmp16;
  __cil_tmp18 = (unsigned long )i;
  __cil_tmp19 = bufs + __cil_tmp18;
  __cil_tmp20 = __cil_tmp19->buf_dma_addr;
  __cil_tmp17->pbuf = (unsigned int )__cil_tmp20;
  i = i + 1;
  ldv_37448: ;
  if (i < count) {
    goto ldv_37447;
  } else {
    goto ldv_37449;
  }
  ldv_37449: ;
  return (0);
}
}
static void free_bufs(struct slgt_info *info , struct slgt_desc *bufs , int count )
{ int i ;
  char *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  struct slgt_desc *__cil_tmp8 ;
  char *__cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  struct pci_dev *__cil_tmp11 ;
  unsigned long __cil_tmp12 ;
  struct slgt_desc *__cil_tmp13 ;
  char *__cil_tmp14 ;
  void *__cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  struct slgt_desc *__cil_tmp17 ;
  dma_addr_t __cil_tmp18 ;
  unsigned long __cil_tmp19 ;
  struct slgt_desc *__cil_tmp20 ;

  {
  i = 0;
  goto ldv_37458;
  ldv_37457: ;
  {
  __cil_tmp5 = (char *)0;
  __cil_tmp6 = (unsigned long )__cil_tmp5;
  __cil_tmp7 = (unsigned long )i;
  __cil_tmp8 = bufs + __cil_tmp7;
  __cil_tmp9 = __cil_tmp8->buf;
  __cil_tmp10 = (unsigned long )__cil_tmp9;
  if (__cil_tmp10 == __cil_tmp6) {
    goto ldv_37456;
  } else {

  }
  }
  {
  __cil_tmp11 = info->pdev;
  __cil_tmp12 = (unsigned long )i;
  __cil_tmp13 = bufs + __cil_tmp12;
  __cil_tmp14 = __cil_tmp13->buf;
  __cil_tmp15 = (void *)__cil_tmp14;
  __cil_tmp16 = (unsigned long )i;
  __cil_tmp17 = bufs + __cil_tmp16;
  __cil_tmp18 = __cil_tmp17->buf_dma_addr;
  pci_free_consistent(__cil_tmp11, 256UL, __cil_tmp15, __cil_tmp18);
  __cil_tmp19 = (unsigned long )i;
  __cil_tmp20 = bufs + __cil_tmp19;
  __cil_tmp20->buf = (char *)0;
  }
  ldv_37456:
  i = i + 1;
  ldv_37458: ;
  if (i < count) {
    goto ldv_37457;
  } else {
    goto ldv_37459;
  }
  ldv_37459: ;
  return;
}
}
static int alloc_dma_bufs(struct slgt_info *info )
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  struct slgt_desc *__cil_tmp6 ;
  unsigned int __cil_tmp7 ;
  int __cil_tmp8 ;
  struct slgt_desc *__cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  int __cil_tmp11 ;
  char (*__cil_tmp12)[25U] ;
  char *__cil_tmp13 ;

  {
  {
  info->rbuf_count = 32U;
  info->tbuf_count = 32U;
  tmp = alloc_desc(info);
  }
  if (tmp < 0) {
    goto _L;
  } else {
    {
    __cil_tmp6 = info->rbufs;
    __cil_tmp7 = info->rbuf_count;
    __cil_tmp8 = (int )__cil_tmp7;
    tmp___0 = alloc_bufs(info, __cil_tmp6, __cil_tmp8);
    }
    if (tmp___0 < 0) {
      goto _L;
    } else {
      {
      __cil_tmp9 = info->tbufs;
      __cil_tmp10 = info->tbuf_count;
      __cil_tmp11 = (int )__cil_tmp10;
      tmp___1 = alloc_bufs(info, __cil_tmp9, __cil_tmp11);
      }
      if (tmp___1 < 0) {
        goto _L;
      } else {
        {
        tmp___2 = alloc_tmp_rbuf(info);
        }
        if (tmp___2 < 0) {
          _L:
          if (debug_level > 1) {
            {
            __cil_tmp12 = & info->device_name;
            __cil_tmp13 = (char *)__cil_tmp12;
            printk("%s DMA buffer alloc fail\n", __cil_tmp13);
            }
          } else {

          }
          return (-12);
        } else {

        }
      }
    }
  }
  {
  reset_rbufs(info);
  }
  return (0);
}
}
static void free_dma_bufs(struct slgt_info *info )
{ char *__cil_tmp2 ;
  unsigned long __cil_tmp3 ;
  char *__cil_tmp4 ;
  unsigned long __cil_tmp5 ;
  struct slgt_desc *__cil_tmp6 ;
  unsigned int __cil_tmp7 ;
  int __cil_tmp8 ;
  struct slgt_desc *__cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  int __cil_tmp11 ;

  {
  {
  __cil_tmp2 = (char *)0;
  __cil_tmp3 = (unsigned long )__cil_tmp2;
  __cil_tmp4 = info->bufs;
  __cil_tmp5 = (unsigned long )__cil_tmp4;
  if (__cil_tmp5 != __cil_tmp3) {
    {
    __cil_tmp6 = info->rbufs;
    __cil_tmp7 = info->rbuf_count;
    __cil_tmp8 = (int )__cil_tmp7;
    free_bufs(info, __cil_tmp6, __cil_tmp8);
    __cil_tmp9 = info->tbufs;
    __cil_tmp10 = info->tbuf_count;
    __cil_tmp11 = (int )__cil_tmp10;
    free_bufs(info, __cil_tmp9, __cil_tmp11);
    free_desc(info);
    }
  } else {

  }
  }
  {
  free_tmp_rbuf(info);
  }
  return;
}
}
static int claim_resources(struct slgt_info *info )
{ struct resource *tmp ;
  void *tmp___0 ;
  u32 __cil_tmp4 ;
  resource_size_t __cil_tmp5 ;
  struct resource *__cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  char (*__cil_tmp9)[25U] ;
  char *__cil_tmp10 ;
  u32 __cil_tmp11 ;
  u32 __cil_tmp12 ;
  resource_size_t __cil_tmp13 ;
  unsigned char *__cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  unsigned char *__cil_tmp16 ;
  unsigned long __cil_tmp17 ;
  char (*__cil_tmp18)[25U] ;
  char *__cil_tmp19 ;
  u32 __cil_tmp20 ;

  {
  {
  __cil_tmp4 = info->phys_reg_addr;
  __cil_tmp5 = (resource_size_t )__cil_tmp4;
  tmp = __request_region(& iomem_resource, __cil_tmp5, 256ULL, "synclink_gt", 0);
  }
  {
  __cil_tmp6 = (struct resource *)0;
  __cil_tmp7 = (unsigned long )__cil_tmp6;
  __cil_tmp8 = (unsigned long )tmp;
  if (__cil_tmp8 == __cil_tmp7) {
    if (debug_level > 1) {
      {
      __cil_tmp9 = & info->device_name;
      __cil_tmp10 = (char *)__cil_tmp9;
      __cil_tmp11 = info->phys_reg_addr;
      printk("%s reg addr conflict, addr=%08X\n", __cil_tmp10, __cil_tmp11);
      }
    } else {

    }
    info->init_error = 2;
    goto errout;
  } else {
    info->reg_addr_requested = (bool )1;
  }
  }
  {
  __cil_tmp12 = info->phys_reg_addr;
  __cil_tmp13 = (resource_size_t )__cil_tmp12;
  tmp___0 = ioremap_nocache(__cil_tmp13, 256UL);
  info->reg_addr = (unsigned char *)tmp___0;
  }
  {
  __cil_tmp14 = (unsigned char *)0;
  __cil_tmp15 = (unsigned long )__cil_tmp14;
  __cil_tmp16 = info->reg_addr;
  __cil_tmp17 = (unsigned long )__cil_tmp16;
  if (__cil_tmp17 == __cil_tmp15) {
    if (debug_level > 1) {
      {
      __cil_tmp18 = & info->device_name;
      __cil_tmp19 = (char *)__cil_tmp18;
      __cil_tmp20 = info->phys_reg_addr;
      printk("%s can\'t map device registers, addr=%08X\n", __cil_tmp19, __cil_tmp20);
      }
    } else {

    }
    info->init_error = 8;
    goto errout;
  } else {

  }
  }
  return (0);
  errout:
  {
  release_resources(info);
  }
  return (-19);
}
}
static void release_resources(struct slgt_info *info )
{ bool __cil_tmp2 ;
  unsigned int __cil_tmp3 ;
  void *__cil_tmp4 ;
  bool __cil_tmp5 ;
  u32 __cil_tmp6 ;
  resource_size_t __cil_tmp7 ;
  unsigned char *__cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  unsigned char *__cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  unsigned char *__cil_tmp12 ;
  void volatile *__cil_tmp13 ;

  {
  {
  __cil_tmp2 = info->irq_requested;
  if ((int )__cil_tmp2) {
    {
    __cil_tmp3 = info->irq_level;
    __cil_tmp4 = (void *)info;
    free_irq(__cil_tmp3, __cil_tmp4);
    info->irq_requested = (bool )0;
    }
  } else {

  }
  }
  {
  __cil_tmp5 = info->reg_addr_requested;
  if ((int )__cil_tmp5) {
    {
    __cil_tmp6 = info->phys_reg_addr;
    __cil_tmp7 = (resource_size_t )__cil_tmp6;
    __release_region(& iomem_resource, __cil_tmp7, 256ULL);
    info->reg_addr_requested = (bool )0;
    }
  } else {

  }
  }
  {
  __cil_tmp8 = (unsigned char *)0;
  __cil_tmp9 = (unsigned long )__cil_tmp8;
  __cil_tmp10 = info->reg_addr;
  __cil_tmp11 = (unsigned long )__cil_tmp10;
  if (__cil_tmp11 != __cil_tmp9) {
    {
    __cil_tmp12 = info->reg_addr;
    __cil_tmp13 = (void volatile *)__cil_tmp12;
    iounmap(__cil_tmp13);
    info->reg_addr = (unsigned char *)0;
    }
  } else {

  }
  }
  return;
}
}
static void add_device(struct slgt_info *info )
{ char *devstr ;
  struct slgt_info *current_dev ;
  char (*__cil_tmp4)[25U] ;
  char *__cil_tmp5 ;
  int __cil_tmp6 ;
  int __cil_tmp7 ;
  struct slgt_info *__cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  struct slgt_info *__cil_tmp11 ;
  unsigned long __cil_tmp12 ;
  struct slgt_info *__cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  u32 __cil_tmp15 ;
  u32 __cil_tmp16 ;
  struct pci_dev *__cil_tmp17 ;
  unsigned short __cil_tmp18 ;
  int __cil_tmp19 ;
  struct pci_dev *__cil_tmp20 ;
  unsigned short __cil_tmp21 ;
  int __cil_tmp22 ;
  struct pci_dev *__cil_tmp23 ;
  unsigned short __cil_tmp24 ;
  int __cil_tmp25 ;
  struct pci_dev *__cil_tmp26 ;
  unsigned short __cil_tmp27 ;
  int __cil_tmp28 ;
  char (*__cil_tmp29)[25U] ;
  char *__cil_tmp30 ;
  u32 __cil_tmp31 ;
  unsigned int __cil_tmp32 ;
  u32 __cil_tmp33 ;

  {
  {
  info->next_device = (struct slgt_info *)0;
  info->line = slgt_device_count;
  __cil_tmp4 = & info->device_name;
  __cil_tmp5 = (char *)__cil_tmp4;
  __cil_tmp6 = info->line;
  sprintf(__cil_tmp5, "%s%d", tty_dev_prefix, __cil_tmp6);
  }
  {
  __cil_tmp7 = info->line;
  if (__cil_tmp7 <= 31) {
    if (maxframe[info->line] != 0) {
      info->max_frame_size = (u32 )maxframe[info->line];
    } else {

    }
  } else {

  }
  }
  slgt_device_count = slgt_device_count + 1;
  {
  __cil_tmp8 = (struct slgt_info *)0;
  __cil_tmp9 = (unsigned long )__cil_tmp8;
  __cil_tmp10 = (unsigned long )slgt_device_list;
  if (__cil_tmp10 == __cil_tmp9) {
    slgt_device_list = info;
  } else {
    current_dev = slgt_device_list;
    goto ldv_37479;
    ldv_37478:
    current_dev = current_dev->next_device;
    ldv_37479: ;
    {
    __cil_tmp11 = (struct slgt_info *)0;
    __cil_tmp12 = (unsigned long )__cil_tmp11;
    __cil_tmp13 = current_dev->next_device;
    __cil_tmp14 = (unsigned long )__cil_tmp13;
    if (__cil_tmp14 != __cil_tmp12) {
      goto ldv_37478;
    } else {
      goto ldv_37480;
    }
    }
    ldv_37480:
    current_dev->next_device = info;
  }
  }
  {
  __cil_tmp15 = info->max_frame_size;
  if (__cil_tmp15 <= 4095U) {
    info->max_frame_size = 4096U;
  } else {
    {
    __cil_tmp16 = info->max_frame_size;
    if (__cil_tmp16 > 65535U) {
      info->max_frame_size = 65535U;
    } else {

    }
    }
  }
  }
  {
  __cil_tmp17 = info->pdev;
  __cil_tmp18 = __cil_tmp17->device;
  __cil_tmp19 = (int )__cil_tmp18;
  if (__cil_tmp19 == 112) {
    goto case_112;
  } else {
    {
    __cil_tmp20 = info->pdev;
    __cil_tmp21 = __cil_tmp20->device;
    __cil_tmp22 = (int )__cil_tmp21;
    if (__cil_tmp22 == 160) {
      goto case_160;
    } else {
      {
      __cil_tmp23 = info->pdev;
      __cil_tmp24 = __cil_tmp23->device;
      __cil_tmp25 = (int )__cil_tmp24;
      if (__cil_tmp25 == 128) {
        goto case_128;
      } else {
        {
        __cil_tmp26 = info->pdev;
        __cil_tmp27 = __cil_tmp26->device;
        __cil_tmp28 = (int )__cil_tmp27;
        if (__cil_tmp28 == 144) {
          goto case_144;
        } else {
          goto switch_default;
          if (0) {
            case_112:
            devstr = (char *)"GT";
            goto ldv_37482;
            case_160:
            devstr = (char *)"GT2";
            goto ldv_37482;
            case_128:
            devstr = (char *)"GT4";
            goto ldv_37482;
            case_144:
            devstr = (char *)"AC";
            info->params.mode = 1UL;
            goto ldv_37482;
            switch_default:
            devstr = (char *)"(unknown model)";
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
  ldv_37482:
  {
  __cil_tmp29 = & info->device_name;
  __cil_tmp30 = (char *)__cil_tmp29;
  __cil_tmp31 = info->phys_reg_addr;
  __cil_tmp32 = info->irq_level;
  __cil_tmp33 = info->max_frame_size;
  printk("SyncLink %s %s IO=%08x IRQ=%d MaxFrameSize=%u\n", devstr, __cil_tmp30, __cil_tmp31,
         __cil_tmp32, __cil_tmp33);
  hdlcdev_init(info);
  }
  return;
}
}
static struct tty_port_operations const slgt_port_ops = {& carrier_raised, & dtr_rts, (void (*)(struct tty_port * ))0, (void (*)(struct tty_port * ))0,
    (int (*)(struct tty_port * , struct tty_struct * ))0, (void (*)(struct tty_port * ))0};
static struct slgt_info *alloc_dev(int adapter_num , int port_num , struct pci_dev *pdev )
{ struct slgt_info *info ;
  void *tmp ;
  struct lock_class_key __key ;
  atomic_long_t __constr_expr_0 ;
  struct lock_class_key __key___0 ;
  struct lock_class_key __key___1 ;
  struct lock_class_key __key___2 ;
  size_t __len ;
  void *__ret ;
  struct lock_class_key __key___3 ;
  struct lock_class_key __key___4 ;
  struct slgt_info *__cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  unsigned long __cil_tmp17 ;
  struct tty_port *__cil_tmp18 ;
  struct work_struct *__cil_tmp19 ;
  struct lockdep_map *__cil_tmp20 ;
  struct list_head *__cil_tmp21 ;
  wait_queue_head_t *__cil_tmp22 ;
  wait_queue_head_t *__cil_tmp23 ;
  spinlock_t *__cil_tmp24 ;
  struct raw_spinlock *__cil_tmp25 ;
  MGSL_PARAMS *__cil_tmp26 ;
  void *__cil_tmp27 ;
  void const *__cil_tmp28 ;
  MGSL_PARAMS *__cil_tmp29 ;
  void *__cil_tmp30 ;
  void const *__cil_tmp31 ;
  struct timer_list *__cil_tmp32 ;
  unsigned long __cil_tmp33 ;
  struct timer_list *__cil_tmp34 ;
  unsigned long __cil_tmp35 ;
  resource_size_t __cil_tmp36 ;

  {
  {
  tmp = kzalloc(10120UL, 208U);
  info = (struct slgt_info *)tmp;
  }
  {
  __cil_tmp15 = (struct slgt_info *)0;
  __cil_tmp16 = (unsigned long )__cil_tmp15;
  __cil_tmp17 = (unsigned long )info;
  if (__cil_tmp17 == __cil_tmp16) {
    if (debug_level > 1) {
      {
      printk("%s device alloc failed adapter=%d port=%d\n", driver_name, adapter_num,
             port_num);
      }
    } else {
      {
      __cil_tmp18 = & info->port;
      tty_port_init(__cil_tmp18);
      info->port.ops = & slgt_port_ops;
      info->magic = 21505;
      __cil_tmp19 = & info->task;
      __init_work(__cil_tmp19, 0);
      __constr_expr_0.counter = 2097664L;
      info->task.data = __constr_expr_0;
      __cil_tmp20 = & info->task.lockdep_map;
      lockdep_init_map(__cil_tmp20, "(&info->task)", & __key, 0);
      __cil_tmp21 = & info->task.entry;
      INIT_LIST_HEAD(__cil_tmp21);
      info->task.func = & bh_handler;
      info->max_frame_size = 4096U;
      info->base_clock = 14745600U;
      info->rbuf_fill_level = 256U;
      info->port.close_delay = 125U;
      info->port.closing_wait = 7500U;
      __cil_tmp22 = & info->status_event_wait_q;
      __init_waitqueue_head(__cil_tmp22, & __key___0);
      __cil_tmp23 = & info->event_wait_q;
      __init_waitqueue_head(__cil_tmp23, & __key___1);
      __cil_tmp24 = & info->netlock;
      spinlock_check(__cil_tmp24);
      __cil_tmp25 = & info->netlock.ldv_6060.rlock;
      __raw_spin_lock_init(__cil_tmp25, "&(&info->netlock)->rlock", & __key___2);
      __len = 48UL;
      }
      if (__len > 63UL) {
        {
        __cil_tmp26 = & info->params;
        __cil_tmp27 = (void *)__cil_tmp26;
        __cil_tmp28 = (void const *)(& default_params);
        __ret = __memcpy(__cil_tmp27, __cil_tmp28, __len);
        }
      } else {
        {
        __cil_tmp29 = & info->params;
        __cil_tmp30 = (void *)__cil_tmp29;
        __cil_tmp31 = (void const *)(& default_params);
        __ret = __builtin_memcpy(__cil_tmp30, __cil_tmp31, __len);
        }
      }
      {
      info->idle_mode = 0U;
      info->adapter_num = adapter_num;
      info->port_num = port_num;
      __cil_tmp32 = & info->tx_timer;
      __cil_tmp33 = (unsigned long )info;
      setup_timer_key(__cil_tmp32, "&info->tx_timer", & __key___3, & tx_timeout, __cil_tmp33);
      __cil_tmp34 = & info->rx_timer;
      __cil_tmp35 = (unsigned long )info;
      setup_timer_key(__cil_tmp34, "&info->rx_timer", & __key___4, & rx_timeout, __cil_tmp35);
      info->pdev = pdev;
      info->irq_level = pdev->irq;
      __cil_tmp36 = pdev->resource[0].start;
      info->phys_reg_addr = (u32 )__cil_tmp36;
      info->bus_type = 5U;
      info->irq_flags = 128UL;
      info->init_error = -1;
      }
    }
  } else {

  }
  }
  return (info);
}
}
static void device_init(int adapter_num , struct pci_dev *pdev )
{ struct slgt_info *port_array[4U] ;
  int i ;
  int port_count ;
  size_t __len ;
  void *__ret ;
  struct lock_class_key __key ;
  int tmp ;
  int tmp___0 ;
  unsigned short __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  unsigned short __cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  struct slgt_info *__cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  unsigned long __cil_tmp17 ;
  void const *__cil_tmp18 ;
  struct slgt_info *(*__cil_tmp19)[4U] ;
  void *__cil_tmp20 ;
  void const *__cil_tmp21 ;
  struct slgt_info *(*__cil_tmp22)[4U] ;
  void *__cil_tmp23 ;
  void const *__cil_tmp24 ;
  spinlock_t *__cil_tmp25 ;
  struct raw_spinlock *__cil_tmp26 ;
  unsigned int __cil_tmp27 ;
  unsigned long __cil_tmp28 ;
  char (*__cil_tmp29)[25U] ;
  char const *__cil_tmp30 ;
  void *__cil_tmp31 ;
  char (*__cil_tmp32)[25U] ;
  char *__cil_tmp33 ;
  unsigned int __cil_tmp34 ;
  int __cil_tmp35 ;
  unsigned int __cil_tmp36 ;
  struct pci_dev *__cil_tmp37 ;
  struct device *__cil_tmp38 ;

  {
  port_count = 1;
  {
  __cil_tmp11 = pdev->device;
  __cil_tmp12 = (unsigned int )__cil_tmp11;
  if (__cil_tmp12 == 160U) {
    port_count = 2;
  } else {
    {
    __cil_tmp13 = pdev->device;
    __cil_tmp14 = (unsigned int )__cil_tmp13;
    if (__cil_tmp14 == 128U) {
      port_count = 4;
    } else {

    }
    }
  }
  }
  i = 0;
  goto ldv_37515;
  ldv_37514:
  {
  port_array[i] = alloc_dev(adapter_num, i, pdev);
  }
  {
  __cil_tmp15 = (struct slgt_info *)0;
  __cil_tmp16 = (unsigned long )__cil_tmp15;
  __cil_tmp17 = (unsigned long )port_array[i];
  if (__cil_tmp17 == __cil_tmp16) {
    i = i - 1;
    goto ldv_37512;
    ldv_37511:
    {
    __cil_tmp18 = (void const *)port_array[i];
    kfree(__cil_tmp18);
    i = i - 1;
    }
    ldv_37512: ;
    if (i >= 0) {
      goto ldv_37511;
    } else {
      goto ldv_37513;
    }
    ldv_37513: ;
    return;
  } else {

  }
  }
  i = i + 1;
  ldv_37515: ;
  if (i < port_count) {
    goto ldv_37514;
  } else {
    goto ldv_37516;
  }
  ldv_37516:
  i = 0;
  goto ldv_37522;
  ldv_37521:
  __len = 32UL;
  if (__len > 63UL) {
    {
    __cil_tmp19 = & (port_array[i])->port_array;
    __cil_tmp20 = (void *)__cil_tmp19;
    __cil_tmp21 = (void const *)(& port_array);
    __ret = __memcpy(__cil_tmp20, __cil_tmp21, __len);
    }
  } else {
    {
    __cil_tmp22 = & (port_array[i])->port_array;
    __cil_tmp23 = (void *)__cil_tmp22;
    __cil_tmp24 = (void const *)(& port_array);
    __ret = __builtin_memcpy(__cil_tmp23, __cil_tmp24, __len);
    }
  }
  {
  add_device(port_array[i]);
  (port_array[i])->port_count = port_count;
  __cil_tmp25 = & (port_array[i])->lock;
  spinlock_check(__cil_tmp25);
  __cil_tmp26 = & (port_array[i])->lock.ldv_6060.rlock;
  __raw_spin_lock_init(__cil_tmp26, "&(&port_array[i]->lock)->rlock", & __key);
  i = i + 1;
  }
  ldv_37522: ;
  if (i < port_count) {
    goto ldv_37521;
  } else {
    goto ldv_37523;
  }
  ldv_37523:
  {
  tmp___0 = claim_resources(port_array[0]);
  }
  if (tmp___0 == 0) {
    {
    alloc_dma_bufs(port_array[0]);
    i = 1;
    }
    goto ldv_37525;
    ldv_37524:
    {
    (port_array[i])->irq_level = (port_array[0])->irq_level;
    (port_array[i])->reg_addr = (port_array[0])->reg_addr;
    alloc_dma_bufs(port_array[i]);
    i = i + 1;
    }
    ldv_37525: ;
    if (i < port_count) {
      goto ldv_37524;
    } else {
      goto ldv_37526;
    }
    ldv_37526:
    {
    __cil_tmp27 = (port_array[0])->irq_level;
    __cil_tmp28 = (port_array[0])->irq_flags;
    __cil_tmp29 = & (port_array[0])->device_name;
    __cil_tmp30 = (char const *)__cil_tmp29;
    __cil_tmp31 = (void *)port_array[0];
    tmp = request_irq(__cil_tmp27, & slgt_interrupt, __cil_tmp28, __cil_tmp30, __cil_tmp31);
    }
    if (tmp < 0) {
      if (debug_level > 1) {
        {
        __cil_tmp32 = & (port_array[0])->device_name;
        __cil_tmp33 = (char *)__cil_tmp32;
        __cil_tmp34 = (port_array[0])->irq_level;
        printk("%s request_irq failed IRQ=%d\n", __cil_tmp33, __cil_tmp34);
        }
      } else {
        {
        (port_array[0])->irq_requested = (bool )1;
        adapter_test(port_array[0]);
        i = 1;
        }
        goto ldv_37528;
        ldv_37527:
        (port_array[i])->init_error = (port_array[0])->init_error;
        (port_array[i])->gpio_present = (port_array[0])->gpio_present;
        i = i + 1;
        ldv_37528: ;
        if (i < port_count) {
          goto ldv_37527;
        } else {
          goto ldv_37529;
        }
        ldv_37529: ;
      }
    } else {

    }
  } else {

  }
  i = 0;
  goto ldv_37531;
  ldv_37530:
  {
  __cil_tmp35 = (port_array[i])->line;
  __cil_tmp36 = (unsigned int )__cil_tmp35;
  __cil_tmp37 = (port_array[i])->pdev;
  __cil_tmp38 = & __cil_tmp37->dev;
  tty_register_device(serial_driver, __cil_tmp36, __cil_tmp38);
  i = i + 1;
  }
  ldv_37531: ;
  if (i < port_count) {
    goto ldv_37530;
  } else {
    goto ldv_37532;
  }
  ldv_37532: ;
  return;
}
}
static int init_one(struct pci_dev *dev , struct pci_device_id const *ent )
{ int tmp ;

  {
  {
  tmp = pci_enable_device(dev);
  }
  if (tmp != 0) {
    {
    printk("error enabling pci device %p\n", dev);
    }
    return (-5);
  } else {

  }
  {
  pci_set_master(dev);
  device_init(slgt_device_count, dev);
  }
  return (0);
}
}
static void remove_one(struct pci_dev *dev )
{

  {
  return;
}
}
static struct tty_operations const ops =
     {(struct tty_struct *(*)(struct tty_driver * , struct inode * , int ))0, (int (*)(struct tty_driver * ,
                                                                                      struct tty_struct * ))0,
    (void (*)(struct tty_driver * , struct tty_struct * ))0, & open, & close, (void (*)(struct tty_struct * ))0,
    (void (*)(struct tty_struct * ))0, & write, & put_char, & flush_chars, & write_room,
    & chars_in_buffer, & ioctl, & slgt_compat_ioctl, & set_termios, & throttle, & unthrottle,
    & tx_hold, & tx_release, & hangup, & set_break, & flush_buffer, (void (*)(struct tty_struct * ))0,
    & wait_until_sent, & send_xchar, & tiocmget, & tiocmset, (int (*)(struct tty_struct * ,
                                                                      struct winsize * ))0,
    (int (*)(struct tty_struct * , struct termiox * ))0, & get_icount, (int (*)(struct tty_driver * ,
                                                                                int ,
                                                                                char * ))0,
    (int (*)(struct tty_driver * , int ))0, (void (*)(struct tty_driver * , int ,
                                                       char ))0, & synclink_gt_proc_fops};
static void slgt_cleanup(void)
{ int rc ;
  struct slgt_info *info ;
  struct slgt_info *tmp ;
  struct tty_driver *__cil_tmp4 ;
  unsigned long __cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  int __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  struct slgt_info *__cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  struct slgt_info *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  int __cil_tmp15 ;
  void const *__cil_tmp16 ;
  struct slgt_info *__cil_tmp17 ;
  unsigned long __cil_tmp18 ;
  unsigned long __cil_tmp19 ;

  {
  {
  printk("<6>unload %s\n", driver_name);
  }
  {
  __cil_tmp4 = (struct tty_driver *)0;
  __cil_tmp5 = (unsigned long )__cil_tmp4;
  __cil_tmp6 = (unsigned long )serial_driver;
  if (__cil_tmp6 != __cil_tmp5) {
    info = slgt_device_list;
    goto ldv_37548;
    ldv_37547:
    {
    __cil_tmp7 = info->line;
    __cil_tmp8 = (unsigned int )__cil_tmp7;
    tty_unregister_device(serial_driver, __cil_tmp8);
    info = info->next_device;
    }
    ldv_37548: ;
    {
    __cil_tmp9 = (struct slgt_info *)0;
    __cil_tmp10 = (unsigned long )__cil_tmp9;
    __cil_tmp11 = (unsigned long )info;
    if (__cil_tmp11 != __cil_tmp10) {
      goto ldv_37547;
    } else {
      goto ldv_37549;
    }
    }
    ldv_37549:
    {
    rc = tty_unregister_driver(serial_driver);
    }
    if (rc != 0) {
      if (debug_level > 1) {
        {
        printk("tty_unregister_driver error=%d\n", rc);
        }
      } else {

      }
    } else {

    }
    {
    put_tty_driver(serial_driver);
    }
  } else {

  }
  }
  info = slgt_device_list;
  goto ldv_37551;
  ldv_37550:
  {
  reset_port(info);
  info = info->next_device;
  }
  ldv_37551: ;
  {
  __cil_tmp12 = (struct slgt_info *)0;
  __cil_tmp13 = (unsigned long )__cil_tmp12;
  __cil_tmp14 = (unsigned long )info;
  if (__cil_tmp14 != __cil_tmp13) {
    goto ldv_37550;
  } else {
    goto ldv_37552;
  }
  }
  ldv_37552:
  info = slgt_device_list;
  goto ldv_37554;
  ldv_37553:
  {
  hdlcdev_exit(info);
  free_dma_bufs(info);
  free_tmp_rbuf(info);
  }
  {
  __cil_tmp15 = info->port_num;
  if (__cil_tmp15 == 0) {
    {
    release_resources(info);
    }
  } else {

  }
  }
  {
  tmp = info;
  info = info->next_device;
  __cil_tmp16 = (void const *)tmp;
  kfree(__cil_tmp16);
  }
  ldv_37554: ;
  {
  __cil_tmp17 = (struct slgt_info *)0;
  __cil_tmp18 = (unsigned long )__cil_tmp17;
  __cil_tmp19 = (unsigned long )info;
  if (__cil_tmp19 != __cil_tmp18) {
    goto ldv_37553;
  } else {
    goto ldv_37555;
  }
  }
  ldv_37555: ;
  if ((int )pci_registered) {
    {
    pci_unregister_driver(& pci_driver);
    }
  } else {

  }
  return;
}
}
static int slgt_init(void)
{ int rc ;
  struct tty_driver *__cil_tmp2 ;
  unsigned long __cil_tmp3 ;
  unsigned long __cil_tmp4 ;
  int __cil_tmp5 ;
  struct slgt_info *__cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  unsigned long __cil_tmp8 ;

  {
  {
  printk("<6>%s\n", driver_name);
  serial_driver = alloc_tty_driver(32);
  }
  {
  __cil_tmp2 = (struct tty_driver *)0;
  __cil_tmp3 = (unsigned long )__cil_tmp2;
  __cil_tmp4 = (unsigned long )serial_driver;
  if (__cil_tmp4 == __cil_tmp3) {
    {
    printk("%s can\'t allocate tty driver\n", driver_name);
    }
    return (-12);
  } else {

  }
  }
  {
  serial_driver->owner = & __this_module;
  serial_driver->driver_name = (char const *)tty_driver_name;
  serial_driver->name = (char const *)tty_dev_prefix;
  serial_driver->major = ttymajor;
  serial_driver->minor_start = 64;
  serial_driver->type = (short)3;
  serial_driver->subtype = (short)1;
  serial_driver->init_termios = tty_std_termios;
  serial_driver->init_termios.c_cflag = 3261U;
  serial_driver->init_termios.c_ispeed = 9600U;
  serial_driver->init_termios.c_ospeed = 9600U;
  serial_driver->flags = 12;
  tty_set_operations(serial_driver, & ops);
  rc = tty_register_driver(serial_driver);
  }
  if (rc < 0) {
    if (debug_level > 1) {
      {
      printk("%s can\'t register serial driver\n", driver_name);
      }
    } else {

    }
    {
    put_tty_driver(serial_driver);
    serial_driver = (struct tty_driver *)0;
    }
    goto error;
  } else {

  }
  {
  __cil_tmp5 = serial_driver->major;
  printk("<6>%s, tty major#%d\n", driver_name, __cil_tmp5);
  slgt_device_count = 0;
  rc = __pci_register_driver(& pci_driver, & __this_module, "synclink_gt");
  }
  if (rc < 0) {
    {
    printk("%s pci_register_driver error=%d\n", driver_name, rc);
    }
    goto error;
  } else {

  }
  pci_registered = (bool )1;
  {
  __cil_tmp6 = (struct slgt_info *)0;
  __cil_tmp7 = (unsigned long )__cil_tmp6;
  __cil_tmp8 = (unsigned long )slgt_device_list;
  if (__cil_tmp8 == __cil_tmp7) {
    {
    printk("%s no devices found\n", driver_name);
    }
  } else {

  }
  }
  return (0);
  error:
  {
  slgt_cleanup();
  }
  return (rc);
}
}
static void slgt_exit(void)
{

  {
  {
  slgt_cleanup();
  }
  return;
}
}
static __u8 rd_reg8(struct slgt_info *info , unsigned int addr )
{ unsigned long reg_addr ;
  unsigned char tmp ;
  unsigned long __cil_tmp5 ;
  unsigned char *__cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  int __cil_tmp8 ;
  int __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  int __cil_tmp11 ;
  int __cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  void const volatile *__cil_tmp14 ;

  {
  __cil_tmp5 = (unsigned long )addr;
  __cil_tmp6 = info->reg_addr;
  __cil_tmp7 = (unsigned long )__cil_tmp6;
  reg_addr = __cil_tmp7 + __cil_tmp5;
  if (addr > 127U) {
    __cil_tmp8 = info->port_num;
    __cil_tmp9 = __cil_tmp8 * 32;
    __cil_tmp10 = (unsigned long )__cil_tmp9;
    reg_addr = __cil_tmp10 + reg_addr;
  } else
  if (addr > 63U) {
    __cil_tmp11 = info->port_num;
    __cil_tmp12 = __cil_tmp11 * 16;
    __cil_tmp13 = (unsigned long )__cil_tmp12;
    reg_addr = __cil_tmp13 + reg_addr;
  } else {

  }
  {
  __cil_tmp14 = (void const volatile *)reg_addr;
  tmp = readb(__cil_tmp14);
  }
  return (tmp);
}
}
static void wr_reg8(struct slgt_info *info , unsigned int addr , __u8 value )
{ unsigned long reg_addr ;
  unsigned long __cil_tmp5 ;
  unsigned char *__cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  int __cil_tmp8 ;
  int __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  int __cil_tmp11 ;
  int __cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  int __cil_tmp14 ;
  unsigned char __cil_tmp15 ;
  void volatile *__cil_tmp16 ;

  {
  __cil_tmp5 = (unsigned long )addr;
  __cil_tmp6 = info->reg_addr;
  __cil_tmp7 = (unsigned long )__cil_tmp6;
  reg_addr = __cil_tmp7 + __cil_tmp5;
  if (addr > 127U) {
    __cil_tmp8 = info->port_num;
    __cil_tmp9 = __cil_tmp8 * 32;
    __cil_tmp10 = (unsigned long )__cil_tmp9;
    reg_addr = __cil_tmp10 + reg_addr;
  } else
  if (addr > 63U) {
    __cil_tmp11 = info->port_num;
    __cil_tmp12 = __cil_tmp11 * 16;
    __cil_tmp13 = (unsigned long )__cil_tmp12;
    reg_addr = __cil_tmp13 + reg_addr;
  } else {

  }
  {
  __cil_tmp14 = (int )value;
  __cil_tmp15 = (unsigned char )__cil_tmp14;
  __cil_tmp16 = (void volatile *)reg_addr;
  writeb(__cil_tmp15, __cil_tmp16);
  }
  return;
}
}
static __u16 rd_reg16(struct slgt_info *info , unsigned int addr )
{ unsigned long reg_addr ;
  unsigned short tmp ;
  unsigned long __cil_tmp5 ;
  unsigned char *__cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  int __cil_tmp8 ;
  int __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  int __cil_tmp11 ;
  int __cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  void const volatile *__cil_tmp14 ;

  {
  __cil_tmp5 = (unsigned long )addr;
  __cil_tmp6 = info->reg_addr;
  __cil_tmp7 = (unsigned long )__cil_tmp6;
  reg_addr = __cil_tmp7 + __cil_tmp5;
  if (addr > 127U) {
    __cil_tmp8 = info->port_num;
    __cil_tmp9 = __cil_tmp8 * 32;
    __cil_tmp10 = (unsigned long )__cil_tmp9;
    reg_addr = __cil_tmp10 + reg_addr;
  } else
  if (addr > 63U) {
    __cil_tmp11 = info->port_num;
    __cil_tmp12 = __cil_tmp11 * 16;
    __cil_tmp13 = (unsigned long )__cil_tmp12;
    reg_addr = __cil_tmp13 + reg_addr;
  } else {

  }
  {
  __cil_tmp14 = (void const volatile *)reg_addr;
  tmp = readw(__cil_tmp14);
  }
  return (tmp);
}
}
static void wr_reg16(struct slgt_info *info , unsigned int addr , __u16 value )
{ unsigned long reg_addr ;
  unsigned long __cil_tmp5 ;
  unsigned char *__cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  int __cil_tmp8 ;
  int __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  int __cil_tmp11 ;
  int __cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  int __cil_tmp14 ;
  unsigned short __cil_tmp15 ;
  void volatile *__cil_tmp16 ;

  {
  __cil_tmp5 = (unsigned long )addr;
  __cil_tmp6 = info->reg_addr;
  __cil_tmp7 = (unsigned long )__cil_tmp6;
  reg_addr = __cil_tmp7 + __cil_tmp5;
  if (addr > 127U) {
    __cil_tmp8 = info->port_num;
    __cil_tmp9 = __cil_tmp8 * 32;
    __cil_tmp10 = (unsigned long )__cil_tmp9;
    reg_addr = __cil_tmp10 + reg_addr;
  } else
  if (addr > 63U) {
    __cil_tmp11 = info->port_num;
    __cil_tmp12 = __cil_tmp11 * 16;
    __cil_tmp13 = (unsigned long )__cil_tmp12;
    reg_addr = __cil_tmp13 + reg_addr;
  } else {

  }
  {
  __cil_tmp14 = (int )value;
  __cil_tmp15 = (unsigned short )__cil_tmp14;
  __cil_tmp16 = (void volatile *)reg_addr;
  writew(__cil_tmp15, __cil_tmp16);
  }
  return;
}
}
static __u32 rd_reg32(struct slgt_info *info , unsigned int addr )
{ unsigned long reg_addr ;
  unsigned int tmp ;
  unsigned long __cil_tmp5 ;
  unsigned char *__cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  int __cil_tmp8 ;
  int __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  int __cil_tmp11 ;
  int __cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  void const volatile *__cil_tmp14 ;

  {
  __cil_tmp5 = (unsigned long )addr;
  __cil_tmp6 = info->reg_addr;
  __cil_tmp7 = (unsigned long )__cil_tmp6;
  reg_addr = __cil_tmp7 + __cil_tmp5;
  if (addr > 127U) {
    __cil_tmp8 = info->port_num;
    __cil_tmp9 = __cil_tmp8 * 32;
    __cil_tmp10 = (unsigned long )__cil_tmp9;
    reg_addr = __cil_tmp10 + reg_addr;
  } else
  if (addr > 63U) {
    __cil_tmp11 = info->port_num;
    __cil_tmp12 = __cil_tmp11 * 16;
    __cil_tmp13 = (unsigned long )__cil_tmp12;
    reg_addr = __cil_tmp13 + reg_addr;
  } else {

  }
  {
  __cil_tmp14 = (void const volatile *)reg_addr;
  tmp = readl(__cil_tmp14);
  }
  return (tmp);
}
}
static void wr_reg32(struct slgt_info *info , unsigned int addr , __u32 value )
{ unsigned long reg_addr ;
  unsigned long __cil_tmp5 ;
  unsigned char *__cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  int __cil_tmp8 ;
  int __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  int __cil_tmp11 ;
  int __cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  void volatile *__cil_tmp14 ;

  {
  __cil_tmp5 = (unsigned long )addr;
  __cil_tmp6 = info->reg_addr;
  __cil_tmp7 = (unsigned long )__cil_tmp6;
  reg_addr = __cil_tmp7 + __cil_tmp5;
  if (addr > 127U) {
    __cil_tmp8 = info->port_num;
    __cil_tmp9 = __cil_tmp8 * 32;
    __cil_tmp10 = (unsigned long )__cil_tmp9;
    reg_addr = __cil_tmp10 + reg_addr;
  } else
  if (addr > 63U) {
    __cil_tmp11 = info->port_num;
    __cil_tmp12 = __cil_tmp11 * 16;
    __cil_tmp13 = (unsigned long )__cil_tmp12;
    reg_addr = __cil_tmp13 + reg_addr;
  } else {

  }
  {
  __cil_tmp14 = (void volatile *)reg_addr;
  writel(value, __cil_tmp14);
  }
  return;
}
}
static void rdma_reset(struct slgt_info *info )
{ unsigned int i ;
  __u32 tmp ;
  unsigned int __cil_tmp4 ;

  {
  {
  wr_reg32(info, 144U, 2U);
  i = 0U;
  }
  goto ldv_37613;
  ldv_37612:
  {
  tmp = rd_reg32(info, 144U);
  }
  {
  __cil_tmp4 = tmp & 1U;
  if (__cil_tmp4 == 0U) {
    goto ldv_37611;
  } else {

  }
  }
  i = i + 1U;
  ldv_37613: ;
  if (i <= 999U) {
    goto ldv_37612;
  } else {
    goto ldv_37611;
  }
  ldv_37611: ;
  return;
}
}
static void tdma_reset(struct slgt_info *info )
{ unsigned int i ;
  __u32 tmp ;
  unsigned int __cil_tmp4 ;

  {
  {
  wr_reg32(info, 148U, 2U);
  i = 0U;
  }
  goto ldv_37620;
  ldv_37619:
  {
  tmp = rd_reg32(info, 148U);
  }
  {
  __cil_tmp4 = tmp & 1U;
  if (__cil_tmp4 == 0U) {
    goto ldv_37618;
  } else {

  }
  }
  i = i + 1U;
  ldv_37620: ;
  if (i <= 999U) {
    goto ldv_37619;
  } else {
    goto ldv_37618;
  }
  ldv_37618: ;
  return;
}
}
static void enable_loopback(struct slgt_info *info )
{ __u16 tmp ;
  unsigned int __cil_tmp3 ;
  unsigned int __cil_tmp4 ;
  int __cil_tmp5 ;
  __u16 __cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  __u8 __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  u32 __cil_tmp11 ;

  {
  {
  tmp = rd_reg16(info, 140U);
  __cil_tmp3 = (unsigned int )tmp;
  __cil_tmp4 = __cil_tmp3 | 4U;
  __cil_tmp5 = (int )__cil_tmp4;
  __cil_tmp6 = (__u16 )__cil_tmp5;
  wr_reg16(info, 140U, __cil_tmp6);
  }
  {
  __cil_tmp7 = info->params.mode;
  if (__cil_tmp7 != 1UL) {
    {
    __cil_tmp8 = (__u8 )73;
    wr_reg8(info, 137U, __cil_tmp8);
    }
    {
    __cil_tmp9 = info->params.clock_speed;
    if (__cil_tmp9 != 0UL) {
      {
      __cil_tmp10 = info->params.clock_speed;
      __cil_tmp11 = (u32 )__cil_tmp10;
      set_rate(info, __cil_tmp11);
      }
    } else {
      {
      set_rate(info, 3686400U);
      }
    }
    }
  } else {

  }
  }
  return;
}
}
static void set_rate(struct slgt_info *info , u32 rate )
{ unsigned int div ;
  unsigned int osc ;
  unsigned int __cil_tmp5 ;
  unsigned short __cil_tmp6 ;
  int __cil_tmp7 ;
  __u16 __cil_tmp8 ;

  {
  osc = info->base_clock;
  if (rate != 0U) {
    div = osc / rate;
    {
    __cil_tmp5 = osc % rate;
    if (__cil_tmp5 == 0U) {
      if (div != 0U) {
        div = div - 1U;
      } else {

      }
    } else {

    }
    }
    {
    __cil_tmp6 = (unsigned short )div;
    __cil_tmp7 = (int )__cil_tmp6;
    __cil_tmp8 = (__u16 )__cil_tmp7;
    wr_reg16(info, 138U, __cil_tmp8);
    }
  } else {

  }
  return;
}
}
static void rx_stop(struct slgt_info *info )
{ unsigned short val ;
  __u16 tmp ;
  __u16 tmp___0 ;
  unsigned int __cil_tmp5 ;
  unsigned int __cil_tmp6 ;
  unsigned int __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  int __cil_tmp9 ;
  __u16 __cil_tmp10 ;
  int __cil_tmp11 ;
  __u16 __cil_tmp12 ;
  int __cil_tmp13 ;
  int __cil_tmp14 ;
  __u16 __cil_tmp15 ;
  __u16 __cil_tmp16 ;

  {
  {
  tmp = rd_reg16(info, 134U);
  __cil_tmp5 = (unsigned int )tmp;
  __cil_tmp6 = __cil_tmp5 & 65533U;
  val = (unsigned short )__cil_tmp6;
  __cil_tmp7 = (unsigned int )val;
  __cil_tmp8 = __cil_tmp7 | 4U;
  __cil_tmp9 = (int )__cil_tmp8;
  __cil_tmp10 = (__u16 )__cil_tmp9;
  wr_reg16(info, 134U, __cil_tmp10);
  __cil_tmp11 = (int )val;
  __cil_tmp12 = (__u16 )__cil_tmp11;
  wr_reg16(info, 134U, __cil_tmp12);
  tmp___0 = rd_reg16(info, 140U);
  __cil_tmp13 = (int )tmp___0;
  __cil_tmp14 = __cil_tmp13 & 63743;
  __cil_tmp15 = (__u16 )__cil_tmp14;
  wr_reg16(info, 140U, __cil_tmp15);
  __cil_tmp16 = (__u16 )768;
  wr_reg16(info, 142U, __cil_tmp16);
  rdma_reset(info);
  info->rx_enabled = (bool )0;
  info->rx_restart = (bool )0;
  }
  return;
}
}
static void rx_start(struct slgt_info *info )
{ unsigned short val ;
  __u16 tmp ;
  __u16 tmp___0 ;
  __u16 tmp___1 ;
  __u16 tmp___2 ;
  __u16 tmp___3 ;
  __u16 tmp___4 ;
  __u16 tmp___5 ;
  int __cil_tmp10 ;
  int __cil_tmp11 ;
  __u16 __cil_tmp12 ;
  __u16 __cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  unsigned int __cil_tmp15 ;
  unsigned int __cil_tmp16 ;
  unsigned int __cil_tmp17 ;
  int __cil_tmp18 ;
  __u16 __cil_tmp19 ;
  int __cil_tmp20 ;
  __u16 __cil_tmp21 ;
  unsigned int __cil_tmp22 ;
  int __cil_tmp23 ;
  int __cil_tmp24 ;
  __u16 __cil_tmp25 ;
  unsigned int __cil_tmp26 ;
  unsigned int __cil_tmp27 ;
  int __cil_tmp28 ;
  __u16 __cil_tmp29 ;
  unsigned long __cil_tmp30 ;
  unsigned int __cil_tmp31 ;
  unsigned int __cil_tmp32 ;
  int __cil_tmp33 ;
  __u16 __cil_tmp34 ;
  struct slgt_desc *__cil_tmp35 ;
  unsigned int __cil_tmp36 ;
  unsigned long __cil_tmp37 ;
  unsigned int __cil_tmp38 ;
  unsigned int __cil_tmp39 ;
  int __cil_tmp40 ;
  __u16 __cil_tmp41 ;
  unsigned int __cil_tmp42 ;
  unsigned int __cil_tmp43 ;
  int __cil_tmp44 ;
  __u16 __cil_tmp45 ;

  {
  {
  tmp = rd_reg16(info, 140U);
  __cil_tmp10 = (int )tmp;
  __cil_tmp11 = __cil_tmp10 & 64255;
  __cil_tmp12 = (__u16 )__cil_tmp11;
  wr_reg16(info, 140U, __cil_tmp12);
  __cil_tmp13 = (__u16 )256;
  wr_reg16(info, 142U, __cil_tmp13);
  tmp___0 = rd_reg16(info, 134U);
  __cil_tmp14 = (unsigned int )tmp___0;
  __cil_tmp15 = __cil_tmp14 & 65533U;
  val = (unsigned short )__cil_tmp15;
  __cil_tmp16 = (unsigned int )val;
  __cil_tmp17 = __cil_tmp16 | 4U;
  __cil_tmp18 = (int )__cil_tmp17;
  __cil_tmp19 = (__u16 )__cil_tmp18;
  wr_reg16(info, 134U, __cil_tmp19);
  __cil_tmp20 = (int )val;
  __cil_tmp21 = (__u16 )__cil_tmp20;
  wr_reg16(info, 134U, __cil_tmp21);
  rdma_reset(info);
  reset_rbufs(info);
  }
  {
  __cil_tmp22 = info->rx_pio;
  if (__cil_tmp22 != 0U) {
    {
    tmp___1 = rd_reg16(info, 140U);
    __cil_tmp23 = (int )tmp___1;
    __cil_tmp24 = __cil_tmp23 & 49151;
    __cil_tmp25 = (__u16 )__cil_tmp24;
    wr_reg16(info, 140U, __cil_tmp25);
    tmp___2 = rd_reg16(info, 140U);
    __cil_tmp26 = (unsigned int )tmp___2;
    __cil_tmp27 = __cil_tmp26 | 1024U;
    __cil_tmp28 = (int )__cil_tmp27;
    __cil_tmp29 = (__u16 )__cil_tmp28;
    wr_reg16(info, 140U, __cil_tmp29);
    }
    {
    __cil_tmp30 = info->params.mode;
    if (__cil_tmp30 == 1UL) {
      {
      wr_reg32(info, 144U, 64U);
      }
    } else {

    }
    }
  } else {
    {
    tmp___3 = rd_reg16(info, 140U);
    __cil_tmp31 = (unsigned int )tmp___3;
    __cil_tmp32 = __cil_tmp31 | 16384U;
    __cil_tmp33 = (int )__cil_tmp32;
    __cil_tmp34 = (__u16 )__cil_tmp33;
    wr_reg16(info, 140U, __cil_tmp34);
    __cil_tmp35 = info->rbufs;
    __cil_tmp36 = __cil_tmp35->pdesc;
    wr_reg32(info, 152U, __cil_tmp36);
    }
    {
    __cil_tmp37 = info->params.mode;
    if (__cil_tmp37 != 1UL) {
      {
      wr_reg32(info, 144U, 5U);
      }
    } else {
      {
      wr_reg32(info, 144U, 69U);
      }
    }
    }
  }
  }
  {
  tmp___4 = rd_reg16(info, 140U);
  __cil_tmp38 = (unsigned int )tmp___4;
  __cil_tmp39 = __cil_tmp38 | 256U;
  __cil_tmp40 = (int )__cil_tmp39;
  __cil_tmp41 = (__u16 )__cil_tmp40;
  wr_reg16(info, 140U, __cil_tmp41);
  tmp___5 = rd_reg16(info, 134U);
  __cil_tmp42 = (unsigned int )tmp___5;
  __cil_tmp43 = __cil_tmp42 | 2U;
  __cil_tmp44 = (int )__cil_tmp43;
  __cil_tmp45 = (__u16 )__cil_tmp44;
  wr_reg16(info, 134U, __cil_tmp45);
  info->rx_restart = (bool )0;
  info->rx_enabled = (bool )1;
  }
  return;
}
}
static void tx_start(struct slgt_info *info )
{ __u16 tmp ;
  __u16 tmp___0 ;
  __u16 tmp___1 ;
  __u16 tmp___2 ;
  __u16 tmp___3 ;
  bool __cil_tmp7 ;
  short __cil_tmp8 ;
  int __cil_tmp9 ;
  int __cil_tmp10 ;
  int __cil_tmp11 ;
  unsigned short __cil_tmp12 ;
  int __cil_tmp13 ;
  __u16 __cil_tmp14 ;
  unsigned int __cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  struct slgt_desc *__cil_tmp17 ;
  struct slgt_desc *__cil_tmp18 ;
  __le16 __cil_tmp19 ;
  unsigned int __cil_tmp20 ;
  unsigned long __cil_tmp21 ;
  unsigned short __cil_tmp22 ;
  int __cil_tmp23 ;
  int __cil_tmp24 ;
  unsigned char __cil_tmp25 ;
  int __cil_tmp26 ;
  int __cil_tmp27 ;
  unsigned char __cil_tmp28 ;
  unsigned int __cil_tmp29 ;
  unsigned int __cil_tmp30 ;
  int __cil_tmp31 ;
  int __cil_tmp32 ;
  __u16 __cil_tmp33 ;
  unsigned int __cil_tmp34 ;
  unsigned int __cil_tmp35 ;
  int __cil_tmp36 ;
  __u16 __cil_tmp37 ;
  __u16 __cil_tmp38 ;
  int __cil_tmp39 ;
  int __cil_tmp40 ;
  __u16 __cil_tmp41 ;
  unsigned int __cil_tmp42 ;
  unsigned int __cil_tmp43 ;
  int __cil_tmp44 ;
  __u16 __cil_tmp45 ;
  __u16 __cil_tmp46 ;
  unsigned int __cil_tmp47 ;
  unsigned long __cil_tmp48 ;
  struct slgt_desc *__cil_tmp49 ;
  struct slgt_desc *__cil_tmp50 ;
  unsigned int __cil_tmp51 ;

  {
  {
  __cil_tmp7 = info->tx_enabled;
  if (! __cil_tmp7) {
    {
    tmp = rd_reg16(info, 130U);
    __cil_tmp8 = (short )tmp;
    __cil_tmp9 = (int )__cil_tmp8;
    __cil_tmp10 = __cil_tmp9 & 65529;
    __cil_tmp11 = __cil_tmp10 | 2;
    __cil_tmp12 = (unsigned short )__cil_tmp11;
    __cil_tmp13 = (int )__cil_tmp12;
    __cil_tmp14 = (__u16 )__cil_tmp13;
    wr_reg16(info, 130U, __cil_tmp14);
    info->tx_enabled = (bool )1;
    }
  } else {

  }
  }
  {
  __cil_tmp15 = info->tbuf_start;
  __cil_tmp16 = (unsigned long )__cil_tmp15;
  __cil_tmp17 = info->tbufs;
  __cil_tmp18 = __cil_tmp17 + __cil_tmp16;
  __cil_tmp19 = __cil_tmp18->count;
  __cil_tmp20 = (unsigned int )__cil_tmp19;
  if (__cil_tmp20 != 0U) {
    info->drop_rts_on_tx_done = (bool )0;
    {
    __cil_tmp21 = info->params.mode;
    if (__cil_tmp21 != 1UL) {
      {
      __cil_tmp22 = info->params.flags;
      __cil_tmp23 = (int )__cil_tmp22;
      __cil_tmp24 = __cil_tmp23 & 128;
      if (__cil_tmp24 != 0) {
        {
        get_signals(info);
        }
        {
        __cil_tmp25 = info->signals;
        __cil_tmp26 = (int )__cil_tmp25;
        __cil_tmp27 = __cil_tmp26 & 32;
        if (__cil_tmp27 == 0) {
          {
          __cil_tmp28 = info->signals;
          __cil_tmp29 = (unsigned int )__cil_tmp28;
          __cil_tmp30 = __cil_tmp29 | 32U;
          info->signals = (unsigned char )__cil_tmp30;
          set_signals(info);
          info->drop_rts_on_tx_done = (bool )1;
          }
        } else {

        }
        }
      } else {

      }
      }
      {
      tmp___0 = rd_reg16(info, 140U);
      __cil_tmp31 = (int )tmp___0;
      __cil_tmp32 = __cil_tmp31 & 57343;
      __cil_tmp33 = (__u16 )__cil_tmp32;
      wr_reg16(info, 140U, __cil_tmp33);
      tmp___1 = rd_reg16(info, 140U);
      __cil_tmp34 = (unsigned int )tmp___1;
      __cil_tmp35 = __cil_tmp34 | 6144U;
      __cil_tmp36 = (int )__cil_tmp35;
      __cil_tmp37 = (__u16 )__cil_tmp36;
      wr_reg16(info, 140U, __cil_tmp37);
      __cil_tmp38 = (__u16 )6144;
      wr_reg16(info, 142U, __cil_tmp38);
      }
    } else {
      {
      tmp___2 = rd_reg16(info, 140U);
      __cil_tmp39 = (int )tmp___2;
      __cil_tmp40 = __cil_tmp39 & 57343;
      __cil_tmp41 = (__u16 )__cil_tmp40;
      wr_reg16(info, 140U, __cil_tmp41);
      tmp___3 = rd_reg16(info, 140U);
      __cil_tmp42 = (unsigned int )tmp___3;
      __cil_tmp43 = __cil_tmp42 | 4096U;
      __cil_tmp44 = (int )__cil_tmp43;
      __cil_tmp45 = (__u16 )__cil_tmp44;
      wr_reg16(info, 140U, __cil_tmp45);
      __cil_tmp46 = (__u16 )4096;
      wr_reg16(info, 142U, __cil_tmp46);
      }
    }
    }
    {
    __cil_tmp47 = info->tbuf_start;
    __cil_tmp48 = (unsigned long )__cil_tmp47;
    __cil_tmp49 = info->tbufs;
    __cil_tmp50 = __cil_tmp49 + __cil_tmp48;
    __cil_tmp51 = __cil_tmp50->pdesc;
    wr_reg32(info, 156U, __cil_tmp51);
    wr_reg32(info, 148U, 5U);
    info->tx_active = (bool )1;
    }
  } else {

  }
  }
  return;
}
}
static void tx_stop(struct slgt_info *info )
{ unsigned short val ;
  __u16 tmp ;
  __u16 tmp___0 ;
  struct timer_list *__cil_tmp5 ;
  unsigned int __cil_tmp6 ;
  unsigned int __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  int __cil_tmp10 ;
  __u16 __cil_tmp11 ;
  int __cil_tmp12 ;
  int __cil_tmp13 ;
  __u16 __cil_tmp14 ;
  __u16 __cil_tmp15 ;

  {
  {
  __cil_tmp5 = & info->tx_timer;
  del_timer(__cil_tmp5);
  tdma_reset(info);
  tmp = rd_reg16(info, 130U);
  __cil_tmp6 = (unsigned int )tmp;
  __cil_tmp7 = __cil_tmp6 & 65533U;
  val = (unsigned short )__cil_tmp7;
  __cil_tmp8 = (unsigned int )val;
  __cil_tmp9 = __cil_tmp8 | 4U;
  __cil_tmp10 = (int )__cil_tmp9;
  __cil_tmp11 = (__u16 )__cil_tmp10;
  wr_reg16(info, 130U, __cil_tmp11);
  tmp___0 = rd_reg16(info, 140U);
  __cil_tmp12 = (int )tmp___0;
  __cil_tmp13 = __cil_tmp12 & 51199;
  __cil_tmp14 = (__u16 )__cil_tmp13;
  wr_reg16(info, 140U, __cil_tmp14);
  __cil_tmp15 = (__u16 )6144;
  wr_reg16(info, 142U, __cil_tmp15);
  reset_tbufs(info);
  info->tx_enabled = (bool )0;
  info->tx_active = (bool )0;
  }
  return;
}
}
static void reset_port(struct slgt_info *info )
{ __u16 tmp ;
  unsigned char *__cil_tmp3 ;
  unsigned long __cil_tmp4 ;
  unsigned char *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  unsigned char __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  int __cil_tmp10 ;
  int __cil_tmp11 ;
  __u16 __cil_tmp12 ;

  {
  {
  __cil_tmp3 = (unsigned char *)0;
  __cil_tmp4 = (unsigned long )__cil_tmp3;
  __cil_tmp5 = info->reg_addr;
  __cil_tmp6 = (unsigned long )__cil_tmp5;
  if (__cil_tmp6 == __cil_tmp4) {
    return;
  } else {

  }
  }
  {
  tx_stop(info);
  rx_stop(info);
  __cil_tmp7 = info->signals;
  __cil_tmp8 = (unsigned int )__cil_tmp7;
  __cil_tmp9 = __cil_tmp8 & 95U;
  info->signals = (unsigned char )__cil_tmp9;
  set_signals(info);
  tmp = rd_reg16(info, 140U);
  __cil_tmp10 = (int )tmp;
  __cil_tmp11 = __cil_tmp10 & 49166;
  __cil_tmp12 = (__u16 )__cil_tmp11;
  wr_reg16(info, 140U, __cil_tmp12);
  }
  return;
}
}
static void reset_adapter(struct slgt_info *info )
{ int i ;
  struct slgt_info *__cil_tmp3 ;
  unsigned long __cil_tmp4 ;
  struct slgt_info *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  struct slgt_info *__cil_tmp7 ;
  int __cil_tmp8 ;

  {
  i = 0;
  goto ldv_37653;
  ldv_37652: ;
  {
  __cil_tmp3 = (struct slgt_info *)0;
  __cil_tmp4 = (unsigned long )__cil_tmp3;
  __cil_tmp5 = info->port_array[i];
  __cil_tmp6 = (unsigned long )__cil_tmp5;
  if (__cil_tmp6 != __cil_tmp4) {
    {
    __cil_tmp7 = info->port_array[i];
    reset_port(__cil_tmp7);
    }
  } else {

  }
  }
  i = i + 1;
  ldv_37653: ;
  {
  __cil_tmp8 = info->port_count;
  if (__cil_tmp8 > i) {
    goto ldv_37652;
  } else {
    goto ldv_37654;
  }
  }
  ldv_37654: ;
  return;
}
}
static void async_mode(struct slgt_info *info )
{ unsigned short val ;
  __u16 tmp ;
  __u32 tmp___0 ;
  __u16 tmp___1 ;
  int __cil_tmp6 ;
  int __cil_tmp7 ;
  __u16 __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  unsigned int __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  unsigned char __cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  unsigned int __cil_tmp15 ;
  unsigned int __cil_tmp16 ;
  unsigned char __cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  unsigned int __cil_tmp19 ;
  unsigned int __cil_tmp20 ;
  unsigned char __cil_tmp21 ;
  int __cil_tmp22 ;
  unsigned char __cil_tmp23 ;
  int __cil_tmp24 ;
  unsigned char __cil_tmp25 ;
  int __cil_tmp26 ;
  unsigned int __cil_tmp27 ;
  unsigned int __cil_tmp28 ;
  unsigned int __cil_tmp29 ;
  unsigned int __cil_tmp30 ;
  unsigned int __cil_tmp31 ;
  unsigned int __cil_tmp32 ;
  unsigned char __cil_tmp33 ;
  unsigned int __cil_tmp34 ;
  unsigned int __cil_tmp35 ;
  unsigned int __cil_tmp36 ;
  unsigned short __cil_tmp37 ;
  int __cil_tmp38 ;
  int __cil_tmp39 ;
  unsigned int __cil_tmp40 ;
  unsigned int __cil_tmp41 ;
  int __cil_tmp42 ;
  __u16 __cil_tmp43 ;
  unsigned char __cil_tmp44 ;
  unsigned int __cil_tmp45 ;
  unsigned int __cil_tmp46 ;
  unsigned int __cil_tmp47 ;
  unsigned char __cil_tmp48 ;
  unsigned int __cil_tmp49 ;
  unsigned int __cil_tmp50 ;
  unsigned int __cil_tmp51 ;
  unsigned char __cil_tmp52 ;
  int __cil_tmp53 ;
  unsigned char __cil_tmp54 ;
  int __cil_tmp55 ;
  unsigned char __cil_tmp56 ;
  int __cil_tmp57 ;
  unsigned int __cil_tmp58 ;
  unsigned int __cil_tmp59 ;
  unsigned int __cil_tmp60 ;
  unsigned int __cil_tmp61 ;
  unsigned int __cil_tmp62 ;
  unsigned int __cil_tmp63 ;
  unsigned short __cil_tmp64 ;
  int __cil_tmp65 ;
  int __cil_tmp66 ;
  unsigned int __cil_tmp67 ;
  unsigned int __cil_tmp68 ;
  int __cil_tmp69 ;
  __u16 __cil_tmp70 ;
  __u8 __cil_tmp71 ;
  unsigned int __cil_tmp72 ;
  unsigned long __cil_tmp73 ;
  unsigned long __cil_tmp74 ;
  unsigned long __cil_tmp75 ;
  unsigned int __cil_tmp76 ;
  unsigned long __cil_tmp77 ;
  unsigned int __cil_tmp78 ;
  unsigned int __cil_tmp79 ;
  unsigned long __cil_tmp80 ;
  u32 __cil_tmp81 ;
  u32 __cil_tmp82 ;
  unsigned long __cil_tmp83 ;
  unsigned long __cil_tmp84 ;
  unsigned int __cil_tmp85 ;
  unsigned long __cil_tmp86 ;
  unsigned long __cil_tmp87 ;
  unsigned int __cil_tmp88 ;
  unsigned int __cil_tmp89 ;
  unsigned long __cil_tmp90 ;
  u32 __cil_tmp91 ;
  u32 __cil_tmp92 ;
  unsigned long __cil_tmp93 ;
  u32 __cil_tmp94 ;
  u32 __cil_tmp95 ;
  unsigned long __cil_tmp96 ;
  u32 __cil_tmp97 ;
  u32 __cil_tmp98 ;
  unsigned long __cil_tmp99 ;
  u32 __cil_tmp100 ;
  u32 __cil_tmp101 ;
  int __cil_tmp102 ;
  __u16 __cil_tmp103 ;
  unsigned int __cil_tmp104 ;
  unsigned int __cil_tmp105 ;
  int __cil_tmp106 ;
  __u16 __cil_tmp107 ;
  unsigned char __cil_tmp108 ;
  unsigned int __cil_tmp109 ;

  {
  {
  tmp = rd_reg16(info, 140U);
  __cil_tmp6 = (int )tmp;
  __cil_tmp7 = __cil_tmp6 & 49166;
  __cil_tmp8 = (__u16 )__cil_tmp7;
  wr_reg16(info, 140U, __cil_tmp8);
  tx_stop(info);
  rx_stop(info);
  val = (unsigned short)16384;
  }
  {
  __cil_tmp9 = info->if_mode;
  __cil_tmp10 = __cil_tmp9 & 16U;
  if (__cil_tmp10 != 0U) {
    __cil_tmp11 = (unsigned int )val;
    __cil_tmp12 = __cil_tmp11 | 128U;
    val = (unsigned short )__cil_tmp12;
  } else {

  }
  }
  {
  __cil_tmp13 = info->params.parity;
  __cil_tmp14 = (unsigned int )__cil_tmp13;
  if (__cil_tmp14 != 0U) {
    __cil_tmp15 = (unsigned int )val;
    __cil_tmp16 = __cil_tmp15 | 512U;
    val = (unsigned short )__cil_tmp16;
    {
    __cil_tmp17 = info->params.parity;
    __cil_tmp18 = (unsigned int )__cil_tmp17;
    if (__cil_tmp18 == 2U) {
      __cil_tmp19 = (unsigned int )val;
      __cil_tmp20 = __cil_tmp19 | 256U;
      val = (unsigned short )__cil_tmp20;
    } else {

    }
    }
  } else {

  }
  }
  {
  __cil_tmp21 = info->params.data_bits;
  __cil_tmp22 = (int )__cil_tmp21;
  if (__cil_tmp22 == 6) {
    goto case_6;
  } else {
    {
    __cil_tmp23 = info->params.data_bits;
    __cil_tmp24 = (int )__cil_tmp23;
    if (__cil_tmp24 == 7) {
      goto case_7;
    } else {
      {
      __cil_tmp25 = info->params.data_bits;
      __cil_tmp26 = (int )__cil_tmp25;
      if (__cil_tmp26 == 8) {
        goto case_8;
      } else
      if (0) {
        case_6:
        __cil_tmp27 = (unsigned int )val;
        __cil_tmp28 = __cil_tmp27 | 16U;
        val = (unsigned short )__cil_tmp28;
        goto ldv_37660;
        case_7:
        __cil_tmp29 = (unsigned int )val;
        __cil_tmp30 = __cil_tmp29 | 32U;
        val = (unsigned short )__cil_tmp30;
        goto ldv_37660;
        case_8:
        __cil_tmp31 = (unsigned int )val;
        __cil_tmp32 = __cil_tmp31 | 48U;
        val = (unsigned short )__cil_tmp32;
        goto ldv_37660;
      } else {

      }
      }
    }
    }
  }
  }
  ldv_37660: ;
  {
  __cil_tmp33 = info->params.stop_bits;
  __cil_tmp34 = (unsigned int )__cil_tmp33;
  if (__cil_tmp34 != 1U) {
    __cil_tmp35 = (unsigned int )val;
    __cil_tmp36 = __cil_tmp35 | 8U;
    val = (unsigned short )__cil_tmp36;
  } else {

  }
  }
  {
  __cil_tmp37 = info->params.flags;
  __cil_tmp38 = (int )__cil_tmp37;
  __cil_tmp39 = __cil_tmp38 & 32;
  if (__cil_tmp39 != 0) {
    __cil_tmp40 = (unsigned int )val;
    __cil_tmp41 = __cil_tmp40 | 1U;
    val = (unsigned short )__cil_tmp41;
  } else {

  }
  }
  {
  __cil_tmp42 = (int )val;
  __cil_tmp43 = (__u16 )__cil_tmp42;
  wr_reg16(info, 130U, __cil_tmp43);
  val = (unsigned short)16384;
  }
  {
  __cil_tmp44 = info->params.parity;
  __cil_tmp45 = (unsigned int )__cil_tmp44;
  if (__cil_tmp45 != 0U) {
    __cil_tmp46 = (unsigned int )val;
    __cil_tmp47 = __cil_tmp46 | 512U;
    val = (unsigned short )__cil_tmp47;
    {
    __cil_tmp48 = info->params.parity;
    __cil_tmp49 = (unsigned int )__cil_tmp48;
    if (__cil_tmp49 == 2U) {
      __cil_tmp50 = (unsigned int )val;
      __cil_tmp51 = __cil_tmp50 | 256U;
      val = (unsigned short )__cil_tmp51;
    } else {

    }
    }
  } else {

  }
  }
  {
  __cil_tmp52 = info->params.data_bits;
  __cil_tmp53 = (int )__cil_tmp52;
  if (__cil_tmp53 == 6) {
    goto case_6___0;
  } else {
    {
    __cil_tmp54 = info->params.data_bits;
    __cil_tmp55 = (int )__cil_tmp54;
    if (__cil_tmp55 == 7) {
      goto case_7___0;
    } else {
      {
      __cil_tmp56 = info->params.data_bits;
      __cil_tmp57 = (int )__cil_tmp56;
      if (__cil_tmp57 == 8) {
        goto case_8___0;
      } else
      if (0) {
        case_6___0:
        __cil_tmp58 = (unsigned int )val;
        __cil_tmp59 = __cil_tmp58 | 16U;
        val = (unsigned short )__cil_tmp59;
        goto ldv_37664;
        case_7___0:
        __cil_tmp60 = (unsigned int )val;
        __cil_tmp61 = __cil_tmp60 | 32U;
        val = (unsigned short )__cil_tmp61;
        goto ldv_37664;
        case_8___0:
        __cil_tmp62 = (unsigned int )val;
        __cil_tmp63 = __cil_tmp62 | 48U;
        val = (unsigned short )__cil_tmp63;
        goto ldv_37664;
      } else {

      }
      }
    }
    }
  }
  }
  ldv_37664: ;
  {
  __cil_tmp64 = info->params.flags;
  __cil_tmp65 = (int )__cil_tmp64;
  __cil_tmp66 = __cil_tmp65 & 64;
  if (__cil_tmp66 != 0) {
    __cil_tmp67 = (unsigned int )val;
    __cil_tmp68 = __cil_tmp67 | 1U;
    val = (unsigned short )__cil_tmp68;
  } else {

  }
  }
  {
  __cil_tmp69 = (int )val;
  __cil_tmp70 = (__u16 )__cil_tmp69;
  wr_reg16(info, 134U, __cil_tmp70);
  __cil_tmp71 = (__u8 )105;
  wr_reg8(info, 137U, __cil_tmp71);
  msc_set_vcr(info);
  val = (unsigned short)49153;
  tmp___0 = rd_reg32(info, 4U);
  }
  {
  __cil_tmp72 = tmp___0 & 256U;
  if (__cil_tmp72 != 0U) {
    {
    __cil_tmp73 = info->params.data_rate;
    if (__cil_tmp73 != 0UL) {
      {
      __cil_tmp74 = info->params.data_rate;
      __cil_tmp75 = __cil_tmp74 * 16UL;
      __cil_tmp76 = info->base_clock;
      __cil_tmp77 = (unsigned long )__cil_tmp76;
      if (__cil_tmp77 < __cil_tmp75) {
        {
        __cil_tmp78 = (unsigned int )val;
        __cil_tmp79 = __cil_tmp78 | 8U;
        val = (unsigned short )__cil_tmp79;
        __cil_tmp80 = info->params.data_rate;
        __cil_tmp81 = (u32 )__cil_tmp80;
        __cil_tmp82 = __cil_tmp81 * 8U;
        set_rate(info, __cil_tmp82);
        }
      } else {
        {
        __cil_tmp83 = info->params.data_rate;
        __cil_tmp84 = __cil_tmp83 * 16UL;
        __cil_tmp85 = info->base_clock;
        __cil_tmp86 = (unsigned long )__cil_tmp85;
        __cil_tmp87 = __cil_tmp86 % __cil_tmp84;
        if (__cil_tmp87 != 0UL) {
          {
          __cil_tmp88 = (unsigned int )val;
          __cil_tmp89 = __cil_tmp88 | 8U;
          val = (unsigned short )__cil_tmp89;
          __cil_tmp90 = info->params.data_rate;
          __cil_tmp91 = (u32 )__cil_tmp90;
          __cil_tmp92 = __cil_tmp91 * 8U;
          set_rate(info, __cil_tmp92);
          }
        } else {
          {
          __cil_tmp93 = info->params.data_rate;
          __cil_tmp94 = (u32 )__cil_tmp93;
          __cil_tmp95 = __cil_tmp94 * 16U;
          set_rate(info, __cil_tmp95);
          }
        }
        }
      }
      }
    } else {
      {
      __cil_tmp96 = info->params.data_rate;
      __cil_tmp97 = (u32 )__cil_tmp96;
      __cil_tmp98 = __cil_tmp97 * 16U;
      set_rate(info, __cil_tmp98);
      }
    }
    }
  } else {
    {
    __cil_tmp99 = info->params.data_rate;
    __cil_tmp100 = (u32 )__cil_tmp99;
    __cil_tmp101 = __cil_tmp100 * 16U;
    set_rate(info, __cil_tmp101);
    }
  }
  }
  {
  __cil_tmp102 = (int )val;
  __cil_tmp103 = (__u16 )__cil_tmp102;
  wr_reg16(info, 140U, __cil_tmp103);
  tmp___1 = rd_reg16(info, 140U);
  __cil_tmp104 = (unsigned int )tmp___1;
  __cil_tmp105 = __cil_tmp104 | 768U;
  __cil_tmp106 = (int )__cil_tmp105;
  __cil_tmp107 = (__u16 )__cil_tmp106;
  wr_reg16(info, 140U, __cil_tmp107);
  }
  {
  __cil_tmp108 = info->params.loopback;
  __cil_tmp109 = (unsigned int )__cil_tmp108;
  if (__cil_tmp109 != 0U) {
    {
    enable_loopback(info);
    }
  } else {

  }
  }
  return;
}
}
static void sync_mode(struct slgt_info *info )
{ unsigned short val ;
  __u16 tmp ;
  __u16 tmp___0 ;
  int __cil_tmp5 ;
  int __cil_tmp6 ;
  __u16 __cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  int __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  int __cil_tmp11 ;
  unsigned long __cil_tmp12 ;
  int __cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  int __cil_tmp15 ;
  unsigned int __cil_tmp16 ;
  unsigned int __cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  unsigned int __cil_tmp19 ;
  unsigned int __cil_tmp20 ;
  unsigned int __cil_tmp21 ;
  unsigned int __cil_tmp22 ;
  unsigned int __cil_tmp23 ;
  unsigned int __cil_tmp24 ;
  unsigned int __cil_tmp25 ;
  unsigned int __cil_tmp26 ;
  unsigned int __cil_tmp27 ;
  unsigned char __cil_tmp28 ;
  int __cil_tmp29 ;
  unsigned char __cil_tmp30 ;
  int __cil_tmp31 ;
  unsigned char __cil_tmp32 ;
  int __cil_tmp33 ;
  unsigned char __cil_tmp34 ;
  int __cil_tmp35 ;
  unsigned char __cil_tmp36 ;
  int __cil_tmp37 ;
  unsigned char __cil_tmp38 ;
  int __cil_tmp39 ;
  unsigned char __cil_tmp40 ;
  int __cil_tmp41 ;
  unsigned int __cil_tmp42 ;
  unsigned int __cil_tmp43 ;
  unsigned int __cil_tmp44 ;
  unsigned int __cil_tmp45 ;
  unsigned int __cil_tmp46 ;
  unsigned int __cil_tmp47 ;
  unsigned int __cil_tmp48 ;
  unsigned int __cil_tmp49 ;
  unsigned int __cil_tmp50 ;
  unsigned int __cil_tmp51 ;
  unsigned int __cil_tmp52 ;
  unsigned int __cil_tmp53 ;
  unsigned int __cil_tmp54 ;
  unsigned int __cil_tmp55 ;
  unsigned short __cil_tmp56 ;
  int __cil_tmp57 ;
  int __cil_tmp58 ;
  unsigned short __cil_tmp59 ;
  int __cil_tmp60 ;
  int __cil_tmp61 ;
  unsigned int __cil_tmp62 ;
  unsigned int __cil_tmp63 ;
  unsigned int __cil_tmp64 ;
  unsigned int __cil_tmp65 ;
  unsigned char __cil_tmp66 ;
  unsigned int __cil_tmp67 ;
  unsigned int __cil_tmp68 ;
  unsigned int __cil_tmp69 ;
  unsigned char __cil_tmp70 ;
  int __cil_tmp71 ;
  unsigned char __cil_tmp72 ;
  int __cil_tmp73 ;
  unsigned char __cil_tmp74 ;
  int __cil_tmp75 ;
  unsigned int __cil_tmp76 ;
  unsigned int __cil_tmp77 ;
  unsigned int __cil_tmp78 ;
  unsigned int __cil_tmp79 ;
  unsigned int __cil_tmp80 ;
  unsigned int __cil_tmp81 ;
  unsigned short __cil_tmp82 ;
  int __cil_tmp83 ;
  int __cil_tmp84 ;
  unsigned int __cil_tmp85 ;
  unsigned int __cil_tmp86 ;
  int __cil_tmp87 ;
  __u16 __cil_tmp88 ;
  unsigned char __cil_tmp89 ;
  int __cil_tmp90 ;
  unsigned char __cil_tmp91 ;
  int __cil_tmp92 ;
  unsigned char __cil_tmp93 ;
  int __cil_tmp94 ;
  unsigned char __cil_tmp95 ;
  int __cil_tmp96 ;
  unsigned char __cil_tmp97 ;
  int __cil_tmp98 ;
  unsigned char __cil_tmp99 ;
  int __cil_tmp100 ;
  __u8 __cil_tmp101 ;
  unsigned long __cil_tmp102 ;
  int __cil_tmp103 ;
  unsigned long __cil_tmp104 ;
  int __cil_tmp105 ;
  unsigned long __cil_tmp106 ;
  int __cil_tmp107 ;
  unsigned long __cil_tmp108 ;
  int __cil_tmp109 ;
  unsigned int __cil_tmp110 ;
  unsigned int __cil_tmp111 ;
  unsigned int __cil_tmp112 ;
  unsigned int __cil_tmp113 ;
  unsigned int __cil_tmp114 ;
  unsigned int __cil_tmp115 ;
  unsigned int __cil_tmp116 ;
  unsigned int __cil_tmp117 ;
  unsigned char __cil_tmp118 ;
  int __cil_tmp119 ;
  unsigned char __cil_tmp120 ;
  int __cil_tmp121 ;
  unsigned char __cil_tmp122 ;
  int __cil_tmp123 ;
  unsigned char __cil_tmp124 ;
  int __cil_tmp125 ;
  unsigned char __cil_tmp126 ;
  int __cil_tmp127 ;
  unsigned char __cil_tmp128 ;
  int __cil_tmp129 ;
  unsigned char __cil_tmp130 ;
  int __cil_tmp131 ;
  unsigned int __cil_tmp132 ;
  unsigned int __cil_tmp133 ;
  unsigned int __cil_tmp134 ;
  unsigned int __cil_tmp135 ;
  unsigned int __cil_tmp136 ;
  unsigned int __cil_tmp137 ;
  unsigned int __cil_tmp138 ;
  unsigned int __cil_tmp139 ;
  unsigned int __cil_tmp140 ;
  unsigned int __cil_tmp141 ;
  unsigned int __cil_tmp142 ;
  unsigned int __cil_tmp143 ;
  unsigned int __cil_tmp144 ;
  unsigned int __cil_tmp145 ;
  unsigned short __cil_tmp146 ;
  int __cil_tmp147 ;
  int __cil_tmp148 ;
  unsigned short __cil_tmp149 ;
  int __cil_tmp150 ;
  int __cil_tmp151 ;
  unsigned int __cil_tmp152 ;
  unsigned int __cil_tmp153 ;
  unsigned int __cil_tmp154 ;
  unsigned int __cil_tmp155 ;
  unsigned short __cil_tmp156 ;
  int __cil_tmp157 ;
  int __cil_tmp158 ;
  unsigned int __cil_tmp159 ;
  unsigned int __cil_tmp160 ;
  int __cil_tmp161 ;
  __u16 __cil_tmp162 ;
  unsigned short __cil_tmp163 ;
  int __cil_tmp164 ;
  int __cil_tmp165 ;
  unsigned short __cil_tmp166 ;
  int __cil_tmp167 ;
  int __cil_tmp168 ;
  unsigned int __cil_tmp169 ;
  unsigned int __cil_tmp170 ;
  unsigned int __cil_tmp171 ;
  unsigned int __cil_tmp172 ;
  unsigned short __cil_tmp173 ;
  int __cil_tmp174 ;
  int __cil_tmp175 ;
  unsigned int __cil_tmp176 ;
  unsigned int __cil_tmp177 ;
  unsigned short __cil_tmp178 ;
  int __cil_tmp179 ;
  int __cil_tmp180 ;
  unsigned int __cil_tmp181 ;
  unsigned int __cil_tmp182 ;
  unsigned short __cil_tmp183 ;
  int __cil_tmp184 ;
  int __cil_tmp185 ;
  unsigned int __cil_tmp186 ;
  unsigned int __cil_tmp187 ;
  unsigned short __cil_tmp188 ;
  int __cil_tmp189 ;
  int __cil_tmp190 ;
  unsigned int __cil_tmp191 ;
  unsigned int __cil_tmp192 ;
  unsigned short __cil_tmp193 ;
  short __cil_tmp194 ;
  int __cil_tmp195 ;
  unsigned int __cil_tmp196 ;
  unsigned int __cil_tmp197 ;
  unsigned long __cil_tmp198 ;
  unsigned int __cil_tmp199 ;
  unsigned int __cil_tmp200 ;
  unsigned char __cil_tmp201 ;
  int __cil_tmp202 ;
  __u8 __cil_tmp203 ;
  unsigned short __cil_tmp204 ;
  int __cil_tmp205 ;
  int __cil_tmp206 ;
  unsigned char __cil_tmp207 ;
  int __cil_tmp208 ;
  unsigned char __cil_tmp209 ;
  int __cil_tmp210 ;
  unsigned char __cil_tmp211 ;
  int __cil_tmp212 ;
  unsigned char __cil_tmp213 ;
  int __cil_tmp214 ;
  int __cil_tmp215 ;
  int __cil_tmp216 ;
  int __cil_tmp217 ;
  __u16 __cil_tmp218 ;
  unsigned long __cil_tmp219 ;
  u32 __cil_tmp220 ;
  u32 __cil_tmp221 ;
  unsigned long __cil_tmp222 ;
  u32 __cil_tmp223 ;
  __u16 __cil_tmp224 ;
  unsigned char __cil_tmp225 ;
  unsigned int __cil_tmp226 ;

  {
  {
  tmp = rd_reg16(info, 140U);
  __cil_tmp5 = (int )tmp;
  __cil_tmp6 = __cil_tmp5 & 49166;
  __cil_tmp7 = (__u16 )__cil_tmp6;
  wr_reg16(info, 140U, __cil_tmp7);
  tx_stop(info);
  rx_stop(info);
  val = (unsigned short)4;
  }
  {
  __cil_tmp8 = info->params.mode;
  __cil_tmp9 = (int )__cil_tmp8;
  if (__cil_tmp9 == 8) {
    goto case_8;
  } else {
    {
    __cil_tmp10 = info->params.mode;
    __cil_tmp11 = (int )__cil_tmp10;
    if (__cil_tmp11 == 3) {
      goto case_3;
    } else {
      {
      __cil_tmp12 = info->params.mode;
      __cil_tmp13 = (int )__cil_tmp12;
      if (__cil_tmp13 == 4) {
        goto case_4;
      } else {
        {
        __cil_tmp14 = info->params.mode;
        __cil_tmp15 = (int )__cil_tmp14;
        if (__cil_tmp15 == 6) {
          goto case_6;
        } else
        if (0) {
          case_8:
          __cil_tmp16 = (unsigned int )val;
          __cil_tmp17 = __cil_tmp16 | 40960U;
          val = (unsigned short )__cil_tmp17;
          goto ldv_37672;
          case_3:
          __cil_tmp18 = (unsigned int )val;
          __cil_tmp19 = __cil_tmp18 | 24576U;
          val = (unsigned short )__cil_tmp19;
          goto ldv_37672;
          case_4:
          __cil_tmp20 = (unsigned int )val;
          __cil_tmp21 = __cil_tmp20 | 32768U;
          val = (unsigned short )__cil_tmp21;
          goto ldv_37672;
          case_6:
          __cil_tmp22 = (unsigned int )val;
          __cil_tmp23 = __cil_tmp22 | 8192U;
          val = (unsigned short )__cil_tmp23;
          goto ldv_37672;
        } else {

        }
        }
      }
      }
    }
    }
  }
  }
  ldv_37672: ;
  {
  __cil_tmp24 = info->if_mode;
  __cil_tmp25 = __cil_tmp24 & 16U;
  if (__cil_tmp25 != 0U) {
    __cil_tmp26 = (unsigned int )val;
    __cil_tmp27 = __cil_tmp26 | 128U;
    val = (unsigned short )__cil_tmp27;
  } else {

  }
  }
  {
  __cil_tmp28 = info->params.encoding;
  __cil_tmp29 = (int )__cil_tmp28;
  if (__cil_tmp29 == 1) {
    goto case_1;
  } else {
    {
    __cil_tmp30 = info->params.encoding;
    __cil_tmp31 = (int )__cil_tmp30;
    if (__cil_tmp31 == 2) {
      goto case_2;
    } else {
      {
      __cil_tmp32 = info->params.encoding;
      __cil_tmp33 = (int )__cil_tmp32;
      if (__cil_tmp33 == 3) {
        goto case_3___0;
      } else {
        {
        __cil_tmp34 = info->params.encoding;
        __cil_tmp35 = (int )__cil_tmp34;
        if (__cil_tmp35 == 4) {
          goto case_4___0;
        } else {
          {
          __cil_tmp36 = info->params.encoding;
          __cil_tmp37 = (int )__cil_tmp36;
          if (__cil_tmp37 == 5) {
            goto case_5;
          } else {
            {
            __cil_tmp38 = info->params.encoding;
            __cil_tmp39 = (int )__cil_tmp38;
            if (__cil_tmp39 == 6) {
              goto case_6___0;
            } else {
              {
              __cil_tmp40 = info->params.encoding;
              __cil_tmp41 = (int )__cil_tmp40;
              if (__cil_tmp41 == 7) {
                goto case_7;
              } else
              if (0) {
                case_1:
                __cil_tmp42 = (unsigned int )val;
                __cil_tmp43 = __cil_tmp42 | 1024U;
                val = (unsigned short )__cil_tmp43;
                goto ldv_37677;
                case_2:
                __cil_tmp44 = (unsigned int )val;
                __cil_tmp45 = __cil_tmp44 | 2048U;
                val = (unsigned short )__cil_tmp45;
                goto ldv_37677;
                case_3___0:
                __cil_tmp46 = (unsigned int )val;
                __cil_tmp47 = __cil_tmp46 | 3072U;
                val = (unsigned short )__cil_tmp47;
                goto ldv_37677;
                case_4___0:
                __cil_tmp48 = (unsigned int )val;
                __cil_tmp49 = __cil_tmp48 | 4096U;
                val = (unsigned short )__cil_tmp49;
                goto ldv_37677;
                case_5:
                __cil_tmp50 = (unsigned int )val;
                __cil_tmp51 = __cil_tmp50 | 5120U;
                val = (unsigned short )__cil_tmp51;
                goto ldv_37677;
                case_6___0:
                __cil_tmp52 = (unsigned int )val;
                __cil_tmp53 = __cil_tmp52 | 6144U;
                val = (unsigned short )__cil_tmp53;
                goto ldv_37677;
                case_7:
                __cil_tmp54 = (unsigned int )val;
                __cil_tmp55 = __cil_tmp54 | 7168U;
                val = (unsigned short )__cil_tmp55;
                goto ldv_37677;
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
  ldv_37677: ;
  {
  __cil_tmp56 = info->params.crc_type;
  __cil_tmp57 = (int )__cil_tmp56;
  __cil_tmp58 = __cil_tmp57 & 255;
  if (__cil_tmp58 == 1) {
    goto case_1___0;
  } else {
    {
    __cil_tmp59 = info->params.crc_type;
    __cil_tmp60 = (int )__cil_tmp59;
    __cil_tmp61 = __cil_tmp60 & 255;
    if (__cil_tmp61 == 2) {
      goto case_2___0;
    } else
    if (0) {
      case_1___0:
      __cil_tmp62 = (unsigned int )val;
      __cil_tmp63 = __cil_tmp62 | 512U;
      val = (unsigned short )__cil_tmp63;
      goto ldv_37685;
      case_2___0:
      __cil_tmp64 = (unsigned int )val;
      __cil_tmp65 = __cil_tmp64 | 768U;
      val = (unsigned short )__cil_tmp65;
      goto ldv_37685;
    } else {

    }
    }
  }
  }
  ldv_37685: ;
  {
  __cil_tmp66 = info->params.preamble;
  __cil_tmp67 = (unsigned int )__cil_tmp66;
  if (__cil_tmp67 != 0U) {
    __cil_tmp68 = (unsigned int )val;
    __cil_tmp69 = __cil_tmp68 | 64U;
    val = (unsigned short )__cil_tmp69;
  } else {

  }
  }
  {
  __cil_tmp70 = info->params.preamble_length;
  __cil_tmp71 = (int )__cil_tmp70;
  if (__cil_tmp71 == 1) {
    goto case_1___1;
  } else {
    {
    __cil_tmp72 = info->params.preamble_length;
    __cil_tmp73 = (int )__cil_tmp72;
    if (__cil_tmp73 == 2) {
      goto case_2___1;
    } else {
      {
      __cil_tmp74 = info->params.preamble_length;
      __cil_tmp75 = (int )__cil_tmp74;
      if (__cil_tmp75 == 3) {
        goto case_3___1;
      } else
      if (0) {
        case_1___1:
        __cil_tmp76 = (unsigned int )val;
        __cil_tmp77 = __cil_tmp76 | 32U;
        val = (unsigned short )__cil_tmp77;
        goto ldv_37688;
        case_2___1:
        __cil_tmp78 = (unsigned int )val;
        __cil_tmp79 = __cil_tmp78 | 16U;
        val = (unsigned short )__cil_tmp79;
        goto ldv_37688;
        case_3___1:
        __cil_tmp80 = (unsigned int )val;
        __cil_tmp81 = __cil_tmp80 | 48U;
        val = (unsigned short )__cil_tmp81;
        goto ldv_37688;
      } else {

      }
      }
    }
    }
  }
  }
  ldv_37688: ;
  {
  __cil_tmp82 = info->params.flags;
  __cil_tmp83 = (int )__cil_tmp82;
  __cil_tmp84 = __cil_tmp83 & 32;
  if (__cil_tmp84 != 0) {
    __cil_tmp85 = (unsigned int )val;
    __cil_tmp86 = __cil_tmp85 | 1U;
    val = (unsigned short )__cil_tmp86;
  } else {

  }
  }
  {
  __cil_tmp87 = (int )val;
  __cil_tmp88 = (__u16 )__cil_tmp87;
  wr_reg16(info, 130U, __cil_tmp88);
  }
  {
  __cil_tmp89 = info->params.preamble;
  __cil_tmp90 = (int )__cil_tmp89;
  if (__cil_tmp90 == 2) {
    goto case_2___2;
  } else {
    {
    __cil_tmp91 = info->params.preamble;
    __cil_tmp92 = (int )__cil_tmp91;
    if (__cil_tmp92 == 5) {
      goto case_5___0;
    } else {
      {
      __cil_tmp93 = info->params.preamble;
      __cil_tmp94 = (int )__cil_tmp93;
      if (__cil_tmp94 == 1) {
        goto case_1___2;
      } else {
        {
        __cil_tmp95 = info->params.preamble;
        __cil_tmp96 = (int )__cil_tmp95;
        if (__cil_tmp96 == 3) {
          goto case_3___2;
        } else {
          {
          __cil_tmp97 = info->params.preamble;
          __cil_tmp98 = (int )__cil_tmp97;
          if (__cil_tmp98 == 4) {
            goto case_4___1;
          } else {
            goto switch_default;
            if (0) {
              case_2___2:
              val = (unsigned short)126;
              goto ldv_37692;
              case_5___0:
              val = (unsigned short)255;
              goto ldv_37692;
              case_1___2:
              val = (unsigned short)0;
              goto ldv_37692;
              case_3___2:
              val = (unsigned short)85;
              goto ldv_37692;
              case_4___1:
              val = (unsigned short)170;
              goto ldv_37692;
              switch_default:
              val = (unsigned short)126;
              goto ldv_37692;
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
  ldv_37692:
  {
  __cil_tmp99 = (unsigned char )val;
  __cil_tmp100 = (int )__cil_tmp99;
  __cil_tmp101 = (__u8 )__cil_tmp100;
  wr_reg8(info, 133U, __cil_tmp101);
  val = (unsigned short)0;
  }
  {
  __cil_tmp102 = info->params.mode;
  __cil_tmp103 = (int )__cil_tmp102;
  if (__cil_tmp103 == 8) {
    goto case_8___0;
  } else {
    {
    __cil_tmp104 = info->params.mode;
    __cil_tmp105 = (int )__cil_tmp104;
    if (__cil_tmp105 == 3) {
      goto case_3___3;
    } else {
      {
      __cil_tmp106 = info->params.mode;
      __cil_tmp107 = (int )__cil_tmp106;
      if (__cil_tmp107 == 4) {
        goto case_4___2;
      } else {
        {
        __cil_tmp108 = info->params.mode;
        __cil_tmp109 = (int )__cil_tmp108;
        if (__cil_tmp109 == 6) {
          goto case_6___1;
        } else
        if (0) {
          case_8___0:
          __cil_tmp110 = (unsigned int )val;
          __cil_tmp111 = __cil_tmp110 | 40960U;
          val = (unsigned short )__cil_tmp111;
          goto ldv_37699;
          case_3___3:
          __cil_tmp112 = (unsigned int )val;
          __cil_tmp113 = __cil_tmp112 | 24576U;
          val = (unsigned short )__cil_tmp113;
          goto ldv_37699;
          case_4___2:
          __cil_tmp114 = (unsigned int )val;
          __cil_tmp115 = __cil_tmp114 | 32768U;
          val = (unsigned short )__cil_tmp115;
          goto ldv_37699;
          case_6___1:
          __cil_tmp116 = (unsigned int )val;
          __cil_tmp117 = __cil_tmp116 | 8192U;
          val = (unsigned short )__cil_tmp117;
          goto ldv_37699;
        } else {

        }
        }
      }
      }
    }
    }
  }
  }
  ldv_37699: ;
  {
  __cil_tmp118 = info->params.encoding;
  __cil_tmp119 = (int )__cil_tmp118;
  if (__cil_tmp119 == 1) {
    goto case_1___3;
  } else {
    {
    __cil_tmp120 = info->params.encoding;
    __cil_tmp121 = (int )__cil_tmp120;
    if (__cil_tmp121 == 2) {
      goto case_2___3;
    } else {
      {
      __cil_tmp122 = info->params.encoding;
      __cil_tmp123 = (int )__cil_tmp122;
      if (__cil_tmp123 == 3) {
        goto case_3___4;
      } else {
        {
        __cil_tmp124 = info->params.encoding;
        __cil_tmp125 = (int )__cil_tmp124;
        if (__cil_tmp125 == 4) {
          goto case_4___3;
        } else {
          {
          __cil_tmp126 = info->params.encoding;
          __cil_tmp127 = (int )__cil_tmp126;
          if (__cil_tmp127 == 5) {
            goto case_5___1;
          } else {
            {
            __cil_tmp128 = info->params.encoding;
            __cil_tmp129 = (int )__cil_tmp128;
            if (__cil_tmp129 == 6) {
              goto case_6___2;
            } else {
              {
              __cil_tmp130 = info->params.encoding;
              __cil_tmp131 = (int )__cil_tmp130;
              if (__cil_tmp131 == 7) {
                goto case_7___0;
              } else
              if (0) {
                case_1___3:
                __cil_tmp132 = (unsigned int )val;
                __cil_tmp133 = __cil_tmp132 | 1024U;
                val = (unsigned short )__cil_tmp133;
                goto ldv_37704;
                case_2___3:
                __cil_tmp134 = (unsigned int )val;
                __cil_tmp135 = __cil_tmp134 | 2048U;
                val = (unsigned short )__cil_tmp135;
                goto ldv_37704;
                case_3___4:
                __cil_tmp136 = (unsigned int )val;
                __cil_tmp137 = __cil_tmp136 | 3072U;
                val = (unsigned short )__cil_tmp137;
                goto ldv_37704;
                case_4___3:
                __cil_tmp138 = (unsigned int )val;
                __cil_tmp139 = __cil_tmp138 | 4096U;
                val = (unsigned short )__cil_tmp139;
                goto ldv_37704;
                case_5___1:
                __cil_tmp140 = (unsigned int )val;
                __cil_tmp141 = __cil_tmp140 | 5120U;
                val = (unsigned short )__cil_tmp141;
                goto ldv_37704;
                case_6___2:
                __cil_tmp142 = (unsigned int )val;
                __cil_tmp143 = __cil_tmp142 | 6144U;
                val = (unsigned short )__cil_tmp143;
                goto ldv_37704;
                case_7___0:
                __cil_tmp144 = (unsigned int )val;
                __cil_tmp145 = __cil_tmp144 | 7168U;
                val = (unsigned short )__cil_tmp145;
                goto ldv_37704;
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
  ldv_37704: ;
  {
  __cil_tmp146 = info->params.crc_type;
  __cil_tmp147 = (int )__cil_tmp146;
  __cil_tmp148 = __cil_tmp147 & 255;
  if (__cil_tmp148 == 1) {
    goto case_1___4;
  } else {
    {
    __cil_tmp149 = info->params.crc_type;
    __cil_tmp150 = (int )__cil_tmp149;
    __cil_tmp151 = __cil_tmp150 & 255;
    if (__cil_tmp151 == 2) {
      goto case_2___4;
    } else
    if (0) {
      case_1___4:
      __cil_tmp152 = (unsigned int )val;
      __cil_tmp153 = __cil_tmp152 | 512U;
      val = (unsigned short )__cil_tmp153;
      goto ldv_37712;
      case_2___4:
      __cil_tmp154 = (unsigned int )val;
      __cil_tmp155 = __cil_tmp154 | 768U;
      val = (unsigned short )__cil_tmp155;
      goto ldv_37712;
    } else {

    }
    }
  }
  }
  ldv_37712: ;
  {
  __cil_tmp156 = info->params.flags;
  __cil_tmp157 = (int )__cil_tmp156;
  __cil_tmp158 = __cil_tmp157 & 64;
  if (__cil_tmp158 != 0) {
    __cil_tmp159 = (unsigned int )val;
    __cil_tmp160 = __cil_tmp159 | 1U;
    val = (unsigned short )__cil_tmp160;
  } else {

  }
  }
  {
  __cil_tmp161 = (int )val;
  __cil_tmp162 = (__u16 )__cil_tmp161;
  wr_reg16(info, 134U, __cil_tmp162);
  val = (unsigned short)0;
  }
  {
  __cil_tmp163 = info->params.flags;
  __cil_tmp164 = (int )__cil_tmp163;
  __cil_tmp165 = __cil_tmp164 & 2048;
  if (__cil_tmp165 != 0) {
    {
    __cil_tmp166 = info->params.flags;
    __cil_tmp167 = (int )__cil_tmp166;
    __cil_tmp168 = __cil_tmp167 & 256;
    if (__cil_tmp168 != 0) {
      __cil_tmp169 = (unsigned int )val;
      __cil_tmp170 = __cil_tmp169 | 96U;
      val = (unsigned short )__cil_tmp170;
    } else {
      __cil_tmp171 = (unsigned int )val;
      __cil_tmp172 = __cil_tmp171 | 64U;
      val = (unsigned short )__cil_tmp172;
    }
    }
  } else {
    {
    __cil_tmp173 = info->params.flags;
    __cil_tmp174 = (int )__cil_tmp173;
    __cil_tmp175 = __cil_tmp174 & 1024;
    if (__cil_tmp175 != 0) {
      __cil_tmp176 = (unsigned int )val;
      __cil_tmp177 = __cil_tmp176 | 128U;
      val = (unsigned short )__cil_tmp177;
    } else {
      {
      __cil_tmp178 = info->params.flags;
      __cil_tmp179 = (int )__cil_tmp178;
      __cil_tmp180 = __cil_tmp179 & 8;
      if (__cil_tmp180 != 0) {
        __cil_tmp181 = (unsigned int )val;
        __cil_tmp182 = __cil_tmp181 | 32U;
        val = (unsigned short )__cil_tmp182;
      } else {

      }
      }
    }
    }
  }
  }
  {
  __cil_tmp183 = info->params.flags;
  __cil_tmp184 = (int )__cil_tmp183;
  __cil_tmp185 = __cil_tmp184 & 512;
  if (__cil_tmp185 != 0) {
    __cil_tmp186 = (unsigned int )val;
    __cil_tmp187 = __cil_tmp186 | 8U;
    val = (unsigned short )__cil_tmp187;
  } else {
    {
    __cil_tmp188 = info->params.flags;
    __cil_tmp189 = (int )__cil_tmp188;
    __cil_tmp190 = __cil_tmp189 & 256;
    if (__cil_tmp190 != 0) {
      __cil_tmp191 = (unsigned int )val;
      __cil_tmp192 = __cil_tmp191 | 16U;
      val = (unsigned short )__cil_tmp192;
    } else {
      {
      __cil_tmp193 = info->params.flags;
      __cil_tmp194 = (short )__cil_tmp193;
      __cil_tmp195 = (int )__cil_tmp194;
      if (__cil_tmp195 < 0) {
        __cil_tmp196 = (unsigned int )val;
        __cil_tmp197 = __cil_tmp196 | 4U;
        val = (unsigned short )__cil_tmp197;
      } else {

      }
      }
    }
    }
  }
  }
  {
  __cil_tmp198 = info->params.clock_speed;
  if (__cil_tmp198 != 0UL) {
    __cil_tmp199 = (unsigned int )val;
    __cil_tmp200 = __cil_tmp199 | 3U;
    val = (unsigned short )__cil_tmp200;
  } else {

  }
  }
  {
  __cil_tmp201 = (unsigned char )val;
  __cil_tmp202 = (int )__cil_tmp201;
  __cil_tmp203 = (__u8 )__cil_tmp202;
  wr_reg8(info, 137U, __cil_tmp203);
  }
  {
  __cil_tmp204 = info->params.flags;
  __cil_tmp205 = (int )__cil_tmp204;
  __cil_tmp206 = __cil_tmp205 & 1280;
  if (__cil_tmp206 != 0) {
    {
    __cil_tmp207 = info->params.encoding;
    __cil_tmp208 = (int )__cil_tmp207;
    if (__cil_tmp208 == 4) {
      goto case_4___4;
    } else {
      {
      __cil_tmp209 = info->params.encoding;
      __cil_tmp210 = (int )__cil_tmp209;
      if (__cil_tmp210 == 5) {
        goto case_5___2;
      } else {
        {
        __cil_tmp211 = info->params.encoding;
        __cil_tmp212 = (int )__cil_tmp211;
        if (__cil_tmp212 == 6) {
          goto case_6___3;
        } else {
          {
          __cil_tmp213 = info->params.encoding;
          __cil_tmp214 = (int )__cil_tmp213;
          if (__cil_tmp214 == 7) {
            goto case_7___1;
          } else {
            goto switch_default___0;
            if (0) {
              case_4___4: ;
              case_5___2:
              val = (unsigned short)128;
              goto ldv_37716;
              case_6___3: ;
              case_7___1:
              val = (unsigned short)192;
              goto ldv_37716;
              switch_default___0:
              val = (unsigned short)64;
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
    ldv_37716:
    {
    tmp___0 = rd_reg16(info, 134U);
    __cil_tmp215 = (int )val;
    __cil_tmp216 = (int )tmp___0;
    __cil_tmp217 = __cil_tmp216 | __cil_tmp215;
    __cil_tmp218 = (__u16 )__cil_tmp217;
    wr_reg16(info, 134U, __cil_tmp218);
    __cil_tmp219 = info->params.clock_speed;
    __cil_tmp220 = (u32 )__cil_tmp219;
    __cil_tmp221 = __cil_tmp220 * 16U;
    set_rate(info, __cil_tmp221);
    }
  } else {
    {
    __cil_tmp222 = info->params.clock_speed;
    __cil_tmp223 = (u32 )__cil_tmp222;
    set_rate(info, __cil_tmp223);
    }
  }
  }
  {
  tx_set_idle(info);
  msc_set_vcr(info);
  __cil_tmp224 = (__u16 )49153;
  wr_reg16(info, 140U, __cil_tmp224);
  }
  {
  __cil_tmp225 = info->params.loopback;
  __cil_tmp226 = (unsigned int )__cil_tmp225;
  if (__cil_tmp226 != 0U) {
    {
    enable_loopback(info);
    }
  } else {

  }
  }
  return;
}
}
static void tx_set_idle(struct slgt_info *info )
{ unsigned char val ;
  unsigned short tcr ;
  u32 __cil_tmp4 ;
  unsigned int __cil_tmp5 ;
  short __cil_tmp6 ;
  int __cil_tmp7 ;
  int __cil_tmp8 ;
  int __cil_tmp9 ;
  u32 __cil_tmp10 ;
  u32 __cil_tmp11 ;
  unsigned char __cil_tmp12 ;
  int __cil_tmp13 ;
  __u8 __cil_tmp14 ;
  int __cil_tmp15 ;
  int __cil_tmp16 ;
  unsigned int __cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  int __cil_tmp19 ;
  __u16 __cil_tmp20 ;
  u32 __cil_tmp21 ;
  unsigned int __cil_tmp22 ;
  u32 __cil_tmp23 ;
  u32 __cil_tmp24 ;
  int __cil_tmp25 ;
  u32 __cil_tmp26 ;
  int __cil_tmp27 ;
  u32 __cil_tmp28 ;
  int __cil_tmp29 ;
  u32 __cil_tmp30 ;
  int __cil_tmp31 ;
  u32 __cil_tmp32 ;
  int __cil_tmp33 ;
  int __cil_tmp34 ;
  __u8 __cil_tmp35 ;

  {
  {
  tcr = rd_reg16(info, 130U);
  }
  {
  __cil_tmp4 = info->idle_mode;
  __cil_tmp5 = __cil_tmp4 & 536870912U;
  if (__cil_tmp5 != 0U) {
    {
    __cil_tmp6 = (short )tcr;
    __cil_tmp7 = (int )__cil_tmp6;
    __cil_tmp8 = __cil_tmp7 & -113;
    __cil_tmp9 = __cil_tmp8 | 16;
    tcr = (unsigned short )__cil_tmp9;
    __cil_tmp10 = info->idle_mode;
    __cil_tmp11 = __cil_tmp10 >> 8;
    __cil_tmp12 = (unsigned char )__cil_tmp11;
    __cil_tmp13 = (int )__cil_tmp12;
    __cil_tmp14 = (__u8 )__cil_tmp13;
    wr_reg8(info, 133U, __cil_tmp14);
    }
  } else {
    {
    __cil_tmp15 = (int )tcr;
    __cil_tmp16 = __cil_tmp15 & 64;
    if (__cil_tmp16 == 0) {
      __cil_tmp17 = (unsigned int )tcr;
      __cil_tmp18 = __cil_tmp17 & 65487U;
      tcr = (unsigned short )__cil_tmp18;
    } else {

    }
    }
  }
  }
  {
  __cil_tmp19 = (int )tcr;
  __cil_tmp20 = (__u16 )__cil_tmp19;
  wr_reg16(info, 130U, __cil_tmp20);
  }
  {
  __cil_tmp21 = info->idle_mode;
  __cil_tmp22 = __cil_tmp21 & 805306368U;
  if (__cil_tmp22 != 0U) {
    __cil_tmp23 = info->idle_mode;
    val = (unsigned char )__cil_tmp23;
  } else {
    {
    __cil_tmp24 = info->idle_mode;
    __cil_tmp25 = (int )__cil_tmp24;
    if (__cil_tmp25 == 0) {
      goto case_0;
    } else {
      {
      __cil_tmp26 = info->idle_mode;
      __cil_tmp27 = (int )__cil_tmp26;
      if (__cil_tmp27 == 1) {
        goto case_1;
      } else {
        {
        __cil_tmp28 = info->idle_mode;
        __cil_tmp29 = (int )__cil_tmp28;
        if (__cil_tmp29 == 4) {
          goto case_4;
        } else {
          {
          __cil_tmp30 = info->idle_mode;
          __cil_tmp31 = (int )__cil_tmp30;
          if (__cil_tmp31 == 2) {
            goto case_2;
          } else {
            {
            __cil_tmp32 = info->idle_mode;
            __cil_tmp33 = (int )__cil_tmp32;
            if (__cil_tmp33 == 5) {
              goto case_5;
            } else {
              goto switch_default;
              if (0) {
                case_0:
                val = (unsigned char)126;
                goto ldv_37726;
                case_1: ;
                case_4:
                val = (unsigned char)170;
                goto ldv_37726;
                case_2: ;
                case_5:
                val = (unsigned char)0;
                goto ldv_37726;
                switch_default:
                val = (unsigned char)255;
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
    ldv_37726: ;
  }
  }
  {
  __cil_tmp34 = (int )val;
  __cil_tmp35 = (__u8 )__cil_tmp34;
  wr_reg8(info, 132U, __cil_tmp35);
  }
  return;
}
}
static void get_signals(struct slgt_info *info )
{ unsigned short status ;
  __u16 tmp ;
  unsigned char __cil_tmp4 ;
  unsigned int __cil_tmp5 ;
  unsigned int __cil_tmp6 ;
  int __cil_tmp7 ;
  int __cil_tmp8 ;
  unsigned char __cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  unsigned int __cil_tmp11 ;
  int __cil_tmp12 ;
  int __cil_tmp13 ;
  unsigned char __cil_tmp14 ;
  unsigned int __cil_tmp15 ;
  unsigned int __cil_tmp16 ;
  int __cil_tmp17 ;
  int __cil_tmp18 ;
  unsigned char __cil_tmp19 ;
  unsigned int __cil_tmp20 ;
  unsigned int __cil_tmp21 ;
  int __cil_tmp22 ;
  unsigned char __cil_tmp23 ;
  unsigned int __cil_tmp24 ;
  unsigned int __cil_tmp25 ;

  {
  {
  tmp = rd_reg16(info, 142U);
  status = tmp;
  __cil_tmp4 = info->signals;
  __cil_tmp5 = (unsigned int )__cil_tmp4;
  __cil_tmp6 = __cil_tmp5 & 160U;
  info->signals = (unsigned char )__cil_tmp6;
  }
  {
  __cil_tmp7 = (int )status;
  __cil_tmp8 = __cil_tmp7 & 8;
  if (__cil_tmp8 != 0) {
    __cil_tmp9 = info->signals;
    __cil_tmp10 = (unsigned int )__cil_tmp9;
    __cil_tmp11 = __cil_tmp10 | 64U;
    info->signals = (unsigned char )__cil_tmp11;
  } else {

  }
  }
  {
  __cil_tmp12 = (int )status;
  __cil_tmp13 = __cil_tmp12 & 4;
  if (__cil_tmp13 != 0) {
    __cil_tmp14 = info->signals;
    __cil_tmp15 = (unsigned int )__cil_tmp14;
    __cil_tmp16 = __cil_tmp15 | 16U;
    info->signals = (unsigned char )__cil_tmp16;
  } else {

  }
  }
  {
  __cil_tmp17 = (int )status;
  __cil_tmp18 = __cil_tmp17 & 2;
  if (__cil_tmp18 != 0) {
    __cil_tmp19 = info->signals;
    __cil_tmp20 = (unsigned int )__cil_tmp19;
    __cil_tmp21 = __cil_tmp20 | 1U;
    info->signals = (unsigned char )__cil_tmp21;
  } else {

  }
  }
  {
  __cil_tmp22 = (int )status;
  if (__cil_tmp22 & 1) {
    __cil_tmp23 = info->signals;
    __cil_tmp24 = (unsigned int )__cil_tmp23;
    __cil_tmp25 = __cil_tmp24 | 4U;
    info->signals = (unsigned char )__cil_tmp25;
  } else {

  }
  }
  return;
}
}
static void msc_set_vcr(struct slgt_info *info )
{ unsigned char val ;
  unsigned int __cil_tmp3 ;
  unsigned int __cil_tmp4 ;
  int __cil_tmp5 ;
  unsigned int __cil_tmp6 ;
  unsigned int __cil_tmp7 ;
  int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  int __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  unsigned int __cil_tmp15 ;
  unsigned int __cil_tmp16 ;
  unsigned int __cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  unsigned int __cil_tmp19 ;
  unsigned int __cil_tmp20 ;
  unsigned int __cil_tmp21 ;
  unsigned char __cil_tmp22 ;
  signed char __cil_tmp23 ;
  int __cil_tmp24 ;
  unsigned int __cil_tmp25 ;
  unsigned int __cil_tmp26 ;
  unsigned char __cil_tmp27 ;
  int __cil_tmp28 ;
  int __cil_tmp29 ;
  unsigned int __cil_tmp30 ;
  unsigned int __cil_tmp31 ;
  unsigned int __cil_tmp32 ;
  unsigned int __cil_tmp33 ;
  unsigned int __cil_tmp34 ;
  unsigned int __cil_tmp35 ;
  unsigned int __cil_tmp36 ;
  unsigned int __cil_tmp37 ;
  unsigned int __cil_tmp38 ;
  unsigned int __cil_tmp39 ;
  int __cil_tmp40 ;
  __u8 __cil_tmp41 ;

  {
  val = (unsigned char)0;
  {
  __cil_tmp3 = info->if_mode;
  __cil_tmp4 = __cil_tmp3 & 15U;
  __cil_tmp5 = (int )__cil_tmp4;
  if (__cil_tmp5 == 1) {
    goto case_1;
  } else {
    {
    __cil_tmp6 = info->if_mode;
    __cil_tmp7 = __cil_tmp6 & 15U;
    __cil_tmp8 = (int )__cil_tmp7;
    if (__cil_tmp8 == 2) {
      goto case_2;
    } else {
      {
      __cil_tmp9 = info->if_mode;
      __cil_tmp10 = __cil_tmp9 & 15U;
      __cil_tmp11 = (int )__cil_tmp10;
      if (__cil_tmp11 == 3) {
        goto case_3;
      } else
      if (0) {
        case_1:
        __cil_tmp12 = (unsigned int )val;
        __cil_tmp13 = __cil_tmp12 | 32U;
        val = (unsigned char )__cil_tmp13;
        goto ldv_37741;
        case_2:
        __cil_tmp14 = (unsigned int )val;
        __cil_tmp15 = __cil_tmp14 | 224U;
        val = (unsigned char )__cil_tmp15;
        goto ldv_37741;
        case_3:
        __cil_tmp16 = (unsigned int )val;
        __cil_tmp17 = __cil_tmp16 | 64U;
        val = (unsigned char )__cil_tmp17;
        goto ldv_37741;
      } else {

      }
      }
    }
    }
  }
  }
  ldv_37741: ;
  {
  __cil_tmp18 = info->if_mode;
  __cil_tmp19 = __cil_tmp18 & 128U;
  if (__cil_tmp19 != 0U) {
    __cil_tmp20 = (unsigned int )val;
    __cil_tmp21 = __cil_tmp20 | 16U;
    val = (unsigned char )__cil_tmp21;
  } else {

  }
  }
  {
  __cil_tmp22 = info->signals;
  __cil_tmp23 = (signed char )__cil_tmp22;
  __cil_tmp24 = (int )__cil_tmp23;
  if (__cil_tmp24 < 0) {
    __cil_tmp25 = (unsigned int )val;
    __cil_tmp26 = __cil_tmp25 | 8U;
    val = (unsigned char )__cil_tmp26;
  } else {

  }
  }
  {
  __cil_tmp27 = info->signals;
  __cil_tmp28 = (int )__cil_tmp27;
  __cil_tmp29 = __cil_tmp28 & 32;
  if (__cil_tmp29 != 0) {
    __cil_tmp30 = (unsigned int )val;
    __cil_tmp31 = __cil_tmp30 | 4U;
    val = (unsigned char )__cil_tmp31;
  } else {

  }
  }
  {
  __cil_tmp32 = info->if_mode;
  __cil_tmp33 = __cil_tmp32 & 32U;
  if (__cil_tmp33 != 0U) {
    __cil_tmp34 = (unsigned int )val;
    __cil_tmp35 = __cil_tmp34 | 2U;
    val = (unsigned char )__cil_tmp35;
  } else {

  }
  }
  {
  __cil_tmp36 = info->if_mode;
  __cil_tmp37 = __cil_tmp36 & 64U;
  if (__cil_tmp37 != 0U) {
    __cil_tmp38 = (unsigned int )val;
    __cil_tmp39 = __cil_tmp38 | 1U;
    val = (unsigned char )__cil_tmp39;
  } else {

  }
  }
  {
  __cil_tmp40 = (int )val;
  __cil_tmp41 = (__u8 )__cil_tmp40;
  wr_reg8(info, 136U, __cil_tmp41);
  }
  return;
}
}
static void set_signals(struct slgt_info *info )
{ unsigned char val ;
  __u8 tmp ;
  unsigned char __cil_tmp4 ;
  signed char __cil_tmp5 ;
  int __cil_tmp6 ;
  unsigned int __cil_tmp7 ;
  unsigned int __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  unsigned char __cil_tmp11 ;
  int __cil_tmp12 ;
  int __cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  unsigned int __cil_tmp15 ;
  unsigned int __cil_tmp16 ;
  unsigned int __cil_tmp17 ;
  int __cil_tmp18 ;
  __u8 __cil_tmp19 ;

  {
  {
  tmp = rd_reg8(info, 136U);
  val = tmp;
  }
  {
  __cil_tmp4 = info->signals;
  __cil_tmp5 = (signed char )__cil_tmp4;
  __cil_tmp6 = (int )__cil_tmp5;
  if (__cil_tmp6 < 0) {
    __cil_tmp7 = (unsigned int )val;
    __cil_tmp8 = __cil_tmp7 | 8U;
    val = (unsigned char )__cil_tmp8;
  } else {
    __cil_tmp9 = (unsigned int )val;
    __cil_tmp10 = __cil_tmp9 & 247U;
    val = (unsigned char )__cil_tmp10;
  }
  }
  {
  __cil_tmp11 = info->signals;
  __cil_tmp12 = (int )__cil_tmp11;
  __cil_tmp13 = __cil_tmp12 & 32;
  if (__cil_tmp13 != 0) {
    __cil_tmp14 = (unsigned int )val;
    __cil_tmp15 = __cil_tmp14 | 4U;
    val = (unsigned char )__cil_tmp15;
  } else {
    __cil_tmp16 = (unsigned int )val;
    __cil_tmp17 = __cil_tmp16 & 251U;
    val = (unsigned char )__cil_tmp17;
  }
  }
  {
  __cil_tmp18 = (int )val;
  __cil_tmp19 = (__u8 )__cil_tmp18;
  wr_reg8(info, 136U, __cil_tmp19);
  }
  return;
}
}
static void free_rbufs(struct slgt_info *info , unsigned int i , unsigned int last )
{ int done ;
  unsigned long __cil_tmp5 ;
  struct slgt_desc *__cil_tmp6 ;
  struct slgt_desc *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  struct slgt_desc *__cil_tmp9 ;
  struct slgt_desc *__cil_tmp10 ;
  unsigned int __cil_tmp11 ;
  unsigned int __cil_tmp12 ;

  {
  done = 0;
  goto ldv_37755;
  ldv_37754:
  __cil_tmp5 = (unsigned long )i;
  __cil_tmp6 = info->rbufs;
  __cil_tmp7 = __cil_tmp6 + __cil_tmp5;
  __cil_tmp7->status = (__le16 )0U;
  __cil_tmp8 = (unsigned long )i;
  __cil_tmp9 = info->rbufs;
  __cil_tmp10 = __cil_tmp9 + __cil_tmp8;
  __cil_tmp11 = info->rbuf_fill_level;
  __cil_tmp10->count = (unsigned short )__cil_tmp11;
  if (i == last) {
    done = 1;
  } else {

  }
  i = i + 1U;
  {
  __cil_tmp12 = info->rbuf_count;
  if (i == __cil_tmp12) {
    i = 0U;
  } else {

  }
  }
  ldv_37755: ;
  if (done == 0) {
    goto ldv_37754;
  } else {
    goto ldv_37756;
  }
  ldv_37756:
  info->rbuf_current = i;
  return;
}
}
static void reset_rbufs(struct slgt_info *info )
{ unsigned int __cil_tmp2 ;
  unsigned int __cil_tmp3 ;

  {
  {
  __cil_tmp2 = info->rbuf_count;
  __cil_tmp3 = __cil_tmp2 - 1U;
  free_rbufs(info, 0U, __cil_tmp3);
  info->rbuf_fill_index = 0U;
  info->rbuf_fill_count = (unsigned short)0;
  }
  return;
}
}
static bool rx_get_frame(struct slgt_info *info )
{ unsigned int start ;
  unsigned int end ;
  unsigned short status ;
  unsigned int framesize ;
  unsigned long flags ;
  struct tty_struct *tty ;
  unsigned char addr_field ;
  unsigned int crc_size ;
  raw_spinlock_t *tmp ;
  int __min1 ;
  int __min2 ;
  int tmp___0 ;
  int copy_count ;
  int i ;
  unsigned char *p ;
  int partial_count ;
  int __min1___0 ;
  int __min2___0 ;
  int tmp___1 ;
  size_t __len ;
  void *__ret ;
  unsigned short __cil_tmp23 ;
  int __cil_tmp24 ;
  int __cil_tmp25 ;
  unsigned short __cil_tmp26 ;
  int __cil_tmp27 ;
  int __cil_tmp28 ;
  unsigned long __cil_tmp29 ;
  struct slgt_desc *__cil_tmp30 ;
  struct slgt_desc *__cil_tmp31 ;
  __le16 __cil_tmp32 ;
  short __cil_tmp33 ;
  int __cil_tmp34 ;
  unsigned char __cil_tmp35 ;
  unsigned int __cil_tmp36 ;
  unsigned long __cil_tmp37 ;
  struct slgt_desc *__cil_tmp38 ;
  struct slgt_desc *__cil_tmp39 ;
  char *__cil_tmp40 ;
  char __cil_tmp41 ;
  unsigned long __cil_tmp42 ;
  struct slgt_desc *__cil_tmp43 ;
  struct slgt_desc *__cil_tmp44 ;
  __le16 __cil_tmp45 ;
  unsigned int __cil_tmp46 ;
  unsigned long __cil_tmp47 ;
  struct slgt_desc *__cil_tmp48 ;
  struct slgt_desc *__cil_tmp49 ;
  __le16 __cil_tmp50 ;
  int __cil_tmp51 ;
  int __cil_tmp52 ;
  unsigned int __cil_tmp53 ;
  unsigned int __cil_tmp54 ;
  bool __cil_tmp55 ;
  spinlock_t *__cil_tmp56 ;
  spinlock_t *__cil_tmp57 ;
  unsigned long __cil_tmp58 ;
  struct slgt_desc *__cil_tmp59 ;
  struct slgt_desc *__cil_tmp60 ;
  unsigned short __cil_tmp61 ;
  int __cil_tmp62 ;
  int __cil_tmp63 ;
  unsigned int __cil_tmp64 ;
  unsigned int __cil_tmp65 ;
  unsigned int __cil_tmp66 ;
  int __cil_tmp67 ;
  unsigned char __cil_tmp68 ;
  int __cil_tmp69 ;
  unsigned int __cil_tmp70 ;
  __u32 __cil_tmp71 ;
  int __cil_tmp72 ;
  __u32 __cil_tmp73 ;
  int __cil_tmp74 ;
  int __cil_tmp75 ;
  __u32 __cil_tmp76 ;
  unsigned short __cil_tmp77 ;
  short __cil_tmp78 ;
  int __cil_tmp79 ;
  struct net_device *__cil_tmp80 ;
  struct net_device *__cil_tmp81 ;
  unsigned long __cil_tmp82 ;
  struct net_device *__cil_tmp83 ;
  struct net_device *__cil_tmp84 ;
  unsigned long __cil_tmp85 ;
  char (*__cil_tmp86)[25U] ;
  char *__cil_tmp87 ;
  int __cil_tmp88 ;
  unsigned int __cil_tmp89 ;
  unsigned long __cil_tmp90 ;
  struct slgt_desc *__cil_tmp91 ;
  struct slgt_desc *__cil_tmp92 ;
  char *__cil_tmp93 ;
  char const *__cil_tmp94 ;
  unsigned short __cil_tmp95 ;
  short __cil_tmp96 ;
  int __cil_tmp97 ;
  u32 __cil_tmp98 ;
  u32 __cil_tmp99 ;
  __u32 __cil_tmp100 ;
  __u32 __cil_tmp101 ;
  unsigned int __cil_tmp102 ;
  void *__cil_tmp103 ;
  unsigned long __cil_tmp104 ;
  struct slgt_desc *__cil_tmp105 ;
  struct slgt_desc *__cil_tmp106 ;
  char *__cil_tmp107 ;
  void const *__cil_tmp108 ;
  unsigned long __cil_tmp109 ;
  unsigned int __cil_tmp110 ;
  unsigned int __cil_tmp111 ;
  unsigned short __cil_tmp112 ;
  short __cil_tmp113 ;
  int __cil_tmp114 ;
  int __cil_tmp115 ;
  int __cil_tmp116 ;
  int __cil_tmp117 ;
  int __cil_tmp118 ;
  unsigned char *__cil_tmp119 ;
  char *__cil_tmp120 ;
  int __cil_tmp121 ;
  unsigned char *__cil_tmp122 ;
  __u8 const *__cil_tmp123 ;
  char (*__cil_tmp124)[4096U] ;
  char *__cil_tmp125 ;
  int __cil_tmp126 ;

  {
  framesize = 0U;
  tty = info->port.tty;
  addr_field = (unsigned char)255;
  crc_size = 0U;
  {
  __cil_tmp23 = info->params.crc_type;
  __cil_tmp24 = (int )__cil_tmp23;
  __cil_tmp25 = __cil_tmp24 & 255;
  if (__cil_tmp25 == 1) {
    goto case_1;
  } else {
    {
    __cil_tmp26 = info->params.crc_type;
    __cil_tmp27 = (int )__cil_tmp26;
    __cil_tmp28 = __cil_tmp27 & 255;
    if (__cil_tmp28 == 2) {
      goto case_2;
    } else
    if (0) {
      case_1:
      crc_size = 2U;
      goto ldv_37772;
      case_2:
      crc_size = 4U;
      goto ldv_37772;
    } else {

    }
    }
  }
  }
  ldv_37772: ;
  check_again:
  framesize = 0U;
  addr_field = (unsigned char)255;
  end = info->rbuf_current;
  start = end;
  ldv_37780: ;
  {
  __cil_tmp29 = (unsigned long )end;
  __cil_tmp30 = info->rbufs;
  __cil_tmp31 = __cil_tmp30 + __cil_tmp29;
  __cil_tmp32 = __cil_tmp31->status;
  __cil_tmp33 = (short )__cil_tmp32;
  __cil_tmp34 = (int )__cil_tmp33;
  if (__cil_tmp34 >= 0) {
    goto cleanup;
  } else {

  }
  }
  if (framesize == 0U) {
    {
    __cil_tmp35 = info->params.addr_filter;
    __cil_tmp36 = (unsigned int )__cil_tmp35;
    if (__cil_tmp36 != 255U) {
      __cil_tmp37 = (unsigned long )end;
      __cil_tmp38 = info->rbufs;
      __cil_tmp39 = __cil_tmp38 + __cil_tmp37;
      __cil_tmp40 = __cil_tmp39->buf;
      __cil_tmp41 = *__cil_tmp40;
      addr_field = (unsigned char )__cil_tmp41;
    } else {

    }
    }
  } else {

  }
  __cil_tmp42 = (unsigned long )end;
  __cil_tmp43 = info->rbufs;
  __cil_tmp44 = __cil_tmp43 + __cil_tmp42;
  __cil_tmp45 = __cil_tmp44->count;
  __cil_tmp46 = (unsigned int )__cil_tmp45;
  framesize = __cil_tmp46 + framesize;
  {
  __cil_tmp47 = (unsigned long )end;
  __cil_tmp48 = info->rbufs;
  __cil_tmp49 = __cil_tmp48 + __cil_tmp47;
  __cil_tmp50 = __cil_tmp49->status;
  __cil_tmp51 = (int )__cil_tmp50;
  __cil_tmp52 = __cil_tmp51 & 4;
  if (__cil_tmp52 != 0) {
    goto ldv_37776;
  } else {

  }
  }
  end = end + 1U;
  {
  __cil_tmp53 = info->rbuf_count;
  if (end == __cil_tmp53) {
    end = 0U;
  } else {

  }
  }
  {
  __cil_tmp54 = info->rbuf_current;
  if (__cil_tmp54 == end) {
    {
    __cil_tmp55 = info->rx_enabled;
    if ((int )__cil_tmp55) {
      {
      __cil_tmp56 = & info->lock;
      tmp = spinlock_check(__cil_tmp56);
      flags = _raw_spin_lock_irqsave(tmp);
      rx_start(info);
      __cil_tmp57 = & info->lock;
      spin_unlock_irqrestore(__cil_tmp57, flags);
      }
    } else {

    }
    }
    goto cleanup;
  } else {

  }
  }
  goto ldv_37780;
  ldv_37776:
  __cil_tmp58 = (unsigned long )end;
  __cil_tmp59 = info->rbufs;
  __cil_tmp60 = __cil_tmp59 + __cil_tmp58;
  status = __cil_tmp60->status;
  {
  __cil_tmp61 = info->params.crc_type;
  __cil_tmp62 = (int )__cil_tmp61;
  __cil_tmp63 = __cil_tmp62 & 255;
  if (__cil_tmp63 == 0) {
    __cil_tmp64 = (unsigned int )status;
    __cil_tmp65 = __cil_tmp64 & 65533U;
    status = (unsigned short )__cil_tmp65;
  } else {

  }
  }
  if (framesize == 0U) {
    {
    free_rbufs(info, start, end);
    }
    goto check_again;
  } else {
    {
    __cil_tmp66 = (unsigned int )addr_field;
    if (__cil_tmp66 != 255U) {
      {
      __cil_tmp67 = (int )addr_field;
      __cil_tmp68 = info->params.addr_filter;
      __cil_tmp69 = (int )__cil_tmp68;
      if (__cil_tmp69 != __cil_tmp67) {
        {
        free_rbufs(info, start, end);
        }
        goto check_again;
      } else {

      }
      }
    } else {

    }
    }
  }
  {
  __cil_tmp70 = crc_size + 2U;
  if (__cil_tmp70 > framesize) {
    __cil_tmp71 = info->icount.rxshort;
    info->icount.rxshort = __cil_tmp71 + 1U;
    framesize = 0U;
  } else {
    {
    __cil_tmp72 = (int )status;
    if (__cil_tmp72 & 1) {
      __cil_tmp73 = info->icount.rxshort;
      info->icount.rxshort = __cil_tmp73 + 1U;
      framesize = 0U;
    } else {
      {
      __cil_tmp74 = (int )status;
      __cil_tmp75 = __cil_tmp74 & 2;
      if (__cil_tmp75 != 0) {
        __cil_tmp76 = info->icount.rxcrc;
        info->icount.rxcrc = __cil_tmp76 + 1U;
        {
        __cil_tmp77 = info->params.crc_type;
        __cil_tmp78 = (short )__cil_tmp77;
        __cil_tmp79 = (int )__cil_tmp78;
        if (__cil_tmp79 >= 0) {
          framesize = 0U;
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
  if (framesize == 0U) {
    __cil_tmp80 = info->netdev;
    __cil_tmp81 = info->netdev;
    __cil_tmp82 = __cil_tmp81->stats.rx_errors;
    __cil_tmp80->stats.rx_errors = __cil_tmp82 + 1UL;
    __cil_tmp83 = info->netdev;
    __cil_tmp84 = info->netdev;
    __cil_tmp85 = __cil_tmp84->stats.rx_frame_errors;
    __cil_tmp83->stats.rx_frame_errors = __cil_tmp85 + 1UL;
  } else {

  }
  if (debug_level > 3) {
    {
    __cil_tmp86 = & info->device_name;
    __cil_tmp87 = (char *)__cil_tmp86;
    __cil_tmp88 = (int )status;
    printk("%s rx frame status=%04X size=%d\n", __cil_tmp87, __cil_tmp88, framesize);
    }
  } else {

  }
  if (debug_level > 0) {
    __min1 = (int )framesize;
    __cil_tmp89 = info->rbuf_fill_level;
    __min2 = (int )__cil_tmp89;
    if (__min1 < __min2) {
      tmp___0 = __min1;
    } else {
      tmp___0 = __min2;
    }
    {
    __cil_tmp90 = (unsigned long )start;
    __cil_tmp91 = info->rbufs;
    __cil_tmp92 = __cil_tmp91 + __cil_tmp90;
    __cil_tmp93 = __cil_tmp92->buf;
    __cil_tmp94 = (char const *)__cil_tmp93;
    trace_block(info, __cil_tmp94, tmp___0, "rx");
    }
  } else {

  }
  if (framesize != 0U) {
    {
    __cil_tmp95 = info->params.crc_type;
    __cil_tmp96 = (short )__cil_tmp95;
    __cil_tmp97 = (int )__cil_tmp96;
    if (__cil_tmp97 >= 0) {
      framesize = framesize - crc_size;
      crc_size = 0U;
    } else {

    }
    }
    {
    __cil_tmp98 = info->max_frame_size;
    __cil_tmp99 = __cil_tmp98 + crc_size;
    if (__cil_tmp99 < framesize) {
      __cil_tmp100 = info->icount.rxlong;
      info->icount.rxlong = __cil_tmp100 + 1U;
    } else {
      copy_count = (int )framesize;
      i = (int )start;
      p = info->tmp_rbuf;
      info->tmp_rbuf_count = framesize;
      __cil_tmp101 = info->icount.rxok;
      info->icount.rxok = __cil_tmp101 + 1U;
      goto ldv_37795;
      ldv_37794:
      __min1___0 = copy_count;
      __cil_tmp102 = info->rbuf_fill_level;
      __min2___0 = (int )__cil_tmp102;
      if (__min1___0 < __min2___0) {
        tmp___1 = __min1___0;
      } else {
        tmp___1 = __min2___0;
      }
      {
      partial_count = tmp___1;
      __len = (size_t )partial_count;
      __cil_tmp103 = (void *)p;
      __cil_tmp104 = (unsigned long )i;
      __cil_tmp105 = info->rbufs;
      __cil_tmp106 = __cil_tmp105 + __cil_tmp104;
      __cil_tmp107 = __cil_tmp106->buf;
      __cil_tmp108 = (void const *)__cil_tmp107;
      __ret = __builtin_memcpy(__cil_tmp103, __cil_tmp108, __len);
      __cil_tmp109 = (unsigned long )partial_count;
      p = p + __cil_tmp109;
      copy_count = copy_count - partial_count;
      i = i + 1;
      }
      {
      __cil_tmp110 = info->rbuf_count;
      __cil_tmp111 = (unsigned int )i;
      if (__cil_tmp111 == __cil_tmp110) {
        i = 0;
      } else {

      }
      }
      ldv_37795: ;
      if (copy_count != 0) {
        goto ldv_37794;
      } else {
        goto ldv_37796;
      }
      ldv_37796: ;
      {
      __cil_tmp112 = info->params.crc_type;
      __cil_tmp113 = (short )__cil_tmp112;
      __cil_tmp114 = (int )__cil_tmp113;
      if (__cil_tmp114 < 0) {
        __cil_tmp115 = (int )status;
        __cil_tmp116 = __cil_tmp115 & 2;
        __cil_tmp117 = __cil_tmp116 != 0;
        *p = (unsigned char )__cil_tmp117;
        framesize = framesize + 1U;
      } else {

      }
      }
      {
      __cil_tmp118 = info->netcount;
      if (__cil_tmp118 != 0) {
        {
        __cil_tmp119 = info->tmp_rbuf;
        __cil_tmp120 = (char *)__cil_tmp119;
        __cil_tmp121 = (int )framesize;
        hdlcdev_rx(info, __cil_tmp120, __cil_tmp121);
        }
      } else {
        {
        __cil_tmp122 = info->tmp_rbuf;
        __cil_tmp123 = (__u8 const *)__cil_tmp122;
        __cil_tmp124 = & info->flag_buf;
        __cil_tmp125 = (char *)__cil_tmp124;
        __cil_tmp126 = (int )framesize;
        ldisc_receive_buf(tty, __cil_tmp123, __cil_tmp125, __cil_tmp126);
        }
      }
      }
    }
    }
  } else {

  }
  {
  free_rbufs(info, start, end);
  }
  return ((bool )1);
  cleanup: ;
  return ((bool )0);
}
}
static bool rx_get_buf(struct slgt_info *info )
{ unsigned int i ;
  unsigned int count ;
  unsigned long __cil_tmp4 ;
  struct slgt_desc *__cil_tmp5 ;
  struct slgt_desc *__cil_tmp6 ;
  __le16 __cil_tmp7 ;
  short __cil_tmp8 ;
  int __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  struct slgt_desc *__cil_tmp11 ;
  struct slgt_desc *__cil_tmp12 ;
  __le16 __cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  int __cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  int __cil_tmp17 ;
  unsigned long __cil_tmp18 ;
  int __cil_tmp19 ;
  unsigned long __cil_tmp20 ;
  struct slgt_desc *__cil_tmp21 ;
  struct slgt_desc *__cil_tmp22 ;
  __le16 __cil_tmp23 ;
  int __cil_tmp24 ;
  int __cil_tmp25 ;
  int __cil_tmp26 ;
  unsigned long __cil_tmp27 ;
  struct slgt_desc *__cil_tmp28 ;
  struct slgt_desc *__cil_tmp29 ;
  char *__cil_tmp30 ;
  char const *__cil_tmp31 ;
  int __cil_tmp32 ;
  struct tty_struct *__cil_tmp33 ;
  unsigned long __cil_tmp34 ;
  struct slgt_desc *__cil_tmp35 ;
  struct slgt_desc *__cil_tmp36 ;
  char *__cil_tmp37 ;
  __u8 const *__cil_tmp38 ;
  char (*__cil_tmp39)[4096U] ;
  char *__cil_tmp40 ;
  int __cil_tmp41 ;

  {
  i = info->rbuf_current;
  {
  __cil_tmp4 = (unsigned long )i;
  __cil_tmp5 = info->rbufs;
  __cil_tmp6 = __cil_tmp5 + __cil_tmp4;
  __cil_tmp7 = __cil_tmp6->status;
  __cil_tmp8 = (short )__cil_tmp7;
  __cil_tmp9 = (int )__cil_tmp8;
  if (__cil_tmp9 >= 0) {
    return ((bool )0);
  } else {

  }
  }
  __cil_tmp10 = (unsigned long )i;
  __cil_tmp11 = info->rbufs;
  __cil_tmp12 = __cil_tmp11 + __cil_tmp10;
  __cil_tmp13 = __cil_tmp12->count;
  count = (unsigned int )__cil_tmp13;
  {
  __cil_tmp14 = info->params.mode;
  __cil_tmp15 = (int )__cil_tmp14;
  if (__cil_tmp15 == 3) {
    goto case_3;
  } else {
    {
    __cil_tmp16 = info->params.mode;
    __cil_tmp17 = (int )__cil_tmp16;
    if (__cil_tmp17 == 4) {
      goto case_4;
    } else {
      {
      __cil_tmp18 = info->params.mode;
      __cil_tmp19 = (int )__cil_tmp18;
      if (__cil_tmp19 == 8) {
        goto case_8;
      } else
      if (0) {
        case_3: ;
        case_4: ;
        case_8: ;
        {
        __cil_tmp20 = (unsigned long )i;
        __cil_tmp21 = info->rbufs;
        __cil_tmp22 = __cil_tmp21 + __cil_tmp20;
        __cil_tmp23 = __cil_tmp22->status;
        __cil_tmp24 = (int )__cil_tmp23;
        __cil_tmp25 = __cil_tmp24 & 56;
        __cil_tmp26 = __cil_tmp25 >> 3;
        if (__cil_tmp26 != 0) {
          count = count - 1U;
        } else {

        }
        }
        goto ldv_37805;
      } else {

      }
      }
    }
    }
  }
  }
  ldv_37805: ;
  if (debug_level > 0) {
    {
    __cil_tmp27 = (unsigned long )i;
    __cil_tmp28 = info->rbufs;
    __cil_tmp29 = __cil_tmp28 + __cil_tmp27;
    __cil_tmp30 = __cil_tmp29->buf;
    __cil_tmp31 = (char const *)__cil_tmp30;
    __cil_tmp32 = (int )count;
    trace_block(info, __cil_tmp31, __cil_tmp32, "rx");
    }
  } else {

  }
  if (debug_level > 2) {
    {
    printk("rx_get_buf size=%d\n", count);
    }
  } else {

  }
  if (count != 0U) {
    {
    __cil_tmp33 = info->port.tty;
    __cil_tmp34 = (unsigned long )i;
    __cil_tmp35 = info->rbufs;
    __cil_tmp36 = __cil_tmp35 + __cil_tmp34;
    __cil_tmp37 = __cil_tmp36->buf;
    __cil_tmp38 = (__u8 const *)__cil_tmp37;
    __cil_tmp39 = & info->flag_buf;
    __cil_tmp40 = (char *)__cil_tmp39;
    __cil_tmp41 = (int )count;
    ldisc_receive_buf(__cil_tmp33, __cil_tmp38, __cil_tmp40, __cil_tmp41);
    }
  } else {

  }
  {
  free_rbufs(info, i, i);
  }
  return ((bool )1);
}
}
static void reset_tbufs(struct slgt_info *info )
{ unsigned int i ;
  unsigned long __cil_tmp3 ;
  struct slgt_desc *__cil_tmp4 ;
  struct slgt_desc *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  struct slgt_desc *__cil_tmp7 ;
  struct slgt_desc *__cil_tmp8 ;
  unsigned int __cil_tmp9 ;

  {
  info->tbuf_current = 0U;
  i = 0U;
  goto ldv_37811;
  ldv_37810:
  __cil_tmp3 = (unsigned long )i;
  __cil_tmp4 = info->tbufs;
  __cil_tmp5 = __cil_tmp4 + __cil_tmp3;
  __cil_tmp5->status = (__le16 )0U;
  __cil_tmp6 = (unsigned long )i;
  __cil_tmp7 = info->tbufs;
  __cil_tmp8 = __cil_tmp7 + __cil_tmp6;
  __cil_tmp8->count = (__le16 )0U;
  i = i + 1U;
  ldv_37811: ;
  {
  __cil_tmp9 = info->tbuf_count;
  if (__cil_tmp9 > i) {
    goto ldv_37810;
  } else {
    goto ldv_37812;
  }
  }
  ldv_37812: ;
  return;
}
}
static unsigned int free_tbuf_count(struct slgt_info *info )
{ unsigned int count ;
  unsigned int i ;
  __u32 tmp ;
  unsigned long __cil_tmp5 ;
  struct slgt_desc *__cil_tmp6 ;
  struct slgt_desc *__cil_tmp7 ;
  __le16 __cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  unsigned int __cil_tmp11 ;
  int __cil_tmp12 ;

  {
  count = 0U;
  i = info->tbuf_current;
  ldv_37819: ;
  {
  __cil_tmp5 = (unsigned long )i;
  __cil_tmp6 = info->tbufs;
  __cil_tmp7 = __cil_tmp6 + __cil_tmp5;
  __cil_tmp8 = __cil_tmp7->count;
  __cil_tmp9 = (unsigned int )__cil_tmp8;
  if (__cil_tmp9 != 0U) {
    goto ldv_37818;
  } else {

  }
  }
  count = count + 1U;
  i = i + 1U;
  {
  __cil_tmp10 = info->tbuf_count;
  if (i == __cil_tmp10) {
    i = 0U;
  } else {

  }
  }
  {
  __cil_tmp11 = info->tbuf_current;
  if (__cil_tmp11 != i) {
    goto ldv_37819;
  } else {
    goto ldv_37818;
  }
  }
  ldv_37818: ;
  if (count != 0U) {
    {
    tmp = rd_reg32(info, 148U);
    }
    {
    __cil_tmp12 = (int )tmp;
    if (__cil_tmp12 & 1) {
      count = count - 1U;
    } else {

    }
    }
  } else {

  }
  return (count);
}
}
static unsigned int tbuf_bytes(struct slgt_info *info )
{ unsigned int total_count ;
  unsigned int i ;
  unsigned int reg_value ;
  unsigned int count ;
  unsigned int active_buf_count ;
  unsigned long __cil_tmp7 ;
  struct slgt_desc *__cil_tmp8 ;
  struct slgt_desc *__cil_tmp9 ;
  __le16 __cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  struct slgt_desc *__cil_tmp12 ;
  struct slgt_desc *__cil_tmp13 ;
  unsigned short __cil_tmp14 ;
  unsigned int __cil_tmp15 ;
  unsigned int __cil_tmp16 ;
  int __cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  unsigned int __cil_tmp19 ;
  bool __cil_tmp20 ;

  {
  total_count = 0U;
  i = info->tbuf_current;
  active_buf_count = 0U;
  ldv_37828:
  __cil_tmp7 = (unsigned long )i;
  __cil_tmp8 = info->tbufs;
  __cil_tmp9 = __cil_tmp8 + __cil_tmp7;
  __cil_tmp10 = __cil_tmp9->count;
  count = (unsigned int )__cil_tmp10;
  if (count != 0U) {
    total_count = total_count + count;
  } else
  if (total_count == 0U) {
    __cil_tmp11 = (unsigned long )i;
    __cil_tmp12 = info->tbufs;
    __cil_tmp13 = __cil_tmp12 + __cil_tmp11;
    __cil_tmp14 = __cil_tmp13->buf_count;
    active_buf_count = (unsigned int )__cil_tmp14;
  } else {

  }
  i = i + 1U;
  {
  __cil_tmp15 = info->tbuf_count;
  if (i == __cil_tmp15) {
    i = 0U;
  } else {

  }
  }
  {
  __cil_tmp16 = info->tbuf_current;
  if (__cil_tmp16 != i) {
    goto ldv_37828;
  } else {
    goto ldv_37829;
  }
  }
  ldv_37829:
  {
  reg_value = rd_reg32(info, 148U);
  }
  {
  __cil_tmp17 = (int )reg_value;
  if (__cil_tmp17 & 1) {
    total_count = total_count + active_buf_count;
  } else {

  }
  }
  __cil_tmp18 = reg_value >> 8;
  __cil_tmp19 = __cil_tmp18 & 255U;
  total_count = __cil_tmp19 + total_count;
  {
  __cil_tmp20 = info->tx_active;
  if ((int )__cil_tmp20) {
    total_count = total_count + 1U;
  } else {

  }
  }
  return (total_count);
}
}
static bool tx_load(struct slgt_info *info , char const *buf , unsigned int size )
{ unsigned short count ;
  unsigned int i ;
  struct slgt_desc *d ;
  unsigned int tmp ;
  size_t __len ;
  void *__ret ;
  unsigned int __cil_tmp10 ;
  unsigned int __cil_tmp11 ;
  int __cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  struct slgt_desc *__cil_tmp14 ;
  char *__cil_tmp15 ;
  void *__cil_tmp16 ;
  void const *__cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  unsigned long __cil_tmp19 ;
  unsigned long __cil_tmp20 ;
  __le16 __cil_tmp21 ;
  unsigned int __cil_tmp22 ;
  unsigned int __cil_tmp23 ;
  unsigned long __cil_tmp24 ;
  __le16 __cil_tmp25 ;
  unsigned int __cil_tmp26 ;
  unsigned int __cil_tmp27 ;
  __le16 __cil_tmp28 ;
  unsigned int __cil_tmp29 ;
  unsigned int __cil_tmp30 ;
  unsigned int __cil_tmp31 ;
  unsigned int __cil_tmp32 ;
  unsigned int __cil_tmp33 ;
  unsigned long __cil_tmp34 ;
  struct slgt_desc *__cil_tmp35 ;
  bool __cil_tmp36 ;

  {
  {
  tmp = free_tbuf_count(info);
  }
  {
  __cil_tmp10 = size + 255U;
  __cil_tmp11 = __cil_tmp10 / 256U;
  if (__cil_tmp11 > tmp) {
    return ((bool )0);
  } else {

  }
  }
  if (debug_level > 0) {
    {
    __cil_tmp12 = (int )size;
    trace_block(info, buf, __cil_tmp12, "tx");
    }
  } else {

  }
  i = info->tbuf_current;
  info->tbuf_start = i;
  goto ldv_37842;
  ldv_37841:
  __cil_tmp13 = (unsigned long )i;
  __cil_tmp14 = info->tbufs;
  d = __cil_tmp14 + __cil_tmp13;
  if (size <= 256U) {
    count = (unsigned short )size;
  } else {
    count = (unsigned short)256;
  }
  {
  __len = (size_t )count;
  __cil_tmp15 = d->buf;
  __cil_tmp16 = (void *)__cil_tmp15;
  __cil_tmp17 = (void const *)buf;
  __ret = __builtin_memcpy(__cil_tmp16, __cil_tmp17, __len);
  __cil_tmp18 = (unsigned int )count;
  size = size - __cil_tmp18;
  __cil_tmp19 = (unsigned long )count;
  buf = buf + __cil_tmp19;
  }
  if (size == 0U) {
    {
    __cil_tmp20 = info->params.mode;
    if (__cil_tmp20 == 2UL) {
      __cil_tmp21 = d->status;
      __cil_tmp22 = (unsigned int )__cil_tmp21;
      __cil_tmp23 = __cil_tmp22 | 1U;
      d->status = (__le16 )__cil_tmp23;
    } else {
      goto _L;
    }
    }
  } else {
    _L:
    {
    __cil_tmp24 = info->params.mode;
    if (__cil_tmp24 == 6UL) {
      __cil_tmp25 = d->status;
      __cil_tmp26 = (unsigned int )__cil_tmp25;
      __cil_tmp27 = __cil_tmp26 | 1U;
      d->status = (__le16 )__cil_tmp27;
    } else {
      __cil_tmp28 = d->status;
      __cil_tmp29 = (unsigned int )__cil_tmp28;
      __cil_tmp30 = __cil_tmp29 & 65534U;
      d->status = (__le16 )__cil_tmp30;
    }
    }
  }
  {
  __cil_tmp31 = info->tbuf_start;
  if (__cil_tmp31 != i) {
    d->count = count;
  } else {

  }
  }
  d->buf_count = count;
  i = i + 1U;
  {
  __cil_tmp32 = info->tbuf_count;
  if (i == __cil_tmp32) {
    i = 0U;
  } else {

  }
  }
  ldv_37842: ;
  if (size != 0U) {
    goto ldv_37841;
  } else {
    goto ldv_37843;
  }
  ldv_37843:
  info->tbuf_current = i;
  __cil_tmp33 = info->tbuf_start;
  __cil_tmp34 = (unsigned long )__cil_tmp33;
  __cil_tmp35 = info->tbufs;
  d = __cil_tmp35 + __cil_tmp34;
  d->count = d->buf_count;
  {
  __cil_tmp36 = info->tx_active;
  if (! __cil_tmp36) {
    {
    tx_start(info);
    }
  } else {

  }
  }
  {
  update_tx_timer(info);
  }
  return ((bool )1);
}
}
static int register_test(struct slgt_info *info )
{ unsigned short patterns[6U] ;
  unsigned int count ;
  unsigned int i ;
  int rc ;
  __u16 tmp ;
  __u16 tmp___0 ;
  __u32 tmp___1 ;
  int __cil_tmp9 ;
  __u16 __cil_tmp10 ;
  int __cil_tmp11 ;
  __u16 __cil_tmp12 ;
  int __cil_tmp13 ;
  int __cil_tmp14 ;
  int __cil_tmp15 ;
  int __cil_tmp16 ;
  unsigned int __cil_tmp17 ;
  int __cil_tmp18 ;

  {
  patterns[0] = (unsigned short)0;
  patterns[1] = (unsigned short)65535;
  patterns[2] = (unsigned short)43690;
  patterns[3] = (unsigned short)21845;
  patterns[4] = (unsigned short)26985;
  patterns[5] = (unsigned short)38550;
  count = 6U;
  rc = 0;
  i = 0U;
  goto ldv_37855;
  ldv_37854:
  {
  __cil_tmp9 = (int )patterns[i];
  __cil_tmp10 = (__u16 )__cil_tmp9;
  wr_reg16(info, 132U, __cil_tmp10);
  __cil_tmp11 = (int )patterns[(i + 1U) % count];
  __cil_tmp12 = (__u16 )__cil_tmp11;
  wr_reg16(info, 138U, __cil_tmp12);
  tmp = rd_reg16(info, 132U);
  }
  {
  __cil_tmp13 = (int )patterns[i];
  __cil_tmp14 = (int )tmp;
  if (__cil_tmp14 != __cil_tmp13) {
    rc = -19;
    goto ldv_37853;
  } else {
    {
    tmp___0 = rd_reg16(info, 138U);
    }
    {
    __cil_tmp15 = (int )patterns[(i + 1U) % count];
    __cil_tmp16 = (int )tmp___0;
    if (__cil_tmp16 != __cil_tmp15) {
      rc = -19;
      goto ldv_37853;
    } else {

    }
    }
  }
  }
  i = i + 1U;
  ldv_37855: ;
  if (i < count) {
    goto ldv_37854;
  } else {
    goto ldv_37853;
  }
  ldv_37853:
  {
  tmp___1 = rd_reg32(info, 4U);
  __cil_tmp17 = tmp___1 & 32U;
  __cil_tmp18 = __cil_tmp17 != 0U;
  info->gpio_present = (unsigned int )__cil_tmp18;
  info->init_error = rc == 0;
  }
  return (rc);
}
}
static int irq_test(struct slgt_info *info )
{ unsigned long timeout ;
  unsigned long flags ;
  struct tty_struct *oldtty ;
  u32 speed ;
  raw_spinlock_t *tmp ;
  __u16 tmp___0 ;
  __u16 tmp___1 ;
  unsigned long tmp___2 ;
  raw_spinlock_t *tmp___3 ;
  int tmp___4 ;
  unsigned long __cil_tmp12 ;
  spinlock_t *__cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  unsigned int __cil_tmp15 ;
  int __cil_tmp16 ;
  __u16 __cil_tmp17 ;
  unsigned int __cil_tmp18 ;
  unsigned int __cil_tmp19 ;
  int __cil_tmp20 ;
  __u16 __cil_tmp21 ;
  __u16 __cil_tmp22 ;
  spinlock_t *__cil_tmp23 ;
  bool __cil_tmp24 ;
  spinlock_t *__cil_tmp25 ;
  spinlock_t *__cil_tmp26 ;
  bool __cil_tmp27 ;
  bool __cil_tmp28 ;

  {
  {
  oldtty = info->port.tty;
  __cil_tmp12 = info->params.data_rate;
  speed = (u32 )__cil_tmp12;
  info->params.data_rate = 921600UL;
  info->port.tty = (struct tty_struct *)0;
  __cil_tmp13 = & info->lock;
  tmp = spinlock_check(__cil_tmp13);
  flags = _raw_spin_lock_irqsave(tmp);
  async_mode(info);
  tmp___0 = rd_reg16(info, 140U);
  __cil_tmp14 = (unsigned int )tmp___0;
  __cil_tmp15 = __cil_tmp14 | 4096U;
  __cil_tmp16 = (int )__cil_tmp15;
  __cil_tmp17 = (__u16 )__cil_tmp16;
  wr_reg16(info, 140U, __cil_tmp17);
  tmp___1 = rd_reg16(info, 130U);
  __cil_tmp18 = (unsigned int )tmp___1;
  __cil_tmp19 = __cil_tmp18 | 2U;
  __cil_tmp20 = (int )__cil_tmp19;
  __cil_tmp21 = (__u16 )__cil_tmp20;
  wr_reg16(info, 130U, __cil_tmp21);
  __cil_tmp22 = (__u16 )0;
  wr_reg16(info, 128U, __cil_tmp22);
  info->init_error = 3;
  info->irq_occurred = (bool )0;
  __cil_tmp23 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp23, flags);
  timeout = 100UL;
  }
  goto ldv_37867;
  ldv_37866:
  {
  msleep_interruptible(10U);
  }
  ldv_37867:
  tmp___2 = timeout;
  timeout = timeout - 1UL;
  if (tmp___2 != 0UL) {
    {
    __cil_tmp24 = info->irq_occurred;
    if (! __cil_tmp24) {
      goto ldv_37866;
    } else {
      goto ldv_37868;
    }
    }
  } else {
    goto ldv_37868;
  }
  ldv_37868:
  {
  __cil_tmp25 = & info->lock;
  tmp___3 = spinlock_check(__cil_tmp25);
  flags = _raw_spin_lock_irqsave(tmp___3);
  reset_port(info);
  __cil_tmp26 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp26, flags);
  info->params.data_rate = (unsigned long )speed;
  info->port.tty = oldtty;
  }
  {
  __cil_tmp27 = info->irq_occurred;
  if ((int )__cil_tmp27) {
    info->init_error = 0;
  } else {
    info->init_error = 3;
  }
  }
  {
  __cil_tmp28 = info->irq_occurred;
  if ((int )__cil_tmp28) {
    tmp___4 = 0;
  } else {
    tmp___4 = -19;
  }
  }
  return (tmp___4);
}
}
static int loopback_test_rx(struct slgt_info *info )
{ unsigned char *src ;
  unsigned char *dest ;
  int count ;
  struct slgt_desc *__cil_tmp5 ;
  __le16 __cil_tmp6 ;
  short __cil_tmp7 ;
  int __cil_tmp8 ;
  struct slgt_desc *__cil_tmp9 ;
  __le16 __cil_tmp10 ;
  struct slgt_desc *__cil_tmp11 ;
  char *__cil_tmp12 ;
  unsigned char *__cil_tmp13 ;
  unsigned char __cil_tmp14 ;
  int __cil_tmp15 ;
  int __cil_tmp16 ;
  unsigned int __cil_tmp17 ;
  unsigned char *__cil_tmp18 ;
  char const *__cil_tmp19 ;
  unsigned int __cil_tmp20 ;
  int __cil_tmp21 ;

  {
  {
  __cil_tmp5 = info->rbufs;
  __cil_tmp6 = __cil_tmp5->status;
  __cil_tmp7 = (short )__cil_tmp6;
  __cil_tmp8 = (int )__cil_tmp7;
  if (__cil_tmp8 < 0) {
    __cil_tmp9 = info->rbufs;
    __cil_tmp10 = __cil_tmp9->count;
    count = (int )__cil_tmp10;
    __cil_tmp11 = info->rbufs;
    __cil_tmp12 = __cil_tmp11->buf;
    src = (unsigned char *)__cil_tmp12;
    dest = info->tmp_rbuf;
    goto ldv_37879;
    ldv_37878: ;
    {
    __cil_tmp13 = src + 1UL;
    __cil_tmp14 = *__cil_tmp13;
    __cil_tmp15 = (int )__cil_tmp14;
    __cil_tmp16 = __cil_tmp15 & 768;
    if (__cil_tmp16 == 0) {
      *dest = *src;
      dest = dest + 1;
      __cil_tmp17 = info->tmp_rbuf_count;
      info->tmp_rbuf_count = __cil_tmp17 + 1U;
    } else {

    }
    }
    count = count + -2;
    src = src + 2UL;
    ldv_37879: ;
    if (count != 0) {
      goto ldv_37878;
    } else {
      goto ldv_37880;
    }
    ldv_37880: ;
    if (debug_level > 0) {
      {
      __cil_tmp18 = info->tmp_rbuf;
      __cil_tmp19 = (char const *)__cil_tmp18;
      __cil_tmp20 = info->tmp_rbuf_count;
      __cil_tmp21 = (int )__cil_tmp20;
      trace_block(info, __cil_tmp19, __cil_tmp21, "rx");
      }
    } else {

    }
    return (1);
  } else {

  }
  }
  return (0);
}
}
static int loopback_test(struct slgt_info *info )
{ unsigned long timeout ;
  u16 count ;
  unsigned char buf[20U] ;
  int rc ;
  unsigned long flags ;
  struct tty_struct *oldtty ;
  MGSL_PARAMS params ;
  size_t __len ;
  void *__ret ;
  raw_spinlock_t *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  raw_spinlock_t *tmp___2 ;
  size_t __len___0 ;
  void *__ret___0 ;
  void *__cil_tmp17 ;
  MGSL_PARAMS *__cil_tmp18 ;
  void const *__cil_tmp19 ;
  void *__cil_tmp20 ;
  MGSL_PARAMS *__cil_tmp21 ;
  void const *__cil_tmp22 ;
  int __cil_tmp23 ;
  int __cil_tmp24 ;
  unsigned int __cil_tmp25 ;
  unsigned char *__cil_tmp26 ;
  void *__cil_tmp27 ;
  spinlock_t *__cil_tmp28 ;
  char const *__cil_tmp29 ;
  unsigned int __cil_tmp30 ;
  spinlock_t *__cil_tmp31 ;
  unsigned int __cil_tmp32 ;
  unsigned int __cil_tmp33 ;
  void const *__cil_tmp34 ;
  unsigned char *__cil_tmp35 ;
  void const *__cil_tmp36 ;
  size_t __cil_tmp37 ;
  spinlock_t *__cil_tmp38 ;
  spinlock_t *__cil_tmp39 ;
  MGSL_PARAMS *__cil_tmp40 ;
  void *__cil_tmp41 ;
  void const *__cil_tmp42 ;
  MGSL_PARAMS *__cil_tmp43 ;
  void *__cil_tmp44 ;
  void const *__cil_tmp45 ;

  {
  count = (u16 )20U;
  rc = -19;
  oldtty = info->port.tty;
  __len = 48UL;
  if (__len > 63UL) {
    {
    __cil_tmp17 = (void *)(& params);
    __cil_tmp18 = & info->params;
    __cil_tmp19 = (void const *)__cil_tmp18;
    __ret = __memcpy(__cil_tmp17, __cil_tmp19, __len);
    }
  } else {
    {
    __cil_tmp20 = (void *)(& params);
    __cil_tmp21 = & info->params;
    __cil_tmp22 = (void const *)__cil_tmp21;
    __ret = __builtin_memcpy(__cil_tmp20, __cil_tmp22, __len);
    }
  }
  info->params.mode = 1UL;
  info->params.data_rate = 921600UL;
  info->params.loopback = (unsigned char)1;
  info->port.tty = (struct tty_struct *)0;
  count = (u16 )0U;
  goto ldv_37895;
  ldv_37894:
  buf[(int )count] = (unsigned char )count;
  __cil_tmp23 = (int )count;
  __cil_tmp24 = __cil_tmp23 + 1;
  count = (u16 )__cil_tmp24;
  ldv_37895: ;
  {
  __cil_tmp25 = (unsigned int )count;
  if (__cil_tmp25 <= 19U) {
    goto ldv_37894;
  } else {
    goto ldv_37896;
  }
  }
  ldv_37896:
  {
  info->tmp_rbuf_count = 0U;
  __cil_tmp26 = info->tmp_rbuf;
  __cil_tmp27 = (void *)__cil_tmp26;
  memset(__cil_tmp27, 0, 20UL);
  __cil_tmp28 = & info->lock;
  tmp = spinlock_check(__cil_tmp28);
  flags = _raw_spin_lock_irqsave(tmp);
  async_mode(info);
  rx_start(info);
  __cil_tmp29 = (char const *)(& buf);
  __cil_tmp30 = (unsigned int )count;
  tx_load(info, __cil_tmp29, __cil_tmp30);
  __cil_tmp31 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp31, flags);
  timeout = 100UL;
  }
  goto ldv_37902;
  ldv_37901:
  {
  msleep_interruptible(10U);
  tmp___0 = loopback_test_rx(info);
  }
  if (tmp___0 != 0) {
    rc = 0;
    goto ldv_37900;
  } else {

  }
  timeout = timeout - 1UL;
  ldv_37902: ;
  if (timeout != 0UL) {
    goto ldv_37901;
  } else {
    goto ldv_37900;
  }
  ldv_37900: ;
  if (rc == 0) {
    {
    __cil_tmp32 = (unsigned int )count;
    __cil_tmp33 = info->tmp_rbuf_count;
    if (__cil_tmp33 != __cil_tmp32) {
      rc = -19;
    } else {
      {
      __cil_tmp34 = (void const *)(& buf);
      __cil_tmp35 = info->tmp_rbuf;
      __cil_tmp36 = (void const *)__cil_tmp35;
      __cil_tmp37 = (size_t )count;
      tmp___1 = memcmp(__cil_tmp34, __cil_tmp36, __cil_tmp37);
      }
      if (tmp___1 != 0) {
        rc = -19;
      } else {

      }
    }
    }
  } else {

  }
  {
  __cil_tmp38 = & info->lock;
  tmp___2 = spinlock_check(__cil_tmp38);
  flags = _raw_spin_lock_irqsave(tmp___2);
  reset_adapter(info);
  __cil_tmp39 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp39, flags);
  __len___0 = 48UL;
  }
  if (__len___0 > 63UL) {
    {
    __cil_tmp40 = & info->params;
    __cil_tmp41 = (void *)__cil_tmp40;
    __cil_tmp42 = (void const *)(& params);
    __ret___0 = __memcpy(__cil_tmp41, __cil_tmp42, __len___0);
    }
  } else {
    {
    __cil_tmp43 = & info->params;
    __cil_tmp44 = (void *)__cil_tmp43;
    __cil_tmp45 = (void const *)(& params);
    __ret___0 = __builtin_memcpy(__cil_tmp44, __cil_tmp45, __len___0);
    }
  }
  info->port.tty = oldtty;
  if (rc != 0) {
    info->init_error = 5;
  } else {
    info->init_error = 0;
  }
  return (rc);
}
}
static int adapter_test(struct slgt_info *info )
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  char (*__cil_tmp5)[25U] ;
  char *__cil_tmp6 ;
  char (*__cil_tmp7)[25U] ;
  char *__cil_tmp8 ;
  u32 __cil_tmp9 ;
  char (*__cil_tmp10)[25U] ;
  char *__cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  char (*__cil_tmp13)[25U] ;
  char *__cil_tmp14 ;

  {
  if (debug_level > 2) {
    {
    __cil_tmp5 = & info->device_name;
    __cil_tmp6 = (char *)__cil_tmp5;
    printk("testing %s\n", __cil_tmp6);
    }
  } else {

  }
  {
  tmp___1 = register_test(info);
  }
  if (tmp___1 < 0) {
    {
    __cil_tmp7 = & info->device_name;
    __cil_tmp8 = (char *)__cil_tmp7;
    __cil_tmp9 = info->phys_reg_addr;
    printk("register test failure %s addr=%08X\n", __cil_tmp8, __cil_tmp9);
    }
  } else {
    {
    tmp___0 = irq_test(info);
    }
    if (tmp___0 < 0) {
      {
      __cil_tmp10 = & info->device_name;
      __cil_tmp11 = (char *)__cil_tmp10;
      __cil_tmp12 = info->irq_level;
      printk("IRQ test failure %s IRQ=%d\n", __cil_tmp11, __cil_tmp12);
      }
    } else {
      {
      tmp = loopback_test(info);
      }
      if (tmp < 0) {
        {
        __cil_tmp13 = & info->device_name;
        __cil_tmp14 = (char *)__cil_tmp13;
        printk("loopback test failure %s\n", __cil_tmp14);
        }
      } else {

      }
    }
  }
  return (info->init_error);
}
}
static void tx_timeout(unsigned long context )
{ struct slgt_info *info ;
  unsigned long flags ;
  raw_spinlock_t *tmp ;
  char (*__cil_tmp5)[25U] ;
  char *__cil_tmp6 ;
  bool __cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  __u32 __cil_tmp9 ;
  spinlock_t *__cil_tmp10 ;
  spinlock_t *__cil_tmp11 ;
  int __cil_tmp12 ;

  {
  info = (struct slgt_info *)context;
  if (debug_level > 2) {
    {
    __cil_tmp5 = & info->device_name;
    __cil_tmp6 = (char *)__cil_tmp5;
    printk("%s tx_timeout\n", __cil_tmp6);
    }
  } else {

  }
  {
  __cil_tmp7 = info->tx_active;
  if ((int )__cil_tmp7) {
    {
    __cil_tmp8 = info->params.mode;
    if (__cil_tmp8 == 2UL) {
      __cil_tmp9 = info->icount.txtimeout;
      info->icount.txtimeout = __cil_tmp9 + 1U;
    } else {

    }
    }
  } else {

  }
  }
  {
  __cil_tmp10 = & info->lock;
  tmp = spinlock_check(__cil_tmp10);
  flags = _raw_spin_lock_irqsave(tmp);
  tx_stop(info);
  __cil_tmp11 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp11, flags);
  }
  {
  __cil_tmp12 = info->netcount;
  if (__cil_tmp12 != 0) {
    {
    hdlcdev_tx_done(info);
    }
  } else {
    {
    bh_transmit(info);
    }
  }
  }
  return;
}
}
static void rx_timeout(unsigned long context )
{ struct slgt_info *info ;
  unsigned long flags ;
  raw_spinlock_t *tmp ;
  char (*__cil_tmp5)[25U] ;
  char *__cil_tmp6 ;
  spinlock_t *__cil_tmp7 ;
  u32 __cil_tmp8 ;
  spinlock_t *__cil_tmp9 ;
  struct work_struct *__cil_tmp10 ;

  {
  info = (struct slgt_info *)context;
  if (debug_level > 2) {
    {
    __cil_tmp5 = & info->device_name;
    __cil_tmp6 = (char *)__cil_tmp5;
    printk("%s rx_timeout\n", __cil_tmp6);
    }
  } else {

  }
  {
  __cil_tmp7 = & info->lock;
  tmp = spinlock_check(__cil_tmp7);
  flags = _raw_spin_lock_irqsave(tmp);
  __cil_tmp8 = info->pending_bh;
  info->pending_bh = __cil_tmp8 | 1U;
  __cil_tmp9 = & info->lock;
  spin_unlock_irqrestore(__cil_tmp9, flags);
  __cil_tmp10 = & info->task;
  bh_handler(__cil_tmp10);
  }
  return;
}
}
void ldv_check_final_state(void) ;
extern void ldv_check_return_value(int ) ;
extern void ldv_initialize(void) ;
extern int nondet_int(void) ;
int LDV_IN_INTERRUPT ;
void main1(void)
{ struct pci_dev *var_group1 ;
  struct pci_device_id const *var_init_one_102_p1 ;
  int res_init_one_102 ;
  struct inode *var_group2 ;
  struct file *var_group3 ;
  int res_synclink_gt_proc_open_26 ;
  struct net_device *var_group4 ;
  int res_hdlcdev_open_33 ;
  int res_hdlcdev_close_34 ;
  struct ifreq *var_group5 ;
  int var_hdlcdev_ioctl_35_p2 ;
  struct tty_port *var_group6 ;
  int var_dtr_rts_87_p1 ;
  struct tty_struct *var_group7 ;
  int res_open_5 ;
  unsigned char const *var_write_10_p1 ;
  int var_write_10_p2 ;
  unsigned char var_put_char_11_p1 ;
  unsigned int var_ioctl_19_p1 ;
  unsigned long var_ioctl_19_p2 ;
  unsigned int var_slgt_compat_ioctl_23_p1 ;
  unsigned long var_slgt_compat_ioctl_23_p2 ;
  char var_send_xchar_12_p1 ;
  int var_set_break_30_p1 ;
  int var_wait_until_sent_13_p1 ;
  struct ktermios *var_group8 ;
  unsigned int var_tiocmset_85_p1 ;
  unsigned int var_tiocmset_85_p2 ;
  struct serial_icounter_struct *var_group9 ;
  int var_slgt_interrupt_56_p0 ;
  void *var_slgt_interrupt_56_p1 ;
  int ldv_s_pci_driver_pci_driver ;
  int ldv_s_synclink_gt_proc_fops_file_operations ;
  int ldv_s_hdlcdev_ops_net_device_ops ;
  int ldv_s_ops_tty_operations ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int __cil_tmp39 ;
  unsigned char __cil_tmp40 ;
  int __cil_tmp41 ;
  char __cil_tmp42 ;

  {
  {
  ldv_s_pci_driver_pci_driver = 0;
  ldv_s_synclink_gt_proc_fops_file_operations = 0;
  ldv_s_hdlcdev_ops_net_device_ops = 0;
  ldv_s_ops_tty_operations = 0;
  LDV_IN_INTERRUPT = 1;
  ldv_initialize();
  tmp = slgt_init();
  }
  if (tmp != 0) {
    goto ldv_final;
  } else {

  }
  goto ldv_38011;
  ldv_38010:
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
  } else
  if (tmp___0 == 12) {
    goto case_12;
  } else
  if (tmp___0 == 13) {
    goto case_13;
  } else
  if (tmp___0 == 14) {
    goto case_14;
  } else
  if (tmp___0 == 15) {
    goto case_15;
  } else
  if (tmp___0 == 16) {
    goto case_16;
  } else
  if (tmp___0 == 17) {
    goto case_17;
  } else
  if (tmp___0 == 18) {
    goto case_18;
  } else
  if (tmp___0 == 19) {
    goto case_19;
  } else
  if (tmp___0 == 20) {
    goto case_20;
  } else
  if (tmp___0 == 21) {
    goto case_21;
  } else
  if (tmp___0 == 22) {
    goto case_22;
  } else
  if (tmp___0 == 23) {
    goto case_23;
  } else
  if (tmp___0 == 24) {
    goto case_24;
  } else
  if (tmp___0 == 25) {
    goto case_25;
  } else
  if (tmp___0 == 26) {
    goto case_26;
  } else
  if (tmp___0 == 27) {
    goto case_27;
  } else
  if (tmp___0 == 28) {
    goto case_28;
  } else
  if (tmp___0 == 29) {
    goto case_29;
  } else
  if (tmp___0 == 30) {
    goto case_30;
  } else {
    goto switch_default;
    if (0) {
      case_0: ;
      if (ldv_s_pci_driver_pci_driver == 0) {
        {
        res_init_one_102 = init_one(var_group1, var_init_one_102_p1);
        ldv_check_return_value(res_init_one_102);
        }
        if (res_init_one_102 != 0) {
          goto ldv_module_exit;
        } else {

        }
        ldv_s_pci_driver_pci_driver = 0;
      } else {

      }
      goto ldv_37978;
      case_1: ;
      if (ldv_s_synclink_gt_proc_fops_file_operations == 0) {
        {
        res_synclink_gt_proc_open_26 = synclink_gt_proc_open(var_group2, var_group3);
        ldv_check_return_value(res_synclink_gt_proc_open_26);
        }
        if (res_synclink_gt_proc_open_26 != 0) {
          goto ldv_module_exit;
        } else {

        }
        ldv_s_synclink_gt_proc_fops_file_operations = 0;
      } else {

      }
      goto ldv_37978;
      case_2: ;
      if (ldv_s_hdlcdev_ops_net_device_ops == 0) {
        {
        res_hdlcdev_open_33 = hdlcdev_open(var_group4);
        ldv_check_return_value(res_hdlcdev_open_33);
        }
        if (res_hdlcdev_open_33 < 0) {
          goto ldv_module_exit;
        } else {

        }
        ldv_s_hdlcdev_ops_net_device_ops = ldv_s_hdlcdev_ops_net_device_ops + 1;
      } else {

      }
      goto ldv_37978;
      case_3: ;
      if (ldv_s_hdlcdev_ops_net_device_ops == 1) {
        {
        res_hdlcdev_close_34 = hdlcdev_close(var_group4);
        ldv_check_return_value(res_hdlcdev_close_34);
        }
        if (res_hdlcdev_close_34 != 0) {
          goto ldv_module_exit;
        } else {

        }
        ldv_s_hdlcdev_ops_net_device_ops = 0;
      } else {

      }
      goto ldv_37978;
      case_4:
      {
      hdlcdev_ioctl(var_group4, var_group5, var_hdlcdev_ioctl_35_p2);
      }
      goto ldv_37978;
      case_5:
      {
      hdlcdev_tx_timeout(var_group4);
      }
      goto ldv_37978;
      case_6:
      {
      carrier_raised(var_group6);
      }
      goto ldv_37978;
      case_7:
      {
      dtr_rts(var_group6, var_dtr_rts_87_p1);
      }
      goto ldv_37978;
      case_8: ;
      if (ldv_s_ops_tty_operations == 0) {
        {
        res_open_5 = open(var_group7, var_group3);
        ldv_check_return_value(res_open_5);
        }
        if (res_open_5 != 0) {
          goto ldv_module_exit;
        } else {

        }
        ldv_s_ops_tty_operations = ldv_s_ops_tty_operations + 1;
      } else {

      }
      goto ldv_37978;
      case_9: ;
      if (ldv_s_ops_tty_operations == 1) {
        {
        close(var_group7, var_group3);
        ldv_s_ops_tty_operations = 0;
        }
      } else {

      }
      goto ldv_37978;
      case_10:
      {
      write(var_group7, var_write_10_p1, var_write_10_p2);
      }
      goto ldv_37978;
      case_11:
      {
      __cil_tmp39 = (int )var_put_char_11_p1;
      __cil_tmp40 = (unsigned char )__cil_tmp39;
      put_char(var_group7, __cil_tmp40);
      }
      goto ldv_37978;
      case_12:
      {
      flush_chars(var_group7);
      }
      goto ldv_37978;
      case_13:
      {
      write_room(var_group7);
      }
      goto ldv_37978;
      case_14:
      {
      chars_in_buffer(var_group7);
      }
      goto ldv_37978;
      case_15:
      {
      flush_buffer(var_group7);
      }
      goto ldv_37978;
      case_16:
      {
      ioctl(var_group7, var_ioctl_19_p1, var_ioctl_19_p2);
      }
      goto ldv_37978;
      case_17:
      {
      slgt_compat_ioctl(var_group7, var_slgt_compat_ioctl_23_p1, var_slgt_compat_ioctl_23_p2);
      }
      goto ldv_37978;
      case_18:
      {
      throttle(var_group7);
      }
      goto ldv_37978;
      case_19:
      {
      unthrottle(var_group7);
      }
      goto ldv_37978;
      case_20:
      {
      __cil_tmp41 = (int )var_send_xchar_12_p1;
      __cil_tmp42 = (char )__cil_tmp41;
      send_xchar(var_group7, __cil_tmp42);
      }
      goto ldv_37978;
      case_21:
      {
      set_break(var_group7, var_set_break_30_p1);
      }
      goto ldv_37978;
      case_22:
      {
      wait_until_sent(var_group7, var_wait_until_sent_13_p1);
      }
      goto ldv_37978;
      case_23:
      {
      set_termios(var_group7, var_group8);
      }
      goto ldv_37978;
      case_24:
      {
      tx_hold(var_group7);
      }
      goto ldv_37978;
      case_25:
      {
      tx_release(var_group7);
      }
      goto ldv_37978;
      case_26:
      {
      hangup(var_group7);
      }
      goto ldv_37978;
      case_27:
      {
      tiocmget(var_group7);
      }
      goto ldv_37978;
      case_28:
      {
      tiocmset(var_group7, var_tiocmset_85_p1, var_tiocmset_85_p2);
      }
      goto ldv_37978;
      case_29:
      {
      get_icount(var_group7, var_group9);
      }
      goto ldv_37978;
      case_30:
      {
      LDV_IN_INTERRUPT = 2;
      slgt_interrupt(var_slgt_interrupt_56_p0, var_slgt_interrupt_56_p1);
      LDV_IN_INTERRUPT = 1;
      }
      goto ldv_37978;
      switch_default: ;
      goto ldv_37978;
    } else {

    }
  }
  ldv_37978: ;
  ldv_38011:
  {
  tmp___1 = nondet_int();
  }
  if (tmp___1 != 0) {
    goto ldv_38010;
  } else
  if (ldv_s_pci_driver_pci_driver != 0) {
    goto ldv_38010;
  } else
  if (ldv_s_synclink_gt_proc_fops_file_operations != 0) {
    goto ldv_38010;
  } else
  if (ldv_s_hdlcdev_ops_net_device_ops != 0) {
    goto ldv_38010;
  } else
  if (ldv_s_ops_tty_operations != 0) {
    goto ldv_38010;
  } else {
    goto ldv_38012;
  }
  ldv_38012: ;
  ldv_module_exit:
  {
  slgt_exit();
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
