void __cdecl sub_102C9E10()
{
  int v0; // esi
  int *v1; // ebx
  int v2; // edi
  int v3; // eax

  sub_100C6080(&dword_1043098C);
  dword_10430984 = (int)&CManagedDataCacheClient<AsyncCaptionData_t,asynccaptionparams_t,AsyncCaptionData_t *>::`vftable';
  if ( dword_10430988 )
  {
    v0 = dword_10430988;
    v1 = (int *)(**(int (***)(void))dword_10430988)();
    if ( v0 )
    {
      v2 = *v1;
      v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v0 + 4))(v0, 1);
      (*(void (__thiscall **)(int *, int))(v2 + 40))(v1, v3);
    }
    dword_10430988 = 0;
  }
  sub_100D3300(dword_10430978);
}
