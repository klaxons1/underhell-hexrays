int __thiscall sub_102C7010(_DWORD *this)
{
  int v2; // eax
  const char *v3; // eax
  int v4; // esi
  char *v5; // ecx
  int v6; // edi
  char *v7; // ebx
  int result; // eax
  float v9; // [esp+Ch] [ebp-8h]
  char *Source; // [esp+10h] [ebp-4h] BYREF

  sub_1015FBF0((int)this);
  Source = 0;
  v2 = CommandLine_Tier0();
  (*(void (__thiscall **)(int, const char *, char **))(*(_DWORD *)v2 + 12))(v2, "-gamestatstag", &Source);
  if ( !Source )
    Source = (char *)String;
  v3 = *(const char **)(dword_106B31C8 + 60);
  if ( !v3 )
    v3 = String;
  v4 = sub_102C6C50((int)this, v3);
  this[23] = v4;
  v5 = *(char **)(dword_106B31C8 + 60);
  if ( !v5 )
    v5 = (char *)String;
  v6 = *(_DWORD *)(dword_106B31C8 + 64);
  v7 = Source;
  v9 = *(float *)(dword_106B31C8 + 12);
  *(_BYTE *)v4 = 2;
  sub_104299C0((char *)(v4 + 1), v5, 0x40u);
  *(float *)(v4 + 68) = 0.0;
  *(float *)(v4 + 372) = v9;
  result = sub_104299C0((char *)(v4 + 72), v7, 8u);
  *(_DWORD *)(v4 + 80) = v6;
  return result;
}
