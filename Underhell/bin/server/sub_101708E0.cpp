_DWORD *__cdecl sub_101708E0(int a1, int a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // esi

  result = (_DWORD *)sub_101811E0("info_camera_link", -1);
  v3 = result;
  if ( result )
  {
    if ( a2 )
      result[200] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    else
      result[200] = -1;
    if ( a1 )
      v3[201] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
    else
      v3[201] = -1;
    (*(void (__thiscall **)(_DWORD *))(*v3 + 96))(v3);
    return v3;
  }
  return result;
}
