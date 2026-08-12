void __thiscall sub_10076F90(int this, unsigned __int8 a2)
{
  unsigned __int8 v2; // bl
  char v4; // al
  int v5; // ecx
  int *v6; // eax
  unsigned __int8 v7; // al
  int v8; // edi
  int v9; // [esp+8h] [ebp-Ch]
  unsigned __int8 v10; // [esp+10h] [ebp-4h]

  v2 = a2;
  if ( a2 != 0xFF )
  {
    if ( sub_100758F0((_DWORD *)this, a2) != -1 && sub_10075950((_DWORD *)this, a2) != -1 )
    {
      v4 = sub_10075950((_DWORD *)this, a2);
      v5 = dword_106931E0;
      v2 = v4;
      while ( 1 )
      {
        if ( (v5 & 1) == 0 )
        {
          v5 |= 1u;
          dword_106931E0 = v5;
          dword_106931DC = 0x1FFFFFF;
        }
        v6 = v2 == 0xFF ? &dword_106931DC : (int *)(*(_DWORD *)(this + 4) + 12 * v2);
        if ( *(_BYTE *)v6 == 0xFF )
          break;
        if ( (v5 & 1) == 0 )
        {
          v5 |= 1u;
          dword_106931E0 = v5;
          dword_106931DC = 0x1FFFFFF;
        }
        if ( v2 == 0xFF )
          v2 = dword_106931DC;
        else
          v2 = *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * v2);
      }
    }
    if ( sub_100758F0((_DWORD *)this, v2) == -1 )
      v7 = sub_10075950((_DWORD *)this, v2);
    else
      v7 = sub_100758F0((_DWORD *)this, v2);
    v10 = v7;
    if ( v7 != 0xFF )
      *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * v7 + 2) = sub_10075890((_DWORD *)this, v2);
    if ( v2 == *(_BYTE *)(this + 16) )
    {
      *(_BYTE *)(this + 16) = v10;
    }
    else if ( sub_10075B30((_DWORD *)this, v2) )
    {
      *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * (unsigned __int8)sub_10075890((_DWORD *)this, v2)) = v10;
    }
    else
    {
      *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * (unsigned __int8)sub_10075890((_DWORD *)this, v2) + 1) = v10;
    }
    v9 = sub_10075780((_DWORD *)this, v2);
    if ( v2 != a2 )
    {
      v8 = 12 * v2;
      *(_BYTE *)(v8 + *(_DWORD *)(this + 4) + 2) = sub_10075890((_DWORD *)this, a2);
      *(_BYTE *)(v8 + *(_DWORD *)(this + 4) + 1) = sub_10075950((_DWORD *)this, a2);
      *(_BYTE *)(v8 + *(_DWORD *)(this + 4)) = sub_100758F0((_DWORD *)this, a2);
      if ( a2 == *(_BYTE *)(this + 16) )
      {
        *(_BYTE *)(this + 16) = v2;
      }
      else if ( sub_10075B30((_DWORD *)this, a2) )
      {
        *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * (unsigned __int8)sub_10075890((_DWORD *)this, a2)) = v2;
      }
      else
      {
        *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * (unsigned __int8)sub_10075890((_DWORD *)this, a2) + 1) = v2;
      }
      if ( sub_100758F0((_DWORD *)this, v2) != -1 )
        *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * (unsigned __int8)sub_100758F0((_DWORD *)this, v2) + 2) = v2;
      if ( sub_10075950((_DWORD *)this, v2) != -1 )
        *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * (unsigned __int8)sub_10075950((_DWORD *)this, v2) + 2) = v2;
      *(_BYTE *)(v8 + *(_DWORD *)(this + 4) + 3) = sub_10075780((_DWORD *)this, a2);
    }
    if ( v10 != 0xFF && v9 == 1 )
      sub_100766E0(this, v10);
  }
}
