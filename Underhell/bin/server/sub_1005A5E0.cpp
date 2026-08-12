char __thiscall sub_1005A5E0(_DWORD *this, int a2)
{
  void *v2; // eax
  int v3; // esi
  int v4; // eax
  _DWORD *v6; // [esp+0h] [ebp-4h] BYREF

  v6 = this;
  v2 = (void *)sub_1004C590(this, 0);
  if ( v2 )
  {
    LOBYTE(v2) = sub_10058900(v2, (int *)&v6);
    if ( (_BYTE)v2 )
    {
      v3 = (int)v6;
      if ( v6 )
      {
        (*(void (__thiscall **)(_DWORD *))(*v6 + 52))(v6);
        v4 = sub_1007DB30(100004);
        LOBYTE(v2) = (unsigned __int8)sub_10023CB0(*(char **)(v3 + 4), v4);
      }
    }
  }
  return (char)v2;
}
