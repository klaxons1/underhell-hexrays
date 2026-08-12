int __thiscall sub_10335B60(_DWORD *this, int a2, const char *ArgList)
{
  char *v4; // ebx
  int *v5; // ecx
  int v6; // edi
  int v7; // eax
  bool v8; // al
  char *v9; // eax
  char v11[256]; // [esp+Ch] [ebp-200h] BYREF
  char Buffer[256]; // [esp+10Ch] [ebp-100h] BYREF

  if ( ArgList )
    v4 = sub_1001E280(Buffer, ",%s", ArgList);
  else
    v4 = (char *)String;
  v5 = (int *)this[699];
  if ( v5 )
    v6 = sub_100B16F0(v5, 1);
  else
    v6 = 1;
  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    v7 = sub_10261B20();
  else
    v7 = 0;
  v8 = sub_10334210(this, v7);
  v9 = sub_1001E280(v11, "numselected:%d,useradio:%d%s", v6, v8, v4);
  return (*(int (__thiscall **)(_DWORD *, int, char *, _DWORD, _DWORD, _DWORD))(*this + 2344))(this, a2, v9, 0, 0, 0);
}
