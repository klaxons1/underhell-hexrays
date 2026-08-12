void __thiscall sub_102146D0(unsigned int this, unsigned int a2, int a3, int a4, float a5, float a6, float a7)
{
  int *v8; // ecx
  int (__thiscall *v9)(unsigned int); // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  void (__thiscall *v13)(unsigned int); // edx
  int v14; // ebx
  int *v15; // ecx
  int v16; // eax
  int (__thiscall *v17)(unsigned int); // edx
  int v18; // eax
  int v19; // edx
  void (__thiscall *v20)(unsigned int); // eax
  int v21; // ebx
  int *v22; // ecx
  void (__thiscall *v23)(unsigned int, _DWORD, float *, _DWORD); // edx
  int (__thiscall *v24)(unsigned int); // edx
  int v25; // eax
  int v26; // edx
  void (__thiscall *v27)(unsigned int); // eax
  float v28[3]; // [esp+20h] [ebp-Ch] BYREF

  if ( *(_BYTE *)(this + 1640) )
  {
    *(float *)(this + 108) = *(float *)(this + 1628);
    if ( *(_DWORD *)(this + 248) != *(_DWORD *)(this + 1636) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v8 = *(int **)(this + 24);
        if ( v8 )
          sub_100194B0(v8, 248);
      }
      *(_DWORD *)(this + 248) = *(_DWORD *)(this + 1636);
    }
    *(_BYTE *)(this + 1640) = 0;
  }
  if ( (_BYTE)a4 )
  {
    v9 = *(int (__thiscall **)(unsigned int))(*(_DWORD *)this + 880);
    *(float *)(this + 1628) = *(float *)(this + 108);
    v10 = v9(this);
    v11 = *(_DWORD *)(this + 248);
    *(_DWORD *)(this + 1632) = v10;
    v12 = *(_DWORD *)this;
    *(_DWORD *)(this + 1636) = v11;
    *(_BYTE *)(this + 1640) = 1;
    v13 = *(void (__thiscall **)(unsigned int))(v12 + 872);
    *(float *)(this + 108) = *(float *)(dword_106B92DC + 44);
    v13(this);
    v14 = *(_DWORD *)(this + 248) | 0x1000;
    if ( *(_DWORD *)(this + 248) != v14 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v15 = *(int **)(this + 24);
        if ( v15 )
          sub_100194B0(v15, 248);
      }
      *(_DWORD *)(this + 248) = v14;
    }
LABEL_16:
    *(_BYTE *)(this + 1624) = 1;
    sub_1010DD80((_DWORD *)(this + 1600), __SPAIR64__(this, a2), 0.0);
    sub_10214520((_DWORD *)this, a3);
LABEL_33:
    sub_1023C380((int)"Metal.Door_Breach", 0.0, 0);
    return;
  }
  if ( __RTDynamicCast(
         a3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CHL2_Player `RTTI Type Descriptor',
         0) )
  {
    sub_102DEF10(20.0);
  }
  v16 = *(_DWORD *)(this + 1672);
  if ( v16 != 2 && v16 != 1 )
  {
    v17 = *(int (__thiscall **)(unsigned int))(*(_DWORD *)this + 880);
    *(float *)(this + 1628) = *(float *)(this + 108);
    v18 = v17(this);
    v19 = *(_DWORD *)this;
    *(_DWORD *)(this + 1632) = v18;
    *(_DWORD *)(this + 1636) = *(_DWORD *)(this + 248);
    v20 = *(void (__thiscall **)(unsigned int))(v19 + 872);
    *(_BYTE *)(this + 1640) = 1;
    *(float *)(this + 108) = *(float *)(dword_106B92DC + 44);
    v20(this);
    v21 = *(_DWORD *)(this + 248) | 0x1000;
    if ( *(_DWORD *)(this + 248) != v21 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v22 = *(int **)(this + 24);
        if ( v22 )
          sub_100194B0(v22, 248);
      }
      *(_DWORD *)(this + 248) = v21;
    }
    goto LABEL_16;
  }
  v23 = *(void (__thiscall **)(unsigned int, _DWORD, float *, _DWORD))(*(_DWORD *)this + 528);
  *(_BYTE *)(this + 1624) = 1;
  v23(this, 0, v28, 0);
  *(float *)&a4 = v28[1] * a6 + a5 * v28[0] + v28[2] * a7;
  if ( !sub_10206EC0((float *)this) && *(float *)&a4 > 0.0 || sub_10206EC0((float *)this) && *(float *)&a4 < 0.0 )
  {
    v24 = *(int (__thiscall **)(unsigned int))(*(_DWORD *)this + 880);
    *(float *)(this + 1628) = *(float *)(this + 108);
    v25 = v24(this);
    v26 = *(_DWORD *)this;
    *(_DWORD *)(this + 1632) = v25;
    *(_DWORD *)(this + 1636) = *(_DWORD *)(this + 248);
    v27 = *(void (__thiscall **)(unsigned int))(v26 + 872);
    *(_BYTE *)(this + 1640) = 1;
    *(float *)(this + 108) = *(float *)(dword_106B92DC + 44);
    v27(this);
    a4 = 4096;
    sub_100332A0((int *)(this + 248), &a4);
    sub_1010DD80((_DWORD *)(this + 1576), __SPAIR64__(this, a2), 0.0);
    sub_10210260((_DWORD *)this);
    goto LABEL_33;
  }
}
