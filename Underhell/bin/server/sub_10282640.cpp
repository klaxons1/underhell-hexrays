void __thiscall sub_10282640(int this)
{
  float v2; // [esp+8h] [ebp-Ch]

  if ( !*(_DWORD *)(this + 800)
    || ((*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 800) + 12))(
          *(_DWORD *)(this + 800),
          this + 716,
          this + 728),
        v2 = *(float *)(dword_106B31C8 + 12) + 1.0,
        sub_100EC4A0((int *)this, v2, 0),
        *(float *)(this + 804) <= (double)*(float *)(dword_106B31C8 + 12)) )
  {
    sub_1025FAC0(this);
  }
}
