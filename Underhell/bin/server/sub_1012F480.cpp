int __thiscall sub_1012F480(int this, int a2)
{
  int result; // eax

  result = this;
  qmemcpy((void *)this, (const void *)a2, 0xA0u);
  qmemcpy((void *)(this + 160), (const void *)(a2 + 160), 0x80u);
  qmemcpy((void *)(this + 288), (const void *)(a2 + 288), 0x8Eu);
  return result;
}
