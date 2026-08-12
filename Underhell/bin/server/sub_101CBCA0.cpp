int __thiscall sub_101CBCA0(int this, int a2)
{
  int v3; // eax

  v3 = *(_DWORD *)(this + 1124);
  if ( *(_BYTE *)(this + 1866) )
  {
    if ( v3 )
    {
      *(_DWORD *)(*(_DWORD *)(v3 + 8) + 4) = *(_DWORD *)(v3 + 4);
      *(_DWORD *)(*(_DWORD *)(v3 + 4) + 8) = *(_DWORD *)(v3 + 8);
      --dword_106960E4;
      goto LABEL_6;
    }
  }
  else if ( v3 )
  {
    *(_DWORD *)(*(_DWORD *)(v3 + 8) + 4) = *(_DWORD *)(v3 + 4);
    *(_DWORD *)(*(_DWORD *)(v3 + 4) + 8) = *(_DWORD *)(v3 + 8);
    --dword_106960D8;
LABEL_6:
    sub_10184660(v3);
    *(_DWORD *)(this + 1124) = 0;
  }
  return sub_1025FAC0(this);
}
