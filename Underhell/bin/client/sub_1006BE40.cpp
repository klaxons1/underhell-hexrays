void __thiscall sub_1006BE40(int *this, int a2)
{
  unsigned int v3; // eax
  _DWORD *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // edi
  float *v8; // ebx
  float *v9; // eax
  double v10; // st7
  void (__thiscall *v11)(int, int, float *, _BYTE *); // eax
  int v12; // eax
  double v13; // st7
  int v14; // edi
  int v15; // eax
  int v16; // eax
  char v17; // cl
  char v18; // al
  int v19; // edx
  char v20; // al
  _BYTE v21[12]; // [esp+4h] [ebp-14h] BYREF
  float v22; // [esp+10h] [ebp-8h]
  char v23; // [esp+16h] [ebp-2h]
  char v24; // [esp+17h] [ebp-1h]
  int v25; // [esp+20h] [ebp+8h]
  char v26; // [esp+23h] [ebp+Bh]

  if ( (unsigned __int8)sub_101BC880() )
  {
    CVProfile::EnterScope(g_VProfCurrentProfile, "CSprite::GetToolRecordingState", 0, "Tools", 0, 4);
    sub_10038850(this, a2);
    v3 = this[302];
    if ( v3 != -1 )
    {
      v4 = (_DWORD *)((char *)off_103DCD74 + 16 * (this[302] & 0xFFF) + 4);
      v5 = v3 >> 12;
      if ( *((_DWORD *)off_103DCD74 + 4 * (this[302] & 0xFFF) + 2) == v5 )
      {
        if ( *v4 )
        {
          v6 = *((_DWORD *)off_103DCD74 + 4 * (this[302] & 0xFFF) + 2) == v5 ? *v4 : 0;
          v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 28))(v6);
          if ( v7 )
          {
            v8 = (float *)sub_1022A910("baseentity", 0);
            v9 = (float *)(*(int (__thiscall **)(int *))(*this + 36))(this);
            v8[5] = *v9;
            v8[6] = v9[1];
            v10 = v9[2];
            v11 = *(void (__thiscall **)(int, int, float *, _BYTE *))(*(_DWORD *)(v7 + 4) + 148);
            v8[7] = v10;
            v11(v7 + 4, this[303], v8 + 5, v21);
            v12 = __RTDynamicCast(
                    v7,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
                    (int)&C_BaseViewModel `RTTI Type Descriptor',
                    0);
            sub_1022ACA0("viewmodel", v12 != 0);
          }
        }
      }
    }
    v13 = ((double (__thiscall *)(int *))*(_DWORD *)(*this + 596))(this);
    v22 = v13;
    if ( *((_BYTE *)this + 1244) )
    {
      v14 = *(_DWORD *)dword_10413178;
      v15 = (*(int (__thiscall **)(int *))(this[1] + 36))(this + 1);
      v16 = (*(int (__thiscall **)(int, int))(v14 + 40))(dword_10413178, v15);
      v25 = *(_DWORD *)(v16 + 4);
      if ( v25 >= *(_DWORD *)(v16 + 8) )
        v25 = *(_DWORD *)(v16 + 8);
      v13 = v22 / (double)v25;
    }
    if ( (dword_10411438 & 1) == 0 )
    {
      dword_10411438 |= 1u;
      dword_1041142D = 0;
    }
    flt_10411420 = v13;
    flt_10411424 = *((float *)this + 305);
    flt_10411434 = *((float *)this + 312);
    dword_10411428 = *((unsigned __int8 *)this + 116);
    byte_1041142C = *((_BYTE *)this + 84) != 0;
    v17 = *((_BYTE *)this + 88);
    v18 = *((_BYTE *)this + 89);
    v23 = *((_BYTE *)this + 90);
    v19 = *this;
    v24 = v18;
    v26 = v17;
    v20 = (*(int (__thiscall **)(int *))(v19 + 600))(this);
    LOBYTE(dword_1041142D) = v26;
    BYTE2(dword_1041142D) = v23;
    BYTE1(dword_1041142D) = v24;
    HIBYTE(dword_1041142D) = v20;
    sub_1022ACE0("sprite", (int)&flt_10411420);
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
}
