char __thiscall sub_1020C3C0(int this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  int v8; // ebx
  int v9; // esi
  int v10; // ecx
  unsigned int v11; // eax
  int *v12; // ecx
  int v13; // eax
  float *v14; // eax
  int v15; // eax
  BOOL v16; // eax

  v3 = *(_DWORD *)(this + 1748);
  if ( v3 != -1 && (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 1748) & 0xFFF) + 1], v5 = v3 >> 12, v4[1] == v5) && *v4 )
  {
    if ( v4[1] == v5 )
      v6 = *v4;
    else
      v6 = 0;
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 856))(v6, a2);
  }
  else
  {
    v8 = *(_DWORD *)(this + 1660);
    if ( v8 <= 0 )
    {
LABEL_20:
      if ( (_BYTE)a2 )
      {
        return sub_10209DD0(2);
      }
      else
      {
        v16 = sub_10206EC0((float *)this);
        return sub_10209DD0(v16);
      }
    }
    else
    {
      v9 = 0;
      while ( 1 )
      {
        v10 = *(_DWORD *)(this + 1648);
        v11 = *(_DWORD *)(v10 + 4 * v9);
        if ( v11 == -1 || (v12 = &off_1061BE18[4 * (*(_DWORD *)(v10 + 4 * v9) & 0xFFF) + 1], v12[1] != v11 >> 12) )
          v13 = 0;
        else
          v13 = *v12;
        v14 = (float *)__RTDynamicCast(
                         v13,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&CBasePropDoor `RTTI Type Descriptor',
                         (int)&CPropDoorRotating `RTTI Type Descriptor',
                         0);
        if ( v14 )
        {
          v15 = (_BYTE)a2 ? 2 : sub_10206EC0(v14);
          if ( !(unsigned __int8)sub_10209DD0(v15) )
            return 0;
        }
        if ( ++v9 >= v8 )
          goto LABEL_20;
      }
    }
  }
}
