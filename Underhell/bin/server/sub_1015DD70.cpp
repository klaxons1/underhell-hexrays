int __stdcall sub_1015DD70(int a1, int a2)
{
  int result; // eax

  (*(void (__stdcall **)(float *, int, _DWORD))(*(_DWORD *)off_10627F88 + 144))(&flt_106F1CA8, a2, 1.0);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 400))(dword_106B31D0);
  if ( result )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)result + 20))(result, a2);
  return result;
}
