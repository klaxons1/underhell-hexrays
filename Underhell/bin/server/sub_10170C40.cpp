int __thiscall sub_10170C40(int *this, unsigned int a2)
{
  int v3; // eax
  int v4; // eax
  int result; // eax

  if ( a2 )
  {
    if ( !sub_10170770(a2, this + 7) )
    {
      v3 = *(_DWORD *)(a2 + 4);
      if ( v3 != a2 )
      {
        if ( v3 )
          *(_DWORD *)(v3 + 8) = *(_DWORD *)(a2 + 8);
        else
          this[3] = *(_DWORD *)(a2 + 8);
        v4 = *(_DWORD *)(a2 + 8);
        if ( v4 )
          *(_DWORD *)(v4 + 4) = *(_DWORD *)(a2 + 4);
        else
          this[4] = *(_DWORD *)(a2 + 4);
        *(_DWORD *)(a2 + 8) = a2;
        *(_DWORD *)(a2 + 4) = a2;
        --this[6];
      }
    }
  }
  result = this[5];
  *(_DWORD *)(a2 + 8) = result;
  this[5] = a2;
  return result;
}
