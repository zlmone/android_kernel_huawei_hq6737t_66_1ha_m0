#ifndef _LENS_LIST_H

#define _LENS_LIST_H

#ifdef CONFIG_MTK_LENS_BU6424AF_SUPPORT
extern void BU6424AF_SetI2Cclient(struct i2c_client *pstAF_I2Cclient, spinlock_t *pAF_SpinLock, int *pAF_Opened);
extern long BU6424AF_Ioctl(struct file *a_pstFile, unsigned int a_u4Command, unsigned long a_u4Param);
extern int BU6424AF_Release(struct inode *a_pstInode, struct file *a_pstFile);
#endif

#ifdef CONFIG_MTK_LENS_BU6429AF_SUPPORT
extern void BU6429AF_SetI2Cclient(struct i2c_client *pstAF_I2Cclient, spinlock_t *pAF_SpinLock, int *pAF_Opened);
extern long BU6429AF_Ioctl(struct file *a_pstFile, unsigned int a_u4Command, unsigned long a_u4Param);
extern int BU6429AF_Release(struct inode *a_pstInode, struct file *a_pstFile);
#endif

#ifdef CONFIG_MTK_LENS_BU63165AF_SUPPORT
extern void BU63165AF_SetI2Cclient(struct i2c_client *pstAF_I2Cclient, spinlock_t *pAF_SpinLock, int *pAF_Opened);
extern long BU63165AF_Ioctl(struct file *a_pstFile, unsigned int a_u4Command, unsigned long a_u4Param);
extern int BU63165AF_Release(struct inode *a_pstInode, struct file *a_pstFile);
#endif

#ifdef CONFIG_MTK_LENS_DW9714AF_SUPPORT
extern void DW9714AF_SetI2Cclient(struct i2c_client *pstAF_I2Cclient, spinlock_t *pAF_SpinLock, int *pAF_Opened);
extern long DW9714AF_Ioctl(struct file *a_pstFile, unsigned int a_u4Command, unsigned long a_u4Param);
extern int DW9714AF_Release(struct inode *a_pstInode, struct file *a_pstFile);
#endif

#ifdef CONFIG_MTK_LENS_DW9714AAF_SUPPORT
extern void DW9714AAF_SetI2Cclient(struct i2c_client *pstAF_I2Cclient, spinlock_t *pAF_SpinLock, int *pAF_Opened);
extern long DW9714AAF_Ioctl(struct file *a_pstFile, unsigned int a_u4Command, unsigned long a_u4Param);
extern int DW9714AAF_Release(struct inode *a_pstInode, struct file *a_pstFile);
#endif
#ifdef CONFIG_MTK_LENS_DW9714AL13AF_SUPPORT
extern void DW9714AL13AF_SetI2Cclient(struct i2c_client *pstAF_I2Cclient, spinlock_t *pAF_SpinLock, int *pAF_Opened);
extern long DW9714AL13AF_Ioctl(struct file *a_pstFile, unsigned int a_u4Command, unsigned long a_u4Param);
extern int DW9714AL13AF_Release(struct inode *a_pstInode, struct file *a_pstFile);
#endif
#ifdef CONFIG_MTK_LENS_DW9714AR1335AF_SUPPORT
extern void DW9714AR1335AF_SetI2Cclient(struct i2c_client *pstAF_I2Cclient, spinlock_t *pAF_SpinLock, int *pAF_Opened);
extern long DW9714AR1335AF_Ioctl(struct file *a_pstFile, unsigned int a_u4Command, unsigned long a_u4Param);
extern int DW9714AR1335AF_Release(struct inode *a_pstInode, struct file *a_pstFile);
#endif
#ifdef CONFIG_MTK_LENS_DW9714AR1335L13AF_SUPPORT
extern void DW9714AR1335L13AF_SetI2Cclient(struct i2c_client *pstAF_I2Cclient, spinlock_t *pAF_SpinLock, int *pAF_Opened);
extern long DW9714AR1335L13AF_Ioctl(struct file *a_pstFile, unsigned int a_u4Command, unsigned long a_u4Param);
extern int DW9714AR1335L13AF_Release(struct inode *a_pstInode, struct file *a_pstFile);
#endif
#ifdef CONFIG_MTK_LENS_DW9814AF_SUPPORT
extern void DW9814AF_SetI2Cclient(struct i2c_client *pstAF_I2Cclient, spinlock_t *pAF_SpinLock, int *pAF_Opened);
extern long DW9814AF_Ioctl(struct file *a_pstFile, unsigned int a_u4Command, unsigned long a_u4Param);
extern int DW9814AF_Release(struct inode *a_pstInode, struct file *a_pstFile);
#endif

#ifdef CONFIG_MTK_LENS_DW9718AF_SUPPORT
extern void DW9718AF_SetI2Cclient(struct i2c_client *pstAF_I2Cclient, spinlock_t *pAF_SpinLock, int *pAF_Opened);
extern long DW9718AF_Ioctl(struct file *a_pstFile, unsigned int a_u4Command, unsigned long a_u4Param);
extern int DW9718AF_Release(struct inode *a_pstInode, struct file *a_pstFile);
#endif

