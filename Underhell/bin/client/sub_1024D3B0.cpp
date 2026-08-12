_DWORD *__thiscall sub_1024D3B0(int this, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ebx
  _DWORD *v4; // edi
  bool v6; // zf
  _DWORD *result; // eax

  v3 = a3;
  v4 = a2;
  *a3 = 0;
  *v4 = 0;
  v6 = *(_DWORD *)(this + 400) == 0;
  a3 = 0;
  a2 = 0;
  if ( !v6 )
    (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD *))(**(_DWORD **)(this + 400) + 12))(
      *(_DWORD *)(this + 400),
      v4,
      v3);
  if ( *(_DWORD *)(this + 404) )
    (*(void (__thiscall **)(_DWORD, _DWORD **, _DWORD **))(**(_DWORD **)(this + 404) + 12))(
      *(_DWORD *)(this + 404),
      &a3,
      &a2);
  if ( (int)a3 > *v4 )
    *v4 = a3;
  result = a2;
  if ( (int)a2 > *v3 )
    *v3 = a2;
  return result;
}
