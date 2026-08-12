void __thiscall sub_1014C210(int *this, int a2, int a3)
{
  if ( a2 >= 0 && a2 < this[244] && a3 >= 0 && a3 < this[245] )
  {
    ++this[256];
    sub_1014B7C0((int)this, a2, a3, -1.0);
    sub_100EC3F0(this, (int)sub_1014C050, 0.0, 0);
    sub_100EC4A0(this, *(float *)(dword_106B31C8 + 12), 0);
  }
}
