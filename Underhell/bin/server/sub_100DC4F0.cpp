int __thiscall sub_100DC4F0(_DWORD *this, float a2, int a3)
{
  int v4; // ebx
  int v5; // eax
  int *v6; // esi
  int v8; // edi
  int v9; // [esp+4h] [ebp-8h]
  int v10; // [esp+8h] [ebp-4h] BYREF

  if ( !this[6] || *((char *)this + 225) < 2 )
    return 0;
  v4 = (*(int (__thiscall **)(_DWORD *))(*this + 448))(this);
  v5 = this[55];
  v6 = this + 55;
  v10 = v4;
  v9 = v5;
  if ( v5 >= v4 )
    return 0;
  v8 = *v6 + (int)a2;
  if ( *v6 != v8 )
  {
    (*(void (__thiscall **)(int *, int *))(*(v6 - 55) + 464))(v6 - 55, v6);
    *v6 = v8;
  }
  if ( *v6 > v4 )
    sub_1002AB00(v6, &v10);
  return *v6 - v9;
}
