int __thiscall sub_100C0470(int this, char *Buffer, int a3, int a4)
{
  int v4; // edi
  _DWORD *v6; // eax
  int v7; // ebx
  char v8; // bl
  int result; // eax
  const char *v10; // eax
  _BYTE v11[48]; // [esp+Ch] [ebp-34h] BYREF
  int v12; // [esp+3Ch] [ebp-4h] BYREF

  v4 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v6 = *(_DWORD **)(this + 1100);
  if ( v6 && *v6 )
    v7 = *(_DWORD *)(this + 1100);
  else
    v7 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
  if ( !v7 || !sscanf(Buffer, "%d", &v12) )
    return sub_100DD4C0(Buffer, a3, a4);
  v8 = (*(int (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)this + 796))(this, v12, v11);
  sub_10421A90(v11, a4);
  result = sub_10421CE0(v11, 3, a3);
  if ( !v8 )
  {
    v10 = *(const char **)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this + 28))(this, &a4);
    if ( !v10 )
      v10 = String;
    return Msg("ERROR: Mapmaker tried to spawn DispatchEffect %s, but %s has no attachment %d\n", Buffer, v10, v12);
  }
  return result;
}
