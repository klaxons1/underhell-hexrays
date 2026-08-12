void __thiscall sub_101053E0(_DWORD *this, float a2)
{
  _DWORD *v2; // ebx
  int v3; // edi
  int v4; // eax
  float *v5; // esi
  int v6; // ebx
  _DWORD *v7; // eax
  float v9; // [esp+14h] [ebp-10h]
  float v10; // [esp+18h] [ebp-Ch] BYREF
  float v11; // [esp+1Ch] [ebp-8h] BYREF
  _DWORD *v12; // [esp+20h] [ebp-4h]

  v2 = this;
  v3 = 0;
  v12 = this + 298;
  do
  {
    if ( *v12 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*v12 & 0xFFF) + 2) != *v12 >> 12 )
      v4 = 0;
    else
      v4 = *((_DWORD *)off_103DCD74 + 4 * (*v12 & 0xFFF) + 1);
    v5 = (float *)__RTDynamicCast(
                    v4,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
                    (int)&C_BaseAnimating `RTTI Type Descriptor',
                    0);
    if ( v5 )
    {
      sub_10028730(v5, *((unsigned __int8 *)v2 + v3 + 1208), &v10, &v11);
      v6 = *((unsigned __int8 *)v2 + v3 + 1208);
      v9 = v10 + (v11 - v10) * a2;
      if ( !*((_DWORD *)v5 + 485) && (*(int (__thiscall **)(_DWORD *))(*((_DWORD *)v5 + 1) + 36))((_DWORD *)v5 + 1) )
        sub_10026520((int)v5);
      v7 = (_DWORD *)*((_DWORD *)v5 + 485);
      if ( !v7 || !*v7 )
        v7 = 0;
      sub_10025770(v5, (int)v7, v6, v9);
      v2 = this;
    }
    ++v12;
    ++v3;
  }
  while ( v3 < 4 );
}
