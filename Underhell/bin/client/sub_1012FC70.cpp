int __thiscall sub_1012FC70(int *this, int a2, float a3, float a4)
{
  int v5; // edx
  int v7; // [esp+Ch] [ebp-4h] BYREF

  if ( a2 )
  {
    (*(void (__thiscall **)(int, int, int *, int *))(*(_DWORD *)dword_1047CA70 + 20))(dword_1047CA70, a2, &v7, &a2);
  }
  else
  {
    v5 = this[11];
    v7 = this[10];
    a2 = v5;
  }
  return sub_1012FAA0((int)this, this[8], this[9], v7, a2, a3, a4);
}
