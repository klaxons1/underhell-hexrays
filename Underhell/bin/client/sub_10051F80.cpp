void __thiscall sub_10051F80(_DWORD *this, int (__thiscall ***a2)(_DWORD))
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  _BYTE *v6; // edi
  long double v7; // st7
  long double v8; // st6
  double v9; // st5
  double v10; // st6
  int v11; // eax
  float v12; // [esp+0h] [ebp-54h]
  float v13; // [esp+4h] [ebp-50h]
  float v14; // [esp+8h] [ebp-4Ch]
  int v15[16]; // [esp+14h] [ebp-40h] BYREF
  int v16; // [esp+5Ch] [ebp+8h]

  if ( a2 )
  {
    v3 = (**a2)(a2);
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 28))(v3);
    if ( v4 )
    {
      v5 = __RTDynamicCast(
             v4,
             0,
             (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
             (int)&C_FuncConveyor `RTTI Type Descriptor',
             0);
      if ( v5 )
      {
        v6 = (_BYTE *)this[1];
        if ( v6 )
        {
          v7 = *(float *)(v5 + 1192);
          v16 = 180;
          v8 = fabs(v7) * 0.0078125;
          if ( v7 < 0.0 )
            v16 = 0;
          v9 = cos((double)v16 * 0.0174532925199433) * *((float *)off_103DC81C + 3) * v8;
          v10 = v8 * (sin((double)v16 * 0.0174532925199433) * *((float *)off_103DC81C + 3));
          if ( v9 < 0.0 )
            v9 = v9 + 1.0 - (double)(int)v9;
          if ( v10 < 0.0 )
            v10 = 1.0 - (double)(int)v10 + v10;
          v14 = 0.0;
          v13 = v10 - (double)(int)v10;
          v12 = v9 - (double)(int)v9;
          if ( (v6[28] & 0xF) == 7 )
          {
            sub_101F23F0((int)v15, v12, v13, v14);
            (*(void (__thiscall **)(_DWORD, int *))(*(_DWORD *)this[1] + 76))(this[1], v15);
          }
          else
          {
            (*(void (__thiscall **)(_BYTE *, float, float, float))(*(_DWORD *)v6 + 40))(
              v6,
              COERCE_FLOAT(LODWORD(v12)),
              COERCE_FLOAT(LODWORD(v13)),
              COERCE_FLOAT(LODWORD(v14)));
          }
          if ( (unsigned __int8)sub_101BC880() )
          {
            v11 = (*(int (__thiscall **)(_DWORD *))(*this + 12))(this);
            sub_101BCA60(v11);
          }
        }
      }
    }
  }
}
