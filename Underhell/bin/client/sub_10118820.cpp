int __thiscall sub_10118820(_DWORD **this, const char *a2, unsigned int a3)
{
  _DWORD *v4; // eax
  int result; // eax
  __int16 v6; // [esp+14h] [ebp+8h]

  v6 = sub_10118170(this[6], a2);
  if ( a3 >= 0x8000 )
    Warning("CSave::WriteHeader() size parameter exceeds 'short'!\n");
  v4 = this[6];
  if ( v4 )
  {
    if ( v4[3] - v4[2] >= 2 )
    {
      *(_WORD *)v4[1] = a3;
      v4[1] += 2;
      v4[2] += 2;
    }
    else
    {
      v4[2] = v4[3];
      Warning("Save/Restore overflow!\n");
    }
  }
  result = (int)this[6];
  if ( result )
  {
    if ( *(_DWORD *)(result + 12) - *(_DWORD *)(result + 8) >= 2 )
    {
      **(_WORD **)(result + 4) = v6;
      *(_DWORD *)(result + 4) += 2;
      *(_DWORD *)(result + 8) += 2;
    }
    else
    {
      *(_DWORD *)(result + 8) = *(_DWORD *)(result + 12);
      return Warning("Save/Restore overflow!\n");
    }
  }
  return result;
}
