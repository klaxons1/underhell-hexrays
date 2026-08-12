int __thiscall sub_10123B40(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int v4; // eax
  int v5; // edi
  int v6; // eax
  char *v8; // edi
  double v9; // st7
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // esi
  int v16; // [esp+14h] [ebp-48h]
  int v17; // [esp+18h] [ebp-44h]
  float v18; // [esp+1Ch] [ebp-40h]
  int v19; // [esp+20h] [ebp-3Ch]
  int v20; // [esp+24h] [ebp-38h]
  int v21; // [esp+2Ch] [ebp-30h]
  int v22; // [esp+30h] [ebp-2Ch]
  int v23; // [esp+34h] [ebp-28h]
  int v24; // [esp+38h] [ebp-24h]
  int v25; // [esp+3Ch] [ebp-20h]
  float v26; // [esp+40h] [ebp-1Ch]
  float v27; // [esp+44h] [ebp-18h]
  float v28; // [esp+54h] [ebp-8h]
  int v29; // [esp+58h] [ebp-4h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "CSprite::DrawModel", 0, "Particle/Effect_Rendering", 0, 4);
  if ( *((_WORD *)this + 57) != 0xFFFF
    && *((_BYTE *)this + 116)
    && (!byte_1043BD0A && *(_DWORD *)(dword_1043BFF4 + 48)
     || ((v3 = this[80], v3 == -1) || *((_DWORD *)off_103DCD74 + 4 * (this[80] & 0xFFF) + 2) != v3 >> 12
       ? (v4 = 0)
       : (v4 = *((_DWORD *)off_103DCD74 + 4 * (this[80] & 0xFFF) + 1)),
         !__RTDynamicCast(
            v4,
            0,
            (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
            (int)&C_BaseViewModel `RTTI Type Descriptor',
            0)))
    && (v5 = *(_DWORD *)dword_10413178,
        v6 = (*(int (__thiscall **)(_DWORD *))(*this + 36))(this),
        (*(int (__thiscall **)(int, int))(v5 + 36))(dword_10413178, v6) == 2) )
  {
    v8 = (char *)(this - 1);
    v9 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*(this - 1) + 596))(this - 1);
    if ( *((_BYTE *)this + 1240) )
    {
      v10 = *(_DWORD *)dword_10413178;
      v11 = (*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
      v12 = (*(int (__thiscall **)(int, int))(v10 + 40))(dword_10413178, v11);
      v29 = *(_DWORD *)(v12 + 4);
      if ( v29 >= *(_DWORD *)(v12 + 8) )
        v29 = *(_DWORD *)(v12 + 8);
      v28 = v9;
      v9 = v28 / (double)v29;
    }
    v13 = *((unsigned __int8 *)this + 112);
    v27 = *((float *)this + 312);
    v26 = v9;
    v25 = *((unsigned __int8 *)this + 86);
    v24 = *((unsigned __int8 *)this + 85);
    v23 = *((unsigned __int8 *)this + 84);
    v22 = (*(int (__thiscall **)(_DWORD *))(*(_DWORD *)v8 + 600))(this - 1);
    v21 = *((unsigned __int8 *)this + 80);
    v20 = this[302];
    v19 = sub_1006BE10(this + 301);
    v18 = *((float *)this + 304);
    v17 = (*(int (__thiscall **)(_DWORD *))(*(_DWORD *)v8 + 40))(this - 1);
    v16 = (*(int (__thiscall **)(_DWORD *))(*(_DWORD *)v8 + 36))(this - 1);
    v14 = (*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
    v15 = sub_1006C500(
            (double (__thiscall ***)(_DWORD, int, int *, int, int, int, float *))this + 297,
            v13,
            (int)(this - 1),
            v14,
            v16,
            v17,
            v18,
            v19,
            v20,
            v13,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
    CVProfile::ExitScope(g_VProfCurrentProfile);
    return v15;
  }
  else
  {
    CVProfile::ExitScope(g_VProfCurrentProfile);
    return 0;
  }
}
