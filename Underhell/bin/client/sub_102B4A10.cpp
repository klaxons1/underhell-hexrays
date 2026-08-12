int sub_102B4A10()
{
  const char *v1; // [esp+0h] [ebp-8h] BYREF
  const char *v2; // [esp+4h] [ebp-4h]

  v1 = "soundemittersystem.dll";
  v2 = "VSoundEmitter002";
  sub_100F9FF0(dword_103DC898, 0, &v1);
  v1 = "scenefilecache.dll";
  v2 = "SceneFileCache002";
  sub_100F9FF0(dword_103DC898, dword_103DC8A4, &v1);
  return atexit(sub_102C91B0);
}
