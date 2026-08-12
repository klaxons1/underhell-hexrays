int sub_10457AE0()
{
  const char *v1; // [esp+0h] [ebp-8h] BYREF
  const char *v2; // [esp+4h] [ebp-4h]

  v1 = "soundemittersystem";
  v2 = "VSoundEmitter002";
  sub_10229160(dword_10627D30, 0, &v1);
  v1 = "scenefilecache";
  v2 = "SceneFileCache002";
  sub_10229160(dword_10627D30, dword_10627D3C, &v1);
  return atexit(sub_10471880);
}
