int __thiscall sub_10058CF0(float *this, int (__thiscall ***a2)(_DWORD))
{
  int v3; // eax
  int v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // eax
  unsigned int v9; // eax
  int v10; // eax
  int result; // eax
  int v12; // eax

  if ( a2 )
  {
    v3 = (**a2)(a2);
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 28))(v3);
    if ( v4 )
    {
      v5 = *(_DWORD *)(v4 + 328);
      if ( v5 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v5 & 0xFFF) + 2) != v5 >> 12 )
        v6 = 0;
      else
        v6 = *((_DWORD *)off_103DCD74 + 4 * (v5 & 0xFFF) + 1);
      v7 = v6;
      if ( v6 )
      {
        do
        {
          v8 = __RTDynamicCast(
                 v7,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
                 (int)&C_MaterialModifyControl `RTTI Type Descriptor',
                 0);
          if ( v8 )
          {
            switch ( *(_DWORD *)(v8 + 2008) )
            {
              case 1:
                sub_100588A0(this, v8);
                break;
              case 2:
                sub_10058500(this, v8);
                break;
              case 3:
                sub_10058920((int)this, v8);
                break;
            }
          }
          v9 = *(_DWORD *)(v7 + 332);
          if ( v9 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v7 + 332) & 0xFFF) + 2) != v9 >> 12 )
            v10 = 0;
          else
            v10 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v7 + 332) & 0xFFF) + 1);
          v7 = v10;
        }
        while ( v10 );
      }
    }
  }
  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    v12 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 12))(this);
    return sub_101BCA60(v12);
  }
  return result;
}