#ifdef CONFIG_MTK_LENS_FM50AF_SUPPORT
extern void FM50AF_SetI2Cclient(struct i2c_client *pstAF_I2Cclient, spinlock_t *pAF_SpinLock, int *pAF_Opened);
extern long FM50AF_Ioctl(struct file *a_pstFile, unsigned int a_u4Command, unsigned long a_u4Param);
extern int FM50AF_Release(struct inode *a_pstInode, struct file *a_pstFile);
#endif

#ifdef CONFIG_MTK_LENS_LC898122AF_SUPPORT
extern void LC898122AF_SetI2Cclient(struct i2c_client *pstAF_I2Cclient, spinlock_t *pAF_SpinLock, int *pAF_Opened);
extern long LC898122AF_Ioctl(struct file *a_pstFile, unsigned int a_u4Command, unsigned long a_u4Param);
extern int LC898122AF_Release(struct inode *a_pstInode, struct file *a_pstFile);
#endif

#ifdef CONFIG_MTK_LENS_LC898212AF_SUPPORT
extern void LC898212AF_SetI2Cclient(struct i2c_client *pstAF_I2Cclient, spinlock_t *pAF_SpinLock, int *pAF_Opened);
extern long LC898212AF_Ioctl(struct file *a_pstFile, unsigned int a_u4Command, unsigned long a_u4Param);
extern int LC898212AF_Release(struct inode *a_pstInode, struct file *a_pstFile);
#endif

#ifdef CONFIG_MTK_LENS_LC898212XDAF_SUPPORT
extern void LC898212XDAF_SetI2Cclient(struct i2c_client *pstAF_I2Cclient, spinlock_t *pAF_SpinLock, int *pAF_Opened);
extern long LC898212XDAF_Ioctl(struct file *a_pstFile, unsigned int a_u4Command, unsigned long a_u4Param);
extern int LC898212XDAF_Release(struct inode *a_pstInode, struct file *a_pstFile);
#endif

#ifdef CONFIG_MTK_LENS_AD5820AF_SUPPORT
extern void AD5820AF_SetI2Cclient(struct i2c_client *pstAF_I2Cclient, spinlock_t *pAF_SpinLock, int *pAF_Opened);
extern long AD5820AF_Ioctl(struct file *a_pstFile, unsigned int a_u4Command, unsigned long a_u4Param);
extern int AD5820AF_Release(struct inode *a_pstInode, struct file *a_pstFile);
#endif

#ifdef CONFIG_MTK_LENS_GT9761AF_SUPPORT
extern void GT9761AF_SetI2Cclient(struct i2c_client *pstAF_I2Cclient, spinlock_t *pAF_SpinLock, int *pAF_Opened);
extern long GT9761AF_Ioctl(struct file *a_pstFile, unsigned int a_u4Command, unsigned long a_u4Param);
extern int GT9761AF_Release(struct inode *a_pstInode, struct file *a_pstFile);
#endif

#ifdef CONFIG_MTK_LENS_GT9762AF_SUPPORT
extern void GT9762AF_SetI2Cclient(struct i2c_client *pstAF_I2Cclient, spinlock_t *pAF_SpinLock, int *pAF_Opened);
extern long GT9762AF_Ioctl(struct file *a_pstFile, unsigned int a_u4Command, unsigned long a_u4Param);
extern int GT9762AF_Release(struct inode *a_pstInode, struct file *a_pstFile);
#endif
#ifdef CONFIG_MTK_LENS_GT9762L13AF_SUPPORT
extern void GT9762L13AF_SetI2Cclient(struct i2c_client *pstAF_I2Cclient, spinlock_t *pAF_SpinLock, int *pAF_Opened);
extern long GT9762L13AF_Ioctl(struct file *a_pstFile, unsigned int a_u4Command, unsigned long a_u4Param);
extern int GT9762L13AF_Release(struct inode *a_pstInode, struct file *a_pstFile);
#endif
#ifdef CONFIG_MTK_LENS_GT9762SAF_SUPPORT
extern void GT9762SAF_SetI2Cclient(struct i2c_client *pstAF_I2Cclient, spinlock_t *pAF_SpinLock, int *pAF_Opened);
extern long GT9762SAF_Ioctl(struct file *a_pstFile, unsigned int a_u4Command, unsigned long a_u4Param);
extern int GT9762SAF_Release(struct inode *a_pstInode, struct file *a_pstFile);
#endif

#ifdef CONFIG_MTK_LENS_WV571SAF_SUPPORT
extern void WV571SAF_SetI2Cclient(struct i2c_client *pstAF_I2Cclient, spinlock_t *pAF_SpinLock, int *pAF_Opened);
extern long WV571SAF_Ioctl(struct file *a_pstFile, unsigned int a_u4Command, unsigned long a_u4Param);
extern int WV571SAF_Release(struct inode *a_pstInode, struct file *a_pstFile);
#endif

#ifdef CONFIG_MTK_LENS_WV517SAF_SUPPORT
extern void WV517SAF_SetI2Cclient(struct i2c_client *pstAF_I2Cclient, spinlock_t *pAF_SpinLock, int *pAF_Opened);
extern long WV517SAF_Ioctl(struct file *a_pstFile, unsigned int a_u4Command, unsigned long a_u4Param);
extern int WV517SAF_Release(struct inode *a_pstInode, struct file *a_pstFile);
#endif

#endif
