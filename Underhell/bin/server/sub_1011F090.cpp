void __thiscall sub_1011F090(_DWORD *this, unsigned int a2)
{
  float v2; // [esp+0h] [ebp-4h]

  v2 = 0.0;
  if ( this[200] == 3 )
    sub_1010DD80(this + 252, __SPAIR64__((unsigned int)this, a2), v2);
  else
    sub_1010DD80(this + 258, __SPAIR64__((unsigned int)this, a2), v2);
}
