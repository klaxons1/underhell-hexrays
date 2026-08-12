int __thiscall sub_102F3CA0(void *this, int a2)
{
  int v2; // esi
  int v4; // eax
  int result; // eax
  int v6; // esi

  v2 = (int)*off_1061B7A0;
  v4 = (*(int (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)a2 + 576))(a2, 1, 1, 0);
  (*(void (__thiscall **)(int (__stdcall ***)(char), int))(v2 + 12))(off_1061B7A0, v4);
  result = sub_101811E0("env_alyxemp", -1);
  v6 = result;
  if ( result )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)result + 96))(result);
    return sub_102BB250(v6, (int)this, a2);
  }
  return result;
}
