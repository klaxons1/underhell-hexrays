int __thiscall sub_1006D050(int this, const char *a2, char a3, char a4)
{
  int v5; // eax
  int result; // eax
  const char *v7; // [esp+14h] [ebp-10h] BYREF
  int v8[2]; // [esp+18h] [ebp-Ch] BYREF
  char v9; // [esp+20h] [ebp-4h]
  char v10; // [esp+21h] [ebp-3h]
  char v11; // [esp+22h] [ebp-2h]

  *(float *)(this + 12) = *(float *)(dword_106B31C8 + 12);
  if ( a2 && (v7 = a2, v5 = sub_1006BD20((unsigned __int8 (__cdecl **)(int, int))(this + 16), (int)&v7), v5 != -1) )
  {
    result = 32 * v5;
    *(float *)(*(_DWORD *)(this + 20) + result + 20) = *(float *)(dword_106B31C8 + 12);
    *(_BYTE *)(*(_DWORD *)(this + 20) + result + 28) = a3;
    *(_BYTE *)(*(_DWORD *)(this + 20) + result + 29) = a4;
    if ( *(_DWORD *)(dword_10692F44 + 48) )
      return Msg(
               "NPCEVENTRESPONSE: (%.2f) Trigger resetting already-active event firing named: %s\n",
               *(float *)(dword_106B31C8 + 12),
               a2);
  }
  else
  {
    v8[0] = *(int *)(dword_106B31C8 + 12);
    *(float *)&v8[1] = 0.0;
    v10 = a4;
    v9 = a3;
    v11 = 0;
    sub_1006CFA0((void *)(this + 16), a2, v8);
    result = dword_10692F44;
    if ( *(_DWORD *)(dword_10692F44 + 48) )
      return Msg("NPCEVENTRESPONSE: (%.2f) Trigger fired for event named: %s\n", *(float *)(dword_106B31C8 + 12), a2);
  }
  return result;
}
