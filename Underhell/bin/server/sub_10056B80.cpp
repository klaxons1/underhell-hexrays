_DWORD *__stdcall sub_10056B80(int a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // esi

  v1 = (_DWORD *)sub_100D6340(856);
  v2 = v1;
  if ( v1 )
  {
    sub_1004D2E0(v1);
    *v2 = &CAI_FollowGoal::`vftable';
    v2[200] = &CAI_FollowGoal::`vftable';
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(_DWORD *, int))(*v2 + 108))(v2, a1);
  return v2 + 3;
}
