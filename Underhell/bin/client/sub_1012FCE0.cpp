int __thiscall sub_1012FCE0(int *this)
{
  int v2; // eax
  int v3; // edx
  int v5; // [esp+Ch] [ebp-8h] BYREF
  int v6; // [esp+10h] [ebp-4h] BYREF

  v2 = this[12];
  if ( v2 )
  {
    (*(void (__thiscall **)(int, int, int *, int *))(*(_DWORD *)dword_1047CA70 + 20))(dword_1047CA70, v2, &v5, &v6);
  }
  else
  {
    v3 = this[11];
    v5 = this[10];
    v6 = v3;
  }
  return sub_1012FAA0((int)this, this[8], this[9], v5, v6, 0.0, 1.0);
}
