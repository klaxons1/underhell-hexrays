int __thiscall sub_10058F00(int this, int a2)
{
  bool v2; // al

  v2 = *(_BYTE *)(this + 62) && *(_DWORD *)(*(_DWORD *)(this + 4) + 2324) == 3;
  if ( a2 == 100001 && v2 )
    return 100002;
  else
    return sub_1004B470((_DWORD **)this);
}
