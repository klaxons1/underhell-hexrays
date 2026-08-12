int __thiscall sub_101F5760(int this)
{
  float *v2; // edi
  int result; // eax

  *(float *)(this + 920) = 0.40000001;
  *(float *)(this + 924) = 0.40000001;
  *(float *)(this + 928) = 0.40000001;
  v2 = (float *)(this + 376);
  *(float *)(this + 932) = 1.0;
  *(float *)(this + 936) = 0.40000001;
  *(float *)(this + 940) = 0.40000001;
  *(float *)(this + 944) = 0.40000001;
  *(float *)(this + 948) = 1.0;
  *(float *)(this + 952) = 0.40000001;
  *(float *)(this + 956) = 0.40000001;
  *(float *)(this + 960) = 0.40000001;
  *(float *)(this + 964) = 1.0;
  *(float *)(this + 968) = 0.40000001;
  *(float *)(this + 972) = 0.40000001;
  *(float *)(this + 976) = 0.40000001;
  *(float *)(this + 980) = 1.0;
  *(float *)(this + 984) = 0.40000001;
  *(float *)(this + 988) = 0.40000001;
  *(float *)(this + 992) = 0.40000001;
  *(float *)(this + 996) = 1.0;
  *(float *)(this + 1000) = 0.40000001;
  *(float *)(this + 1004) = 0.40000001;
  *(float *)(this + 1008) = 0.40000001;
  *(float *)(this + 1012) = 1.0;
  memset((void *)(this + 376), 0, 0x58u);
  sub_101EE350((float *)(this + 464));
  *(_DWORD *)v2 = 2;
  *(float *)(this + 380) = 1.0;
  *(float *)(this + 384) = 1.0;
  *(float *)(this + 388) = 1.0;
  *(float *)(this + 404) = 0.0;
  *(float *)(this + 408) = 0.0;
  *(float *)(this + 412) = -1.0;
  *(float *)(this + 416) = 0.0;
  *(float *)(this + 428) = 0.0;
  *(float *)(this + 432) = 0.0;
  *(float *)(this + 424) = 1.0;
  sub_101F32D0(v2);
  *(_DWORD *)(this + 372) = 1;
  if ( sub_100DDA40(64) )
  {
    result = sub_101F7110(this + 464);
    *(_DWORD *)(this + 1044) = result;
  }
  else
  {
    result = 0;
    *(_DWORD *)(this + 1044) = 0;
  }
  return result;
}
