int __thiscall sub_100429A0(int this)
{
  int v2; // esi
  int *v3; // edi
  int result; // eax
  char v5; // [esp+7h] [ebp-1h] BYREF

  sub_10039ED0((unsigned __int16 *)this);
  if ( dword_10407394 == this )
  {
    (*(void (__thiscall **)(int *, int))(*off_103ED0D8 + 188))(off_103ED0D8, 2049);
    (*(void (__thiscall **)(int *, _DWORD))(*off_103ED0D8 + 32))(off_103ED0D8, 0);
  }
  v2 = 0;
  v3 = (int *)(this + 4352);
  do
  {
    result = sub_1000A5F0((_DWORD *)this, v2);
    *v3 = result;
    ++v2;
    ++v3;
  }
  while ( v2 < 32 );
  if ( dword_104376B8 )
  {
    v5 = *(_BYTE *)(this + 4140);
    return (*(int (__thiscall **)(int, int, char *))(*(_DWORD *)dword_104376B8 + 64))(dword_104376B8, this + 3444, &v5);
  }
  return result;
}
