int __thiscall sub_10336050(_DWORD *this)
{
  int *v2; // ecx
  int v3; // edi
  int v4; // eax
  bool v5; // al
  char *v6; // eax
  char Buffer[256]; // [esp+8h] [ebp-100h] BYREF

  (*(void (__thiscall **)(_DWORD *, float *))(*this + 1544))(this, &flt_10689730);
  v2 = (int *)this[699];
  if ( v2 )
    v3 = sub_100B16F0(v2, 1);
  else
    v3 = 1;
  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    v4 = sub_10261B20();
  else
    v4 = 0;
  v5 = sub_10334210(this, v4);
  v6 = sub_1001E280(Buffer, "numselected:%d,useradio:%d%s", v3, v5, String);
  return (*(int (__thiscall **)(_DWORD *, const char *, char *, _DWORD, _DWORD, _DWORD))(*this + 2344))(
           this,
           "TLK_COMMAND_FAILED",
           v6,
           0,
           0,
           0);
}
