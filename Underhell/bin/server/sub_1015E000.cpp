int __thiscall sub_1015E000(void *this, char a2)
{
  int result; // eax
  char *v4; // eax
  int v5; // eax
  char v6; // [esp+0h] [ebp-10Ch]
  char Buffer[256]; // [esp+4h] [ebp-108h] BYREF
  _BYTE v8[4]; // [esp+104h] [ebp-8h] BYREF
  int v9; // [esp+108h] [ebp-4h]

  if ( a2 || (result = sub_101679A0("skill.cfg"), result < 0) )
  {
    v4 = *(char **)(dword_106B31C8 + 60);
    if ( !v4 )
      v4 = (char *)String;
    sub_10167E00("skill.cfg", v4, 1);
    sub_1042CBA0("skill");
    if ( (unsigned __int8)sub_1042C850(v8) )
      v5 = *(_DWORD *)(v9 + 48);
    else
      v5 = 1;
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 184))(this, v5);
    sub_10429A00(Buffer, 0x100u, "exec skill_manifest.cfg\n", v6);
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_106B31D0 + 144))(dword_106B31D0, Buffer);
    return (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 148))(dword_106B31D0);
  }
  return result;
}
