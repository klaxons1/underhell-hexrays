int __thiscall sub_103AD630(int this, _DWORD *a2)
{
  _DWORD *v2; // ebx
  unsigned int v4; // eax
  int v5; // ecx
  int i; // esi
  _DWORD *v7; // esi
  int v8; // eax
  int j; // esi
  int v10; // ecx
  int v12[2]; // [esp+Ch] [ebp-8h] BYREF

  v2 = a2;
  if ( *(_DWORD *)(this + 2796) )
  {
    v4 = a2[11];
    if ( v4 == -1 || off_1061BE18[4 * (a2[11] & 0xFFF) + 2] != v4 >> 12 )
      v5 = 0;
    else
      v5 = off_1061BE18[4 * (a2[11] & 0xFFF) + 1];
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5) )
    {
      for ( i = sub_100B1560(*(_DWORD **)(this + 2796), v12, 1); i; i = sub_100B1630(*(_DWORD **)(this + 2796), v12, 1) )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)i + 264))(i) )
        {
          if ( i != this )
          {
            v7 = (_DWORD *)__RTDynamicCast(
                             i,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
                             (int)&CNPC_Stalker `RTTI Type Descriptor',
                             0);
            if ( v7 )
            {
              v8 = sub_1001E870(v2);
              v2 = a2;
              if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, int, _DWORD))(*v7 + 548))(v7, v8, 16449, 0) )
                ++v7[932];
            }
          }
        }
      }
    }
  }
  sub_103AC090(this);
  for ( j = 0; j < *(_DWORD *)(this + 3640); ++j )
  {
    v10 = *(_DWORD *)(*(_DWORD *)(this + 3628) + 4 * j);
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v10 + 80))(v10, v2);
  }
  return sub_10035690(this, (int)v2, this, (int)v2);
}
