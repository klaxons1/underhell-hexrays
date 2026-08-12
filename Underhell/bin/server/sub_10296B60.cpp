char __thiscall sub_10296B60(int this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  bool v6; // zf

  v2 = *(_DWORD *)(this + 60);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        v5 = v3[1] == v4 ? *v3 : 0;
        if ( *(_DWORD *)(v5 + 860) == 1 )
        {
          if ( (unsigned __int8)sub_1004B510((void *)this, 100000, 1) )
          {
            if ( !sub_10043EC0(*(_DWORD **)(this + 4)) )
              return sub_1004B680((_DWORD **)this);
            goto LABEL_10;
          }
LABEL_13:
          if ( !(unsigned __int8)sub_1004B510((void *)this, 100002, 1) || !sub_10043EC0(*(_DWORD **)(this + 4)) )
            return sub_1004B680((_DWORD **)this);
          v6 = *(_DWORD *)sub_10043EC0(*(_DWORD **)(this + 4)) == 100002;
          goto LABEL_11;
        }
      }
    }
  }
  if ( !(unsigned __int8)sub_1004B510((void *)this, 100000, 1) )
    goto LABEL_13;
  if ( sub_10043EC0(*(_DWORD **)(this + 4)) && *(_DWORD *)sub_10043EC0(*(_DWORD **)(this + 4)) == 129 )
    return 1;
LABEL_10:
  v6 = *(_DWORD *)sub_10043EC0(*(_DWORD **)(this + 4)) == 100001;
LABEL_11:
  if ( v6 )
    return 1;
  return sub_1004B680((_DWORD **)this);
}
