int __thiscall sub_100C9750(float *this)
{
  int v2; // edi
  _DWORD *v3; // eax
  int i; // ebx
  int v5; // edi
  int (__thiscall *v6)(float *, char *); // edx
  _DWORD *v7; // eax
  char v9[4]; // [esp+Ch] [ebp-10h] BYREF
  char v10[4]; // [esp+10h] [ebp-Ch] BYREF
  int v11; // [esp+14h] [ebp-8h] BYREF
  int v12; // [esp+18h] [ebp-4h] BYREF

  v2 = *(_DWORD *)this;
  v3 = (_DWORD *)(*(int (__thiscall **)(float *, int *))(*(_DWORD *)this + 224))(this, &v12);
  (*(void (__thiscall **)(float *, _DWORD))(v2 + 216))(this, *v3);
  for ( i = 0; i < *((_DWORD *)this + 66); ++i )
  {
    v5 = **(_DWORD **)(*((_DWORD *)this + 63) + 4 * i);
    v6 = *(int (__thiscall **)(float *, char *))(*(_DWORD *)this + 228);
    v12 = *(_DWORD *)(*((_DWORD *)this + 63) + 4 * i);
    v7 = (_DWORD *)v6(this, v10);
    (*(void (__thiscall **)(int, _DWORD))(v5 + 220))(v12, *v7);
  }
  sub_10236170(&v11, v9);
  return sub_10236140(v11, (int)((double)*((int *)this + 102) + this[112]));
}
