int __usercall sub_10086780@<eax>(const char *a1@<esi>, int a2, int a3)
{
  int result; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // edx

  result = dword_10693628;
  v4 = *(_DWORD *)(dword_10693628 + 804);
  if ( v4 )
  {
    result = a3;
    if ( (a3 & 1) != 0 )
    {
      v5 = *(_DWORD *)(v4 + 8);
      if ( (v5 & 2) != 0 )
      {
        result = v5 & 0xFFFFFFFC;
        *(_DWORD *)(v4 + 8) = result;
      }
      else if ( (v5 & 1) != 0 )
      {
        result = v5 | 2;
        *(_DWORD *)(v4 + 8) = result;
      }
      else
      {
        *(_DWORD *)(v4 + 8) = v5 | 1;
        return sub_10086690(v4, a1);
      }
    }
    else
    {
      v6 = *(_DWORD *)(v4 + 8);
      if ( (v6 & a3) != 0 )
      {
        result = v6 & ~a3;
        *(_DWORD *)(v4 + 8) = result;
      }
      else
      {
        *(_DWORD *)(v4 + 8) = a3 | v6;
      }
    }
  }
  return result;
}
